typedef struct _async_callback_info_t {
  PyObject* ctx;
  PyObject* func;
} async_callback_info_t;

static async_callback_info_t* async_callback_info_create(PyObject* ctx, PyObject* func) {
  async_callback_info_t* info = TKMEM_ZALLOC(async_callback_info_t);
  return_value_if_fail(info != NULL, NULL);

  Py_XINCREF(ctx);
  Py_XINCREF(func);
  info->ctx = ctx;
  info->func = func;

  return info;
}

static ret_t async_callback_info_call(async_callback_info_t* info, const void* data,
                                      const char* type) {

  PyObject* odata = PyLong_FromVoidPtr((void*)data);
  PyObject* result = PyObject_CallFunction(info->func, "OO", info->ctx, odata);

  if(result != NULL) {
    return (ret_t)PyLong_AsLong(result);
  } else {
    return RET_FAIL;
  }
}

static ret_t async_callback_info_destroy(async_callback_info_t* info) {
  return_value_if_fail(info != NULL, RET_BAD_PARAMS);
  Py_DECREF(info->ctx);
  Py_DECREF(info->func);
  TKMEM_FREE(info);

  return RET_OK;
}

static ret_t call_on_timer(const timer_info_t* timer) {
  return async_callback_info_call((async_callback_info_t*)(timer->ctx), timer, "timer_info_t*");
}

static ret_t call_on_idle(const idle_info_t* idle) {
  return async_callback_info_call((async_callback_info_t*)(idle->ctx), idle, "idle_info_t*");
}

static ret_t call_on_data(void* ctx, const void* data) {
  return async_callback_info_call((async_callback_info_t*)(ctx), data, NULL);
}

static ret_t call_on_event(void* ctx, event_t* e) {
  return async_callback_info_call((async_callback_info_t*)(ctx), e, "event_t*");
}

static ret_t emitter_item_on_destroy(void* data) {
  emitter_item_t* item = (emitter_item_t*)data;

  async_callback_info_destroy((async_callback_info_t*)(item->ctx));

  return RET_OK;
}

static ret_t timer_info_on_destroy(void* data) {
  timer_info_t* item = (timer_info_t*)data;

  async_callback_info_destroy((async_callback_info_t*)(item->ctx));

  return RET_OK;
}

static ret_t idle_info_on_destroy(void* data) {
  idle_info_t* item = (idle_info_t*)data;

  async_callback_info_destroy((async_callback_info_t*)(item->ctx));

  return RET_OK;
}

int parse_voidp(PyObject* o, void** address) {
  *address = PyLong_AsVoidPtr(o);

  return 1;
}


pyobject_t wrap_emitter_on(pyobject_t self, pyobject_t args) {
  uint32_t type = 0;
  PyObject* func = NULL;
  PyObject* ctx = NULL;
  emitter_t* emitter = NULL;
  uint32_t ret = TK_INVALID_ID;

  if (PyArg_ParseTuple(args, "O&iOO", &parse_voidp, &emitter, &type, &func, &ctx)) {
    async_callback_info_t* info = NULL;
    if (!PyCallable_Check(func)) {
      PyErr_SetString(PyExc_TypeError, "parameter must be callable");
      return NULL;
    }
    info = async_callback_info_create(ctx, func);
    return_value_if_fail(info != NULL, NULL);
    ret = emitter_on(emitter, type, call_on_event, info);
    if (ret == TK_INVALID_ID) {
      async_callback_info_destroy(info);
    } else {
      emitter_set_on_destroy(emitter, ret, emitter_item_on_destroy, NULL);
    }
  } else {
    PyErr_SetString(PyExc_TypeError, "invalid args.");
    log_debug("invalid args\n");
  }

  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_on(pyobject_t self, pyobject_t args) {
  uint32_t type = 0;
  PyObject* func = NULL;
  PyObject* ctx = NULL;
  widget_t* widget = NULL;
  uint32_t ret = TK_INVALID_ID;

  if (PyArg_ParseTuple(args, "O&iOO", &parse_voidp, &widget, &type, &func, &ctx)) {
    async_callback_info_t* info = NULL;
    if (!PyCallable_Check(func)) {
      PyErr_SetString(PyExc_TypeError, "parameter must be callable");
      return NULL;
    }
    info = async_callback_info_create(ctx, func);
    return_value_if_fail(info != NULL, NULL);
    ret = widget_on(widget, type, call_on_event, info);
    if (ret == TK_INVALID_ID) {
      async_callback_info_destroy(info);
    } else {
     emitter_set_on_destroy(widget->emitter, ret, emitter_item_on_destroy, NULL);
    }
  
  } else {
    PyErr_SetString(PyExc_TypeError, "invalid args.");
    log_debug("invalid args\n");
  }
  
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_timer_add(pyobject_t self, pyobject_t args) {
  uint32_t duration = 0;
  PyObject* func = NULL;
  PyObject* ctx = NULL;
  uint32_t ret = TK_INVALID_ID;

  if (PyArg_ParseTuple(args, "OOi", &func, &ctx, &duration)) {
    async_callback_info_t* info = async_callback_info_create(ctx, func);

    ret = timer_add(call_on_timer, info, duration);
    if (ret == TK_INVALID_ID) {
      async_callback_info_destroy(info);
    } else {
      timer_set_on_destroy(ret, timer_info_on_destroy, NULL);
    }
  }
  
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_idle_add(pyobject_t self, pyobject_t args) {
  PyObject* func = NULL;
  PyObject* ctx = NULL;
  uint32_t ret = TK_INVALID_ID;

  if (PyArg_ParseTuple(args, "OO", &func, &ctx)) {
    async_callback_info_t* info = async_callback_info_create(ctx, func);

    ret = idle_add(call_on_idle, info);
    if (ret == TK_INVALID_ID) {
      async_callback_info_destroy(info);
    } else {
      idle_set_on_destroy(ret, idle_info_on_destroy, NULL);
    }
  }
  
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_foreach(pyobject_t self, pyobject_t args) {
  widget_t* widget = NULL;
  PyObject* func = NULL;
  PyObject* ctx = NULL;
  ret_t ret = RET_FAIL;

  if (PyArg_ParseTuple(args, "O&OO", &parse_voidp, &widget, &func, &ctx)) {
    async_callback_info_t* info = async_callback_info_create(ctx, func);
    ret = widget_foreach(widget, call_on_data, info);
    async_callback_info_destroy(info);
  }

  return Py_BuildValue("i", ret);
}

extern ret_t assets_init(void);

pyobject_t wrap_tk_assets_init(pyobject_t self, pyobject_t pyargs) {
  assets_init();

  return Py_BuildValue("i", RET_OK);
}

pyobject_t wrap_locale_infos_on(pyobject_t self, pyobject_t args) {
  assert(!"not supported");
  return Py_BuildValue("i", RET_FAIL);
}

