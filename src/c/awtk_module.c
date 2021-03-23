/*XXX: GENERATED CODE, DONT EDIT IT.*/
#include "Python.h"
#include "py_engine.h"
#include "tkc/utf8.h"
#include "tkc/mem.h"
#include "tkc/event.h"
#include "tkc/rect.h"
#include "tkc/emitter.h"
#include "base/bitmap.h"
#include "tkc/value.h"
#include "tkc/object.h"
#include "src/awtk_global.h"
#include "base/clip_board.h"
#include "base/dialog.h"
#include "base/events.h"
#include "base/font_manager.h"
#include "base/font.h"
#include "base/idle.h"
#include "base/image_manager.h"
#include "base/input_method.h"
#include "base/keys.h"
#include "base/locale_info.h"
#include "base/style.h"
#include "base/theme.h"
#include "base/timer.h"
#include "base/types_def.h"
#include "base/vgcanvas.h"
#include "base/widget_consts.h"
#include "base/widget.h"
#include "conf_io/app_conf.h"
#include "tkc/types_def.h"
#include "tkc/timer_manager.h"
#include "tkc/time_now.h"
#include "tkc/rlog.h"
#include "base/bidi.h"
#include "tkc/named_value.h"
#include "tkc/mime_types.h"
#include "slide_view/slide_indicator.h"
#include "tkc/idle_manager.h"
#include "base/canvas_offline.h"
#include "base/canvas.h"
#include "tkc/easing.h"
#include "tkc/date_time.h"
#include "tkc/color.h"
#include "tkc/asset_info.h"
#include "image_animation/image_animation.h"
#include "base/assets_manager.h"
#include "widgets/view.h"
#include "widgets/tab_control.h"
#include "widgets/tab_button.h"
#include "widgets/tab_button_group.h"
#include "widgets/slider.h"
#include "widgets/row.h"
#include "widgets/progress_bar.h"
#include "widgets/pages.h"
#include "widgets/label.h"
#include "widgets/group_box.h"
#include "widgets/grid.h"
#include "widgets/grid_item.h"
#include "widgets/edit.h"
#include "widgets/dragger.h"
#include "widgets/digit_clock.h"
#include "widgets/dialog_title.h"
#include "widgets/dialog_client.h"
#include "widgets/combo_box_item.h"
#include "widgets/column.h"
#include "widgets/color_tile.h"
#include "widgets/clip_view.h"
#include "time_clock/time_clock.h"
#include "widgets/check_button.h"
#include "text_selector/text_selector.h"
#include "switch/switch.h"
#include "widgets/button.h"
#include "widgets/button_group.h"
#include "widgets/app_bar.h"
#include "slide_view/slide_view.h"
#include "slide_menu/slide_menu.h"
#include "scroll_view/scroll_view.h"
#include "scroll_view/scroll_bar.h"
#include "scroll_view/list_view.h"
#include "scroll_view/list_view_h.h"
#include "scroll_view/list_item.h"
#include "scroll_label/hscroll_label.h"
#include "rich_text/rich_text.h"
#include "rich_text/rich_text_view.h"
#include "progress_circle/progress_circle.h"
#include "mledit/mledit.h"
#include "mledit/line_number.h"
#include "keyboard/lang_indicator.h"
#include "keyboard/candidates.h"
#include "image_value/image_value.h"
#include "guage/guage.h"
#include "guage/guage_pointer.h"
#include "file_browser/file_chooser.h"
#include "file_browser/file_browser_view.h"
#include "features/draggable.h"
#include "color_picker/color_picker.h"
#include "color_picker/color_component.h"
#include "canvas_widget/canvas_widget.h"
#include "base/image_base.h"
#include "base/window_manager.h"
#include "base/window_base.h"
#include "base/style_mutable.h"
#include "base/native_window.h"
#include "tkc/timer_info.h"
#include "gif_image/gif_image.h"
#include "keyboard/keyboard.h"
#include "mutable_image/mutable_image.h"
#include "tkc/object_default.h"
#include "tkc/object_array.h"
#include "svg_image/svg_image.h"
#include "widgets/calibration_win.h"
#include "tkc/idle_info.h"
#include "base/window.h"
#include "widgets/combo_box.h"
#include "widgets/system_bar.h"
#include "widgets/spin_box.h"
#include "widgets/popup.h"
#include "widgets/overlay.h"
#include "widgets/image.h"
#include "combo_box_ex/combo_box_ex.h"
#include "custom.c"

pyobject_t wrap_event_cast(pyobject_t self, pyobject_t pyargs) {
  event_t* ret = NULL;
  event_t* event = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &event)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (event_t*)event_cast(event);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_event_create(pyobject_t self, pyobject_t pyargs) {
  event_t* ret = NULL;
  uint32_t type = 0;

  if (!PyArg_ParseTuple(pyargs, "i" , &type)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (event_t*)event_create(type);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_event_t_get_prop_type(pyobject_t self, pyobject_t pyargs) {
  event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->type);
}

pyobject_t wrap_event_t_get_prop_size(pyobject_t self, pyobject_t pyargs) {
  event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->size);
}

pyobject_t wrap_event_t_get_prop_time(pyobject_t self, pyobject_t pyargs) {
  event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->time);
}

pyobject_t wrap_event_t_get_prop_target(pyobject_t self, pyobject_t pyargs) {
  event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return PyLong_FromVoidPtr((void*)obj->target);
}

pyobject_t wrap_rect_create(pyobject_t self, pyobject_t pyargs) {
  rect_t* ret = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "iiii" , &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (rect_t*)rect_create(x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_rect_set(pyobject_t self, pyobject_t pyargs) {
  rect_t* ret = NULL;
  rect_t* rect = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &rect, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (rect_t*)rect_set(rect, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_rect_cast(pyobject_t self, pyobject_t pyargs) {
  rect_t* ret = NULL;
  rect_t* rect = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &rect)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (rect_t*)rect_cast(rect);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_rect_t_get_prop_x(pyobject_t self, pyobject_t pyargs) {
  rect_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->x);
}

pyobject_t wrap_rect_t_get_prop_y(pyobject_t self, pyobject_t pyargs) {
  rect_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->y);
}

pyobject_t wrap_rect_t_get_prop_w(pyobject_t self, pyobject_t pyargs) {
  rect_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->w);
}

pyobject_t wrap_rect_t_get_prop_h(pyobject_t self, pyobject_t pyargs) {
  rect_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->h);
}

pyobject_t wrap_emitter_create(pyobject_t self, pyobject_t pyargs) {
  emitter_t* ret = NULL;

  if (!PyArg_ParseTuple(pyargs, "" )) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (emitter_t*)emitter_create();
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_emitter_dispatch(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  emitter_t* emitter = NULL;
  event_t* e = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&O&" , &parse_voidp, &emitter, &parse_voidp, &e)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)emitter_dispatch(emitter, e);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_emitter_dispatch_simple_event(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  emitter_t* emitter = NULL;
  event_type_t type = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &emitter, &type)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)emitter_dispatch_simple_event(emitter, type);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_emitter_off(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  emitter_t* emitter = NULL;
  uint32_t id = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &emitter, &id)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)emitter_off(emitter, id);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_emitter_enable(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  emitter_t* emitter = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &emitter)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)emitter_enable(emitter);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_emitter_disable(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  emitter_t* emitter = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &emitter)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)emitter_disable(emitter);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_emitter_cast(pyobject_t self, pyobject_t pyargs) {
  emitter_t* ret = NULL;
  emitter_t* emitter = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &emitter)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (emitter_t*)emitter_cast(emitter);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_bitmap_create(pyobject_t self, pyobject_t pyargs) {
  bitmap_t* ret = NULL;

  if (!PyArg_ParseTuple(pyargs, "" )) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bitmap_t*)bitmap_create();
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_bitmap_create_ex(pyobject_t self, pyobject_t pyargs) {
  bitmap_t* ret = NULL;
  uint32_t w = 0;
  uint32_t h = 0;
  uint32_t line_length = 0;
  bitmap_format_t format = 0;

  if (!PyArg_ParseTuple(pyargs, "iiii" , &w, &h, &line_length, &format)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bitmap_t*)bitmap_create_ex(w, h, line_length, format);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_bitmap_get_bpp(pyobject_t self, pyobject_t pyargs) {
  uint32_t ret = 0;
  bitmap_t* bitmap = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &bitmap)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (uint32_t)bitmap_get_bpp(bitmap);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_bitmap_get_bpp_of_format(pyobject_t self, pyobject_t pyargs) {
  uint32_t ret = 0;
  bitmap_format_t format = 0;

  if (!PyArg_ParseTuple(pyargs, "i" , &format)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (uint32_t)bitmap_get_bpp_of_format(format);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_bitmap_t_get_prop_w(pyobject_t self, pyobject_t pyargs) {
  bitmap_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->w);
}

pyobject_t wrap_bitmap_t_get_prop_h(pyobject_t self, pyobject_t pyargs) {
  bitmap_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->h);
}

pyobject_t wrap_bitmap_t_get_prop_line_length(pyobject_t self, pyobject_t pyargs) {
  bitmap_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->line_length);
}

pyobject_t wrap_bitmap_t_get_prop_flags(pyobject_t self, pyobject_t pyargs) {
  bitmap_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->flags);
}

pyobject_t wrap_bitmap_t_get_prop_format(pyobject_t self, pyobject_t pyargs) {
  bitmap_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->format);
}

pyobject_t wrap_bitmap_t_get_prop_name(pyobject_t self, pyobject_t pyargs) {
  bitmap_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->name);
}

pyobject_t wrap_value_set_bool(pyobject_t self, pyobject_t pyargs) {
  value_t* ret = NULL;
  value_t* v = NULL;
  bool_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &v, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (value_t*)value_set_bool(v, value);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_value_bool(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  value_t* v = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &v)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)value_bool(v);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_value_set_int8(pyobject_t self, pyobject_t pyargs) {
  value_t* ret = NULL;
  value_t* v = NULL;
  int8_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &v, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (value_t*)value_set_int8(v, value);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_value_int8(pyobject_t self, pyobject_t pyargs) {
  int8_t ret = 0;
  value_t* v = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &v)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (int8_t)value_int8(v);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_value_set_uint8(pyobject_t self, pyobject_t pyargs) {
  value_t* ret = NULL;
  value_t* v = NULL;
  uint8_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &v, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (value_t*)value_set_uint8(v, value);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_value_uint8(pyobject_t self, pyobject_t pyargs) {
  int8_t ret = 0;
  value_t* v = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &v)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (int8_t)value_uint8(v);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_value_set_int16(pyobject_t self, pyobject_t pyargs) {
  value_t* ret = NULL;
  value_t* v = NULL;
  int16_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &v, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (value_t*)value_set_int16(v, value);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_value_int16(pyobject_t self, pyobject_t pyargs) {
  int16_t ret = 0;
  value_t* v = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &v)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (int16_t)value_int16(v);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_value_set_uint16(pyobject_t self, pyobject_t pyargs) {
  value_t* ret = NULL;
  value_t* v = NULL;
  uint16_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &v, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (value_t*)value_set_uint16(v, value);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_value_uint16(pyobject_t self, pyobject_t pyargs) {
  uint16_t ret = 0;
  value_t* v = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &v)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (uint16_t)value_uint16(v);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_value_set_int32(pyobject_t self, pyobject_t pyargs) {
  value_t* ret = NULL;
  value_t* v = NULL;
  int32_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &v, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (value_t*)value_set_int32(v, value);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_value_int32(pyobject_t self, pyobject_t pyargs) {
  int32_t ret = 0;
  value_t* v = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &v)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (int32_t)value_int32(v);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_value_set_uint32(pyobject_t self, pyobject_t pyargs) {
  value_t* ret = NULL;
  value_t* v = NULL;
  uint32_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &v, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (value_t*)value_set_uint32(v, value);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_value_set_int64(pyobject_t self, pyobject_t pyargs) {
  value_t* ret = NULL;
  value_t* v = NULL;
  int64_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &v, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (value_t*)value_set_int64(v, value);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_value_int64(pyobject_t self, pyobject_t pyargs) {
  int64_t ret = 0;
  value_t* v = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &v)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (int64_t)value_int64(v);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_value_set_uint64(pyobject_t self, pyobject_t pyargs) {
  value_t* ret = NULL;
  value_t* v = NULL;
  uint64_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &v, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (value_t*)value_set_uint64(v, value);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_value_uint64(pyobject_t self, pyobject_t pyargs) {
  uint64_t ret = 0;
  value_t* v = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &v)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (uint64_t)value_uint64(v);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_value_set_float(pyobject_t self, pyobject_t pyargs) {
  value_t* ret = NULL;
  value_t* v = NULL;
  float_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&f" , &parse_voidp, &v, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (value_t*)value_set_float(v, value);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_value_float32(pyobject_t self, pyobject_t pyargs) {
  float ret = 0;
  value_t* v = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &v)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (float)value_float32(v);
  return Py_BuildValue("f", ret);
}

pyobject_t wrap_value_set_double(pyobject_t self, pyobject_t pyargs) {
  value_t* ret = NULL;
  value_t* v = NULL;
  double value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&d" , &parse_voidp, &v, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (value_t*)value_set_double(v, value);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_value_double(pyobject_t self, pyobject_t pyargs) {
  double ret = 0;
  value_t* v = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &v)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (double)value_double(v);
  return Py_BuildValue("d", ret);
}

pyobject_t wrap_value_dup_str(pyobject_t self, pyobject_t pyargs) {
  value_t* ret = NULL;
  value_t* v = NULL;
  const char* value = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &v, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (value_t*)value_dup_str(v, value);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_value_str(pyobject_t self, pyobject_t pyargs) {
  const char* ret = NULL;
  value_t* v = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &v)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (const char*)value_str(v);
  return Py_BuildValue("s", ret);
}

pyobject_t wrap_value_str_ex(pyobject_t self, pyobject_t pyargs) {
  const char* ret = NULL;
  value_t* v = NULL;
  char* buff = NULL;
  uint32_t size = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &v, &buff, &size)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (const char*)value_str_ex(v, buff, size);
  return Py_BuildValue("s", ret);
}

pyobject_t wrap_value_is_null(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  value_t* value = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)value_is_null(value);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_value_set_int(pyobject_t self, pyobject_t pyargs) {
  value_t* ret = NULL;
  value_t* v = NULL;
  int32_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &v, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (value_t*)value_set_int(v, value);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_value_set_object(pyobject_t self, pyobject_t pyargs) {
  value_t* ret = NULL;
  value_t* v = NULL;
  object_t* value = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&O&" , &parse_voidp, &v, &parse_voidp, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (value_t*)value_set_object(v, value);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_value_object(pyobject_t self, pyobject_t pyargs) {
  object_t* ret = NULL;
  value_t* v = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &v)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (object_t*)value_object(v);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_value_set_token(pyobject_t self, pyobject_t pyargs) {
  value_t* ret = NULL;
  value_t* v = NULL;
  uint32_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &v, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (value_t*)value_set_token(v, value);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_value_token(pyobject_t self, pyobject_t pyargs) {
  uint32_t ret = 0;
  value_t* v = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &v)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (uint32_t)value_token(v);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_value_create(pyobject_t self, pyobject_t pyargs) {
  value_t* ret = NULL;

  if (!PyArg_ParseTuple(pyargs, "" )) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (value_t*)value_create();
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_value_reset(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  value_t* v = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &v)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)value_reset(v);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_value_cast(pyobject_t self, pyobject_t pyargs) {
  value_t* ret = NULL;
  value_t* value = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (value_t*)value_cast(value);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_object_ref(pyobject_t self, pyobject_t pyargs) {
  object_t* ret = NULL;
  object_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (object_t*)object_ref(obj);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_object_get_type(pyobject_t self, pyobject_t pyargs) {
  const char* ret = NULL;
  object_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (const char*)object_get_type(obj);
  return Py_BuildValue("s", ret);
}

pyobject_t wrap_object_get_desc(pyobject_t self, pyobject_t pyargs) {
  const char* ret = NULL;
  object_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (const char*)object_get_desc(obj);
  return Py_BuildValue("s", ret);
}

pyobject_t wrap_object_get_size(pyobject_t self, pyobject_t pyargs) {
  uint32_t ret = 0;
  object_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (uint32_t)object_get_size(obj);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_is_collection(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  object_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)object_is_collection(obj);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_object_set_name(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &obj, &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_set_name(obj, name);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_compare(pyobject_t self, pyobject_t pyargs) {
  int ret = 0;
  object_t* obj = NULL;
  object_t* other = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&O&" , &parse_voidp, &obj, &parse_voidp, &other)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (int)object_compare(obj, other);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_get_prop(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  value_t* v = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&sO&" , &parse_voidp, &obj, &name, &parse_voidp, &v)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_get_prop(obj, name, v);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_get_prop_str(pyobject_t self, pyobject_t pyargs) {
  const char* ret = NULL;
  object_t* obj = NULL;
  const char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &obj, &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (const char*)object_get_prop_str(obj, name);
  return Py_BuildValue("s", ret);
}

pyobject_t wrap_object_get_prop_pointer(pyobject_t self, pyobject_t pyargs) {
  void* ret = NULL;
  object_t* obj = NULL;
  const char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &obj, &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (void*)object_get_prop_pointer(obj, name);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_object_get_prop_object(pyobject_t self, pyobject_t pyargs) {
  object_t* ret = NULL;
  object_t* obj = NULL;
  const char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &obj, &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (object_t*)object_get_prop_object(obj, name);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_object_get_prop_int(pyobject_t self, pyobject_t pyargs) {
  int32_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  int32_t defval = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &obj, &name, &defval)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (int32_t)object_get_prop_int(obj, name, defval);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_get_prop_bool(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  bool_t defval = 0;

  if (!PyArg_ParseTuple(pyargs, "O&sb" , &parse_voidp, &obj, &name, &defval)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)object_get_prop_bool(obj, name, defval);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_object_get_prop_float(pyobject_t self, pyobject_t pyargs) {
  float_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  float_t defval = 0;

  if (!PyArg_ParseTuple(pyargs, "O&sf" , &parse_voidp, &obj, &name, &defval)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (float_t)object_get_prop_float(obj, name, defval);
  return Py_BuildValue("f", ret);
}

pyobject_t wrap_object_get_prop_double(pyobject_t self, pyobject_t pyargs) {
  double ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  double defval = 0;

  if (!PyArg_ParseTuple(pyargs, "O&sd" , &parse_voidp, &obj, &name, &defval)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (double)object_get_prop_double(obj, name, defval);
  return Py_BuildValue("d", ret);
}

pyobject_t wrap_object_remove_prop(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &obj, &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_remove_prop(obj, name);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_set_prop(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  value_t* value = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&sO&" , &parse_voidp, &obj, &name, &parse_voidp, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_set_prop(obj, name, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_set_prop_str(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  const char* value = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&ss" , &parse_voidp, &obj, &name, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_set_prop_str(obj, name, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_set_prop_object(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  object_t* value = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&sO&" , &parse_voidp, &obj, &name, &parse_voidp, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_set_prop_object(obj, name, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_set_prop_int(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  int32_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &obj, &name, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_set_prop_int(obj, name, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_set_prop_bool(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  bool_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&sb" , &parse_voidp, &obj, &name, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_set_prop_bool(obj, name, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_set_prop_float(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  float_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&sf" , &parse_voidp, &obj, &name, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_set_prop_float(obj, name, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_set_prop_double(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  double value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&sd" , &parse_voidp, &obj, &name, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_set_prop_double(obj, name, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_copy_prop(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  object_t* src = NULL;
  const char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&O&s" , &parse_voidp, &obj, &parse_voidp, &src, &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_copy_prop(obj, src, name);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_has_prop(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &obj, &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)object_has_prop(obj, name);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_object_eval(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  const char* expr = NULL;
  value_t* v = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&sO&" , &parse_voidp, &obj, &expr, &parse_voidp, &v)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_eval(obj, expr, v);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_can_exec(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  const char* args = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&ss" , &parse_voidp, &obj, &name, &args)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)object_can_exec(obj, name, args);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_object_exec(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  const char* args = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&ss" , &parse_voidp, &obj, &name, &args)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_exec(obj, name, args);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_notify_changed(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_notify_changed(obj);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_has_prop_by_path(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  object_t* obj = NULL;
  const char* path = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &obj, &path)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)object_has_prop_by_path(obj, path);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_object_get_prop_str_by_path(pyobject_t self, pyobject_t pyargs) {
  const char* ret = NULL;
  object_t* obj = NULL;
  const char* path = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &obj, &path)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (const char*)object_get_prop_str_by_path(obj, path);
  return Py_BuildValue("s", ret);
}

pyobject_t wrap_object_get_prop_pointer_by_path(pyobject_t self, pyobject_t pyargs) {
  void* ret = NULL;
  object_t* obj = NULL;
  const char* path = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &obj, &path)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (void*)object_get_prop_pointer_by_path(obj, path);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_object_get_prop_object_by_path(pyobject_t self, pyobject_t pyargs) {
  object_t* ret = NULL;
  object_t* obj = NULL;
  const char* path = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &obj, &path)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (object_t*)object_get_prop_object_by_path(obj, path);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_object_get_prop_int_by_path(pyobject_t self, pyobject_t pyargs) {
  int32_t ret = 0;
  object_t* obj = NULL;
  const char* path = NULL;
  int32_t defval = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &obj, &path, &defval)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (int32_t)object_get_prop_int_by_path(obj, path, defval);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_get_prop_bool_by_path(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  object_t* obj = NULL;
  const char* path = NULL;
  bool_t defval = 0;

  if (!PyArg_ParseTuple(pyargs, "O&sb" , &parse_voidp, &obj, &path, &defval)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)object_get_prop_bool_by_path(obj, path, defval);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_object_get_prop_float_by_path(pyobject_t self, pyobject_t pyargs) {
  float_t ret = 0;
  object_t* obj = NULL;
  const char* path = NULL;
  float_t defval = 0;

  if (!PyArg_ParseTuple(pyargs, "O&sf" , &parse_voidp, &obj, &path, &defval)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (float_t)object_get_prop_float_by_path(obj, path, defval);
  return Py_BuildValue("f", ret);
}

pyobject_t wrap_object_set_prop_by_path(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  const char* path = NULL;
  value_t* value = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&sO&" , &parse_voidp, &obj, &path, &parse_voidp, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_set_prop_by_path(obj, path, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_set_prop_str_by_path(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  const char* path = NULL;
  const char* value = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&ss" , &parse_voidp, &obj, &path, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_set_prop_str_by_path(obj, path, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_set_prop_object_by_path(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  const char* path = NULL;
  object_t* value = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&sO&" , &parse_voidp, &obj, &path, &parse_voidp, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_set_prop_object_by_path(obj, path, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_set_prop_int_by_path(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  const char* path = NULL;
  int32_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &obj, &path, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_set_prop_int_by_path(obj, path, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_set_prop_bool_by_path(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  const char* path = NULL;
  bool_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&sb" , &parse_voidp, &obj, &path, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_set_prop_bool_by_path(obj, path, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_set_prop_float_by_path(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  const char* path = NULL;
  float_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&sf" , &parse_voidp, &obj, &path, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_set_prop_float_by_path(obj, path, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_can_exec_by_path(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  object_t* obj = NULL;
  const char* path = NULL;
  const char* args = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&ss" , &parse_voidp, &obj, &path, &args)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)object_can_exec_by_path(obj, path, args);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_object_exec_by_path(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  const char* path = NULL;
  const char* args = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&ss" , &parse_voidp, &obj, &path, &args)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_exec_by_path(obj, path, args);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_get_prop_int8(pyobject_t self, pyobject_t pyargs) {
  int8_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  int8_t defval = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &obj, &name, &defval)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (int8_t)object_get_prop_int8(obj, name, defval);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_set_prop_int8(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  int8_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &obj, &name, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_set_prop_int8(obj, name, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_get_prop_uint8(pyobject_t self, pyobject_t pyargs) {
  uint8_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  uint8_t defval = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &obj, &name, &defval)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (uint8_t)object_get_prop_uint8(obj, name, defval);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_set_prop_uint8(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  uint8_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &obj, &name, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_set_prop_uint8(obj, name, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_get_prop_int16(pyobject_t self, pyobject_t pyargs) {
  int16_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  int16_t defval = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &obj, &name, &defval)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (int16_t)object_get_prop_int16(obj, name, defval);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_set_prop_int16(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  int16_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &obj, &name, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_set_prop_int16(obj, name, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_get_prop_uint16(pyobject_t self, pyobject_t pyargs) {
  uint16_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  uint16_t defval = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &obj, &name, &defval)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (uint16_t)object_get_prop_uint16(obj, name, defval);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_set_prop_uint16(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  uint16_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &obj, &name, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_set_prop_uint16(obj, name, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_get_prop_int32(pyobject_t self, pyobject_t pyargs) {
  int32_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  int32_t defval = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &obj, &name, &defval)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (int32_t)object_get_prop_int32(obj, name, defval);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_set_prop_int32(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  int32_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &obj, &name, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_set_prop_int32(obj, name, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_get_prop_uint32(pyobject_t self, pyobject_t pyargs) {
  uint32_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  uint32_t defval = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &obj, &name, &defval)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (uint32_t)object_get_prop_uint32(obj, name, defval);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_set_prop_uint32(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  uint32_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &obj, &name, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_set_prop_uint32(obj, name, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_get_prop_int64(pyobject_t self, pyobject_t pyargs) {
  int64_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  int64_t defval = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &obj, &name, &defval)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (int64_t)object_get_prop_int64(obj, name, defval);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_set_prop_int64(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  int64_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &obj, &name, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_set_prop_int64(obj, name, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_get_prop_uint64(pyobject_t self, pyobject_t pyargs) {
  uint64_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  uint64_t defval = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &obj, &name, &defval)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (uint64_t)object_get_prop_uint64(obj, name, defval);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_set_prop_uint64(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  const char* name = NULL;
  uint64_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &obj, &name, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_set_prop_uint64(obj, name, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_t_get_prop_ref_count(pyobject_t self, pyobject_t pyargs) {
  object_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->ref_count);
}

pyobject_t wrap_object_t_get_prop_name(pyobject_t self, pyobject_t pyargs) {
  object_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->name);
}

pyobject_t wrap_tk_init(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  wh_t w = 0;
  wh_t h = 0;
  app_type_t app_type = 0;
  const char* app_name = NULL;
  const char* app_root = NULL;

  if (!PyArg_ParseTuple(pyargs, "iiiss" , &w, &h, &app_type, &app_name, &app_root)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)tk_init(w, h, app_type, app_name, app_root);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_tk_run(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;

  if (!PyArg_ParseTuple(pyargs, "" )) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)tk_run();
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_tk_quit(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;

  if (!PyArg_ParseTuple(pyargs, "" )) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)tk_quit();
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_tk_get_pointer_x(pyobject_t self, pyobject_t pyargs) {
  int32_t ret = 0;

  if (!PyArg_ParseTuple(pyargs, "" )) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (int32_t)tk_get_pointer_x();
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_tk_get_pointer_y(pyobject_t self, pyobject_t pyargs) {
  int32_t ret = 0;

  if (!PyArg_ParseTuple(pyargs, "" )) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (int32_t)tk_get_pointer_y();
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_tk_is_pointer_pressed(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;

  if (!PyArg_ParseTuple(pyargs, "" )) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)tk_is_pointer_pressed();
  return Py_BuildValue("b", ret);
}

pyobject_t get_CLIP_BOARD_DATA_TYPE_NONE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", CLIP_BOARD_DATA_TYPE_NONE);
}

pyobject_t get_CLIP_BOARD_DATA_TYPE_TEXT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", CLIP_BOARD_DATA_TYPE_TEXT);
}

pyobject_t wrap_clip_board_set_text(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  const char* text = NULL;

  if (!PyArg_ParseTuple(pyargs, "s" , &text)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)clip_board_set_text(text);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_clip_board_get_text(pyobject_t self, pyobject_t pyargs) {
  const char* ret = NULL;

  if (!PyArg_ParseTuple(pyargs, "" )) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (const char*)clip_board_get_text();
  return Py_BuildValue("s", ret);
}

pyobject_t get_DIALOG_QUIT_NONE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", DIALOG_QUIT_NONE);
}

pyobject_t get_DIALOG_QUIT_OK(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", DIALOG_QUIT_OK);
}

pyobject_t get_DIALOG_QUIT_YES(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", DIALOG_QUIT_YES);
}

pyobject_t get_DIALOG_QUIT_CANCEL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", DIALOG_QUIT_CANCEL);
}

pyobject_t get_DIALOG_QUIT_NO(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", DIALOG_QUIT_NO);
}

pyobject_t get_DIALOG_QUIT_OTHER(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", DIALOG_QUIT_OTHER);
}

pyobject_t get_EVT_POINTER_DOWN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_POINTER_DOWN);
}

pyobject_t get_EVT_POINTER_DOWN_BEFORE_CHILDREN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_POINTER_DOWN_BEFORE_CHILDREN);
}

pyobject_t get_EVT_POINTER_MOVE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_POINTER_MOVE);
}

pyobject_t get_EVT_POINTER_MOVE_BEFORE_CHILDREN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_POINTER_MOVE_BEFORE_CHILDREN);
}

pyobject_t get_EVT_POINTER_UP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_POINTER_UP);
}

pyobject_t get_EVT_POINTER_UP_BEFORE_CHILDREN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_POINTER_UP_BEFORE_CHILDREN);
}

pyobject_t get_EVT_WHEEL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_WHEEL);
}

pyobject_t get_EVT_WHEEL_BEFORE_CHILDREN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_WHEEL_BEFORE_CHILDREN);
}

pyobject_t get_EVT_POINTER_DOWN_ABORT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_POINTER_DOWN_ABORT);
}

pyobject_t get_EVT_CONTEXT_MENU(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_CONTEXT_MENU);
}

pyobject_t get_EVT_POINTER_ENTER(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_POINTER_ENTER);
}

pyobject_t get_EVT_POINTER_LEAVE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_POINTER_LEAVE);
}

pyobject_t get_EVT_LONG_PRESS(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_LONG_PRESS);
}

pyobject_t get_EVT_CLICK(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_CLICK);
}

pyobject_t get_EVT_FOCUS(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_FOCUS);
}

pyobject_t get_EVT_BLUR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_BLUR);
}

pyobject_t get_EVT_KEY_DOWN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_KEY_DOWN);
}

pyobject_t get_EVT_KEY_LONG_PRESS(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_KEY_LONG_PRESS);
}

pyobject_t get_EVT_KEY_DOWN_BEFORE_CHILDREN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_KEY_DOWN_BEFORE_CHILDREN);
}

pyobject_t get_EVT_KEY_REPEAT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_KEY_REPEAT);
}

pyobject_t get_EVT_KEY_UP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_KEY_UP);
}

pyobject_t get_EVT_KEY_UP_BEFORE_CHILDREN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_KEY_UP_BEFORE_CHILDREN);
}

pyobject_t get_EVT_WILL_MOVE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_WILL_MOVE);
}

pyobject_t get_EVT_MOVE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_MOVE);
}

pyobject_t get_EVT_WILL_RESIZE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_WILL_RESIZE);
}

pyobject_t get_EVT_RESIZE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_RESIZE);
}

pyobject_t get_EVT_WILL_MOVE_RESIZE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_WILL_MOVE_RESIZE);
}

pyobject_t get_EVT_MOVE_RESIZE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_MOVE_RESIZE);
}

pyobject_t get_EVT_VALUE_WILL_CHANGE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_VALUE_WILL_CHANGE);
}

pyobject_t get_EVT_VALUE_CHANGED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_VALUE_CHANGED);
}

pyobject_t get_EVT_VALUE_CHANGING(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_VALUE_CHANGING);
}

pyobject_t get_EVT_PAINT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_PAINT);
}

pyobject_t get_EVT_BEFORE_PAINT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_BEFORE_PAINT);
}

pyobject_t get_EVT_AFTER_PAINT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_AFTER_PAINT);
}

pyobject_t get_EVT_PAINT_DONE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_PAINT_DONE);
}

pyobject_t get_EVT_LOCALE_CHANGED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_LOCALE_CHANGED);
}

pyobject_t get_EVT_ANIM_START(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_ANIM_START);
}

pyobject_t get_EVT_ANIM_STOP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_ANIM_STOP);
}

pyobject_t get_EVT_ANIM_PAUSE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_ANIM_PAUSE);
}

pyobject_t get_EVT_ANIM_ONCE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_ANIM_ONCE);
}

pyobject_t get_EVT_ANIM_END(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_ANIM_END);
}

pyobject_t get_EVT_WINDOW_LOAD(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_WINDOW_LOAD);
}

pyobject_t get_EVT_WIDGET_LOAD(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_WIDGET_LOAD);
}

pyobject_t get_EVT_WINDOW_WILL_OPEN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_WINDOW_WILL_OPEN);
}

pyobject_t get_EVT_WINDOW_OPEN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_WINDOW_OPEN);
}

pyobject_t get_EVT_WINDOW_TO_BACKGROUND(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_WINDOW_TO_BACKGROUND);
}

pyobject_t get_EVT_WINDOW_TO_FOREGROUND(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_WINDOW_TO_FOREGROUND);
}

pyobject_t get_EVT_WINDOW_CLOSE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_WINDOW_CLOSE);
}

pyobject_t get_EVT_REQUEST_CLOSE_WINDOW(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_REQUEST_CLOSE_WINDOW);
}

pyobject_t get_EVT_TOP_WINDOW_CHANGED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_TOP_WINDOW_CHANGED);
}

pyobject_t get_EVT_IM_START(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_IM_START);
}

pyobject_t get_EVT_IM_STOP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_IM_STOP);
}

pyobject_t get_EVT_IM_COMMIT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_IM_COMMIT);
}

pyobject_t get_EVT_IM_CLEAR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_IM_CLEAR);
}

pyobject_t get_EVT_IM_CANCEL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_IM_CANCEL);
}

pyobject_t get_EVT_IM_PREEDIT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_IM_PREEDIT);
}

pyobject_t get_EVT_IM_PREEDIT_CONFIRM(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_IM_PREEDIT_CONFIRM);
}

pyobject_t get_EVT_IM_PREEDIT_ABORT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_IM_PREEDIT_ABORT);
}

pyobject_t get_EVT_IM_SHOW_CANDIDATES(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_IM_SHOW_CANDIDATES);
}

pyobject_t get_EVT_IM_SHOW_PRE_CANDIDATES(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_IM_SHOW_PRE_CANDIDATES);
}

pyobject_t get_EVT_IM_LANG_CHANGED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_IM_LANG_CHANGED);
}

pyobject_t get_EVT_IM_ACTION(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_IM_ACTION);
}

pyobject_t get_EVT_IM_ACTION_INFO(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_IM_ACTION_INFO);
}

pyobject_t get_EVT_DRAG_START(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_DRAG_START);
}

pyobject_t get_EVT_DRAG(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_DRAG);
}

pyobject_t get_EVT_DRAG_END(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_DRAG_END);
}

pyobject_t get_EVT_RESET(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_RESET);
}

pyobject_t get_EVT_SCREEN_SAVER(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_SCREEN_SAVER);
}

pyobject_t get_EVT_LOW_MEMORY(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_LOW_MEMORY);
}

pyobject_t get_EVT_OUT_OF_MEMORY(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_OUT_OF_MEMORY);
}

pyobject_t get_EVT_ORIENTATION_WILL_CHANGED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_ORIENTATION_WILL_CHANGED);
}

pyobject_t get_EVT_ORIENTATION_CHANGED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_ORIENTATION_CHANGED);
}

pyobject_t get_EVT_WIDGET_CREATED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_WIDGET_CREATED);
}

pyobject_t get_EVT_REQUEST_QUIT_APP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_REQUEST_QUIT_APP);
}

pyobject_t get_EVT_THEME_CHANGED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_THEME_CHANGED);
}

pyobject_t get_EVT_WIDGET_ADD_CHILD(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_WIDGET_ADD_CHILD);
}

pyobject_t get_EVT_WIDGET_REMOVE_CHILD(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_WIDGET_REMOVE_CHILD);
}

pyobject_t get_EVT_SCROLL_START(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_SCROLL_START);
}

pyobject_t get_EVT_SCROLL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_SCROLL);
}

pyobject_t get_EVT_SCROLL_END(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_SCROLL_END);
}

pyobject_t get_EVT_MULTI_GESTURE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_MULTI_GESTURE);
}

pyobject_t get_EVT_PAGE_CHANGED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_PAGE_CHANGED);
}

pyobject_t get_EVT_ASSET_MANAGER_LOAD_ASSET(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_ASSET_MANAGER_LOAD_ASSET);
}

pyobject_t get_EVT_ASSET_MANAGER_UNLOAD_ASSET(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_ASSET_MANAGER_UNLOAD_ASSET);
}

pyobject_t get_EVT_ASSET_MANAGER_CLEAR_CACHE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_ASSET_MANAGER_CLEAR_CACHE);
}

pyobject_t get_EVT_TIMER(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_TIMER);
}

pyobject_t get_EVT_REQ_START(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_REQ_START);
}

pyobject_t get_EVT_USER_START(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_USER_START);
}

pyobject_t get_EVT_NONE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_NONE);
}

pyobject_t get_EVT_PROP_WILL_CHANGE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_PROP_WILL_CHANGE);
}

pyobject_t get_EVT_PROP_CHANGED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_PROP_CHANGED);
}

pyobject_t get_EVT_CMD_WILL_EXEC(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_CMD_WILL_EXEC);
}

pyobject_t get_EVT_CMD_EXECED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_CMD_EXECED);
}

pyobject_t get_EVT_CMD_CAN_EXEC(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_CMD_CAN_EXEC);
}

pyobject_t get_EVT_ITEMS_WILL_CHANGE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_ITEMS_WILL_CHANGE);
}

pyobject_t get_EVT_ITEMS_CHANGED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_ITEMS_CHANGED);
}

pyobject_t get_EVT_PROPS_CHANGED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_PROPS_CHANGED);
}

pyobject_t get_EVT_PROGRESS(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_PROGRESS);
}

pyobject_t get_EVT_DONE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_DONE);
}

pyobject_t get_EVT_ERROR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_ERROR);
}

pyobject_t get_EVT_DESTROY(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EVT_DESTROY);
}

pyobject_t wrap_font_manager_unload_font(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  font_manager_t* fm = NULL;
  char* name = NULL;
  font_size_t size = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &fm, &name, &size)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)font_manager_unload_font(fm, name, size);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_font_manager_shrink_cache(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  font_manager_t* fm = NULL;
  uint32_t cache_size = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &fm, &cache_size)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)font_manager_shrink_cache(fm, cache_size);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_font_manager_unload_all(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  font_manager_t* fm = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &fm)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)font_manager_unload_all(fm);
  return Py_BuildValue("i", ret);
}

pyobject_t get_GLYPH_FMT_ALPHA(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", GLYPH_FMT_ALPHA);
}

pyobject_t get_GLYPH_FMT_MONO(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", GLYPH_FMT_MONO);
}

pyobject_t get_GLYPH_FMT_RGBA(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", GLYPH_FMT_RGBA);
}

pyobject_t wrap_idle_remove(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  uint32_t idle_id = 0;

  if (!PyArg_ParseTuple(pyargs, "i" , &idle_id)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)idle_remove(idle_id);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_idle_remove_all_by_ctx(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  void* ctx = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &ctx)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)idle_remove_all_by_ctx(ctx);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_manager(pyobject_t self, pyobject_t pyargs) {
  image_manager_t* ret = NULL;

  if (!PyArg_ParseTuple(pyargs, "" )) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (image_manager_t*)image_manager();
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_image_manager_get_bitmap(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  image_manager_t* imm = NULL;
  char* name = NULL;
  bitmap_t* image = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&sO&" , &parse_voidp, &imm, &name, &parse_voidp, &image)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_manager_get_bitmap(imm, name, image);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_manager_preload(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  image_manager_t* imm = NULL;
  char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &imm, &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_manager_preload(imm, name);
  return Py_BuildValue("i", ret);
}

pyobject_t get_INPUT_TEXT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", INPUT_TEXT);
}

pyobject_t get_INPUT_INT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", INPUT_INT);
}

pyobject_t get_INPUT_UINT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", INPUT_UINT);
}

pyobject_t get_INPUT_HEX(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", INPUT_HEX);
}

pyobject_t get_INPUT_FLOAT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", INPUT_FLOAT);
}

pyobject_t get_INPUT_UFLOAT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", INPUT_UFLOAT);
}

pyobject_t get_INPUT_EMAIL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", INPUT_EMAIL);
}

pyobject_t get_INPUT_PASSWORD(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", INPUT_PASSWORD);
}

pyobject_t get_INPUT_PHONE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", INPUT_PHONE);
}

pyobject_t get_INPUT_IPV4(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", INPUT_IPV4);
}

pyobject_t get_INPUT_DATE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", INPUT_DATE);
}

pyobject_t get_INPUT_TIME(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", INPUT_TIME);
}

pyobject_t get_INPUT_TIME_FULL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", INPUT_TIME_FULL);
}

pyobject_t get_INPUT_CUSTOM(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", INPUT_CUSTOM);
}

pyobject_t get_INPUT_CUSTOM_PASSWORD(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", INPUT_CUSTOM_PASSWORD);
}

pyobject_t get_INPUT_ASCII(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", INPUT_ASCII);
}

pyobject_t wrap_input_method_commit_text(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  input_method_t* im = NULL;
  const char* text = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &im, &text)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)input_method_commit_text(im, text);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_input_method_set_lang(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  input_method_t* im = NULL;
  const char* lang = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &im, &lang)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)input_method_set_lang(im, lang);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_input_method_get_lang(pyobject_t self, pyobject_t pyargs) {
  const char* ret = NULL;
  input_method_t* im = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &im)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (const char*)input_method_get_lang(im);
  return Py_BuildValue("s", ret);
}

pyobject_t wrap_input_method_dispatch_key(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  input_method_t* im = NULL;
  uint32_t key = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &im, &key)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)input_method_dispatch_key(im, key);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_input_method_dispatch_keys(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  input_method_t* im = NULL;
  const char* key = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &im, &key)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)input_method_dispatch_keys(im, key);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_input_method_dispatch_preedit(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  input_method_t* im = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &im)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)input_method_dispatch_preedit(im);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_input_method_dispatch_preedit_confirm(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  input_method_t* im = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &im)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)input_method_dispatch_preedit_confirm(im);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_input_method_dispatch_preedit_abort(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  input_method_t* im = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &im)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)input_method_dispatch_preedit_abort(im);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_input_method(pyobject_t self, pyobject_t pyargs) {
  input_method_t* ret = NULL;

  if (!PyArg_ParseTuple(pyargs, "" )) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (input_method_t*)input_method();
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t get_TK_KEY_RETURN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_RETURN);
}

pyobject_t get_TK_KEY_ESCAPE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_ESCAPE);
}

pyobject_t get_TK_KEY_BACKSPACE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_BACKSPACE);
}

pyobject_t get_TK_KEY_TAB(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_TAB);
}

pyobject_t get_TK_KEY_SPACE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_SPACE);
}

pyobject_t get_TK_KEY_EXCLAIM(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_EXCLAIM);
}

pyobject_t get_TK_KEY_QUOTEDBL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_QUOTEDBL);
}

pyobject_t get_TK_KEY_HASH(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_HASH);
}

pyobject_t get_TK_KEY_PERCENT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_PERCENT);
}

pyobject_t get_TK_KEY_DOLLAR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_DOLLAR);
}

pyobject_t get_TK_KEY_AMPERSAND(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_AMPERSAND);
}

pyobject_t get_TK_KEY_QUOTE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_QUOTE);
}

pyobject_t get_TK_KEY_LEFTPAREN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_LEFTPAREN);
}

pyobject_t get_TK_KEY_RIGHTPAREN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_RIGHTPAREN);
}

pyobject_t get_TK_KEY_ASTERISK(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_ASTERISK);
}

pyobject_t get_TK_KEY_PLUS(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_PLUS);
}

pyobject_t get_TK_KEY_COMMA(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_COMMA);
}

pyobject_t get_TK_KEY_MINUS(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_MINUS);
}

pyobject_t get_TK_KEY_PERIOD(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_PERIOD);
}

pyobject_t get_TK_KEY_SLASH(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_SLASH);
}

pyobject_t get_TK_KEY_0(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_0);
}

pyobject_t get_TK_KEY_1(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_1);
}

pyobject_t get_TK_KEY_2(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_2);
}

pyobject_t get_TK_KEY_3(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_3);
}

pyobject_t get_TK_KEY_4(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_4);
}

pyobject_t get_TK_KEY_5(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_5);
}

pyobject_t get_TK_KEY_6(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_6);
}

pyobject_t get_TK_KEY_7(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_7);
}

pyobject_t get_TK_KEY_8(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_8);
}

pyobject_t get_TK_KEY_9(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_9);
}

pyobject_t get_TK_KEY_COLON(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_COLON);
}

pyobject_t get_TK_KEY_SEMICOLON(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_SEMICOLON);
}

pyobject_t get_TK_KEY_LESS(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_LESS);
}

pyobject_t get_TK_KEY_EQUAL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_EQUAL);
}

pyobject_t get_TK_KEY_GREATER(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_GREATER);
}

pyobject_t get_TK_KEY_QUESTION(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_QUESTION);
}

pyobject_t get_TK_KEY_AT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_AT);
}

pyobject_t get_TK_KEY_LEFTBRACKET(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_LEFTBRACKET);
}

pyobject_t get_TK_KEY_BACKSLASH(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_BACKSLASH);
}

pyobject_t get_TK_KEY_RIGHTBRACKET(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_RIGHTBRACKET);
}

pyobject_t get_TK_KEY_CARET(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_CARET);
}

pyobject_t get_TK_KEY_UNDERSCORE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_UNDERSCORE);
}

pyobject_t get_TK_KEY_BACKQUOTE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_BACKQUOTE);
}

pyobject_t get_TK_KEY_a(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_a);
}

pyobject_t get_TK_KEY_b(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_b);
}

pyobject_t get_TK_KEY_c(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_c);
}

pyobject_t get_TK_KEY_d(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_d);
}

pyobject_t get_TK_KEY_e(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_e);
}

pyobject_t get_TK_KEY_f(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_f);
}

pyobject_t get_TK_KEY_g(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_g);
}

pyobject_t get_TK_KEY_h(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_h);
}

pyobject_t get_TK_KEY_i(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_i);
}

pyobject_t get_TK_KEY_j(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_j);
}

pyobject_t get_TK_KEY_k(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_k);
}

pyobject_t get_TK_KEY_l(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_l);
}

pyobject_t get_TK_KEY_m(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_m);
}

pyobject_t get_TK_KEY_n(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_n);
}

pyobject_t get_TK_KEY_o(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_o);
}

pyobject_t get_TK_KEY_p(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_p);
}

pyobject_t get_TK_KEY_q(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_q);
}

pyobject_t get_TK_KEY_r(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_r);
}

pyobject_t get_TK_KEY_s(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_s);
}

pyobject_t get_TK_KEY_t(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_t);
}

pyobject_t get_TK_KEY_u(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_u);
}

pyobject_t get_TK_KEY_v(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_v);
}

pyobject_t get_TK_KEY_w(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_w);
}

pyobject_t get_TK_KEY_x(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_x);
}

pyobject_t get_TK_KEY_y(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_y);
}

pyobject_t get_TK_KEY_z(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_z);
}

pyobject_t get_TK_KEY_A(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_A);
}

pyobject_t get_TK_KEY_B(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_B);
}

pyobject_t get_TK_KEY_C(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_C);
}

pyobject_t get_TK_KEY_D(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_D);
}

pyobject_t get_TK_KEY_E(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_E);
}

pyobject_t get_TK_KEY_F(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_F);
}

pyobject_t get_TK_KEY_G(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_G);
}

pyobject_t get_TK_KEY_H(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_H);
}

pyobject_t get_TK_KEY_I(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_I);
}

pyobject_t get_TK_KEY_J(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_J);
}

pyobject_t get_TK_KEY_K(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_K);
}

pyobject_t get_TK_KEY_L(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_L);
}

pyobject_t get_TK_KEY_M(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_M);
}

pyobject_t get_TK_KEY_N(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_N);
}

pyobject_t get_TK_KEY_O(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_O);
}

pyobject_t get_TK_KEY_P(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_P);
}

pyobject_t get_TK_KEY_Q(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_Q);
}

pyobject_t get_TK_KEY_R(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_R);
}

pyobject_t get_TK_KEY_S(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_S);
}

pyobject_t get_TK_KEY_T(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_T);
}

pyobject_t get_TK_KEY_U(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_U);
}

pyobject_t get_TK_KEY_V(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_V);
}

pyobject_t get_TK_KEY_W(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_W);
}

pyobject_t get_TK_KEY_X(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_X);
}

pyobject_t get_TK_KEY_Y(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_Y);
}

pyobject_t get_TK_KEY_Z(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_Z);
}

pyobject_t get_TK_KEY_DOT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_DOT);
}

pyobject_t get_TK_KEY_DELETE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_DELETE);
}

pyobject_t get_TK_KEY_LEFTBRACE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_LEFTBRACE);
}

pyobject_t get_TK_KEY_RIGHTBRACE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_RIGHTBRACE);
}

pyobject_t get_TK_KEY_LSHIFT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_LSHIFT);
}

pyobject_t get_TK_KEY_RSHIFT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_RSHIFT);
}

pyobject_t get_TK_KEY_LCTRL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_LCTRL);
}

pyobject_t get_TK_KEY_RCTRL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_RCTRL);
}

pyobject_t get_TK_KEY_LALT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_LALT);
}

pyobject_t get_TK_KEY_RALT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_RALT);
}

pyobject_t get_TK_KEY_CAPSLOCK(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_CAPSLOCK);
}

pyobject_t get_TK_KEY_HOME(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_HOME);
}

pyobject_t get_TK_KEY_END(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_END);
}

pyobject_t get_TK_KEY_INSERT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_INSERT);
}

pyobject_t get_TK_KEY_UP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_UP);
}

pyobject_t get_TK_KEY_DOWN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_DOWN);
}

pyobject_t get_TK_KEY_LEFT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_LEFT);
}

pyobject_t get_TK_KEY_RIGHT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_RIGHT);
}

pyobject_t get_TK_KEY_PAGEUP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_PAGEUP);
}

pyobject_t get_TK_KEY_PAGEDOWN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_PAGEDOWN);
}

pyobject_t get_TK_KEY_F1(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_F1);
}

pyobject_t get_TK_KEY_F2(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_F2);
}

pyobject_t get_TK_KEY_F3(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_F3);
}

pyobject_t get_TK_KEY_F4(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_F4);
}

pyobject_t get_TK_KEY_F5(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_F5);
}

pyobject_t get_TK_KEY_F6(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_F6);
}

pyobject_t get_TK_KEY_F7(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_F7);
}

pyobject_t get_TK_KEY_F8(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_F8);
}

pyobject_t get_TK_KEY_F9(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_F9);
}

pyobject_t get_TK_KEY_F10(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_F10);
}

pyobject_t get_TK_KEY_F11(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_F11);
}

pyobject_t get_TK_KEY_F12(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_F12);
}

pyobject_t get_TK_KEY_MENU(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_MENU);
}

pyobject_t get_TK_KEY_COMMAND(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_COMMAND);
}

pyobject_t get_TK_KEY_BACK(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_BACK);
}

pyobject_t get_TK_KEY_CANCEL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_CANCEL);
}

pyobject_t get_TK_KEY_WHEEL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", TK_KEY_WHEEL);
}

pyobject_t get_VALUE_TYPE_INVALID(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", VALUE_TYPE_INVALID);
}

pyobject_t get_VALUE_TYPE_BOOL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", VALUE_TYPE_BOOL);
}

pyobject_t get_VALUE_TYPE_INT8(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", VALUE_TYPE_INT8);
}

pyobject_t get_VALUE_TYPE_UINT8(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", VALUE_TYPE_UINT8);
}

pyobject_t get_VALUE_TYPE_INT16(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", VALUE_TYPE_INT16);
}

pyobject_t get_VALUE_TYPE_UINT16(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", VALUE_TYPE_UINT16);
}

pyobject_t get_VALUE_TYPE_INT32(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", VALUE_TYPE_INT32);
}

pyobject_t get_VALUE_TYPE_UINT32(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", VALUE_TYPE_UINT32);
}

pyobject_t get_VALUE_TYPE_INT64(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", VALUE_TYPE_INT64);
}

pyobject_t get_VALUE_TYPE_UINT64(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", VALUE_TYPE_UINT64);
}

pyobject_t get_VALUE_TYPE_POINTER(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", VALUE_TYPE_POINTER);
}

pyobject_t get_VALUE_TYPE_FLOAT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", VALUE_TYPE_FLOAT);
}

pyobject_t get_VALUE_TYPE_FLOAT32(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", VALUE_TYPE_FLOAT32);
}

pyobject_t get_VALUE_TYPE_DOUBLE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", VALUE_TYPE_DOUBLE);
}

pyobject_t get_VALUE_TYPE_STRING(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", VALUE_TYPE_STRING);
}

pyobject_t get_VALUE_TYPE_WSTRING(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", VALUE_TYPE_WSTRING);
}

pyobject_t get_VALUE_TYPE_OBJECT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", VALUE_TYPE_OBJECT);
}

pyobject_t get_VALUE_TYPE_SIZED_STRING(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", VALUE_TYPE_SIZED_STRING);
}

pyobject_t get_VALUE_TYPE_BINARY(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", VALUE_TYPE_BINARY);
}

pyobject_t get_VALUE_TYPE_UBJSON(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", VALUE_TYPE_UBJSON);
}

pyobject_t get_VALUE_TYPE_TOKEN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", VALUE_TYPE_TOKEN);
}

pyobject_t wrap_locale_info(pyobject_t self, pyobject_t pyargs) {
  locale_info_t* ret = NULL;

  if (!PyArg_ParseTuple(pyargs, "" )) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (locale_info_t*)locale_info();
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_locale_info_tr(pyobject_t self, pyobject_t pyargs) {
  const char* ret = NULL;
  locale_info_t* locale_info = NULL;
  const char* text = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &locale_info, &text)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (const char*)locale_info_tr(locale_info, text);
  return Py_BuildValue("s", ret);
}

pyobject_t wrap_locale_info_change(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  locale_info_t* locale_info = NULL;
  char* language = NULL;
  char* country = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&ss" , &parse_voidp, &locale_info, &language, &country)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)locale_info_change(locale_info, language, country);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_locale_info_off(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  locale_info_t* locale_info = NULL;
  uint32_t id = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &locale_info, &id)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)locale_info_off(locale_info, id);
  return Py_BuildValue("i", ret);
}

pyobject_t get_STYLE_ID_BG_COLOR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_BG_COLOR);
}

pyobject_t get_STYLE_ID_FG_COLOR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_FG_COLOR);
}

pyobject_t get_STYLE_ID_MASK_COLOR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_MASK_COLOR);
}

pyobject_t get_STYLE_ID_FONT_NAME(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_FONT_NAME);
}

pyobject_t get_STYLE_ID_FONT_SIZE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_FONT_SIZE);
}

pyobject_t get_STYLE_ID_FONT_STYLE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_FONT_STYLE);
}

pyobject_t get_STYLE_ID_TEXT_COLOR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_TEXT_COLOR);
}

pyobject_t get_STYLE_ID_HIGHLIGHT_FONT_NAME(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_HIGHLIGHT_FONT_NAME);
}

pyobject_t get_STYLE_ID_HIGHLIGHT_FONT_SIZE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_HIGHLIGHT_FONT_SIZE);
}

pyobject_t get_STYLE_ID_HIGHLIGHT_TEXT_COLOR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_HIGHLIGHT_TEXT_COLOR);
}

pyobject_t get_STYLE_ID_TIPS_TEXT_COLOR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_TIPS_TEXT_COLOR);
}

pyobject_t get_STYLE_ID_TEXT_ALIGN_H(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_TEXT_ALIGN_H);
}

pyobject_t get_STYLE_ID_TEXT_ALIGN_V(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_TEXT_ALIGN_V);
}

pyobject_t get_STYLE_ID_BORDER_COLOR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_BORDER_COLOR);
}

pyobject_t get_STYLE_ID_BORDER_WIDTH(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_BORDER_WIDTH);
}

pyobject_t get_STYLE_ID_BORDER(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_BORDER);
}

pyobject_t get_STYLE_ID_BG_IMAGE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_BG_IMAGE);
}

pyobject_t get_STYLE_ID_BG_IMAGE_DRAW_TYPE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_BG_IMAGE_DRAW_TYPE);
}

pyobject_t get_STYLE_ID_ICON(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_ICON);
}

pyobject_t get_STYLE_ID_FG_IMAGE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_FG_IMAGE);
}

pyobject_t get_STYLE_ID_FG_IMAGE_DRAW_TYPE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_FG_IMAGE_DRAW_TYPE);
}

pyobject_t get_STYLE_ID_SPACER(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_SPACER);
}

pyobject_t get_STYLE_ID_MARGIN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_MARGIN);
}

pyobject_t get_STYLE_ID_MARGIN_LEFT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_MARGIN_LEFT);
}

pyobject_t get_STYLE_ID_MARGIN_RIGHT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_MARGIN_RIGHT);
}

pyobject_t get_STYLE_ID_MARGIN_TOP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_MARGIN_TOP);
}

pyobject_t get_STYLE_ID_MARGIN_BOTTOM(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_MARGIN_BOTTOM);
}

pyobject_t get_STYLE_ID_ICON_AT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_ICON_AT);
}

pyobject_t get_STYLE_ID_ACTIVE_ICON(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_ACTIVE_ICON);
}

pyobject_t get_STYLE_ID_X_OFFSET(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_X_OFFSET);
}

pyobject_t get_STYLE_ID_Y_OFFSET(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_Y_OFFSET);
}

pyobject_t get_STYLE_ID_SELECTED_BG_COLOR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_SELECTED_BG_COLOR);
}

pyobject_t get_STYLE_ID_SELECTED_FG_COLOR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_SELECTED_FG_COLOR);
}

pyobject_t get_STYLE_ID_SELECTED_TEXT_COLOR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_SELECTED_TEXT_COLOR);
}

pyobject_t get_STYLE_ID_ROUND_RADIUS(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_ROUND_RADIUS);
}

pyobject_t get_STYLE_ID_ROUND_RADIUS_TOP_LETF(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_ROUND_RADIUS_TOP_LETF);
}

pyobject_t get_STYLE_ID_ROUND_RADIUS_TOP_RIGHT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_ROUND_RADIUS_TOP_RIGHT);
}

pyobject_t get_STYLE_ID_ROUND_RADIUS_BOTTOM_LETF(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_ROUND_RADIUS_BOTTOM_LETF);
}

pyobject_t get_STYLE_ID_ROUND_RADIUS_BOTTOM_RIGHT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_ROUND_RADIUS_BOTTOM_RIGHT);
}

pyobject_t get_STYLE_ID_CHILDREN_LAYOUT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_CHILDREN_LAYOUT);
}

pyobject_t get_STYLE_ID_SELF_LAYOUT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", STYLE_ID_SELF_LAYOUT);
}

pyobject_t wrap_style_notify_widget_state_changed(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  style_t* s = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&O&" , &parse_voidp, &s, &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)style_notify_widget_state_changed(s, widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_style_is_valid(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  style_t* s = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &s)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)style_is_valid(s);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_style_get_int(pyobject_t self, pyobject_t pyargs) {
  int32_t ret = 0;
  style_t* s = NULL;
  const char* name = NULL;
  int32_t defval = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &s, &name, &defval)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (int32_t)style_get_int(s, name, defval);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_style_get_uint(pyobject_t self, pyobject_t pyargs) {
  uint32_t ret = 0;
  style_t* s = NULL;
  const char* name = NULL;
  uint32_t defval = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &s, &name, &defval)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (uint32_t)style_get_uint(s, name, defval);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_style_get_str(pyobject_t self, pyobject_t pyargs) {
  const char* ret = NULL;
  style_t* s = NULL;
  const char* name = NULL;
  const char* defval = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&ss" , &parse_voidp, &s, &name, &defval)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (const char*)style_get_str(s, name, defval);
  return Py_BuildValue("s", ret);
}

pyobject_t wrap_style_set(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  style_t* s = NULL;
  const char* state = NULL;
  const char* name = NULL;
  const value_t* value = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&ssO&" , &parse_voidp, &s, &state, &name, &parse_voidp, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)style_set(s, state, name, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_style_set_style_data(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  style_t* s = NULL;
  const uint8_t* data = NULL;
  const char* state = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&O&s" , &parse_voidp, &s, &parse_voidp, &data, &state)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)style_set_style_data(s, data, state);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_style_update_state(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  style_t* s = NULL;
  theme_t* theme = NULL;
  const char* widget_type = NULL;
  const char* style_name = NULL;
  const char* widget_state = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&O&sss" , &parse_voidp, &s, &parse_voidp, &theme, &widget_type, &style_name, &widget_state)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)style_update_state(s, theme, widget_type, style_name, widget_state);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_style_get_style_state(pyobject_t self, pyobject_t pyargs) {
  const char* ret = NULL;
  style_t* s = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &s)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (const char*)style_get_style_state(s);
  return Py_BuildValue("s", ret);
}

pyobject_t wrap_style_is_mutable(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  style_t* s = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &s)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)style_is_mutable(s);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_style_get_style_type(pyobject_t self, pyobject_t pyargs) {
  const char* ret = NULL;
  style_t* s = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &s)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (const char*)style_get_style_type(s);
  return Py_BuildValue("s", ret);
}

pyobject_t wrap_theme(pyobject_t self, pyobject_t pyargs) {
  theme_t* ret = NULL;

  if (!PyArg_ParseTuple(pyargs, "" )) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (theme_t*)theme();
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_timer_remove(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  uint32_t timer_id = 0;

  if (!PyArg_ParseTuple(pyargs, "i" , &timer_id)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)timer_remove(timer_id);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_timer_remove_all_by_ctx(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  void* ctx = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &ctx)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)timer_remove_all_by_ctx(ctx);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_timer_reset(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  uint32_t timer_id = 0;

  if (!PyArg_ParseTuple(pyargs, "i" , &timer_id)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)timer_reset(timer_id);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_timer_suspend(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  uint32_t timer_id = 0;

  if (!PyArg_ParseTuple(pyargs, "i" , &timer_id)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)timer_suspend(timer_id);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_timer_resume(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  uint32_t timer_id = 0;

  if (!PyArg_ParseTuple(pyargs, "i" , &timer_id)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)timer_resume(timer_id);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_timer_modify(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  uint32_t timer_id = 0;
  uint32_t duration = 0;

  if (!PyArg_ParseTuple(pyargs, "ii" , &timer_id, &duration)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)timer_modify(timer_id, duration);
  return Py_BuildValue("i", ret);
}

pyobject_t get_ALIGN_V_NONE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", ALIGN_V_NONE);
}

pyobject_t get_ALIGN_V_MIDDLE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", ALIGN_V_MIDDLE);
}

pyobject_t get_ALIGN_V_TOP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", ALIGN_V_TOP);
}

pyobject_t get_ALIGN_V_BOTTOM(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", ALIGN_V_BOTTOM);
}

pyobject_t get_ALIGN_H_NONE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", ALIGN_H_NONE);
}

pyobject_t get_ALIGN_H_CENTER(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", ALIGN_H_CENTER);
}

pyobject_t get_ALIGN_H_LEFT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", ALIGN_H_LEFT);
}

pyobject_t get_ALIGN_H_RIGHT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", ALIGN_H_RIGHT);
}

pyobject_t get_APP_MOBILE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", APP_MOBILE);
}

pyobject_t get_APP_SIMULATOR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", APP_SIMULATOR);
}

pyobject_t get_APP_DESKTOP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", APP_DESKTOP);
}

pyobject_t get_BITMAP_FMT_NONE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", BITMAP_FMT_NONE);
}

pyobject_t get_BITMAP_FMT_RGBA8888(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", BITMAP_FMT_RGBA8888);
}

pyobject_t get_BITMAP_FMT_ABGR8888(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", BITMAP_FMT_ABGR8888);
}

pyobject_t get_BITMAP_FMT_BGRA8888(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", BITMAP_FMT_BGRA8888);
}

pyobject_t get_BITMAP_FMT_ARGB8888(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", BITMAP_FMT_ARGB8888);
}

pyobject_t get_BITMAP_FMT_RGB565(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", BITMAP_FMT_RGB565);
}

pyobject_t get_BITMAP_FMT_BGR565(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", BITMAP_FMT_BGR565);
}

pyobject_t get_BITMAP_FMT_RGB888(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", BITMAP_FMT_RGB888);
}

pyobject_t get_BITMAP_FMT_BGR888(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", BITMAP_FMT_BGR888);
}

pyobject_t get_BITMAP_FMT_GRAY(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", BITMAP_FMT_GRAY);
}

pyobject_t get_BITMAP_FMT_MONO(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", BITMAP_FMT_MONO);
}

pyobject_t get_BITMAP_FLAG_NONE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", BITMAP_FLAG_NONE);
}

pyobject_t get_BITMAP_FLAG_OPAQUE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", BITMAP_FLAG_OPAQUE);
}

pyobject_t get_BITMAP_FLAG_IMMUTABLE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", BITMAP_FLAG_IMMUTABLE);
}

pyobject_t get_BITMAP_FLAG_TEXTURE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", BITMAP_FLAG_TEXTURE);
}

pyobject_t get_BITMAP_FLAG_CHANGED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", BITMAP_FLAG_CHANGED);
}

pyobject_t get_BITMAP_FLAG_PREMULTI_ALPHA(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", BITMAP_FLAG_PREMULTI_ALPHA);
}

pyobject_t wrap_vgcanvas_cast(pyobject_t self, pyobject_t pyargs) {
  vgcanvas_t* ret = NULL;
  vgcanvas_t* vg = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &vg)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (vgcanvas_t*)vgcanvas_cast(vg);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_vgcanvas_flush(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &vg)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_flush(vg);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_begin_path(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &vg)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_begin_path(vg);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_move_to(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  float_t x = 0;
  float_t y = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ff" , &parse_voidp, &vg, &x, &y)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_move_to(vg, x, y);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_line_to(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  float_t x = 0;
  float_t y = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ff" , &parse_voidp, &vg, &x, &y)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_line_to(vg, x, y);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_quad_to(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  float_t cpx = 0;
  float_t cpy = 0;
  float_t x = 0;
  float_t y = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ffff" , &parse_voidp, &vg, &cpx, &cpy, &x, &y)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_quad_to(vg, cpx, cpy, x, y);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_bezier_to(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  float_t cp1x = 0;
  float_t cp1y = 0;
  float_t cp2x = 0;
  float_t cp2y = 0;
  float_t x = 0;
  float_t y = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ffffff" , &parse_voidp, &vg, &cp1x, &cp1y, &cp2x, &cp2y, &x, &y)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_bezier_to(vg, cp1x, cp1y, cp2x, cp2y, x, y);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_arc_to(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  float_t x1 = 0;
  float_t y1 = 0;
  float_t x2 = 0;
  float_t y2 = 0;
  float_t r = 0;

  if (!PyArg_ParseTuple(pyargs, "O&fffff" , &parse_voidp, &vg, &x1, &y1, &x2, &y2, &r)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_arc_to(vg, x1, y1, x2, y2, r);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_arc(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  float_t x = 0;
  float_t y = 0;
  float_t r = 0;
  float_t start_angle = 0;
  float_t end_angle = 0;
  bool_t ccw = 0;

  if (!PyArg_ParseTuple(pyargs, "O&fffffb" , &parse_voidp, &vg, &x, &y, &r, &start_angle, &end_angle, &ccw)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_arc(vg, x, y, r, start_angle, end_angle, ccw);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_is_point_in_path(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  vgcanvas_t* vg = NULL;
  float_t x = 0;
  float_t y = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ff" , &parse_voidp, &vg, &x, &y)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)vgcanvas_is_point_in_path(vg, x, y);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_vgcanvas_rect(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  float_t x = 0;
  float_t y = 0;
  float_t w = 0;
  float_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ffff" , &parse_voidp, &vg, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_rect(vg, x, y, w, h);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_rounded_rect(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  float_t x = 0;
  float_t y = 0;
  float_t w = 0;
  float_t h = 0;
  float_t r = 0;

  if (!PyArg_ParseTuple(pyargs, "O&fffff" , &parse_voidp, &vg, &x, &y, &w, &h, &r)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_rounded_rect(vg, x, y, w, h, r);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_ellipse(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  float_t x = 0;
  float_t y = 0;
  float_t rx = 0;
  float_t ry = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ffff" , &parse_voidp, &vg, &x, &y, &rx, &ry)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_ellipse(vg, x, y, rx, ry);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_close_path(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &vg)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_close_path(vg);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_path_winding(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  bool_t dir = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &vg, &dir)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_path_winding(vg, dir);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_rotate(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  float_t rad = 0;

  if (!PyArg_ParseTuple(pyargs, "O&f" , &parse_voidp, &vg, &rad)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_rotate(vg, rad);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_scale(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  float_t x = 0;
  float_t y = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ff" , &parse_voidp, &vg, &x, &y)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_scale(vg, x, y);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_translate(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  float_t x = 0;
  float_t y = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ff" , &parse_voidp, &vg, &x, &y)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_translate(vg, x, y);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_transform(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  float_t a = 0;
  float_t b = 0;
  float_t c = 0;
  float_t d = 0;
  float_t e = 0;
  float_t f = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ffffff" , &parse_voidp, &vg, &a, &b, &c, &d, &e, &f)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_transform(vg, a, b, c, d, e, f);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_set_transform(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  float_t a = 0;
  float_t b = 0;
  float_t c = 0;
  float_t d = 0;
  float_t e = 0;
  float_t f = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ffffff" , &parse_voidp, &vg, &a, &b, &c, &d, &e, &f)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_set_transform(vg, a, b, c, d, e, f);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_clip_rect(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  float_t x = 0;
  float_t y = 0;
  float_t w = 0;
  float_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ffff" , &parse_voidp, &vg, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_clip_rect(vg, x, y, w, h);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_intersect_clip_rect(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  float_t x = 0;
  float_t y = 0;
  float_t w = 0;
  float_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ffff" , &parse_voidp, &vg, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_intersect_clip_rect(vg, x, y, w, h);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_fill(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &vg)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_fill(vg);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_stroke(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &vg)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_stroke(vg);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_paint(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  bool_t stroke = 0;
  bitmap_t* img = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&bO&" , &parse_voidp, &vg, &stroke, &parse_voidp, &img)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_paint(vg, stroke, img);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_set_font(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  char* font = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &vg, &font)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_set_font(vg, font);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_set_font_size(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  float_t font = 0;

  if (!PyArg_ParseTuple(pyargs, "O&f" , &parse_voidp, &vg, &font)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_set_font_size(vg, font);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_set_text_align(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  char* value = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &vg, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_set_text_align(vg, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_set_text_baseline(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  char* value = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &vg, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_set_text_baseline(vg, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_fill_text(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  char* text = NULL;
  float_t x = 0;
  float_t y = 0;
  float_t max_width = 0;

  if (!PyArg_ParseTuple(pyargs, "O&sfff" , &parse_voidp, &vg, &text, &x, &y, &max_width)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_fill_text(vg, text, x, y, max_width);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_measure_text(pyobject_t self, pyobject_t pyargs) {
  float_t ret = 0;
  vgcanvas_t* vg = NULL;
  char* text = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &vg, &text)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (float_t)vgcanvas_measure_text(vg, text);
  return Py_BuildValue("f", ret);
}

pyobject_t wrap_vgcanvas_draw_image(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  bitmap_t* img = NULL;
  float_t sx = 0;
  float_t sy = 0;
  float_t sw = 0;
  float_t sh = 0;
  float_t dx = 0;
  float_t dy = 0;
  float_t dw = 0;
  float_t dh = 0;

  if (!PyArg_ParseTuple(pyargs, "O&O&ffffffff" , &parse_voidp, &vg, &parse_voidp, &img, &sx, &sy, &sw, &sh, &dx, &dy, &dw, &dh)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_draw_image(vg, img, sx, sy, sw, sh, dx, dy, dw, dh);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_draw_icon(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  bitmap_t* img = NULL;
  float_t sx = 0;
  float_t sy = 0;
  float_t sw = 0;
  float_t sh = 0;
  float_t dx = 0;
  float_t dy = 0;
  float_t dw = 0;
  float_t dh = 0;

  if (!PyArg_ParseTuple(pyargs, "O&O&ffffffff" , &parse_voidp, &vg, &parse_voidp, &img, &sx, &sy, &sw, &sh, &dx, &dy, &dw, &dh)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_draw_icon(vg, img, sx, sy, sw, sh, dx, dy, dw, dh);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_set_antialias(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  bool_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &vg, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_set_antialias(vg, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_set_global_alpha(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  float_t alpha = 0;

  if (!PyArg_ParseTuple(pyargs, "O&f" , &parse_voidp, &vg, &alpha)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_set_global_alpha(vg, alpha);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_set_line_width(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  float_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&f" , &parse_voidp, &vg, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_set_line_width(vg, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_set_fill_color_str(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  const char* color = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &vg, &color)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_set_fill_color_str(vg, color);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_set_stroke_color_str(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  const char* color = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &vg, &color)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_set_stroke_color_str(vg, color);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_set_line_cap(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  char* value = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &vg, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_set_line_cap(vg, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_set_line_join(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  char* value = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &vg, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_set_line_join(vg, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_set_miter_limit(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;
  float_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&f" , &parse_voidp, &vg, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_set_miter_limit(vg, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_save(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &vg)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_save(vg);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_restore(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  vgcanvas_t* vg = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &vg)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)vgcanvas_restore(vg);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_vgcanvas_t_get_prop_w(pyobject_t self, pyobject_t pyargs) {
  vgcanvas_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->w);
}

pyobject_t wrap_vgcanvas_t_get_prop_h(pyobject_t self, pyobject_t pyargs) {
  vgcanvas_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->h);
}

pyobject_t wrap_vgcanvas_t_get_prop_stride(pyobject_t self, pyobject_t pyargs) {
  vgcanvas_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->stride);
}

pyobject_t wrap_vgcanvas_t_get_prop_ratio(pyobject_t self, pyobject_t pyargs) {
  vgcanvas_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("f", obj->ratio);
}

pyobject_t wrap_vgcanvas_t_get_prop_anti_alias(pyobject_t self, pyobject_t pyargs) {
  vgcanvas_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->anti_alias);
}

pyobject_t wrap_vgcanvas_t_get_prop_line_width(pyobject_t self, pyobject_t pyargs) {
  vgcanvas_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("f", obj->line_width);
}

pyobject_t wrap_vgcanvas_t_get_prop_global_alpha(pyobject_t self, pyobject_t pyargs) {
  vgcanvas_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("f", obj->global_alpha);
}

pyobject_t wrap_vgcanvas_t_get_prop_miter_limit(pyobject_t self, pyobject_t pyargs) {
  vgcanvas_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("f", obj->miter_limit);
}

pyobject_t wrap_vgcanvas_t_get_prop_line_cap(pyobject_t self, pyobject_t pyargs) {
  vgcanvas_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->line_cap);
}

pyobject_t wrap_vgcanvas_t_get_prop_line_join(pyobject_t self, pyobject_t pyargs) {
  vgcanvas_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->line_join);
}

pyobject_t wrap_vgcanvas_t_get_prop_font(pyobject_t self, pyobject_t pyargs) {
  vgcanvas_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->font);
}

pyobject_t wrap_vgcanvas_t_get_prop_font_size(pyobject_t self, pyobject_t pyargs) {
  vgcanvas_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("f", obj->font_size);
}

pyobject_t wrap_vgcanvas_t_get_prop_text_align(pyobject_t self, pyobject_t pyargs) {
  vgcanvas_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->text_align);
}

pyobject_t wrap_vgcanvas_t_get_prop_text_baseline(pyobject_t self, pyobject_t pyargs) {
  vgcanvas_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->text_baseline);
}

pyobject_t get_VGCANVAS_LINE_CAP_ROUND(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", VGCANVAS_LINE_CAP_ROUND);
}

pyobject_t get_VGCANVAS_LINE_CAP_SQUARE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", VGCANVAS_LINE_CAP_SQUARE);
}

pyobject_t get_VGCANVAS_LINE_CAP_BUTT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", VGCANVAS_LINE_CAP_BUTT);
}

pyobject_t get_VGCANVAS_LINE_JOIN_ROUND(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", VGCANVAS_LINE_JOIN_ROUND);
}

pyobject_t get_VGCANVAS_LINE_JOIN_BEVEL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", VGCANVAS_LINE_JOIN_BEVEL);
}

pyobject_t get_VGCANVAS_LINE_JOIN_MITTER(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", VGCANVAS_LINE_JOIN_MITTER);
}

pyobject_t get_WIDGET_PROP_EXEC(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_EXEC);
}

pyobject_t get_WIDGET_PROP_X(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_X);
}

pyobject_t get_WIDGET_PROP_Y(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_Y);
}

pyobject_t get_WIDGET_PROP_W(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_W);
}

pyobject_t get_WIDGET_PROP_H(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_H);
}

pyobject_t get_WIDGET_PROP_DESIGN_W(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_DESIGN_W);
}

pyobject_t get_WIDGET_PROP_DESIGN_H(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_DESIGN_H);
}

pyobject_t get_WIDGET_PROP_AUTO_SCALE_CHILDREN_X(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_AUTO_SCALE_CHILDREN_X);
}

pyobject_t get_WIDGET_PROP_AUTO_SCALE_CHILDREN_Y(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_AUTO_SCALE_CHILDREN_Y);
}

pyobject_t get_WIDGET_PROP_AUTO_SCALE_CHILDREN_W(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_AUTO_SCALE_CHILDREN_W);
}

pyobject_t get_WIDGET_PROP_AUTO_SCALE_CHILDREN_H(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_AUTO_SCALE_CHILDREN_H);
}

pyobject_t get_WIDGET_PROP_INPUTING(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_INPUTING);
}

pyobject_t get_WIDGET_PROP_ALWAYS_ON_TOP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_ALWAYS_ON_TOP);
}

pyobject_t get_WIDGET_PROP_CARET_X(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_CARET_X);
}

pyobject_t get_WIDGET_PROP_CARET_Y(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_CARET_Y);
}

pyobject_t get_WIDGET_PROP_DIRTY_RECT_TOLERANCE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_DIRTY_RECT_TOLERANCE);
}

pyobject_t get_WIDGET_PROP_BIDI(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_BIDI);
}

pyobject_t get_WIDGET_PROP_CANVAS(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_CANVAS);
}

pyobject_t get_WIDGET_PROP_LOCALIZE_OPTIONS(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_LOCALIZE_OPTIONS);
}

pyobject_t get_WIDGET_PROP_NATIVE_WINDOW(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_NATIVE_WINDOW);
}

pyobject_t get_WIDGET_PROP_HIGHLIGHT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_HIGHLIGHT);
}

pyobject_t get_WIDGET_PROP_BAR_SIZE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_BAR_SIZE);
}

pyobject_t get_WIDGET_PROP_OPACITY(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_OPACITY);
}

pyobject_t get_WIDGET_PROP_MIN_W(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_MIN_W);
}

pyobject_t get_WIDGET_PROP_MAX_W(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_MAX_W);
}

pyobject_t get_WIDGET_PROP_AUTO_ADJUST_SIZE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_AUTO_ADJUST_SIZE);
}

pyobject_t get_WIDGET_PROP_SINGLE_INSTANCE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_SINGLE_INSTANCE);
}

pyobject_t get_WIDGET_PROP_CHILDREN_LAYOUT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_CHILDREN_LAYOUT);
}

pyobject_t get_WIDGET_PROP_LAYOUT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_LAYOUT);
}

pyobject_t get_WIDGET_PROP_SELF_LAYOUT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_SELF_LAYOUT);
}

pyobject_t get_WIDGET_PROP_LAYOUT_W(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_LAYOUT_W);
}

pyobject_t get_WIDGET_PROP_LAYOUT_H(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_LAYOUT_H);
}

pyobject_t get_WIDGET_PROP_VIRTUAL_W(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_VIRTUAL_W);
}

pyobject_t get_WIDGET_PROP_VIRTUAL_H(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_VIRTUAL_H);
}

pyobject_t get_WIDGET_PROP_NAME(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_NAME);
}

pyobject_t get_WIDGET_PROP_TYPE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_TYPE);
}

pyobject_t get_WIDGET_PROP_CLOSABLE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_CLOSABLE);
}

pyobject_t get_WIDGET_PROP_POINTER_CURSOR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_POINTER_CURSOR);
}

pyobject_t get_WIDGET_PROP_VALUE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_VALUE);
}

pyobject_t get_WIDGET_PROP_REVERSE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_REVERSE);
}

pyobject_t get_WIDGET_PROP_LENGTH(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_LENGTH);
}

pyobject_t get_WIDGET_PROP_LINE_WRAP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_LINE_WRAP);
}

pyobject_t get_WIDGET_PROP_WORD_WRAP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_WORD_WRAP);
}

pyobject_t get_WIDGET_PROP_TEXT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_TEXT);
}

pyobject_t get_WIDGET_PROP_TR_TEXT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_TR_TEXT);
}

pyobject_t get_WIDGET_PROP_STYLE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_STYLE);
}

pyobject_t get_WIDGET_PROP_ENABLE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_ENABLE);
}

pyobject_t get_WIDGET_PROP_FEEDBACK(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_FEEDBACK);
}

pyobject_t get_WIDGET_PROP_FLOATING(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_FLOATING);
}

pyobject_t get_WIDGET_PROP_MARGIN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_MARGIN);
}

pyobject_t get_WIDGET_PROP_SPACING(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_SPACING);
}

pyobject_t get_WIDGET_PROP_LEFT_MARGIN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_LEFT_MARGIN);
}

pyobject_t get_WIDGET_PROP_RIGHT_MARGIN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_RIGHT_MARGIN);
}

pyobject_t get_WIDGET_PROP_TOP_MARGIN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_TOP_MARGIN);
}

pyobject_t get_WIDGET_PROP_BOTTOM_MARGIN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_BOTTOM_MARGIN);
}

pyobject_t get_WIDGET_PROP_STEP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_STEP);
}

pyobject_t get_WIDGET_PROP_VISIBLE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_VISIBLE);
}

pyobject_t get_WIDGET_PROP_SENSITIVE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_SENSITIVE);
}

pyobject_t get_WIDGET_PROP_ANIMATION(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_ANIMATION);
}

pyobject_t get_WIDGET_PROP_ANIM_HINT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_ANIM_HINT);
}

pyobject_t get_WIDGET_PROP_FULLSCREEN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_FULLSCREEN);
}

pyobject_t get_WIDGET_PROP_DISABLE_ANIM(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_DISABLE_ANIM);
}

pyobject_t get_WIDGET_PROP_OPEN_ANIM_HINT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_OPEN_ANIM_HINT);
}

pyobject_t get_WIDGET_PROP_CLOSE_ANIM_HINT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_CLOSE_ANIM_HINT);
}

pyobject_t get_WIDGET_PROP_MIN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_MIN);
}

pyobject_t get_WIDGET_PROP_ACTION_TEXT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_ACTION_TEXT);
}

pyobject_t get_WIDGET_PROP_TIPS(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_TIPS);
}

pyobject_t get_WIDGET_PROP_TR_TIPS(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_TR_TIPS);
}

pyobject_t get_WIDGET_PROP_INPUT_TYPE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_INPUT_TYPE);
}

pyobject_t get_WIDGET_PROP_KEYBOARD(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_KEYBOARD);
}

pyobject_t get_WIDGET_PROP_DEFAULT_FOCUSED_CHILD(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_DEFAULT_FOCUSED_CHILD);
}

pyobject_t get_WIDGET_PROP_READONLY(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_READONLY);
}

pyobject_t get_WIDGET_PROP_CANCELABLE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_CANCELABLE);
}

pyobject_t get_WIDGET_PROP_PASSWORD_VISIBLE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_PASSWORD_VISIBLE);
}

pyobject_t get_WIDGET_PROP_ACTIVE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_ACTIVE);
}

pyobject_t get_WIDGET_PROP_CURR_PAGE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_CURR_PAGE);
}

pyobject_t get_WIDGET_PROP_PAGE_MAX_NUMBER(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_PAGE_MAX_NUMBER);
}

pyobject_t get_WIDGET_PROP_VERTICAL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_VERTICAL);
}

pyobject_t get_WIDGET_PROP_SHOW_TEXT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_SHOW_TEXT);
}

pyobject_t get_WIDGET_PROP_XOFFSET(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_XOFFSET);
}

pyobject_t get_WIDGET_PROP_YOFFSET(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_YOFFSET);
}

pyobject_t get_WIDGET_PROP_ALIGN_V(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_ALIGN_V);
}

pyobject_t get_WIDGET_PROP_ALIGN_H(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_ALIGN_H);
}

pyobject_t get_WIDGET_PROP_AUTO_PLAY(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_AUTO_PLAY);
}

pyobject_t get_WIDGET_PROP_LOOP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_LOOP);
}

pyobject_t get_WIDGET_PROP_AUTO_FIX(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_AUTO_FIX);
}

pyobject_t get_WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED);
}

pyobject_t get_WIDGET_PROP_OPEN_IM_WHEN_FOCUSED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_OPEN_IM_WHEN_FOCUSED);
}

pyobject_t get_WIDGET_PROP_CLOSE_IM_WHEN_BLURED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_CLOSE_IM_WHEN_BLURED);
}

pyobject_t get_WIDGET_PROP_X_MIN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_X_MIN);
}

pyobject_t get_WIDGET_PROP_X_MAX(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_X_MAX);
}

pyobject_t get_WIDGET_PROP_Y_MIN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_Y_MIN);
}

pyobject_t get_WIDGET_PROP_Y_MAX(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_Y_MAX);
}

pyobject_t get_WIDGET_PROP_MAX(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_MAX);
}

pyobject_t get_WIDGET_PROP_GRAB_KEYS(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_GRAB_KEYS);
}

pyobject_t get_WIDGET_PROP_ROW(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_ROW);
}

pyobject_t get_WIDGET_PROP_STATE_FOR_STYLE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_STATE_FOR_STYLE);
}

pyobject_t get_WIDGET_PROP_THEME(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_THEME);
}

pyobject_t get_WIDGET_PROP_STAGE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_STAGE);
}

pyobject_t get_WIDGET_PROP_IMAGE_MANAGER(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_IMAGE_MANAGER);
}

pyobject_t get_WIDGET_PROP_ASSETS_MANAGER(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_ASSETS_MANAGER);
}

pyobject_t get_WIDGET_PROP_LOCALE_INFO(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_LOCALE_INFO);
}

pyobject_t get_WIDGET_PROP_FONT_MANAGER(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_FONT_MANAGER);
}

pyobject_t get_WIDGET_PROP_THEME_OBJ(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_THEME_OBJ);
}

pyobject_t get_WIDGET_PROP_DEFAULT_THEME_OBJ(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_DEFAULT_THEME_OBJ);
}

pyobject_t get_WIDGET_PROP_ITEM_WIDTH(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_ITEM_WIDTH);
}

pyobject_t get_WIDGET_PROP_ITEM_HEIGHT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_ITEM_HEIGHT);
}

pyobject_t get_WIDGET_PROP_DEFAULT_ITEM_HEIGHT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_DEFAULT_ITEM_HEIGHT);
}

pyobject_t get_WIDGET_PROP_XSLIDABLE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_XSLIDABLE);
}

pyobject_t get_WIDGET_PROP_YSLIDABLE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_YSLIDABLE);
}

pyobject_t get_WIDGET_PROP_REPEAT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_REPEAT);
}

pyobject_t get_WIDGET_PROP_LONG_PRESS_TIME(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_LONG_PRESS_TIME);
}

pyobject_t get_WIDGET_PROP_ENABLE_LONG_PRESS(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_ENABLE_LONG_PRESS);
}

pyobject_t get_WIDGET_PROP_CLICK_THROUGH(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_CLICK_THROUGH);
}

pyobject_t get_WIDGET_PROP_ANIMATABLE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_ANIMATABLE);
}

pyobject_t get_WIDGET_PROP_AUTO_HIDE_SCROLL_BAR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_AUTO_HIDE_SCROLL_BAR);
}

pyobject_t get_WIDGET_PROP_IMAGE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_IMAGE);
}

pyobject_t get_WIDGET_PROP_FORMAT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_FORMAT);
}

pyobject_t get_WIDGET_PROP_DRAW_TYPE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_DRAW_TYPE);
}

pyobject_t get_WIDGET_PROP_SELECTABLE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_SELECTABLE);
}

pyobject_t get_WIDGET_PROP_CLICKABLE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_CLICKABLE);
}

pyobject_t get_WIDGET_PROP_SCALE_X(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_SCALE_X);
}

pyobject_t get_WIDGET_PROP_SCALE_Y(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_SCALE_Y);
}

pyobject_t get_WIDGET_PROP_ANCHOR_X(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_ANCHOR_X);
}

pyobject_t get_WIDGET_PROP_ANCHOR_Y(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_ANCHOR_Y);
}

pyobject_t get_WIDGET_PROP_ROTATION(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_ROTATION);
}

pyobject_t get_WIDGET_PROP_COMPACT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_COMPACT);
}

pyobject_t get_WIDGET_PROP_SCROLLABLE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_SCROLLABLE);
}

pyobject_t get_WIDGET_PROP_ICON(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_ICON);
}

pyobject_t get_WIDGET_PROP_OPTIONS(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_OPTIONS);
}

pyobject_t get_WIDGET_PROP_SELECTED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_SELECTED);
}

pyobject_t get_WIDGET_PROP_CHECKED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_CHECKED);
}

pyobject_t get_WIDGET_PROP_ACTIVE_ICON(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_ACTIVE_ICON);
}

pyobject_t get_WIDGET_PROP_LOAD_UI(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_LOAD_UI);
}

pyobject_t get_WIDGET_PROP_OPEN_WINDOW(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_OPEN_WINDOW);
}

pyobject_t get_WIDGET_PROP_SELECTED_INDEX(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_SELECTED_INDEX);
}

pyobject_t get_WIDGET_PROP_CLOSE_WHEN_CLICK(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_CLOSE_WHEN_CLICK);
}

pyobject_t get_WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE);
}

pyobject_t get_WIDGET_PROP_CLOSE_WHEN_TIMEOUT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_CLOSE_WHEN_TIMEOUT);
}

pyobject_t get_WIDGET_PROP_LINE_GAP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_LINE_GAP);
}

pyobject_t get_WIDGET_PROP_BG_COLOR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_BG_COLOR);
}

pyobject_t get_WIDGET_PROP_BORDER_COLOR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_BORDER_COLOR);
}

pyobject_t get_WIDGET_PROP_DELAY(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_DELAY);
}

pyobject_t get_WIDGET_PROP_IS_KEYBOARD(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_IS_KEYBOARD);
}

pyobject_t get_WIDGET_PROP_FOCUSED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_FOCUSED);
}

pyobject_t get_WIDGET_PROP_FOCUS(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_FOCUS);
}

pyobject_t get_WIDGET_PROP_FOCUSABLE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_FOCUSABLE);
}

pyobject_t get_WIDGET_PROP_WITH_FOCUS_STATE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_WITH_FOCUS_STATE);
}

pyobject_t get_WIDGET_PROP_MOVE_FOCUS_PREV_KEY(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_MOVE_FOCUS_PREV_KEY);
}

pyobject_t get_WIDGET_PROP_MOVE_FOCUS_NEXT_KEY(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_MOVE_FOCUS_NEXT_KEY);
}

pyobject_t get_WIDGET_PROP_MOVE_FOCUS_UP_KEY(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_MOVE_FOCUS_UP_KEY);
}

pyobject_t get_WIDGET_PROP_MOVE_FOCUS_DOWN_KEY(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_MOVE_FOCUS_DOWN_KEY);
}

pyobject_t get_WIDGET_PROP_MOVE_FOCUS_LEFT_KEY(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_MOVE_FOCUS_LEFT_KEY);
}

pyobject_t get_WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY);
}

pyobject_t get_WIDGET_TYPE_NONE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_NONE);
}

pyobject_t get_WIDGET_TYPE_WINDOW_MANAGER(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_WINDOW_MANAGER);
}

pyobject_t get_WIDGET_TYPE_NORMAL_WINDOW(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_NORMAL_WINDOW);
}

pyobject_t get_WIDGET_TYPE_OVERLAY(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_OVERLAY);
}

pyobject_t get_WIDGET_TYPE_TOOL_BAR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_TOOL_BAR);
}

pyobject_t get_WIDGET_TYPE_DIALOG(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_DIALOG);
}

pyobject_t get_WIDGET_TYPE_POPUP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_POPUP);
}

pyobject_t get_WIDGET_TYPE_SYSTEM_BAR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_SYSTEM_BAR);
}

pyobject_t get_WIDGET_TYPE_SYSTEM_BAR_BOTTOM(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_SYSTEM_BAR_BOTTOM);
}

pyobject_t get_WIDGET_TYPE_SPRITE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_SPRITE);
}

pyobject_t get_WIDGET_TYPE_KEYBOARD(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_KEYBOARD);
}

pyobject_t get_WIDGET_TYPE_DND(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_DND);
}

pyobject_t get_WIDGET_TYPE_LABEL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_LABEL);
}

pyobject_t get_WIDGET_TYPE_BUTTON(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_BUTTON);
}

pyobject_t get_WIDGET_TYPE_IMAGE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_IMAGE);
}

pyobject_t get_WIDGET_TYPE_EDIT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_EDIT);
}

pyobject_t get_WIDGET_TYPE_PROGRESS_BAR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_PROGRESS_BAR);
}

pyobject_t get_WIDGET_TYPE_GROUP_BOX(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_GROUP_BOX);
}

pyobject_t get_WIDGET_TYPE_CHECK_BUTTON(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_CHECK_BUTTON);
}

pyobject_t get_WIDGET_TYPE_RADIO_BUTTON(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_RADIO_BUTTON);
}

pyobject_t get_WIDGET_TYPE_DIALOG_TITLE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_DIALOG_TITLE);
}

pyobject_t get_WIDGET_TYPE_DIALOG_CLIENT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_DIALOG_CLIENT);
}

pyobject_t get_WIDGET_TYPE_SLIDER(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_SLIDER);
}

pyobject_t get_WIDGET_TYPE_VIEW(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_VIEW);
}

pyobject_t get_WIDGET_TYPE_COMBO_BOX(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_COMBO_BOX);
}

pyobject_t get_WIDGET_TYPE_COMBO_BOX_ITEM(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_COMBO_BOX_ITEM);
}

pyobject_t get_WIDGET_TYPE_SLIDE_VIEW(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_SLIDE_VIEW);
}

pyobject_t get_WIDGET_TYPE_SLIDE_INDICATOR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_SLIDE_INDICATOR);
}

pyobject_t get_WIDGET_TYPE_SLIDE_INDICATOR_ARC(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_SLIDE_INDICATOR_ARC);
}

pyobject_t get_WIDGET_TYPE_PAGES(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_PAGES);
}

pyobject_t get_WIDGET_TYPE_TAB_BUTTON(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_TAB_BUTTON);
}

pyobject_t get_WIDGET_TYPE_TAB_CONTROL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_TAB_CONTROL);
}

pyobject_t get_WIDGET_TYPE_TAB_BUTTON_GROUP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_TAB_BUTTON_GROUP);
}

pyobject_t get_WIDGET_TYPE_BUTTON_GROUP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_BUTTON_GROUP);
}

pyobject_t get_WIDGET_TYPE_CANDIDATES(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_CANDIDATES);
}

pyobject_t get_WIDGET_TYPE_SPIN_BOX(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_SPIN_BOX);
}

pyobject_t get_WIDGET_TYPE_DRAGGER(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_DRAGGER);
}

pyobject_t get_WIDGET_TYPE_SCROLL_BAR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_SCROLL_BAR);
}

pyobject_t get_WIDGET_TYPE_SCROLL_BAR_DESKTOP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_SCROLL_BAR_DESKTOP);
}

pyobject_t get_WIDGET_TYPE_SCROLL_BAR_MOBILE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_SCROLL_BAR_MOBILE);
}

pyobject_t get_WIDGET_TYPE_SCROLL_VIEW(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_SCROLL_VIEW);
}

pyobject_t get_WIDGET_TYPE_LIST_VIEW(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_LIST_VIEW);
}

pyobject_t get_WIDGET_TYPE_LIST_VIEW_H(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_LIST_VIEW_H);
}

pyobject_t get_WIDGET_TYPE_LIST_ITEM(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_LIST_ITEM);
}

pyobject_t get_WIDGET_TYPE_COLOR_PICKER(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_COLOR_PICKER);
}

pyobject_t get_WIDGET_TYPE_COLOR_COMPONENT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_COLOR_COMPONENT);
}

pyobject_t get_WIDGET_TYPE_COLOR_TILE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_COLOR_TILE);
}

pyobject_t get_WIDGET_TYPE_CLIP_VIEW(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_CLIP_VIEW);
}

pyobject_t get_WIDGET_TYPE_RICH_TEXT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_RICH_TEXT);
}

pyobject_t get_WIDGET_TYPE_APP_BAR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_APP_BAR);
}

pyobject_t get_WIDGET_TYPE_GRID(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_GRID);
}

pyobject_t get_WIDGET_TYPE_GRID_ITEM(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_GRID_ITEM);
}

pyobject_t get_WIDGET_TYPE_ROW(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_ROW);
}

pyobject_t get_WIDGET_TYPE_COLUMN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_COLUMN);
}

pyobject_t get_WIDGET_TYPE_CALIBRATION_WIN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_TYPE_CALIBRATION_WIN);
}

pyobject_t get_WINDOW_STAGE_NONE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", WINDOW_STAGE_NONE);
}

pyobject_t get_WINDOW_STAGE_CREATED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", WINDOW_STAGE_CREATED);
}

pyobject_t get_WINDOW_STAGE_OPENED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", WINDOW_STAGE_OPENED);
}

pyobject_t get_WINDOW_STAGE_CLOSED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", WINDOW_STAGE_CLOSED);
}

pyobject_t get_WINDOW_STAGE_SUSPEND(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", WINDOW_STAGE_SUSPEND);
}

pyobject_t get_WINDOW_CLOSABLE_YES(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", WINDOW_CLOSABLE_YES);
}

pyobject_t get_WINDOW_CLOSABLE_NO(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", WINDOW_CLOSABLE_NO);
}

pyobject_t get_WINDOW_CLOSABLE_CONFIRM(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", WINDOW_CLOSABLE_CONFIRM);
}

pyobject_t get_WIDGET_STATE_NONE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_STATE_NONE);
}

pyobject_t get_WIDGET_STATE_NORMAL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_STATE_NORMAL);
}

pyobject_t get_WIDGET_STATE_CHANGED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_STATE_CHANGED);
}

pyobject_t get_WIDGET_STATE_PRESSED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_STATE_PRESSED);
}

pyobject_t get_WIDGET_STATE_OVER(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_STATE_OVER);
}

pyobject_t get_WIDGET_STATE_DISABLE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_STATE_DISABLE);
}

pyobject_t get_WIDGET_STATE_FOCUSED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_STATE_FOCUSED);
}

pyobject_t get_WIDGET_STATE_CHECKED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_STATE_CHECKED);
}

pyobject_t get_WIDGET_STATE_UNCHECKED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_STATE_UNCHECKED);
}

pyobject_t get_WIDGET_STATE_EMPTY(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_STATE_EMPTY);
}

pyobject_t get_WIDGET_STATE_EMPTY_FOCUS(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_STATE_EMPTY_FOCUS);
}

pyobject_t get_WIDGET_STATE_ERROR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_STATE_ERROR);
}

pyobject_t get_WIDGET_STATE_SELECTED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_STATE_SELECTED);
}

pyobject_t get_WIDGET_STATE_NORMAL_OF_CHECKED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_STATE_NORMAL_OF_CHECKED);
}

pyobject_t get_WIDGET_STATE_PRESSED_OF_CHECKED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_STATE_PRESSED_OF_CHECKED);
}

pyobject_t get_WIDGET_STATE_OVER_OF_CHECKED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_STATE_OVER_OF_CHECKED);
}

pyobject_t get_WIDGET_STATE_DISABLE_OF_CHECKED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_STATE_DISABLE_OF_CHECKED);
}

pyobject_t get_WIDGET_STATE_FOCUSED_OF_CHECKED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_STATE_FOCUSED_OF_CHECKED);
}

pyobject_t get_WIDGET_STATE_NORMAL_OF_ACTIVE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_STATE_NORMAL_OF_ACTIVE);
}

pyobject_t get_WIDGET_STATE_PRESSED_OF_ACTIVE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_STATE_PRESSED_OF_ACTIVE);
}

pyobject_t get_WIDGET_STATE_OVER_OF_ACTIVE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_STATE_OVER_OF_ACTIVE);
}

pyobject_t get_WIDGET_STATE_DISABLE_OF_ACTIVE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_STATE_DISABLE_OF_ACTIVE);
}

pyobject_t get_WIDGET_STATE_FOCUSED_OF_ACTIVE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_STATE_FOCUSED_OF_ACTIVE);
}

pyobject_t get_WIDGET_CURSOR_DEFAULT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_CURSOR_DEFAULT);
}

pyobject_t get_WIDGET_CURSOR_EDIT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_CURSOR_EDIT);
}

pyobject_t get_WIDGET_CURSOR_HAND(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_CURSOR_HAND);
}

pyobject_t get_WIDGET_CURSOR_WAIT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_CURSOR_WAIT);
}

pyobject_t get_WIDGET_CURSOR_CROSS(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_CURSOR_CROSS);
}

pyobject_t get_WIDGET_CURSOR_NO(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_CURSOR_NO);
}

pyobject_t get_WIDGET_CURSOR_SIZENWSE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_CURSOR_SIZENWSE);
}

pyobject_t get_WIDGET_CURSOR_SIZENESW(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_CURSOR_SIZENESW);
}

pyobject_t get_WIDGET_CURSOR_SIZEWE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_CURSOR_SIZEWE);
}

pyobject_t get_WIDGET_CURSOR_SIZENS(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_CURSOR_SIZENS);
}

pyobject_t get_WIDGET_CURSOR_SIZEALL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", WIDGET_CURSOR_SIZEALL);
}

pyobject_t wrap_widget_count_children(pyobject_t self, pyobject_t pyargs) {
  int32_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (int32_t)widget_count_children(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_get_child(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;
  int32_t index = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &index)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)widget_get_child(widget, index);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_widget_get_native_window(pyobject_t self, pyobject_t pyargs) {
  native_window_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (native_window_t*)widget_get_native_window(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_widget_index_of(pyobject_t self, pyobject_t pyargs) {
  int32_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (int32_t)widget_index_of(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_close_window(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_close_window(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_move(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  xy_t x = 0;
  xy_t y = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ii" , &parse_voidp, &widget, &x, &y)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_move(widget, x, y);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_resize(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ii" , &parse_voidp, &widget, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_resize(widget, w, h);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_move_resize(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &widget, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_move_resize(widget, x, y, w, h);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_value(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_value(widget, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_animate_value_to(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t value = 0;
  uint32_t duration = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ii" , &parse_voidp, &widget, &value, &duration)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_animate_value_to(widget, value, duration);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_add_value(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t delta = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &delta)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_add_value(widget, delta);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_is_style_exist(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  widget_t* widget = NULL;
  const char* style_name = NULL;
  const char* state_name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&ss" , &parse_voidp, &widget, &style_name, &state_name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)widget_is_style_exist(widget, style_name, state_name);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_widget_use_style(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* style = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &style)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_use_style(widget, style);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_text_utf8(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* text = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &text)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_text_utf8(widget, text);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_child_text_utf8(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* name = NULL;
  const char* text = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&ss" , &parse_voidp, &widget, &name, &text)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_child_text_utf8(widget, name, text);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_child_text_with_double(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* name = NULL;
  const char* format = NULL;
  double value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ssd" , &parse_voidp, &widget, &name, &format, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_child_text_with_double(widget, name, format, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_child_text_with_int(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* name = NULL;
  const char* format = NULL;
  int value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ssi" , &parse_voidp, &widget, &name, &format, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_child_text_with_int(widget, name, format, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_tr_text(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* text = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &text)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_tr_text(widget, text);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_get_value(pyobject_t self, pyobject_t pyargs) {
  int32_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (int32_t)widget_get_value(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_get_text(pyobject_t self, pyobject_t pyargs) {
  const wchar_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (const wchar_t*)widget_get_text(widget);
  return Py_BuildValue("u", ret);
}

pyobject_t wrap_widget_set_name(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_name(widget, name);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_theme(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_theme(widget, name);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_pointer_cursor(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* cursor = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &cursor)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_pointer_cursor(widget, cursor);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_animation(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* animation = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &animation)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_animation(widget, animation);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_create_animator(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* animation = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &animation)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_create_animator(widget, animation);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_start_animator(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_start_animator(widget, name);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_animator_time_scale(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* name = NULL;
  float_t time_scale = 0;

  if (!PyArg_ParseTuple(pyargs, "O&sf" , &parse_voidp, &widget, &name, &time_scale)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_animator_time_scale(widget, name, time_scale);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_pause_animator(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_pause_animator(widget, name);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_stop_animator(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_stop_animator(widget, name);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_destroy_animator(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_destroy_animator(widget, name);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_enable(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t enable = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &enable)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_enable(widget, enable);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_feedback(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t feedback = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &feedback)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_feedback(widget, feedback);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_auto_adjust_size(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t auto_adjust_size = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &auto_adjust_size)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_auto_adjust_size(widget, auto_adjust_size);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_floating(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t floating = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &floating)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_floating(widget, floating);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_focused(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t focused = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &focused)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_focused(widget, focused);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_focusable(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t focusable = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &focusable)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_focusable(widget, focusable);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_state(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* state = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &state)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_state(widget, state);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_opacity(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint8_t opacity = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &opacity)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_opacity(widget, opacity);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_dirty_rect_tolerance(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint16_t dirty_rect_tolerance = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &dirty_rect_tolerance)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_dirty_rect_tolerance(widget, dirty_rect_tolerance);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_destroy_children(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_destroy_children(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_add_child(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  widget_t* child = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&O&" , &parse_voidp, &widget, &parse_voidp, &child)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_add_child(widget, child);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_remove_child(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  widget_t* child = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&O&" , &parse_voidp, &widget, &parse_voidp, &child)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_remove_child(widget, child);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_insert_child(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t index = 0;
  widget_t* child = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&iO&" , &parse_voidp, &widget, &index, &parse_voidp, &child)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_insert_child(widget, index, child);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_restack(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t index = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &index)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_restack(widget, index);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_child(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;
  const char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)widget_child(widget, name);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_widget_lookup(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;
  const char* name = NULL;
  bool_t recursive = 0;

  if (!PyArg_ParseTuple(pyargs, "O&sb" , &parse_voidp, &widget, &name, &recursive)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)widget_lookup(widget, name, recursive);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_widget_lookup_by_type(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;
  const char* type = NULL;
  bool_t recursive = 0;

  if (!PyArg_ParseTuple(pyargs, "O&sb" , &parse_voidp, &widget, &type, &recursive)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)widget_lookup_by_type(widget, type, recursive);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_widget_set_visible(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t visible = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &visible)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_visible(widget, visible);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_visible_only(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t visible = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &visible)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_visible_only(widget, visible);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_sensitive(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t sensitive = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &sensitive)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_sensitive(widget, sensitive);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_off(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t id = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &id)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_off(widget, id);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_invalidate_force(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const rect_t* r = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&O&" , &parse_voidp, &widget, &parse_voidp, &r)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_invalidate_force(widget, r);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_prop_str(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* name = NULL;
  const char* v = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&ss" , &parse_voidp, &widget, &name, &v)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_prop_str(widget, name, v);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_get_prop_str(pyobject_t self, pyobject_t pyargs) {
  const char* ret = NULL;
  widget_t* widget = NULL;
  const char* name = NULL;
  const char* defval = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&ss" , &parse_voidp, &widget, &name, &defval)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (const char*)widget_get_prop_str(widget, name, defval);
  return Py_BuildValue("s", ret);
}

pyobject_t wrap_widget_set_prop_pointer(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* name = NULL;
  void* v = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&sO&" , &parse_voidp, &widget, &name, &parse_voidp, &v)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_prop_pointer(widget, name, v);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_get_prop_pointer(pyobject_t self, pyobject_t pyargs) {
  void* ret = NULL;
  widget_t* widget = NULL;
  const char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (void*)widget_get_prop_pointer(widget, name);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_widget_set_prop_int(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* name = NULL;
  int32_t v = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &widget, &name, &v)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_prop_int(widget, name, v);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_get_prop_int(pyobject_t self, pyobject_t pyargs) {
  int32_t ret = 0;
  widget_t* widget = NULL;
  const char* name = NULL;
  int32_t defval = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &widget, &name, &defval)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (int32_t)widget_get_prop_int(widget, name, defval);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_prop_bool(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* name = NULL;
  bool_t v = 0;

  if (!PyArg_ParseTuple(pyargs, "O&sb" , &parse_voidp, &widget, &name, &v)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_prop_bool(widget, name, v);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_get_prop_bool(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  widget_t* widget = NULL;
  const char* name = NULL;
  bool_t defval = 0;

  if (!PyArg_ParseTuple(pyargs, "O&sb" , &parse_voidp, &widget, &name, &defval)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)widget_get_prop_bool(widget, name, defval);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_widget_is_window_opened(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)widget_is_window_opened(widget);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_widget_is_parent_of(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  widget_t* widget = NULL;
  widget_t* child = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&O&" , &parse_voidp, &widget, &parse_voidp, &child)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)widget_is_parent_of(widget, child);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_widget_is_direct_parent_of(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  widget_t* widget = NULL;
  widget_t* child = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&O&" , &parse_voidp, &widget, &parse_voidp, &child)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)widget_is_direct_parent_of(widget, child);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_widget_is_window(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)widget_is_window(widget);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_widget_is_system_bar(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)widget_is_system_bar(widget);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_widget_is_normal_window(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)widget_is_normal_window(widget);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_widget_is_dialog(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)widget_is_dialog(widget);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_widget_is_popup(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)widget_is_popup(widget);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_widget_is_overlay(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)widget_is_overlay(widget);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_widget_is_opened_dialog(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)widget_is_opened_dialog(widget);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_widget_is_opened_popup(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)widget_is_opened_popup(widget);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_widget_is_keyboard(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)widget_is_keyboard(widget);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_widget_is_designing_window(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)widget_is_designing_window(widget);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_widget_is_window_manager(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)widget_is_window_manager(widget);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_widget_get_window(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)widget_get_window(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_widget_get_window_manager(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)widget_get_window_manager(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_widget_get_type(pyobject_t self, pyobject_t pyargs) {
  const char* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (const char*)widget_get_type(widget);
  return Py_BuildValue("s", ret);
}

pyobject_t wrap_widget_clone(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;
  widget_t* parent = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&O&" , &parse_voidp, &widget, &parse_voidp, &parent)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)widget_clone(widget, parent);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_widget_equal(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  widget_t* widget = NULL;
  widget_t* other = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&O&" , &parse_voidp, &widget, &parse_voidp, &other)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)widget_equal(widget, other);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_widget_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)widget_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_widget_destroy(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_destroy(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_destroy_async(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_destroy_async(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_unref(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_unref(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_stroke_border_rect(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  canvas_t* c = NULL;
  const rect_t* r = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&O&O&" , &parse_voidp, &widget, &parse_voidp, &c, &parse_voidp, &r)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_stroke_border_rect(widget, c, r);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_fill_bg_rect(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  canvas_t* c = NULL;
  const rect_t* r = NULL;
  image_draw_type_t draw_type = 0;

  if (!PyArg_ParseTuple(pyargs, "O&O&O&i" , &parse_voidp, &widget, &parse_voidp, &c, &parse_voidp, &r, &draw_type)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_fill_bg_rect(widget, c, r, draw_type);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_fill_fg_rect(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  canvas_t* c = NULL;
  const rect_t* r = NULL;
  image_draw_type_t draw_type = 0;

  if (!PyArg_ParseTuple(pyargs, "O&O&O&i" , &parse_voidp, &widget, &parse_voidp, &c, &parse_voidp, &r, &draw_type)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_fill_fg_rect(widget, c, r, draw_type);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_dispatch_to_target(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  event_t* e = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&O&" , &parse_voidp, &widget, &parse_voidp, &e)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_dispatch_to_target(widget, e);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_dispatch_to_key_target(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  event_t* e = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&O&" , &parse_voidp, &widget, &parse_voidp, &e)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_dispatch_to_key_target(widget, e);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_get_style_type(pyobject_t self, pyobject_t pyargs) {
  const char* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (const char*)widget_get_style_type(widget);
  return Py_BuildValue("s", ret);
}

pyobject_t wrap_widget_update_style(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_update_style(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_update_style_recursive(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_update_style_recursive(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_as_key_target(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_as_key_target(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_focus_next(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_focus_next(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_focus_prev(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_focus_prev(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_get_state_for_style(pyobject_t self, pyobject_t pyargs) {
  const char* ret = NULL;
  widget_t* widget = NULL;
  bool_t active = 0;
  bool_t checked = 0;

  if (!PyArg_ParseTuple(pyargs, "O&bb" , &parse_voidp, &widget, &active, &checked)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (const char*)widget_get_state_for_style(widget, active, checked);
  return Py_BuildValue("s", ret);
}

pyobject_t wrap_widget_layout(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_layout(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_self_layout(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* params = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &params)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_self_layout(widget, params);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_children_layout(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* params = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &params)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_children_layout(widget, params);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_self_layout_params(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* x = NULL;
  const char* y = NULL;
  const char* w = NULL;
  const char* h = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&ssss" , &parse_voidp, &widget, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_self_layout_params(widget, x, y, w, h);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_style_int(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* state_and_name = NULL;
  int32_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &widget, &state_and_name, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_style_int(widget, state_and_name, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_style_str(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* state_and_name = NULL;
  const char* value = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&ss" , &parse_voidp, &widget, &state_and_name, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_style_str(widget, state_and_name, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_set_style_color(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* state_and_name = NULL;
  uint32_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &widget, &state_and_name, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)widget_set_style_color(widget, state_and_name, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_widget_t_get_prop_x(pyobject_t self, pyobject_t pyargs) {
  widget_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->x);
}

pyobject_t wrap_widget_t_get_prop_y(pyobject_t self, pyobject_t pyargs) {
  widget_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->y);
}

pyobject_t wrap_widget_t_get_prop_w(pyobject_t self, pyobject_t pyargs) {
  widget_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->w);
}

pyobject_t wrap_widget_t_get_prop_h(pyobject_t self, pyobject_t pyargs) {
  widget_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->h);
}

pyobject_t wrap_widget_t_get_prop_name(pyobject_t self, pyobject_t pyargs) {
  widget_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->name);
}

pyobject_t wrap_widget_t_get_prop_pointer_cursor(pyobject_t self, pyobject_t pyargs) {
  widget_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->pointer_cursor);
}

pyobject_t wrap_widget_t_get_prop_tr_text(pyobject_t self, pyobject_t pyargs) {
  widget_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->tr_text);
}

pyobject_t wrap_widget_t_get_prop_style(pyobject_t self, pyobject_t pyargs) {
  widget_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->style);
}

pyobject_t wrap_widget_t_get_prop_animation(pyobject_t self, pyobject_t pyargs) {
  widget_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->animation);
}

pyobject_t wrap_widget_t_get_prop_enable(pyobject_t self, pyobject_t pyargs) {
  widget_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->enable);
}

pyobject_t wrap_widget_t_get_prop_feedback(pyobject_t self, pyobject_t pyargs) {
  widget_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->feedback);
}

pyobject_t wrap_widget_t_get_prop_visible(pyobject_t self, pyobject_t pyargs) {
  widget_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->visible);
}

pyobject_t wrap_widget_t_get_prop_sensitive(pyobject_t self, pyobject_t pyargs) {
  widget_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->sensitive);
}

pyobject_t wrap_widget_t_get_prop_focusable(pyobject_t self, pyobject_t pyargs) {
  widget_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->focusable);
}

pyobject_t wrap_widget_t_get_prop_with_focus_state(pyobject_t self, pyobject_t pyargs) {
  widget_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->with_focus_state);
}

pyobject_t wrap_widget_t_get_prop_auto_adjust_size(pyobject_t self, pyobject_t pyargs) {
  widget_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->auto_adjust_size);
}

pyobject_t wrap_widget_t_get_prop_floating(pyobject_t self, pyobject_t pyargs) {
  widget_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->floating);
}

pyobject_t wrap_widget_t_get_prop_dirty_rect_tolerance(pyobject_t self, pyobject_t pyargs) {
  widget_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->dirty_rect_tolerance);
}

pyobject_t wrap_widget_t_get_prop_parent(pyobject_t self, pyobject_t pyargs) {
  widget_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return PyLong_FromVoidPtr((void*)obj->parent);
}

pyobject_t wrap_app_conf_save(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;

  if (!PyArg_ParseTuple(pyargs, "" )) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)app_conf_save();
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_app_conf_reload(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;

  if (!PyArg_ParseTuple(pyargs, "" )) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)app_conf_reload();
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_app_conf_deinit(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;

  if (!PyArg_ParseTuple(pyargs, "" )) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)app_conf_deinit();
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_app_conf_exist(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  const char* key = NULL;

  if (!PyArg_ParseTuple(pyargs, "s" , &key)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)app_conf_exist(key);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_app_conf_set_int(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  const char* key = NULL;
  int32_t v = 0;

  if (!PyArg_ParseTuple(pyargs, "si" , &key, &v)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)app_conf_set_int(key, v);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_app_conf_set_int64(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  const char* key = NULL;
  int64_t v = 0;

  if (!PyArg_ParseTuple(pyargs, "si" , &key, &v)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)app_conf_set_int64(key, v);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_app_conf_set_bool(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  const char* key = NULL;
  bool_t v = 0;

  if (!PyArg_ParseTuple(pyargs, "sb" , &key, &v)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)app_conf_set_bool(key, v);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_app_conf_set_double(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  const char* key = NULL;
  double v = 0;

  if (!PyArg_ParseTuple(pyargs, "sd" , &key, &v)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)app_conf_set_double(key, v);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_app_conf_set_str(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  const char* key = NULL;
  const char* v = NULL;

  if (!PyArg_ParseTuple(pyargs, "ss" , &key, &v)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)app_conf_set_str(key, v);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_app_conf_get_int(pyobject_t self, pyobject_t pyargs) {
  int32_t ret = 0;
  const char* key = NULL;
  int32_t defval = 0;

  if (!PyArg_ParseTuple(pyargs, "si" , &key, &defval)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (int32_t)app_conf_get_int(key, defval);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_app_conf_get_int64(pyobject_t self, pyobject_t pyargs) {
  int64_t ret = 0;
  const char* key = NULL;
  int64_t defval = 0;

  if (!PyArg_ParseTuple(pyargs, "si" , &key, &defval)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (int64_t)app_conf_get_int64(key, defval);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_app_conf_get_bool(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  const char* key = NULL;
  bool_t defval = 0;

  if (!PyArg_ParseTuple(pyargs, "sb" , &key, &defval)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)app_conf_get_bool(key, defval);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_app_conf_get_double(pyobject_t self, pyobject_t pyargs) {
  double ret = 0;
  const char* key = NULL;
  double defval = 0;

  if (!PyArg_ParseTuple(pyargs, "sd" , &key, &defval)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (double)app_conf_get_double(key, defval);
  return Py_BuildValue("d", ret);
}

pyobject_t wrap_app_conf_get_str(pyobject_t self, pyobject_t pyargs) {
  const char* ret = NULL;
  const char* key = NULL;
  const char* defval = NULL;

  if (!PyArg_ParseTuple(pyargs, "ss" , &key, &defval)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (const char*)app_conf_get_str(key, defval);
  return Py_BuildValue("s", ret);
}

pyobject_t wrap_app_conf_remove(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  const char* key = NULL;

  if (!PyArg_ParseTuple(pyargs, "s" , &key)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)app_conf_remove(key);
  return Py_BuildValue("i", ret);
}

pyobject_t get_RET_OK(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", RET_OK);
}

pyobject_t get_RET_OOM(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", RET_OOM);
}

pyobject_t get_RET_FAIL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", RET_FAIL);
}

pyobject_t get_RET_NOT_IMPL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", RET_NOT_IMPL);
}

pyobject_t get_RET_QUIT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", RET_QUIT);
}

pyobject_t get_RET_FOUND(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", RET_FOUND);
}

pyobject_t get_RET_BUSY(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", RET_BUSY);
}

pyobject_t get_RET_REMOVE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", RET_REMOVE);
}

pyobject_t get_RET_REPEAT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", RET_REPEAT);
}

pyobject_t get_RET_NOT_FOUND(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", RET_NOT_FOUND);
}

pyobject_t get_RET_DONE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", RET_DONE);
}

pyobject_t get_RET_STOP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", RET_STOP);
}

pyobject_t get_RET_SKIP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", RET_SKIP);
}

pyobject_t get_RET_CONTINUE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", RET_CONTINUE);
}

pyobject_t get_RET_OBJECT_CHANGED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", RET_OBJECT_CHANGED);
}

pyobject_t get_RET_ITEMS_CHANGED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", RET_ITEMS_CHANGED);
}

pyobject_t get_RET_BAD_PARAMS(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", RET_BAD_PARAMS);
}

pyobject_t get_RET_TIMEOUT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", RET_TIMEOUT);
}

pyobject_t get_RET_CRC(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", RET_CRC);
}

pyobject_t get_RET_IO(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", RET_IO);
}

pyobject_t get_RET_EOS(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", RET_EOS);
}

pyobject_t get_RET_NOT_MODIFIED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", RET_NOT_MODIFIED);
}

pyobject_t wrap_time_now_s(pyobject_t self, pyobject_t pyargs) {
  uint64_t ret = 0;

  if (!PyArg_ParseTuple(pyargs, "" )) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (uint64_t)time_now_s();
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_time_now_ms(pyobject_t self, pyobject_t pyargs) {
  uint64_t ret = 0;

  if (!PyArg_ParseTuple(pyargs, "" )) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (uint64_t)time_now_ms();
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_time_now_us(pyobject_t self, pyobject_t pyargs) {
  uint64_t ret = 0;

  if (!PyArg_ParseTuple(pyargs, "" )) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (uint64_t)time_now_us();
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_rlog_create(pyobject_t self, pyobject_t pyargs) {
  rlog_t* ret = NULL;
  const char* filename_pattern = NULL;
  uint32_t max_size = 0;
  uint32_t buff_size = 0;

  if (!PyArg_ParseTuple(pyargs, "sii" , &filename_pattern, &max_size, &buff_size)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (rlog_t*)rlog_create(filename_pattern, max_size, buff_size);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_rlog_write(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  rlog_t* log = NULL;
  const char* str = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &log, &str)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)rlog_write(log, str);
  return Py_BuildValue("i", ret);
}

pyobject_t get_BIDI_TYPE_AUTO(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", BIDI_TYPE_AUTO);
}

pyobject_t get_BIDI_TYPE_LTR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", BIDI_TYPE_LTR);
}

pyobject_t get_BIDI_TYPE_RTL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", BIDI_TYPE_RTL);
}

pyobject_t get_BIDI_TYPE_LRO(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", BIDI_TYPE_LRO);
}

pyobject_t get_BIDI_TYPE_RLO(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", BIDI_TYPE_RLO);
}

pyobject_t get_BIDI_TYPE_WLTR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", BIDI_TYPE_WLTR);
}

pyobject_t get_BIDI_TYPE_WRTL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", BIDI_TYPE_WRTL);
}

pyobject_t get_OBJECT_PROP_SIZE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", OBJECT_PROP_SIZE);
}

pyobject_t get_OBJECT_PROP_CHECKED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", OBJECT_PROP_CHECKED);
}

pyobject_t get_OBJECT_CMD_SAVE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", OBJECT_CMD_SAVE);
}

pyobject_t get_OBJECT_CMD_RELOAD(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", OBJECT_CMD_RELOAD);
}

pyobject_t get_OBJECT_CMD_MOVE_UP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", OBJECT_CMD_MOVE_UP);
}

pyobject_t get_OBJECT_CMD_MOVE_DOWN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", OBJECT_CMD_MOVE_DOWN);
}

pyobject_t get_OBJECT_CMD_REMOVE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", OBJECT_CMD_REMOVE);
}

pyobject_t get_OBJECT_CMD_REMOVE_CHECKED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", OBJECT_CMD_REMOVE_CHECKED);
}

pyobject_t get_OBJECT_CMD_CLEAR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", OBJECT_CMD_CLEAR);
}

pyobject_t get_OBJECT_CMD_ADD(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", OBJECT_CMD_ADD);
}

pyobject_t get_OBJECT_CMD_DETAIL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", OBJECT_CMD_DETAIL);
}

pyobject_t get_OBJECT_CMD_EDIT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", OBJECT_CMD_EDIT);
}

pyobject_t get_IMAGE_DRAW_DEFAULT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", IMAGE_DRAW_DEFAULT);
}

pyobject_t get_IMAGE_DRAW_CENTER(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", IMAGE_DRAW_CENTER);
}

pyobject_t get_IMAGE_DRAW_ICON(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", IMAGE_DRAW_ICON);
}

pyobject_t get_IMAGE_DRAW_SCALE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", IMAGE_DRAW_SCALE);
}

pyobject_t get_IMAGE_DRAW_SCALE_AUTO(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", IMAGE_DRAW_SCALE_AUTO);
}

pyobject_t get_IMAGE_DRAW_SCALE_DOWN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", IMAGE_DRAW_SCALE_DOWN);
}

pyobject_t get_IMAGE_DRAW_SCALE_W(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", IMAGE_DRAW_SCALE_W);
}

pyobject_t get_IMAGE_DRAW_SCALE_H(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", IMAGE_DRAW_SCALE_H);
}

pyobject_t get_IMAGE_DRAW_REPEAT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", IMAGE_DRAW_REPEAT);
}

pyobject_t get_IMAGE_DRAW_REPEAT_X(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", IMAGE_DRAW_REPEAT_X);
}

pyobject_t get_IMAGE_DRAW_REPEAT_Y(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", IMAGE_DRAW_REPEAT_Y);
}

pyobject_t get_IMAGE_DRAW_REPEAT_Y_INVERSE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", IMAGE_DRAW_REPEAT_Y_INVERSE);
}

pyobject_t get_IMAGE_DRAW_PATCH9(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", IMAGE_DRAW_PATCH9);
}

pyobject_t get_IMAGE_DRAW_PATCH3_X(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", IMAGE_DRAW_PATCH3_X);
}

pyobject_t get_IMAGE_DRAW_PATCH3_Y(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", IMAGE_DRAW_PATCH3_Y);
}

pyobject_t get_IMAGE_DRAW_PATCH3_X_SCALE_Y(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", IMAGE_DRAW_PATCH3_X_SCALE_Y);
}

pyobject_t get_IMAGE_DRAW_PATCH3_Y_SCALE_X(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", IMAGE_DRAW_PATCH3_Y_SCALE_X);
}

pyobject_t get_IMAGE_DRAW_REPEAT9(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", IMAGE_DRAW_REPEAT9);
}

pyobject_t get_IMAGE_DRAW_REPEAT3_X(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", IMAGE_DRAW_REPEAT3_X);
}

pyobject_t get_IMAGE_DRAW_REPEAT3_Y(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", IMAGE_DRAW_REPEAT3_Y);
}

pyobject_t wrap_named_value_create(pyobject_t self, pyobject_t pyargs) {
  named_value_t* ret = NULL;

  if (!PyArg_ParseTuple(pyargs, "" )) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (named_value_t*)named_value_create();
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_named_value_cast(pyobject_t self, pyobject_t pyargs) {
  named_value_t* ret = NULL;
  named_value_t* nv = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &nv)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (named_value_t*)named_value_cast(nv);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_named_value_set_name(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  named_value_t* nv = NULL;
  const char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &nv, &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)named_value_set_name(nv, name);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_named_value_set_value(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  named_value_t* nv = NULL;
  const value_t* value = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&O&" , &parse_voidp, &nv, &parse_voidp, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)named_value_set_value(nv, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_named_value_get_value(pyobject_t self, pyobject_t pyargs) {
  value_t* ret = NULL;
  named_value_t* nv = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &nv)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (value_t*)named_value_get_value(nv);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_named_value_t_get_prop_name(pyobject_t self, pyobject_t pyargs) {
  named_value_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->name);
}

pyobject_t get_MIME_TYPE_APPLICATION_ENVOY(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_ENVOY);
}

pyobject_t get_MIME_TYPE_APPLICATION_FRACTALS(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_FRACTALS);
}

pyobject_t get_MIME_TYPE_APPLICATION_FUTURESPLASH(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_FUTURESPLASH);
}

pyobject_t get_MIME_TYPE_APPLICATION_HTA(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_HTA);
}

pyobject_t get_MIME_TYPE_APPLICATION_JSON(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_JSON);
}

pyobject_t get_MIME_TYPE_APPLICATION_UBJSON(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_UBJSON);
}

pyobject_t get_MIME_TYPE_APPLICATION_MAC_BINHEX40(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_MAC_BINHEX40);
}

pyobject_t get_MIME_TYPE_APPLICATION_MSWORD(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_MSWORD);
}

pyobject_t get_MIME_TYPE_APPLICATION_OCTET_STREAM(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_OCTET_STREAM);
}

pyobject_t get_MIME_TYPE_APPLICATION_ODA(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_ODA);
}

pyobject_t get_MIME_TYPE_APPLICATION_OLESCRIPT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_OLESCRIPT);
}

pyobject_t get_MIME_TYPE_APPLICATION_PDF(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_PDF);
}

pyobject_t get_MIME_TYPE_APPLICATION_PICS_RULES(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_PICS_RULES);
}

pyobject_t get_MIME_TYPE_APPLICATION_PKCS10(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_PKCS10);
}

pyobject_t get_MIME_TYPE_APPLICATION_PKIX_CRL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_PKIX_CRL);
}

pyobject_t get_MIME_TYPE_APPLICATION_POSTSCRIPT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_POSTSCRIPT);
}

pyobject_t get_MIME_TYPE_APPLICATION_RTF(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_RTF);
}

pyobject_t get_MIME_TYPE_APPLICATION_VND_MS_EXCEL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_VND_MS_EXCEL);
}

pyobject_t get_MIME_TYPE_APPLICATION_VND_MS_OUTLOOK(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_VND_MS_OUTLOOK);
}

pyobject_t get_MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE);
}

pyobject_t get_MIME_TYPE_APPLICATION_VND_MS_PKISECCAT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_VND_MS_PKISECCAT);
}

pyobject_t get_MIME_TYPE_APPLICATION_VND_MS_PKISTL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_VND_MS_PKISTL);
}

pyobject_t get_MIME_TYPE_APPLICATION_VND_MS_POWERPOINT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_VND_MS_POWERPOINT);
}

pyobject_t get_MIME_TYPE_APPLICATION_VND_MS_PROJECT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_VND_MS_PROJECT);
}

pyobject_t get_MIME_TYPE_APPLICATION_VND_MS_WORKS(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_VND_MS_WORKS);
}

pyobject_t get_MIME_TYPE_APPLICATION_WINHLP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_WINHLP);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_BCPIO(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_BCPIO);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_CDF(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_CDF);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_COMPRESS(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_COMPRESS);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_COMPRESSED(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_COMPRESSED);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_CPIO(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_CPIO);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_CSH(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_CSH);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_DIRECTOR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_DIRECTOR);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_DVI(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_DVI);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_GTAR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_GTAR);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_GZIP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_GZIP);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_HDF(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_HDF);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_IPHONE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_IPHONE);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_JAVASCRIPT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_JAVASCRIPT);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_LATEX(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_LATEX);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_MSACCESS(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_MSACCESS);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_MSCARDFILE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_MSCARDFILE);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_MSCLIP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_MSCLIP);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_MSDOWNLOAD(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_MSDOWNLOAD);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_MSMEDIAVIEW(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_MSMEDIAVIEW);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_MSMETAFILE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_MSMETAFILE);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_MSMONEY(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_MSMONEY);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_MSPUBLISHER(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_MSPUBLISHER);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_MSSCHEDULE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_MSSCHEDULE);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_MSTERMINAL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_MSTERMINAL);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_MSWRITE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_MSWRITE);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_NETCDF(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_NETCDF);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_PERFMON(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_PERFMON);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_PKCS12(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_PKCS12);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_SH(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_SH);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_SHAR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_SHAR);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_STUFFIT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_STUFFIT);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_SV4CPIO(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_SV4CPIO);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_SV4CRC(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_SV4CRC);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_TAR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_TAR);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_TCL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_TCL);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_TEX(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_TEX);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_TEXINFO(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_TEXINFO);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_TROFF(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_TROFF);
}

pyobject_t get_MIME_TYPE_APPLICATION_X_USTAR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_X_USTAR);
}

pyobject_t get_MIME_TYPE_APPLICATION_ZIP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_APPLICATION_ZIP);
}

pyobject_t get_MIME_TYPE_AUDIO_BASIC(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_AUDIO_BASIC);
}

pyobject_t get_MIME_TYPE_AUDIO_MID(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_AUDIO_MID);
}

pyobject_t get_MIME_TYPE_AUDIO_MPEG(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_AUDIO_MPEG);
}

pyobject_t get_MIME_TYPE_AUDIO_X_AIFF(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_AUDIO_X_AIFF);
}

pyobject_t get_MIME_TYPE_AUDIO_X_MPEGURL(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_AUDIO_X_MPEGURL);
}

pyobject_t get_MIME_TYPE_AUDIO_X_WAV(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_AUDIO_X_WAV);
}

pyobject_t get_MIME_TYPE_IMAGE_BMP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_IMAGE_BMP);
}

pyobject_t get_MIME_TYPE_IMAGE_CIS_COD(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_IMAGE_CIS_COD);
}

pyobject_t get_MIME_TYPE_IMAGE_GIF(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_IMAGE_GIF);
}

pyobject_t get_MIME_TYPE_IMAGE_IEF(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_IMAGE_IEF);
}

pyobject_t get_MIME_TYPE_IMAGE_JPEG(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_IMAGE_JPEG);
}

pyobject_t get_MIME_TYPE_IMAGE_PIPEG(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_IMAGE_PIPEG);
}

pyobject_t get_MIME_TYPE_IMAGE_SVG_XML(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_IMAGE_SVG_XML);
}

pyobject_t get_MIME_TYPE_IMAGE_TIFF(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_IMAGE_TIFF);
}

pyobject_t get_MIME_TYPE_IMAGE_X_CMX(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_IMAGE_X_CMX);
}

pyobject_t get_MIME_TYPE_IMAGE_X_ICON(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_IMAGE_X_ICON);
}

pyobject_t get_MIME_TYPE_IMAGE_X_RGB(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_IMAGE_X_RGB);
}

pyobject_t get_MIME_TYPE_IMAGE_X_XBITMAP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_IMAGE_X_XBITMAP);
}

pyobject_t get_MIME_TYPE_IMAGE_X_XPIXMAP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_IMAGE_X_XPIXMAP);
}

pyobject_t get_MIME_TYPE_IMAGE_X_XWINDOWDUMP(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_IMAGE_X_XWINDOWDUMP);
}

pyobject_t get_MIME_TYPE_MESSAGE_RFC822(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_MESSAGE_RFC822);
}

pyobject_t get_MIME_TYPE_TEXT_CSS(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_TEXT_CSS);
}

pyobject_t get_MIME_TYPE_TEXT_H323(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_TEXT_H323);
}

pyobject_t get_MIME_TYPE_TEXT_HTML(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_TEXT_HTML);
}

pyobject_t get_MIME_TYPE_TEXT_IULS(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_TEXT_IULS);
}

pyobject_t get_MIME_TYPE_TEXT_PLAIN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_TEXT_PLAIN);
}

pyobject_t get_MIME_TYPE_TEXT_RICHTEXT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_TEXT_RICHTEXT);
}

pyobject_t get_MIME_TYPE_TEXT_SCRIPTLET(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_TEXT_SCRIPTLET);
}

pyobject_t get_MIME_TYPE_TEXT_WEBVIEWHTML(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_TEXT_WEBVIEWHTML);
}

pyobject_t get_MIME_TYPE_TEXT_X_COMPONENT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_TEXT_X_COMPONENT);
}

pyobject_t get_MIME_TYPE_TEXT_X_SETEXT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_TEXT_X_SETEXT);
}

pyobject_t get_MIME_TYPE_TEXT_X_VCARD(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_TEXT_X_VCARD);
}

pyobject_t get_MIME_TYPE_VIDEO_MPEG(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_VIDEO_MPEG);
}

pyobject_t get_MIME_TYPE_VIDEO_QUICKTIME(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_VIDEO_QUICKTIME);
}

pyobject_t get_MIME_TYPE_VIDEO_X_MSVIDEO(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("s", MIME_TYPE_VIDEO_X_MSVIDEO);
}

pyobject_t get_INDICATOR_DEFAULT_PAINT_AUTO(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", INDICATOR_DEFAULT_PAINT_AUTO);
}

pyobject_t get_INDICATOR_DEFAULT_PAINT_FILL_DOT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", INDICATOR_DEFAULT_PAINT_FILL_DOT);
}

pyobject_t get_INDICATOR_DEFAULT_PAINT_STROKE_DOT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", INDICATOR_DEFAULT_PAINT_STROKE_DOT);
}

pyobject_t get_INDICATOR_DEFAULT_PAINT_FILL_RECT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", INDICATOR_DEFAULT_PAINT_FILL_RECT);
}

pyobject_t get_INDICATOR_DEFAULT_PAINT_STROKE_RECT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", INDICATOR_DEFAULT_PAINT_STROKE_RECT);
}

pyobject_t wrap_canvas_get_width(pyobject_t self, pyobject_t pyargs) {
  wh_t ret = 0;
  canvas_t* c = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &c)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (wh_t)canvas_get_width(c);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_canvas_get_height(pyobject_t self, pyobject_t pyargs) {
  wh_t ret = 0;
  canvas_t* c = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &c)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (wh_t)canvas_get_height(c);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_canvas_get_clip_rect(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  canvas_t* c = NULL;
  rect_t* r = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&O&" , &parse_voidp, &c, &parse_voidp, &r)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)canvas_get_clip_rect(c, r);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_canvas_set_clip_rect(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  canvas_t* c = NULL;
  const rect_t* r = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&O&" , &parse_voidp, &c, &parse_voidp, &r)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)canvas_set_clip_rect(c, r);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_canvas_set_clip_rect_ex(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  canvas_t* c = NULL;
  const rect_t* r = NULL;
  bool_t translate = 0;

  if (!PyArg_ParseTuple(pyargs, "O&O&b" , &parse_voidp, &c, &parse_voidp, &r, &translate)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)canvas_set_clip_rect_ex(c, r, translate);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_canvas_set_fill_color_str(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  canvas_t* c = NULL;
  const char* color = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &c, &color)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)canvas_set_fill_color_str(c, color);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_canvas_set_text_color_str(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  canvas_t* c = NULL;
  const char* color = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &c, &color)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)canvas_set_text_color_str(c, color);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_canvas_set_stroke_color_str(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  canvas_t* c = NULL;
  const char* color = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &c, &color)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)canvas_set_stroke_color_str(c, color);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_canvas_set_global_alpha(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  canvas_t* c = NULL;
  uint8_t alpha = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &c, &alpha)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)canvas_set_global_alpha(c, alpha);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_canvas_translate(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  canvas_t* c = NULL;
  xy_t dx = 0;
  xy_t dy = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ii" , &parse_voidp, &c, &dx, &dy)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)canvas_translate(c, dx, dy);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_canvas_untranslate(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  canvas_t* c = NULL;
  xy_t dx = 0;
  xy_t dy = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ii" , &parse_voidp, &c, &dx, &dy)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)canvas_untranslate(c, dx, dy);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_canvas_draw_vline(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  canvas_t* c = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iii" , &parse_voidp, &c, &x, &y, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)canvas_draw_vline(c, x, y, h);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_canvas_draw_hline(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  canvas_t* c = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iii" , &parse_voidp, &c, &x, &y, &w)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)canvas_draw_hline(c, x, y, w);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_canvas_fill_rect(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  canvas_t* c = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &c, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)canvas_fill_rect(c, x, y, w, h);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_canvas_clear_rect(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  canvas_t* c = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &c, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)canvas_clear_rect(c, x, y, w, h);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_canvas_stroke_rect(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  canvas_t* c = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &c, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)canvas_stroke_rect(c, x, y, w, h);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_canvas_set_font(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  canvas_t* c = NULL;
  const char* name = NULL;
  font_size_t size = 0;

  if (!PyArg_ParseTuple(pyargs, "O&si" , &parse_voidp, &c, &name, &size)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)canvas_set_font(c, name, size);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_canvas_measure_utf8(pyobject_t self, pyobject_t pyargs) {
  float_t ret = 0;
  canvas_t* c = NULL;
  const char* str = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &c, &str)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (float_t)canvas_measure_utf8(c, str);
  return Py_BuildValue("f", ret);
}

pyobject_t wrap_canvas_draw_utf8(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  canvas_t* c = NULL;
  const char* str = NULL;
  xy_t x = 0;
  xy_t y = 0;

  if (!PyArg_ParseTuple(pyargs, "O&sii" , &parse_voidp, &c, &str, &x, &y)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)canvas_draw_utf8(c, str, x, y);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_canvas_draw_utf8_in_rect(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  canvas_t* c = NULL;
  const char* str = NULL;
  const rect_t* r = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&sO&" , &parse_voidp, &c, &str, &parse_voidp, &r)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)canvas_draw_utf8_in_rect(c, str, r);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_canvas_draw_icon(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  canvas_t* c = NULL;
  bitmap_t* img = NULL;
  xy_t cx = 0;
  xy_t cy = 0;

  if (!PyArg_ParseTuple(pyargs, "O&O&ii" , &parse_voidp, &c, &parse_voidp, &img, &cx, &cy)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)canvas_draw_icon(c, img, cx, cy);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_canvas_draw_image(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  canvas_t* c = NULL;
  bitmap_t* img = NULL;
  const rect_t* src = NULL;
  const rect_t* dst = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&O&O&O&" , &parse_voidp, &c, &parse_voidp, &img, &parse_voidp, &src, &parse_voidp, &dst)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)canvas_draw_image(c, img, src, dst);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_canvas_draw_image_ex(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  canvas_t* c = NULL;
  bitmap_t* img = NULL;
  image_draw_type_t draw_type = 0;
  const rect_t* dst = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&O&iO&" , &parse_voidp, &c, &parse_voidp, &img, &draw_type, &parse_voidp, &dst)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)canvas_draw_image_ex(c, img, draw_type, dst);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_canvas_draw_image_ex2(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  canvas_t* c = NULL;
  bitmap_t* img = NULL;
  image_draw_type_t draw_type = 0;
  const rect_t* src = NULL;
  const rect_t* dst = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&O&iO&O&" , &parse_voidp, &c, &parse_voidp, &img, &draw_type, &parse_voidp, &src, &parse_voidp, &dst)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)canvas_draw_image_ex2(c, img, draw_type, src, dst);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_canvas_get_vgcanvas(pyobject_t self, pyobject_t pyargs) {
  vgcanvas_t* ret = NULL;
  canvas_t* c = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &c)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (vgcanvas_t*)canvas_get_vgcanvas(c);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_canvas_cast(pyobject_t self, pyobject_t pyargs) {
  canvas_t* ret = NULL;
  canvas_t* c = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &c)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (canvas_t*)canvas_cast(c);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_canvas_reset(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  canvas_t* c = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &c)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)canvas_reset(c);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_canvas_t_get_prop_ox(pyobject_t self, pyobject_t pyargs) {
  canvas_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->ox);
}

pyobject_t wrap_canvas_t_get_prop_oy(pyobject_t self, pyobject_t pyargs) {
  canvas_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->oy);
}

pyobject_t wrap_canvas_t_get_prop_font_name(pyobject_t self, pyobject_t pyargs) {
  canvas_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->font_name);
}

pyobject_t wrap_canvas_t_get_prop_font_size(pyobject_t self, pyobject_t pyargs) {
  canvas_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->font_size);
}

pyobject_t wrap_canvas_t_get_prop_global_alpha(pyobject_t self, pyobject_t pyargs) {
  canvas_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->global_alpha);
}

pyobject_t get_EASING_LINEAR(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EASING_LINEAR);
}

pyobject_t get_EASING_QUADRATIC_IN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EASING_QUADRATIC_IN);
}

pyobject_t get_EASING_QUADRATIC_OUT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EASING_QUADRATIC_OUT);
}

pyobject_t get_EASING_QUADRATIC_INOUT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EASING_QUADRATIC_INOUT);
}

pyobject_t get_EASING_CUBIC_IN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EASING_CUBIC_IN);
}

pyobject_t get_EASING_CUBIC_OUT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EASING_CUBIC_OUT);
}

pyobject_t get_EASING_SIN_IN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EASING_SIN_IN);
}

pyobject_t get_EASING_SIN_OUT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EASING_SIN_OUT);
}

pyobject_t get_EASING_SIN_INOUT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EASING_SIN_INOUT);
}

pyobject_t get_EASING_POW_IN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EASING_POW_IN);
}

pyobject_t get_EASING_POW_OUT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EASING_POW_OUT);
}

pyobject_t get_EASING_POW_INOUT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EASING_POW_INOUT);
}

pyobject_t get_EASING_CIRCULAR_IN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EASING_CIRCULAR_IN);
}

pyobject_t get_EASING_CIRCULAR_OUT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EASING_CIRCULAR_OUT);
}

pyobject_t get_EASING_CIRCULAR_INOUT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EASING_CIRCULAR_INOUT);
}

pyobject_t get_EASING_ELASTIC_IN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EASING_ELASTIC_IN);
}

pyobject_t get_EASING_ELASTIC_OUT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EASING_ELASTIC_OUT);
}

pyobject_t get_EASING_ELASTIC_INOUT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EASING_ELASTIC_INOUT);
}

pyobject_t get_EASING_BACK_IN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EASING_BACK_IN);
}

pyobject_t get_EASING_BACK_OUT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EASING_BACK_OUT);
}

pyobject_t get_EASING_BACK_INOUT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EASING_BACK_INOUT);
}

pyobject_t get_EASING_BOUNCE_IN(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EASING_BOUNCE_IN);
}

pyobject_t get_EASING_BOUNCE_OUT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EASING_BOUNCE_OUT);
}

pyobject_t get_EASING_BOUNCE_INOUT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", EASING_BOUNCE_INOUT);
}

pyobject_t wrap_date_time_create(pyobject_t self, pyobject_t pyargs) {
  date_time_t* ret = NULL;

  if (!PyArg_ParseTuple(pyargs, "" )) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (date_time_t*)date_time_create();
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_date_time_set_year(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  date_time_t* dt = NULL;
  uint32_t year = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &dt, &year)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)date_time_set_year(dt, year);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_date_time_set_month(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  date_time_t* dt = NULL;
  uint32_t month = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &dt, &month)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)date_time_set_month(dt, month);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_date_time_set_day(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  date_time_t* dt = NULL;
  uint32_t day = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &dt, &day)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)date_time_set_day(dt, day);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_date_time_set_hour(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  date_time_t* dt = NULL;
  uint32_t hour = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &dt, &hour)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)date_time_set_hour(dt, hour);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_date_time_set_minute(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  date_time_t* dt = NULL;
  uint32_t minute = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &dt, &minute)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)date_time_set_minute(dt, minute);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_date_time_set_second(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  date_time_t* dt = NULL;
  uint32_t second = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &dt, &second)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)date_time_set_second(dt, second);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_date_time_set(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  date_time_t* dt = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &dt)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)date_time_set(dt);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_date_time_from_time(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  date_time_t* dt = NULL;
  uint64_t time = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &dt, &time)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)date_time_from_time(dt, time);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_date_time_to_time(pyobject_t self, pyobject_t pyargs) {
  uint64_t ret = 0;
  date_time_t* dt = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &dt)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (uint64_t)date_time_to_time(dt);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_date_time_add_delta(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  date_time_t* dt = NULL;
  int64_t delta = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &dt, &delta)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)date_time_add_delta(dt, delta);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_date_time_is_leap(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  uint32_t year = 0;

  if (!PyArg_ParseTuple(pyargs, "i" , &year)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)date_time_is_leap(year);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_date_time_get_days(pyobject_t self, pyobject_t pyargs) {
  int32_t ret = 0;
  uint32_t year = 0;
  uint32_t montn = 0;

  if (!PyArg_ParseTuple(pyargs, "ii" , &year, &montn)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (int32_t)date_time_get_days(year, montn);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_date_time_get_wday(pyobject_t self, pyobject_t pyargs) {
  int32_t ret = 0;
  uint32_t year = 0;
  uint32_t montn = 0;
  uint32_t day = 0;

  if (!PyArg_ParseTuple(pyargs, "iii" , &year, &montn, &day)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (int32_t)date_time_get_wday(year, montn, day);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_date_time_get_month_name(pyobject_t self, pyobject_t pyargs) {
  const char* ret = NULL;
  uint32_t montn = 0;

  if (!PyArg_ParseTuple(pyargs, "i" , &montn)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (const char*)date_time_get_month_name(montn);
  return Py_BuildValue("s", ret);
}

pyobject_t wrap_date_time_get_wday_name(pyobject_t self, pyobject_t pyargs) {
  const char* ret = NULL;
  uint32_t wday = 0;

  if (!PyArg_ParseTuple(pyargs, "i" , &wday)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (const char*)date_time_get_wday_name(wday);
  return Py_BuildValue("s", ret);
}

pyobject_t wrap_date_time_t_get_prop_second(pyobject_t self, pyobject_t pyargs) {
  date_time_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->second);
}

pyobject_t wrap_date_time_t_get_prop_minute(pyobject_t self, pyobject_t pyargs) {
  date_time_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->minute);
}

pyobject_t wrap_date_time_t_get_prop_hour(pyobject_t self, pyobject_t pyargs) {
  date_time_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->hour);
}

pyobject_t wrap_date_time_t_get_prop_day(pyobject_t self, pyobject_t pyargs) {
  date_time_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->day);
}

pyobject_t wrap_date_time_t_get_prop_wday(pyobject_t self, pyobject_t pyargs) {
  date_time_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->wday);
}

pyobject_t wrap_date_time_t_get_prop_month(pyobject_t self, pyobject_t pyargs) {
  date_time_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->month);
}

pyobject_t wrap_date_time_t_get_prop_year(pyobject_t self, pyobject_t pyargs) {
  date_time_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->year);
}

pyobject_t wrap_color_create(pyobject_t self, pyobject_t pyargs) {
  color_t* ret = NULL;
  uint8_t r = 0;
  uint8_t b = 0;
  uint8_t g = 0;
  uint8_t a = 0;

  if (!PyArg_ParseTuple(pyargs, "iiii" , &r, &b, &g, &a)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (color_t*)color_create(r, b, g, a);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_color_from_str(pyobject_t self, pyobject_t pyargs) {
  color_t* ret = NULL;
  color_t* c = NULL;
  const char* str = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &c, &str)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (color_t*)color_from_str(c, str);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_color_r(pyobject_t self, pyobject_t pyargs) {
  uint8_t ret = 0;
  color_t* c = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &c)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (uint8_t)color_r(c);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_color_g(pyobject_t self, pyobject_t pyargs) {
  uint8_t ret = 0;
  color_t* c = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &c)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (uint8_t)color_g(c);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_color_b(pyobject_t self, pyobject_t pyargs) {
  uint8_t ret = 0;
  color_t* c = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &c)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (uint8_t)color_b(c);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_color_a(pyobject_t self, pyobject_t pyargs) {
  uint8_t ret = 0;
  color_t* c = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &c)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (uint8_t)color_a(c);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_color_cast(pyobject_t self, pyobject_t pyargs) {
  color_t* ret = NULL;
  color_t* color = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &color)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (color_t*)color_cast(color);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_color_t_set_prop_color(pyobject_t self, pyobject_t pyargs) {
  color_t* obj = NULL;
  uint32_t color = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &obj, &color)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  obj->color = color;
  return Py_BuildValue("i", RET_OK);
};

pyobject_t wrap_color_t_get_prop_color(pyobject_t self, pyobject_t pyargs) {
  color_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->color);
}

pyobject_t wrap_asset_info_t_get_prop_type(pyobject_t self, pyobject_t pyargs) {
  asset_info_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->type);
}

pyobject_t wrap_asset_info_t_get_prop_subtype(pyobject_t self, pyobject_t pyargs) {
  asset_info_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->subtype);
}

pyobject_t wrap_asset_info_t_get_prop_is_in_rom(pyobject_t self, pyobject_t pyargs) {
  asset_info_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->is_in_rom);
}

pyobject_t wrap_asset_info_t_get_prop_size(pyobject_t self, pyobject_t pyargs) {
  asset_info_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->size);
}

pyobject_t wrap_asset_info_t_get_prop_refcount(pyobject_t self, pyobject_t pyargs) {
  asset_info_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->refcount);
}

pyobject_t wrap_asset_info_t_get_prop_name(pyobject_t self, pyobject_t pyargs) {
  asset_info_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->name);
}

pyobject_t get_ASSET_TYPE_NONE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", ASSET_TYPE_NONE);
}

pyobject_t get_ASSET_TYPE_FONT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", ASSET_TYPE_FONT);
}

pyobject_t get_ASSET_TYPE_IMAGE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", ASSET_TYPE_IMAGE);
}

pyobject_t get_ASSET_TYPE_STYLE(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", ASSET_TYPE_STYLE);
}

pyobject_t get_ASSET_TYPE_UI(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", ASSET_TYPE_UI);
}

pyobject_t get_ASSET_TYPE_XML(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", ASSET_TYPE_XML);
}

pyobject_t get_ASSET_TYPE_STRINGS(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", ASSET_TYPE_STRINGS);
}

pyobject_t get_ASSET_TYPE_SCRIPT(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", ASSET_TYPE_SCRIPT);
}

pyobject_t get_ASSET_TYPE_FLOW(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", ASSET_TYPE_FLOW);
}

pyobject_t get_ASSET_TYPE_DATA(pyobject_t self, pyobject_t pyargs) {
  return Py_BuildValue("i", ASSET_TYPE_DATA);
}

pyobject_t wrap_image_animation_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)image_animation_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_image_animation_set_loop(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t loop = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &loop)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_animation_set_loop(widget, loop);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_animation_set_image(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* image = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &image)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_animation_set_image(widget, image);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_animation_set_interval(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t interval = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &interval)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_animation_set_interval(widget, interval);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_animation_set_delay(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t delay = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &delay)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_animation_set_delay(widget, delay);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_animation_set_auto_play(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t auto_play = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &auto_play)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_animation_set_auto_play(widget, auto_play);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_animation_set_sequence(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* sequence = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &sequence)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_animation_set_sequence(widget, sequence);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_animation_set_range_sequence(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t start_index = 0;
  uint32_t end_index = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ii" , &parse_voidp, &widget, &start_index, &end_index)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_animation_set_range_sequence(widget, start_index, end_index);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_animation_play(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_animation_play(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_animation_stop(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_animation_stop(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_animation_pause(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_animation_pause(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_animation_next(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_animation_next(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_animation_set_format(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* format = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &format)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_animation_set_format(widget, format);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_animation_set_unload_after_paint(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t unload_after_paint = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &unload_after_paint)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_animation_set_unload_after_paint(widget, unload_after_paint);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_animation_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)image_animation_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_image_animation_is_playing(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)image_animation_is_playing(widget);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_image_animation_t_get_prop_image(pyobject_t self, pyobject_t pyargs) {
  image_animation_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->image);
}

pyobject_t wrap_image_animation_t_get_prop_sequence(pyobject_t self, pyobject_t pyargs) {
  image_animation_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->sequence);
}

pyobject_t wrap_image_animation_t_get_prop_start_index(pyobject_t self, pyobject_t pyargs) {
  image_animation_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->start_index);
}

pyobject_t wrap_image_animation_t_get_prop_end_index(pyobject_t self, pyobject_t pyargs) {
  image_animation_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->end_index);
}

pyobject_t wrap_image_animation_t_get_prop_loop(pyobject_t self, pyobject_t pyargs) {
  image_animation_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->loop);
}

pyobject_t wrap_image_animation_t_get_prop_auto_play(pyobject_t self, pyobject_t pyargs) {
  image_animation_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->auto_play);
}

pyobject_t wrap_image_animation_t_get_prop_unload_after_paint(pyobject_t self, pyobject_t pyargs) {
  image_animation_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->unload_after_paint);
}

pyobject_t wrap_image_animation_t_get_prop_format(pyobject_t self, pyobject_t pyargs) {
  image_animation_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->format);
}

pyobject_t wrap_image_animation_t_get_prop_interval(pyobject_t self, pyobject_t pyargs) {
  image_animation_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->interval);
}

pyobject_t wrap_image_animation_t_get_prop_delay(pyobject_t self, pyobject_t pyargs) {
  image_animation_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->delay);
}

pyobject_t wrap_assets_manager(pyobject_t self, pyobject_t pyargs) {
  assets_manager_t* ret = NULL;

  if (!PyArg_ParseTuple(pyargs, "" )) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (assets_manager_t*)assets_manager();
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_assets_manager_set_theme(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  assets_manager_t* am = NULL;
  const char* theme = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &am, &theme)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)assets_manager_set_theme(am, theme);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_assets_manager_ref(pyobject_t self, pyobject_t pyargs) {
  asset_info_t* ret = NULL;
  assets_manager_t* am = NULL;
  asset_type_t type = 0;
  char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&is" , &parse_voidp, &am, &type, &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (asset_info_t*)assets_manager_ref(am, type, name);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_assets_manager_ref_ex(pyobject_t self, pyobject_t pyargs) {
  asset_info_t* ret = NULL;
  assets_manager_t* am = NULL;
  asset_type_t type = 0;
  uint16_t subtype = 0;
  char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&iis" , &parse_voidp, &am, &type, &subtype, &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (asset_info_t*)assets_manager_ref_ex(am, type, subtype, name);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_assets_manager_unref(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  assets_manager_t* am = NULL;
  asset_info_t* info = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&O&" , &parse_voidp, &am, &parse_voidp, &info)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)assets_manager_unref(am, info);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_view_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)view_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_view_set_default_focused_child(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* default_focused_child = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &default_focused_child)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)view_set_default_focused_child(widget, default_focused_child);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_view_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)view_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_view_t_get_prop_default_focused_child(pyobject_t self, pyobject_t pyargs) {
  view_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->default_focused_child);
}

pyobject_t wrap_tab_control_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)tab_control_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_tab_control_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)tab_control_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_tab_button_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)tab_button_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_tab_button_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)tab_button_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_tab_button_set_value(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)tab_button_set_value(widget, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_tab_button_set_icon(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)tab_button_set_icon(widget, name);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_tab_button_set_active_icon(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)tab_button_set_active_icon(widget, name);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_tab_button_set_load_ui(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)tab_button_set_load_ui(widget, name);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_tab_button_t_get_prop_value(pyobject_t self, pyobject_t pyargs) {
  tab_button_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->value);
}

pyobject_t wrap_tab_button_t_get_prop_load_ui(pyobject_t self, pyobject_t pyargs) {
  tab_button_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->load_ui);
}

pyobject_t wrap_tab_button_t_get_prop_active_icon(pyobject_t self, pyobject_t pyargs) {
  tab_button_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->active_icon);
}

pyobject_t wrap_tab_button_t_get_prop_icon(pyobject_t self, pyobject_t pyargs) {
  tab_button_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->icon);
}

pyobject_t wrap_tab_button_group_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)tab_button_group_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_tab_button_group_set_compact(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t compact = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &compact)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)tab_button_group_set_compact(widget, compact);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_tab_button_group_set_scrollable(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t scrollable = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &scrollable)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)tab_button_group_set_scrollable(widget, scrollable);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_tab_button_group_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)tab_button_group_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_tab_button_group_t_get_prop_compact(pyobject_t self, pyobject_t pyargs) {
  tab_button_group_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->compact);
}

pyobject_t wrap_tab_button_group_t_get_prop_scrollable(pyobject_t self, pyobject_t pyargs) {
  tab_button_group_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->scrollable);
}

pyobject_t wrap_slider_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)slider_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_slider_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)slider_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_slider_set_value(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  double value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&d" , &parse_voidp, &widget, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)slider_set_value(widget, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_slider_set_min(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  double min = 0;

  if (!PyArg_ParseTuple(pyargs, "O&d" , &parse_voidp, &widget, &min)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)slider_set_min(widget, min);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_slider_set_max(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  double max = 0;

  if (!PyArg_ParseTuple(pyargs, "O&d" , &parse_voidp, &widget, &max)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)slider_set_max(widget, max);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_slider_set_step(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  double step = 0;

  if (!PyArg_ParseTuple(pyargs, "O&d" , &parse_voidp, &widget, &step)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)slider_set_step(widget, step);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_slider_set_bar_size(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t bar_size = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &bar_size)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)slider_set_bar_size(widget, bar_size);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_slider_set_vertical(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t vertical = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &vertical)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)slider_set_vertical(widget, vertical);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_slider_t_get_prop_value(pyobject_t self, pyobject_t pyargs) {
  slider_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("d", obj->value);
}

pyobject_t wrap_slider_t_get_prop_min(pyobject_t self, pyobject_t pyargs) {
  slider_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("d", obj->min);
}

pyobject_t wrap_slider_t_get_prop_max(pyobject_t self, pyobject_t pyargs) {
  slider_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("d", obj->max);
}

pyobject_t wrap_slider_t_get_prop_step(pyobject_t self, pyobject_t pyargs) {
  slider_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("d", obj->step);
}

pyobject_t wrap_slider_t_get_prop_vertical(pyobject_t self, pyobject_t pyargs) {
  slider_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->vertical);
}

pyobject_t wrap_slider_t_get_prop_bar_size(pyobject_t self, pyobject_t pyargs) {
  slider_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->bar_size);
}

pyobject_t wrap_slider_t_get_prop_dragger_size(pyobject_t self, pyobject_t pyargs) {
  slider_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->dragger_size);
}

pyobject_t wrap_slider_t_get_prop_dragger_adapt_to_icon(pyobject_t self, pyobject_t pyargs) {
  slider_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->dragger_adapt_to_icon);
}

pyobject_t wrap_slider_t_get_prop_slide_with_bar(pyobject_t self, pyobject_t pyargs) {
  slider_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->slide_with_bar);
}

pyobject_t wrap_row_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)row_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_row_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)row_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_progress_bar_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)progress_bar_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_progress_bar_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)progress_bar_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_progress_bar_set_value(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  float_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&f" , &parse_voidp, &widget, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)progress_bar_set_value(widget, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_progress_bar_set_max(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t max = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &max)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)progress_bar_set_max(widget, max);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_progress_bar_set_format(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* format = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &format)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)progress_bar_set_format(widget, format);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_progress_bar_set_vertical(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t vertical = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &vertical)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)progress_bar_set_vertical(widget, vertical);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_progress_bar_set_show_text(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t show_text = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &show_text)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)progress_bar_set_show_text(widget, show_text);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_progress_bar_set_reverse(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t reverse = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &reverse)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)progress_bar_set_reverse(widget, reverse);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_progress_bar_get_percent(pyobject_t self, pyobject_t pyargs) {
  uint32_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (uint32_t)progress_bar_get_percent(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_progress_bar_t_get_prop_value(pyobject_t self, pyobject_t pyargs) {
  progress_bar_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("f", obj->value);
}

pyobject_t wrap_progress_bar_t_get_prop_max(pyobject_t self, pyobject_t pyargs) {
  progress_bar_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("f", obj->max);
}

pyobject_t wrap_progress_bar_t_get_prop_format(pyobject_t self, pyobject_t pyargs) {
  progress_bar_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->format);
}

pyobject_t wrap_progress_bar_t_get_prop_vertical(pyobject_t self, pyobject_t pyargs) {
  progress_bar_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->vertical);
}

pyobject_t wrap_progress_bar_t_get_prop_show_text(pyobject_t self, pyobject_t pyargs) {
  progress_bar_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->show_text);
}

pyobject_t wrap_progress_bar_t_get_prop_reverse(pyobject_t self, pyobject_t pyargs) {
  progress_bar_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->reverse);
}

pyobject_t wrap_pages_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)pages_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_pages_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)pages_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_pages_set_active(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t index = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &index)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)pages_set_active(widget, index);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_pages_set_active_by_name(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)pages_set_active_by_name(widget, name);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_pages_t_get_prop_active(pyobject_t self, pyobject_t pyargs) {
  pages_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->active);
}

pyobject_t wrap_label_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)label_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_label_set_length(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t length = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &length)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)label_set_length(widget, length);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_label_set_line_wrap(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t line_wrap = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &line_wrap)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)label_set_line_wrap(widget, line_wrap);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_label_set_word_wrap(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t word_wrap = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &word_wrap)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)label_set_word_wrap(widget, word_wrap);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_label_resize_to_content(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t min_w = 0;
  uint32_t max_w = 0;
  uint32_t min_h = 0;
  uint32_t max_h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &widget, &min_w, &max_w, &min_h, &max_h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)label_resize_to_content(widget, min_w, max_w, min_h, max_h);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_label_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)label_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_label_t_get_prop_length(pyobject_t self, pyobject_t pyargs) {
  label_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->length);
}

pyobject_t wrap_label_t_get_prop_line_wrap(pyobject_t self, pyobject_t pyargs) {
  label_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->line_wrap);
}

pyobject_t wrap_label_t_get_prop_word_wrap(pyobject_t self, pyobject_t pyargs) {
  label_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->word_wrap);
}

pyobject_t wrap_group_box_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)group_box_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_group_box_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)group_box_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_grid_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)grid_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_grid_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)grid_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_grid_item_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)grid_item_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_grid_item_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)grid_item_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_edit_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)edit_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_edit_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)edit_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_edit_get_int(pyobject_t self, pyobject_t pyargs) {
  int32_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (int32_t)edit_get_int(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_edit_get_double(pyobject_t self, pyobject_t pyargs) {
  double ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (double)edit_get_double(widget);
  return Py_BuildValue("d", ret);
}

pyobject_t wrap_edit_set_int(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)edit_set_int(widget, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_edit_set_double(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  double value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&d" , &parse_voidp, &widget, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)edit_set_double(widget, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_edit_set_text_limit(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t min = 0;
  uint32_t max = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ii" , &parse_voidp, &widget, &min, &max)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)edit_set_text_limit(widget, min, max);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_edit_set_int_limit(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t min = 0;
  int32_t max = 0;
  uint32_t step = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iii" , &parse_voidp, &widget, &min, &max, &step)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)edit_set_int_limit(widget, min, max, step);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_edit_set_float_limit(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  double min = 0;
  double max = 0;
  double step = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ddd" , &parse_voidp, &widget, &min, &max, &step)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)edit_set_float_limit(widget, min, max, step);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_edit_set_readonly(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t readonly = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &readonly)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)edit_set_readonly(widget, readonly);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_edit_set_cancelable(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t cancelable = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &cancelable)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)edit_set_cancelable(widget, cancelable);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_edit_set_auto_fix(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t auto_fix = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &auto_fix)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)edit_set_auto_fix(widget, auto_fix);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_edit_set_select_none_when_focused(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t select_none_when_focused = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &select_none_when_focused)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)edit_set_select_none_when_focused(widget, select_none_when_focused);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_edit_set_open_im_when_focused(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t open_im_when_focused = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &open_im_when_focused)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)edit_set_open_im_when_focused(widget, open_im_when_focused);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_edit_set_close_im_when_blured(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t close_im_when_blured = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &close_im_when_blured)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)edit_set_close_im_when_blured(widget, close_im_when_blured);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_edit_set_input_type(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  input_type_t type = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &type)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)edit_set_input_type(widget, type);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_edit_set_action_text(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  char* action_text = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &action_text)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)edit_set_action_text(widget, action_text);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_edit_set_tips(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  char* tips = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &tips)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)edit_set_tips(widget, tips);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_edit_set_tr_tips(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* tr_tips = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &tr_tips)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)edit_set_tr_tips(widget, tr_tips);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_edit_set_keyboard(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  char* keyboard = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &keyboard)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)edit_set_keyboard(widget, keyboard);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_edit_set_password_visible(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t password_visible = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &password_visible)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)edit_set_password_visible(widget, password_visible);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_edit_set_focus(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t focus = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &focus)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)edit_set_focus(widget, focus);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_edit_set_cursor(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t cursor = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &cursor)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)edit_set_cursor(widget, cursor);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_edit_t_get_prop_tips(pyobject_t self, pyobject_t pyargs) {
  edit_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->tips);
}

pyobject_t wrap_edit_t_get_prop_tr_tips(pyobject_t self, pyobject_t pyargs) {
  edit_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->tr_tips);
}

pyobject_t wrap_edit_t_get_prop_action_text(pyobject_t self, pyobject_t pyargs) {
  edit_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->action_text);
}

pyobject_t wrap_edit_t_get_prop_keyboard(pyobject_t self, pyobject_t pyargs) {
  edit_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->keyboard);
}

pyobject_t wrap_edit_t_get_prop_min(pyobject_t self, pyobject_t pyargs) {
  edit_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("d", obj->min);
}

pyobject_t wrap_edit_t_get_prop_max(pyobject_t self, pyobject_t pyargs) {
  edit_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("d", obj->max);
}

pyobject_t wrap_edit_t_get_prop_step(pyobject_t self, pyobject_t pyargs) {
  edit_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("d", obj->step);
}

pyobject_t wrap_edit_t_get_prop_input_type(pyobject_t self, pyobject_t pyargs) {
  edit_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->input_type);
}

pyobject_t wrap_edit_t_get_prop_readonly(pyobject_t self, pyobject_t pyargs) {
  edit_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->readonly);
}

pyobject_t wrap_edit_t_get_prop_password_visible(pyobject_t self, pyobject_t pyargs) {
  edit_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->password_visible);
}

pyobject_t wrap_edit_t_get_prop_auto_fix(pyobject_t self, pyobject_t pyargs) {
  edit_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->auto_fix);
}

pyobject_t wrap_edit_t_get_prop_select_none_when_focused(pyobject_t self, pyobject_t pyargs) {
  edit_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->select_none_when_focused);
}

pyobject_t wrap_edit_t_get_prop_open_im_when_focused(pyobject_t self, pyobject_t pyargs) {
  edit_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->open_im_when_focused);
}

pyobject_t wrap_edit_t_get_prop_close_im_when_blured(pyobject_t self, pyobject_t pyargs) {
  edit_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->close_im_when_blured);
}

pyobject_t wrap_edit_t_get_prop_cancelable(pyobject_t self, pyobject_t pyargs) {
  edit_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->cancelable);
}

pyobject_t wrap_dragger_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)dragger_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_dragger_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)dragger_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_dragger_set_range(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  xy_t x_min = 0;
  xy_t y_min = 0;
  xy_t x_max = 0;
  xy_t y_max = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &widget, &x_min, &y_min, &x_max, &y_max)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)dragger_set_range(widget, x_min, y_min, x_max, y_max);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_dragger_t_get_prop_x_min(pyobject_t self, pyobject_t pyargs) {
  dragger_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->x_min);
}

pyobject_t wrap_dragger_t_get_prop_y_min(pyobject_t self, pyobject_t pyargs) {
  dragger_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->y_min);
}

pyobject_t wrap_dragger_t_get_prop_x_max(pyobject_t self, pyobject_t pyargs) {
  dragger_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->x_max);
}

pyobject_t wrap_dragger_t_get_prop_y_max(pyobject_t self, pyobject_t pyargs) {
  dragger_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->y_max);
}

pyobject_t wrap_digit_clock_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)digit_clock_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_digit_clock_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)digit_clock_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_digit_clock_set_format(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* format = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &format)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)digit_clock_set_format(widget, format);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_digit_clock_t_get_prop_format(pyobject_t self, pyobject_t pyargs) {
  digit_clock_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->format);
}

pyobject_t wrap_dialog_title_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)dialog_title_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_dialog_title_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)dialog_title_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_dialog_client_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)dialog_client_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_dialog_client_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)dialog_client_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_combo_box_item_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)combo_box_item_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_combo_box_item_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)combo_box_item_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_combo_box_item_set_checked(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t checked = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &checked)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)combo_box_item_set_checked(widget, checked);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_combo_box_item_set_value(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)combo_box_item_set_value(widget, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_combo_box_item_t_get_prop_value(pyobject_t self, pyobject_t pyargs) {
  combo_box_item_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->value);
}

pyobject_t wrap_combo_box_item_t_get_prop_checked(pyobject_t self, pyobject_t pyargs) {
  combo_box_item_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->checked);
}

pyobject_t wrap_column_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)column_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_column_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)column_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_color_tile_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)color_tile_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_color_tile_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)color_tile_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_color_tile_set_bg_color(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* color = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &color)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)color_tile_set_bg_color(widget, color);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_color_tile_t_get_prop_bg_color(pyobject_t self, pyobject_t pyargs) {
  color_tile_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->bg_color);
}

pyobject_t wrap_color_tile_t_get_prop_border_color(pyobject_t self, pyobject_t pyargs) {
  color_tile_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->border_color);
}

pyobject_t wrap_clip_view_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)clip_view_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_clip_view_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)clip_view_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_prop_change_event_cast(pyobject_t self, pyobject_t pyargs) {
  prop_change_event_t* ret = NULL;
  event_t* event = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &event)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (prop_change_event_t*)prop_change_event_cast(event);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_prop_change_event_t_get_prop_name(pyobject_t self, pyobject_t pyargs) {
  prop_change_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->name);
}

pyobject_t wrap_prop_change_event_t_get_prop_value(pyobject_t self, pyobject_t pyargs) {
  prop_change_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return PyLong_FromVoidPtr((void*)obj->value);
}

pyobject_t wrap_progress_event_cast(pyobject_t self, pyobject_t pyargs) {
  progress_event_t* ret = NULL;
  event_t* event = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &event)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (progress_event_t*)progress_event_cast(event);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_progress_event_t_get_prop_percent(pyobject_t self, pyobject_t pyargs) {
  progress_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->percent);
}

pyobject_t wrap_done_event_cast(pyobject_t self, pyobject_t pyargs) {
  done_event_t* ret = NULL;
  event_t* event = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &event)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (done_event_t*)done_event_cast(event);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_done_event_t_get_prop_result(pyobject_t self, pyobject_t pyargs) {
  done_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->result);
}

pyobject_t wrap_error_event_cast(pyobject_t self, pyobject_t pyargs) {
  error_event_t* ret = NULL;
  event_t* event = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &event)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (error_event_t*)error_event_cast(event);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_error_event_t_get_prop_code(pyobject_t self, pyobject_t pyargs) {
  error_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->code);
}

pyobject_t wrap_error_event_t_get_prop_message(pyobject_t self, pyobject_t pyargs) {
  error_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->message);
}

pyobject_t wrap_cmd_exec_event_cast(pyobject_t self, pyobject_t pyargs) {
  cmd_exec_event_t* ret = NULL;
  event_t* event = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &event)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (cmd_exec_event_t*)cmd_exec_event_cast(event);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_cmd_exec_event_t_get_prop_name(pyobject_t self, pyobject_t pyargs) {
  cmd_exec_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->name);
}

pyobject_t wrap_cmd_exec_event_t_get_prop_args(pyobject_t self, pyobject_t pyargs) {
  cmd_exec_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->args);
}

pyobject_t wrap_cmd_exec_event_t_get_prop_result(pyobject_t self, pyobject_t pyargs) {
  cmd_exec_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->result);
}

pyobject_t wrap_cmd_exec_event_t_get_prop_can_exec(pyobject_t self, pyobject_t pyargs) {
  cmd_exec_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->can_exec);
}

pyobject_t wrap_time_clock_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)time_clock_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_time_clock_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)time_clock_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_time_clock_set_hour(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t hour = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &hour)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)time_clock_set_hour(widget, hour);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_time_clock_set_minute(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t minute = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &minute)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)time_clock_set_minute(widget, minute);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_time_clock_set_second(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t second = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &second)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)time_clock_set_second(widget, second);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_time_clock_set_hour_image(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* hour = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &hour)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)time_clock_set_hour_image(widget, hour);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_time_clock_set_minute_image(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* minute_image = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &minute_image)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)time_clock_set_minute_image(widget, minute_image);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_time_clock_set_second_image(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* second_image = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &second_image)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)time_clock_set_second_image(widget, second_image);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_time_clock_set_bg_image(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* bg_image = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &bg_image)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)time_clock_set_bg_image(widget, bg_image);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_time_clock_set_image(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* image = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &image)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)time_clock_set_image(widget, image);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_time_clock_set_hour_anchor(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* anchor_x = NULL;
  const char* anchor_y = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&ss" , &parse_voidp, &widget, &anchor_x, &anchor_y)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)time_clock_set_hour_anchor(widget, anchor_x, anchor_y);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_time_clock_set_minute_anchor(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* anchor_x = NULL;
  const char* anchor_y = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&ss" , &parse_voidp, &widget, &anchor_x, &anchor_y)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)time_clock_set_minute_anchor(widget, anchor_x, anchor_y);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_time_clock_set_second_anchor(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* anchor_x = NULL;
  const char* anchor_y = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&ss" , &parse_voidp, &widget, &anchor_x, &anchor_y)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)time_clock_set_second_anchor(widget, anchor_x, anchor_y);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_time_clock_t_get_prop_hour(pyobject_t self, pyobject_t pyargs) {
  time_clock_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->hour);
}

pyobject_t wrap_time_clock_t_get_prop_minute(pyobject_t self, pyobject_t pyargs) {
  time_clock_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->minute);
}

pyobject_t wrap_time_clock_t_get_prop_second(pyobject_t self, pyobject_t pyargs) {
  time_clock_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->second);
}

pyobject_t wrap_time_clock_t_get_prop_image(pyobject_t self, pyobject_t pyargs) {
  time_clock_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->image);
}

pyobject_t wrap_time_clock_t_get_prop_bg_image(pyobject_t self, pyobject_t pyargs) {
  time_clock_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->bg_image);
}

pyobject_t wrap_time_clock_t_get_prop_hour_image(pyobject_t self, pyobject_t pyargs) {
  time_clock_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->hour_image);
}

pyobject_t wrap_time_clock_t_get_prop_minute_image(pyobject_t self, pyobject_t pyargs) {
  time_clock_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->minute_image);
}

pyobject_t wrap_time_clock_t_get_prop_second_image(pyobject_t self, pyobject_t pyargs) {
  time_clock_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->second_image);
}

pyobject_t wrap_time_clock_t_get_prop_hour_anchor_x(pyobject_t self, pyobject_t pyargs) {
  time_clock_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->hour_anchor_x);
}

pyobject_t wrap_time_clock_t_get_prop_hour_anchor_y(pyobject_t self, pyobject_t pyargs) {
  time_clock_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->hour_anchor_y);
}

pyobject_t wrap_time_clock_t_get_prop_minute_anchor_x(pyobject_t self, pyobject_t pyargs) {
  time_clock_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->minute_anchor_x);
}

pyobject_t wrap_time_clock_t_get_prop_minute_anchor_y(pyobject_t self, pyobject_t pyargs) {
  time_clock_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->minute_anchor_y);
}

pyobject_t wrap_time_clock_t_get_prop_second_anchor_x(pyobject_t self, pyobject_t pyargs) {
  time_clock_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->second_anchor_x);
}

pyobject_t wrap_time_clock_t_get_prop_second_anchor_y(pyobject_t self, pyobject_t pyargs) {
  time_clock_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->second_anchor_y);
}

pyobject_t wrap_check_button_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)check_button_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_check_button_create_radio(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)check_button_create_radio(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_check_button_set_value(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)check_button_set_value(widget, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_check_button_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)check_button_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_check_button_t_get_prop_value(pyobject_t self, pyobject_t pyargs) {
  check_button_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->value);
}

pyobject_t wrap_text_selector_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)text_selector_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_text_selector_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)text_selector_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_text_selector_reset_options(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)text_selector_reset_options(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_text_selector_count_options(pyobject_t self, pyobject_t pyargs) {
  int32_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (int32_t)text_selector_count_options(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_text_selector_append_option(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t value = 0;
  char* text = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&is" , &parse_voidp, &widget, &value, &text)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)text_selector_append_option(widget, value, text);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_text_selector_set_options(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  char* options = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &options)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)text_selector_set_options(widget, options);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_text_selector_set_range_options_ex(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t start = 0;
  uint32_t nr = 0;
  int32_t step = 0;
  const char* format = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&iiis" , &parse_voidp, &widget, &start, &nr, &step, &format)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)text_selector_set_range_options_ex(widget, start, nr, step, format);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_text_selector_set_range_options(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t start = 0;
  uint32_t nr = 0;
  int32_t step = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iii" , &parse_voidp, &widget, &start, &nr, &step)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)text_selector_set_range_options(widget, start, nr, step);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_text_selector_get_value(pyobject_t self, pyobject_t pyargs) {
  int32_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (int32_t)text_selector_get_value(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_text_selector_set_value(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)text_selector_set_value(widget, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_text_selector_get_text(pyobject_t self, pyobject_t pyargs) {
  const char* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (const char*)text_selector_get_text(widget);
  return Py_BuildValue("s", ret);
}

pyobject_t wrap_text_selector_set_text(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* text = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &text)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)text_selector_set_text(widget, text);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_text_selector_set_selected_index(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t index = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &index)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)text_selector_set_selected_index(widget, index);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_text_selector_set_visible_nr(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t visible_nr = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &visible_nr)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)text_selector_set_visible_nr(widget, visible_nr);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_text_selector_set_localize_options(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t localize_options = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &localize_options)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)text_selector_set_localize_options(widget, localize_options);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_text_selector_set_loop_options(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t loop_options = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &loop_options)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)text_selector_set_loop_options(widget, loop_options);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_text_selector_set_yspeed_scale(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  float_t yspeed_scale = 0;

  if (!PyArg_ParseTuple(pyargs, "O&f" , &parse_voidp, &widget, &yspeed_scale)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)text_selector_set_yspeed_scale(widget, yspeed_scale);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_text_selector_t_get_prop_visible_nr(pyobject_t self, pyobject_t pyargs) {
  text_selector_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->visible_nr);
}

pyobject_t wrap_text_selector_t_get_prop_selected_index(pyobject_t self, pyobject_t pyargs) {
  text_selector_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->selected_index);
}

pyobject_t wrap_text_selector_t_get_prop_options(pyobject_t self, pyobject_t pyargs) {
  text_selector_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->options);
}

pyobject_t wrap_text_selector_t_get_prop_yspeed_scale(pyobject_t self, pyobject_t pyargs) {
  text_selector_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("f", obj->yspeed_scale);
}

pyobject_t wrap_text_selector_t_get_prop_localize_options(pyobject_t self, pyobject_t pyargs) {
  text_selector_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->localize_options);
}

pyobject_t wrap_text_selector_t_get_prop_loop_options(pyobject_t self, pyobject_t pyargs) {
  text_selector_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->loop_options);
}

pyobject_t wrap_switch_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)switch_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_switch_set_value(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)switch_set_value(widget, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_switch_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)switch_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_switch_t_get_prop_value(pyobject_t self, pyobject_t pyargs) {
  switch_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->value);
}

pyobject_t wrap_switch_t_get_prop_max_xoffset_ratio(pyobject_t self, pyobject_t pyargs) {
  switch_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("f", obj->max_xoffset_ratio);
}

pyobject_t wrap_button_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)button_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_button_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)button_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_button_set_repeat(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t repeat = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &repeat)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)button_set_repeat(widget, repeat);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_button_set_long_press_time(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t long_press_time = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &long_press_time)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)button_set_long_press_time(widget, long_press_time);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_button_set_enable_long_press(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t enable_long_press = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &enable_long_press)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)button_set_enable_long_press(widget, enable_long_press);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_button_t_get_prop_repeat(pyobject_t self, pyobject_t pyargs) {
  button_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->repeat);
}

pyobject_t wrap_button_t_get_prop_enable_long_press(pyobject_t self, pyobject_t pyargs) {
  button_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->enable_long_press);
}

pyobject_t wrap_button_t_get_prop_long_press_time(pyobject_t self, pyobject_t pyargs) {
  button_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->long_press_time);
}

pyobject_t wrap_button_group_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)button_group_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_button_group_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)button_group_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_app_bar_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)app_bar_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_app_bar_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)app_bar_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_slide_view_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)slide_view_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_slide_view_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)slide_view_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_slide_view_set_auto_play(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint16_t auto_play = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &auto_play)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)slide_view_set_auto_play(widget, auto_play);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_slide_view_set_active(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t index = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &index)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)slide_view_set_active(widget, index);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_slide_view_set_active_ex(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t index = 0;
  bool_t animate = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ib" , &parse_voidp, &widget, &index, &animate)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)slide_view_set_active_ex(widget, index, animate);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_slide_view_set_vertical(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t vertical = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &vertical)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)slide_view_set_vertical(widget, vertical);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_slide_view_set_anim_hint(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* anim_hint = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &anim_hint)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)slide_view_set_anim_hint(widget, anim_hint);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_slide_view_set_loop(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t loop = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &loop)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)slide_view_set_loop(widget, loop);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_slide_view_t_get_prop_vertical(pyobject_t self, pyobject_t pyargs) {
  slide_view_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->vertical);
}

pyobject_t wrap_slide_view_t_get_prop_auto_play(pyobject_t self, pyobject_t pyargs) {
  slide_view_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->auto_play);
}

pyobject_t wrap_slide_view_t_get_prop_loop(pyobject_t self, pyobject_t pyargs) {
  slide_view_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->loop);
}

pyobject_t wrap_slide_view_t_get_prop_anim_hint(pyobject_t self, pyobject_t pyargs) {
  slide_view_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->anim_hint);
}

pyobject_t wrap_slide_indicator_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)slide_indicator_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_slide_indicator_create_linear(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)slide_indicator_create_linear(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_slide_indicator_create_arc(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)slide_indicator_create_arc(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_slide_indicator_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)slide_indicator_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_slide_indicator_set_value(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)slide_indicator_set_value(widget, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_slide_indicator_set_max(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t max = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &max)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)slide_indicator_set_max(widget, max);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_slide_indicator_set_default_paint(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  indicator_default_paint_t default_paint = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &default_paint)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)slide_indicator_set_default_paint(widget, default_paint);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_slide_indicator_set_auto_hide(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint16_t auto_hide = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &auto_hide)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)slide_indicator_set_auto_hide(widget, auto_hide);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_slide_indicator_set_margin(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t margin = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &margin)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)slide_indicator_set_margin(widget, margin);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_slide_indicator_set_spacing(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  float_t spacing = 0;

  if (!PyArg_ParseTuple(pyargs, "O&f" , &parse_voidp, &widget, &spacing)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)slide_indicator_set_spacing(widget, spacing);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_slide_indicator_set_size(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t size = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &size)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)slide_indicator_set_size(widget, size);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_slide_indicator_set_anchor(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* anchor_x = NULL;
  const char* anchor_y = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&ss" , &parse_voidp, &widget, &anchor_x, &anchor_y)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)slide_indicator_set_anchor(widget, anchor_x, anchor_y);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_slide_indicator_set_indicated_target(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* target_name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &target_name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)slide_indicator_set_indicated_target(widget, target_name);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_slide_indicator_t_get_prop_value(pyobject_t self, pyobject_t pyargs) {
  slide_indicator_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->value);
}

pyobject_t wrap_slide_indicator_t_get_prop_max(pyobject_t self, pyobject_t pyargs) {
  slide_indicator_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->max);
}

pyobject_t wrap_slide_indicator_t_get_prop_default_paint(pyobject_t self, pyobject_t pyargs) {
  slide_indicator_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->default_paint);
}

pyobject_t wrap_slide_indicator_t_get_prop_auto_hide(pyobject_t self, pyobject_t pyargs) {
  slide_indicator_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->auto_hide);
}

pyobject_t wrap_slide_indicator_t_get_prop_margin(pyobject_t self, pyobject_t pyargs) {
  slide_indicator_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->margin);
}

pyobject_t wrap_slide_indicator_t_get_prop_spacing(pyobject_t self, pyobject_t pyargs) {
  slide_indicator_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("f", obj->spacing);
}

pyobject_t wrap_slide_indicator_t_get_prop_size(pyobject_t self, pyobject_t pyargs) {
  slide_indicator_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->size);
}

pyobject_t wrap_slide_indicator_t_get_prop_anchor_x(pyobject_t self, pyobject_t pyargs) {
  slide_indicator_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("f", obj->anchor_x);
}

pyobject_t wrap_slide_indicator_t_get_prop_anchor_y(pyobject_t self, pyobject_t pyargs) {
  slide_indicator_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("f", obj->anchor_y);
}

pyobject_t wrap_slide_indicator_t_get_prop_indicated_target(pyobject_t self, pyobject_t pyargs) {
  slide_indicator_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->indicated_target);
}

pyobject_t wrap_slide_menu_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)slide_menu_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_slide_menu_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)slide_menu_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_slide_menu_set_value(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)slide_menu_set_value(widget, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_slide_menu_set_align_v(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  align_v_t align_v = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &align_v)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)slide_menu_set_align_v(widget, align_v);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_slide_menu_set_min_scale(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  float_t min_scale = 0;

  if (!PyArg_ParseTuple(pyargs, "O&f" , &parse_voidp, &widget, &min_scale)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)slide_menu_set_min_scale(widget, min_scale);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_slide_menu_t_get_prop_value(pyobject_t self, pyobject_t pyargs) {
  slide_menu_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->value);
}

pyobject_t wrap_slide_menu_t_get_prop_align_v(pyobject_t self, pyobject_t pyargs) {
  slide_menu_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->align_v);
}

pyobject_t wrap_slide_menu_t_get_prop_min_scale(pyobject_t self, pyobject_t pyargs) {
  slide_menu_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("f", obj->min_scale);
}

pyobject_t wrap_scroll_view_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)scroll_view_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_scroll_view_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)scroll_view_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_scroll_view_set_virtual_w(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  wh_t w = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &w)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)scroll_view_set_virtual_w(widget, w);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_scroll_view_set_virtual_h(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)scroll_view_set_virtual_h(widget, h);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_scroll_view_set_xslidable(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t xslidable = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &xslidable)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)scroll_view_set_xslidable(widget, xslidable);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_scroll_view_set_yslidable(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t yslidable = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &yslidable)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)scroll_view_set_yslidable(widget, yslidable);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_scroll_view_set_snap_to_page(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t snap_to_page = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &snap_to_page)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)scroll_view_set_snap_to_page(widget, snap_to_page);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_scroll_view_set_move_to_page(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t move_to_page = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &move_to_page)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)scroll_view_set_move_to_page(widget, move_to_page);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_scroll_view_set_recursive(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t recursive = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &recursive)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)scroll_view_set_recursive(widget, recursive);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_scroll_view_set_recursive_only(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t recursive = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &recursive)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)scroll_view_set_recursive_only(widget, recursive);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_scroll_view_set_offset(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t xoffset = 0;
  int32_t yoffset = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ii" , &parse_voidp, &widget, &xoffset, &yoffset)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)scroll_view_set_offset(widget, xoffset, yoffset);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_scroll_view_set_speed_scale(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  float_t xspeed_scale = 0;
  float_t yspeed_scale = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ff" , &parse_voidp, &widget, &xspeed_scale, &yspeed_scale)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)scroll_view_set_speed_scale(widget, xspeed_scale, yspeed_scale);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_scroll_view_scroll_to(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t xoffset_end = 0;
  int32_t yoffset_end = 0;
  int32_t duration = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iii" , &parse_voidp, &widget, &xoffset_end, &yoffset_end, &duration)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)scroll_view_scroll_to(widget, xoffset_end, yoffset_end, duration);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_scroll_view_scroll_delta_to(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t xoffset_delta = 0;
  int32_t yoffset_delta = 0;
  int32_t duration = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iii" , &parse_voidp, &widget, &xoffset_delta, &yoffset_delta, &duration)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)scroll_view_scroll_delta_to(widget, xoffset_delta, yoffset_delta, duration);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_scroll_view_t_get_prop_virtual_w(pyobject_t self, pyobject_t pyargs) {
  scroll_view_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->virtual_w);
}

pyobject_t wrap_scroll_view_t_get_prop_virtual_h(pyobject_t self, pyobject_t pyargs) {
  scroll_view_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->virtual_h);
}

pyobject_t wrap_scroll_view_t_get_prop_xoffset(pyobject_t self, pyobject_t pyargs) {
  scroll_view_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->xoffset);
}

pyobject_t wrap_scroll_view_t_get_prop_yoffset(pyobject_t self, pyobject_t pyargs) {
  scroll_view_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->yoffset);
}

pyobject_t wrap_scroll_view_t_get_prop_xspeed_scale(pyobject_t self, pyobject_t pyargs) {
  scroll_view_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("f", obj->xspeed_scale);
}

pyobject_t wrap_scroll_view_t_get_prop_yspeed_scale(pyobject_t self, pyobject_t pyargs) {
  scroll_view_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("f", obj->yspeed_scale);
}

pyobject_t wrap_scroll_view_t_get_prop_xslidable(pyobject_t self, pyobject_t pyargs) {
  scroll_view_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->xslidable);
}

pyobject_t wrap_scroll_view_t_get_prop_yslidable(pyobject_t self, pyobject_t pyargs) {
  scroll_view_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->yslidable);
}

pyobject_t wrap_scroll_view_t_get_prop_snap_to_page(pyobject_t self, pyobject_t pyargs) {
  scroll_view_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->snap_to_page);
}

pyobject_t wrap_scroll_view_t_get_prop_move_to_page(pyobject_t self, pyobject_t pyargs) {
  scroll_view_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->move_to_page);
}

pyobject_t wrap_scroll_view_t_get_prop_recursive(pyobject_t self, pyobject_t pyargs) {
  scroll_view_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->recursive);
}

pyobject_t wrap_scroll_bar_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)scroll_bar_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_scroll_bar_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)scroll_bar_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_scroll_bar_create_mobile(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)scroll_bar_create_mobile(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_scroll_bar_create_desktop(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)scroll_bar_create_desktop(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_scroll_bar_set_params(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t virtual_size = 0;
  int32_t row = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ii" , &parse_voidp, &widget, &virtual_size, &row)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)scroll_bar_set_params(widget, virtual_size, row);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_scroll_bar_scroll_to(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t value = 0;
  int32_t duration = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ii" , &parse_voidp, &widget, &value, &duration)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)scroll_bar_scroll_to(widget, value, duration);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_scroll_bar_set_value(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)scroll_bar_set_value(widget, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_scroll_bar_add_delta(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t delta = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &delta)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)scroll_bar_add_delta(widget, delta);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_scroll_bar_scroll_delta(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t delta = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &delta)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)scroll_bar_scroll_delta(widget, delta);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_scroll_bar_set_value_only(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)scroll_bar_set_value_only(widget, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_scroll_bar_is_mobile(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)scroll_bar_is_mobile(widget);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_scroll_bar_t_get_prop_virtual_size(pyobject_t self, pyobject_t pyargs) {
  scroll_bar_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->virtual_size);
}

pyobject_t wrap_scroll_bar_t_get_prop_value(pyobject_t self, pyobject_t pyargs) {
  scroll_bar_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->value);
}

pyobject_t wrap_scroll_bar_t_get_prop_row(pyobject_t self, pyobject_t pyargs) {
  scroll_bar_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->row);
}

pyobject_t wrap_scroll_bar_t_get_prop_animatable(pyobject_t self, pyobject_t pyargs) {
  scroll_bar_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->animatable);
}

pyobject_t wrap_list_view_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)list_view_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_list_view_set_item_height(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t item_height = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &item_height)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)list_view_set_item_height(widget, item_height);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_list_view_set_default_item_height(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t default_item_height = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &default_item_height)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)list_view_set_default_item_height(widget, default_item_height);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_list_view_set_auto_hide_scroll_bar(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t auto_hide_scroll_bar = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &auto_hide_scroll_bar)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)list_view_set_auto_hide_scroll_bar(widget, auto_hide_scroll_bar);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_list_view_set_floating_scroll_bar(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t floating_scroll_bar = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &floating_scroll_bar)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)list_view_set_floating_scroll_bar(widget, floating_scroll_bar);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_list_view_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)list_view_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_list_view_reinit(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)list_view_reinit(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_list_view_t_get_prop_item_height(pyobject_t self, pyobject_t pyargs) {
  list_view_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->item_height);
}

pyobject_t wrap_list_view_t_get_prop_default_item_height(pyobject_t self, pyobject_t pyargs) {
  list_view_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->default_item_height);
}

pyobject_t wrap_list_view_t_get_prop_auto_hide_scroll_bar(pyobject_t self, pyobject_t pyargs) {
  list_view_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->auto_hide_scroll_bar);
}

pyobject_t wrap_list_view_t_get_prop_floating_scroll_bar(pyobject_t self, pyobject_t pyargs) {
  list_view_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->floating_scroll_bar);
}

pyobject_t wrap_list_view_h_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)list_view_h_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_list_view_h_set_item_width(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t item_width = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &item_width)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)list_view_h_set_item_width(widget, item_width);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_list_view_h_set_spacing(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t spacing = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &spacing)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)list_view_h_set_spacing(widget, spacing);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_list_view_h_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)list_view_h_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_list_view_h_t_get_prop_item_width(pyobject_t self, pyobject_t pyargs) {
  list_view_h_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->item_width);
}

pyobject_t wrap_list_view_h_t_get_prop_spacing(pyobject_t self, pyobject_t pyargs) {
  list_view_h_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->spacing);
}

pyobject_t wrap_list_item_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)list_item_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_list_item_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)list_item_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_wheel_event_cast(pyobject_t self, pyobject_t pyargs) {
  wheel_event_t* ret = NULL;
  event_t* event = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &event)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (wheel_event_t*)wheel_event_cast(event);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_wheel_event_t_get_prop_dy(pyobject_t self, pyobject_t pyargs) {
  wheel_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->dy);
}

pyobject_t wrap_wheel_event_t_get_prop_alt(pyobject_t self, pyobject_t pyargs) {
  wheel_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->alt);
}

pyobject_t wrap_wheel_event_t_get_prop_ctrl(pyobject_t self, pyobject_t pyargs) {
  wheel_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->ctrl);
}

pyobject_t wrap_wheel_event_t_get_prop_shift(pyobject_t self, pyobject_t pyargs) {
  wheel_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->shift);
}

pyobject_t wrap_orientation_event_cast(pyobject_t self, pyobject_t pyargs) {
  orientation_event_t* ret = NULL;
  event_t* event = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &event)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (orientation_event_t*)orientation_event_cast(event);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_orientation_event_t_get_prop_orientation(pyobject_t self, pyobject_t pyargs) {
  orientation_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->orientation);
}

pyobject_t wrap_value_change_event_cast(pyobject_t self, pyobject_t pyargs) {
  value_change_event_t* ret = NULL;
  event_t* event = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &event)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (value_change_event_t*)value_change_event_cast(event);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_hscroll_label_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)hscroll_label_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_hscroll_label_set_lull(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t lull = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &lull)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)hscroll_label_set_lull(widget, lull);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_hscroll_label_set_duration(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t duration = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &duration)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)hscroll_label_set_duration(widget, duration);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_hscroll_label_set_only_focus(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t only_focus = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &only_focus)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)hscroll_label_set_only_focus(widget, only_focus);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_hscroll_label_set_only_parent_focus(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t only_parent_focus = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &only_parent_focus)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)hscroll_label_set_only_parent_focus(widget, only_parent_focus);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_hscroll_label_set_loop(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t loop = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &loop)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)hscroll_label_set_loop(widget, loop);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_hscroll_label_set_yoyo(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t yoyo = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &yoyo)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)hscroll_label_set_yoyo(widget, yoyo);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_hscroll_label_set_ellipses(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t ellipses = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &ellipses)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)hscroll_label_set_ellipses(widget, ellipses);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_hscroll_label_set_xoffset(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t xoffset = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &xoffset)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)hscroll_label_set_xoffset(widget, xoffset);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_hscroll_label_start(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)hscroll_label_start(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_hscroll_label_stop(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)hscroll_label_stop(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_hscroll_label_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)hscroll_label_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_hscroll_label_t_get_prop_only_focus(pyobject_t self, pyobject_t pyargs) {
  hscroll_label_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->only_focus);
}

pyobject_t wrap_hscroll_label_t_get_prop_only_parent_focus(pyobject_t self, pyobject_t pyargs) {
  hscroll_label_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->only_parent_focus);
}

pyobject_t wrap_hscroll_label_t_get_prop_loop(pyobject_t self, pyobject_t pyargs) {
  hscroll_label_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->loop);
}

pyobject_t wrap_hscroll_label_t_get_prop_yoyo(pyobject_t self, pyobject_t pyargs) {
  hscroll_label_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->yoyo);
}

pyobject_t wrap_hscroll_label_t_get_prop_ellipses(pyobject_t self, pyobject_t pyargs) {
  hscroll_label_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->ellipses);
}

pyobject_t wrap_hscroll_label_t_get_prop_lull(pyobject_t self, pyobject_t pyargs) {
  hscroll_label_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->lull);
}

pyobject_t wrap_hscroll_label_t_get_prop_duration(pyobject_t self, pyobject_t pyargs) {
  hscroll_label_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->duration);
}

pyobject_t wrap_hscroll_label_t_get_prop_xoffset(pyobject_t self, pyobject_t pyargs) {
  hscroll_label_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->xoffset);
}

pyobject_t wrap_hscroll_label_t_get_prop_text_w(pyobject_t self, pyobject_t pyargs) {
  hscroll_label_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->text_w);
}

pyobject_t wrap_rich_text_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)rich_text_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_rich_text_set_text(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  char* text = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &text)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)rich_text_set_text(widget, text);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_rich_text_set_yslidable(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t yslidable = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &yslidable)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)rich_text_set_yslidable(widget, yslidable);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_rich_text_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)rich_text_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_rich_text_t_get_prop_line_gap(pyobject_t self, pyobject_t pyargs) {
  rich_text_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->line_gap);
}

pyobject_t wrap_rich_text_t_get_prop_yslidable(pyobject_t self, pyobject_t pyargs) {
  rich_text_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->yslidable);
}

pyobject_t wrap_rich_text_view_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)rich_text_view_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_rich_text_view_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)rich_text_view_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_pointer_event_cast(pyobject_t self, pyobject_t pyargs) {
  pointer_event_t* ret = NULL;
  event_t* event = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &event)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (pointer_event_t*)pointer_event_cast(event);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_pointer_event_t_get_prop_x(pyobject_t self, pyobject_t pyargs) {
  pointer_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->x);
}

pyobject_t wrap_pointer_event_t_get_prop_y(pyobject_t self, pyobject_t pyargs) {
  pointer_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->y);
}

pyobject_t wrap_pointer_event_t_get_prop_button(pyobject_t self, pyobject_t pyargs) {
  pointer_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->button);
}

pyobject_t wrap_pointer_event_t_get_prop_pressed(pyobject_t self, pyobject_t pyargs) {
  pointer_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->pressed);
}

pyobject_t wrap_pointer_event_t_get_prop_alt(pyobject_t self, pyobject_t pyargs) {
  pointer_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->alt);
}

pyobject_t wrap_pointer_event_t_get_prop_ctrl(pyobject_t self, pyobject_t pyargs) {
  pointer_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->ctrl);
}

pyobject_t wrap_pointer_event_t_get_prop_cmd(pyobject_t self, pyobject_t pyargs) {
  pointer_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->cmd);
}

pyobject_t wrap_pointer_event_t_get_prop_menu(pyobject_t self, pyobject_t pyargs) {
  pointer_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->menu);
}

pyobject_t wrap_pointer_event_t_get_prop_shift(pyobject_t self, pyobject_t pyargs) {
  pointer_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->shift);
}

pyobject_t wrap_progress_circle_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)progress_circle_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_progress_circle_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)progress_circle_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_progress_circle_set_value(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  float_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&f" , &parse_voidp, &widget, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)progress_circle_set_value(widget, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_progress_circle_set_max(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t max = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &max)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)progress_circle_set_max(widget, max);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_progress_circle_set_format(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* format = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &format)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)progress_circle_set_format(widget, format);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_progress_circle_set_line_width(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t line_width = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &line_width)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)progress_circle_set_line_width(widget, line_width);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_progress_circle_set_start_angle(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t start_angle = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &start_angle)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)progress_circle_set_start_angle(widget, start_angle);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_progress_circle_set_line_cap(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* line_cap = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &line_cap)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)progress_circle_set_line_cap(widget, line_cap);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_progress_circle_set_show_text(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t show_text = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &show_text)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)progress_circle_set_show_text(widget, show_text);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_progress_circle_set_counter_clock_wise(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t counter_clock_wise = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &counter_clock_wise)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)progress_circle_set_counter_clock_wise(widget, counter_clock_wise);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_progress_circle_t_get_prop_value(pyobject_t self, pyobject_t pyargs) {
  progress_circle_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("f", obj->value);
}

pyobject_t wrap_progress_circle_t_get_prop_max(pyobject_t self, pyobject_t pyargs) {
  progress_circle_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("f", obj->max);
}

pyobject_t wrap_progress_circle_t_get_prop_format(pyobject_t self, pyobject_t pyargs) {
  progress_circle_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->format);
}

pyobject_t wrap_progress_circle_t_get_prop_start_angle(pyobject_t self, pyobject_t pyargs) {
  progress_circle_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->start_angle);
}

pyobject_t wrap_progress_circle_t_get_prop_line_width(pyobject_t self, pyobject_t pyargs) {
  progress_circle_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->line_width);
}

pyobject_t wrap_progress_circle_t_get_prop_line_cap(pyobject_t self, pyobject_t pyargs) {
  progress_circle_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->line_cap);
}

pyobject_t wrap_progress_circle_t_get_prop_counter_clock_wise(pyobject_t self, pyobject_t pyargs) {
  progress_circle_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->counter_clock_wise);
}

pyobject_t wrap_progress_circle_t_get_prop_show_text(pyobject_t self, pyobject_t pyargs) {
  progress_circle_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->show_text);
}

pyobject_t wrap_key_event_cast(pyobject_t self, pyobject_t pyargs) {
  key_event_t* ret = NULL;
  event_t* event = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &event)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (key_event_t*)key_event_cast(event);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_key_event_t_get_prop_key(pyobject_t self, pyobject_t pyargs) {
  key_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->key);
}

pyobject_t wrap_key_event_t_get_prop_alt(pyobject_t self, pyobject_t pyargs) {
  key_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->alt);
}

pyobject_t wrap_key_event_t_get_prop_lalt(pyobject_t self, pyobject_t pyargs) {
  key_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->lalt);
}

pyobject_t wrap_key_event_t_get_prop_ralt(pyobject_t self, pyobject_t pyargs) {
  key_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->ralt);
}

pyobject_t wrap_key_event_t_get_prop_ctrl(pyobject_t self, pyobject_t pyargs) {
  key_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->ctrl);
}

pyobject_t wrap_key_event_t_get_prop_lctrl(pyobject_t self, pyobject_t pyargs) {
  key_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->lctrl);
}

pyobject_t wrap_key_event_t_get_prop_rctrl(pyobject_t self, pyobject_t pyargs) {
  key_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->rctrl);
}

pyobject_t wrap_key_event_t_get_prop_shift(pyobject_t self, pyobject_t pyargs) {
  key_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->shift);
}

pyobject_t wrap_key_event_t_get_prop_lshift(pyobject_t self, pyobject_t pyargs) {
  key_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->lshift);
}

pyobject_t wrap_key_event_t_get_prop_rshift(pyobject_t self, pyobject_t pyargs) {
  key_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->rshift);
}

pyobject_t wrap_key_event_t_get_prop_cmd(pyobject_t self, pyobject_t pyargs) {
  key_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->cmd);
}

pyobject_t wrap_key_event_t_get_prop_menu(pyobject_t self, pyobject_t pyargs) {
  key_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->menu);
}

pyobject_t wrap_key_event_t_get_prop_capslock(pyobject_t self, pyobject_t pyargs) {
  key_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->capslock);
}

pyobject_t wrap_mledit_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)mledit_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_mledit_set_readonly(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t readonly = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &readonly)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)mledit_set_readonly(widget, readonly);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_mledit_set_cancelable(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t cancelable = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &cancelable)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)mledit_set_cancelable(widget, cancelable);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_mledit_set_focus(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t focus = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &focus)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)mledit_set_focus(widget, focus);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_mledit_set_wrap_word(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t wrap_word = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &wrap_word)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)mledit_set_wrap_word(widget, wrap_word);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_mledit_set_max_lines(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t max_lines = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &max_lines)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)mledit_set_max_lines(widget, max_lines);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_mledit_set_tips(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  char* tips = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &tips)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)mledit_set_tips(widget, tips);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_mledit_set_tr_tips(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* tr_tips = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &tr_tips)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)mledit_set_tr_tips(widget, tr_tips);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_mledit_set_keyboard(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  char* keyboard = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &keyboard)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)mledit_set_keyboard(widget, keyboard);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_mledit_set_cursor(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t cursor = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &cursor)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)mledit_set_cursor(widget, cursor);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_mledit_set_scroll_line(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t scroll_line = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &scroll_line)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)mledit_set_scroll_line(widget, scroll_line);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_mledit_set_open_im_when_focused(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t open_im_when_focused = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &open_im_when_focused)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)mledit_set_open_im_when_focused(widget, open_im_when_focused);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_mledit_set_close_im_when_blured(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t close_im_when_blured = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &close_im_when_blured)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)mledit_set_close_im_when_blured(widget, close_im_when_blured);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_mledit_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)mledit_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_mledit_t_get_prop_tips(pyobject_t self, pyobject_t pyargs) {
  mledit_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->tips);
}

pyobject_t wrap_mledit_t_get_prop_tr_tips(pyobject_t self, pyobject_t pyargs) {
  mledit_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->tr_tips);
}

pyobject_t wrap_mledit_t_get_prop_keyboard(pyobject_t self, pyobject_t pyargs) {
  mledit_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->keyboard);
}

pyobject_t wrap_mledit_t_get_prop_max_lines(pyobject_t self, pyobject_t pyargs) {
  mledit_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->max_lines);
}

pyobject_t wrap_mledit_t_get_prop_wrap_word(pyobject_t self, pyobject_t pyargs) {
  mledit_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->wrap_word);
}

pyobject_t wrap_mledit_t_get_prop_scroll_line(pyobject_t self, pyobject_t pyargs) {
  mledit_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->scroll_line);
}

pyobject_t wrap_mledit_t_get_prop_readonly(pyobject_t self, pyobject_t pyargs) {
  mledit_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->readonly);
}

pyobject_t wrap_mledit_t_get_prop_cancelable(pyobject_t self, pyobject_t pyargs) {
  mledit_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->cancelable);
}

pyobject_t wrap_mledit_t_get_prop_open_im_when_focused(pyobject_t self, pyobject_t pyargs) {
  mledit_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->open_im_when_focused);
}

pyobject_t wrap_mledit_t_get_prop_close_im_when_blured(pyobject_t self, pyobject_t pyargs) {
  mledit_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->close_im_when_blured);
}

pyobject_t wrap_line_number_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)line_number_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_line_number_set_top_margin(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t top_margin = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &top_margin)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)line_number_set_top_margin(widget, top_margin);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_line_number_set_bottom_margin(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t bottom_margin = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &bottom_margin)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)line_number_set_bottom_margin(widget, bottom_margin);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_line_number_set_line_height(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t line_height = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &line_height)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)line_number_set_line_height(widget, line_height);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_line_number_set_yoffset(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t yoffset = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &yoffset)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)line_number_set_yoffset(widget, yoffset);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_line_number_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)line_number_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_lang_indicator_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)lang_indicator_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_lang_indicator_set_image(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* image = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &image)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)lang_indicator_set_image(widget, image);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_lang_indicator_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)lang_indicator_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_lang_indicator_t_get_prop_image(pyobject_t self, pyobject_t pyargs) {
  lang_indicator_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->image);
}

pyobject_t wrap_paint_event_cast(pyobject_t self, pyobject_t pyargs) {
  paint_event_t* ret = NULL;
  event_t* event = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &event)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (paint_event_t*)paint_event_cast(event);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_paint_event_t_get_prop_c(pyobject_t self, pyobject_t pyargs) {
  paint_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return PyLong_FromVoidPtr((void*)obj->c);
}

pyobject_t wrap_candidates_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)candidates_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_candidates_set_pre(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t pre = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &pre)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)candidates_set_pre(widget, pre);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_candidates_set_select_by_num(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t select_by_num = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &select_by_num)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)candidates_set_select_by_num(widget, select_by_num);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_candidates_set_auto_hide(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t auto_hide = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &auto_hide)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)candidates_set_auto_hide(widget, auto_hide);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_candidates_set_button_style(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* button_style = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &button_style)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)candidates_set_button_style(widget, button_style);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_candidates_t_get_prop_pre(pyobject_t self, pyobject_t pyargs) {
  candidates_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->pre);
}

pyobject_t wrap_candidates_t_get_prop_select_by_num(pyobject_t self, pyobject_t pyargs) {
  candidates_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->select_by_num);
}

pyobject_t wrap_candidates_t_get_prop_auto_hide(pyobject_t self, pyobject_t pyargs) {
  candidates_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->auto_hide);
}

pyobject_t wrap_candidates_t_get_prop_button_style(pyobject_t self, pyobject_t pyargs) {
  candidates_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->button_style);
}

pyobject_t wrap_image_value_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)image_value_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_image_value_set_image(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* image = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &image)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_value_set_image(widget, image);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_value_set_format(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* format = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &format)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_value_set_format(widget, format);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_value_set_click_add_delta(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  double delta = 0;

  if (!PyArg_ParseTuple(pyargs, "O&d" , &parse_voidp, &widget, &delta)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_value_set_click_add_delta(widget, delta);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_value_set_value(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  double value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&d" , &parse_voidp, &widget, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_value_set_value(widget, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_value_set_min(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  double min = 0;

  if (!PyArg_ParseTuple(pyargs, "O&d" , &parse_voidp, &widget, &min)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_value_set_min(widget, min);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_value_set_max(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  double max = 0;

  if (!PyArg_ParseTuple(pyargs, "O&d" , &parse_voidp, &widget, &max)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_value_set_max(widget, max);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_value_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)image_value_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_image_value_t_get_prop_image(pyobject_t self, pyobject_t pyargs) {
  image_value_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->image);
}

pyobject_t wrap_image_value_t_get_prop_format(pyobject_t self, pyobject_t pyargs) {
  image_value_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->format);
}

pyobject_t wrap_image_value_t_get_prop_click_add_delta(pyobject_t self, pyobject_t pyargs) {
  image_value_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("d", obj->click_add_delta);
}

pyobject_t wrap_image_value_t_get_prop_value(pyobject_t self, pyobject_t pyargs) {
  image_value_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("d", obj->value);
}

pyobject_t wrap_image_value_t_get_prop_min(pyobject_t self, pyobject_t pyargs) {
  image_value_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("d", obj->min);
}

pyobject_t wrap_image_value_t_get_prop_max(pyobject_t self, pyobject_t pyargs) {
  image_value_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("d", obj->max);
}

pyobject_t wrap_window_event_cast(pyobject_t self, pyobject_t pyargs) {
  window_event_t* ret = NULL;
  event_t* event = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &event)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (window_event_t*)window_event_cast(event);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_window_event_t_get_prop_window(pyobject_t self, pyobject_t pyargs) {
  window_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return PyLong_FromVoidPtr((void*)obj->window);
}

pyobject_t wrap_guage_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)guage_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_guage_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)guage_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_guage_set_image(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)guage_set_image(widget, name);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_guage_set_draw_type(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  image_draw_type_t draw_type = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &draw_type)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)guage_set_draw_type(widget, draw_type);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_guage_t_get_prop_image(pyobject_t self, pyobject_t pyargs) {
  guage_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->image);
}

pyobject_t wrap_guage_t_get_prop_draw_type(pyobject_t self, pyobject_t pyargs) {
  guage_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->draw_type);
}

pyobject_t wrap_guage_pointer_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)guage_pointer_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_guage_pointer_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)guage_pointer_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_guage_pointer_set_angle(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t angle = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &angle)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)guage_pointer_set_angle(widget, angle);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_guage_pointer_set_image(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* image = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &image)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)guage_pointer_set_image(widget, image);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_guage_pointer_set_anchor(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* anchor_x = NULL;
  const char* anchor_y = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&ss" , &parse_voidp, &widget, &anchor_x, &anchor_y)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)guage_pointer_set_anchor(widget, anchor_x, anchor_y);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_guage_pointer_t_get_prop_angle(pyobject_t self, pyobject_t pyargs) {
  guage_pointer_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->angle);
}

pyobject_t wrap_guage_pointer_t_get_prop_image(pyobject_t self, pyobject_t pyargs) {
  guage_pointer_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->image);
}

pyobject_t wrap_guage_pointer_t_get_prop_anchor_x(pyobject_t self, pyobject_t pyargs) {
  guage_pointer_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->anchor_x);
}

pyobject_t wrap_guage_pointer_t_get_prop_anchor_y(pyobject_t self, pyobject_t pyargs) {
  guage_pointer_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->anchor_y);
}

pyobject_t wrap_multi_gesture_event_cast(pyobject_t self, pyobject_t pyargs) {
  multi_gesture_event_t* ret = NULL;
  event_t* event = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &event)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (multi_gesture_event_t*)multi_gesture_event_cast(event);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_multi_gesture_event_t_get_prop_x(pyobject_t self, pyobject_t pyargs) {
  multi_gesture_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->x);
}

pyobject_t wrap_multi_gesture_event_t_get_prop_y(pyobject_t self, pyobject_t pyargs) {
  multi_gesture_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->y);
}

pyobject_t wrap_multi_gesture_event_t_get_prop_rotation(pyobject_t self, pyobject_t pyargs) {
  multi_gesture_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("f", obj->rotation);
}

pyobject_t wrap_multi_gesture_event_t_get_prop_distance(pyobject_t self, pyobject_t pyargs) {
  multi_gesture_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("f", obj->distance);
}

pyobject_t wrap_file_chooser_create(pyobject_t self, pyobject_t pyargs) {
  file_chooser_t* ret = NULL;

  if (!PyArg_ParseTuple(pyargs, "" )) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (file_chooser_t*)file_chooser_create();
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_file_chooser_set_init_dir(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  file_chooser_t* chooser = NULL;
  const char* init_dir = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &chooser, &init_dir)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)file_chooser_set_init_dir(chooser, init_dir);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_file_chooser_set_filter(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  file_chooser_t* chooser = NULL;
  const char* filter = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &chooser, &filter)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)file_chooser_set_filter(chooser, filter);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_file_chooser_cast(pyobject_t self, pyobject_t pyargs) {
  file_chooser_t* ret = NULL;
  file_chooser_t* chooser = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &chooser)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (file_chooser_t*)file_chooser_cast(chooser);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_file_chooser_choose_file_for_save(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  file_chooser_t* chooser = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &chooser)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)file_chooser_choose_file_for_save(chooser);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_file_chooser_choose_file_for_open(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  file_chooser_t* chooser = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &chooser)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)file_chooser_choose_file_for_open(chooser);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_file_chooser_choose_folder(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  file_chooser_t* chooser = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &chooser)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)file_chooser_choose_folder(chooser);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_file_chooser_get_dir(pyobject_t self, pyobject_t pyargs) {
  const char* ret = NULL;
  file_chooser_t* chooser = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &chooser)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (const char*)file_chooser_get_dir(chooser);
  return Py_BuildValue("s", ret);
}

pyobject_t wrap_file_chooser_get_filename(pyobject_t self, pyobject_t pyargs) {
  const char* ret = NULL;
  file_chooser_t* chooser = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &chooser)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (const char*)file_chooser_get_filename(chooser);
  return Py_BuildValue("s", ret);
}

pyobject_t wrap_file_chooser_is_aborted(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  file_chooser_t* chooser = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &chooser)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)file_chooser_is_aborted(chooser);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_file_browser_view_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)file_browser_view_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_file_browser_view_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)file_browser_view_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_file_browser_view_set_init_dir(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* init_dir = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &init_dir)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)file_browser_view_set_init_dir(widget, init_dir);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_file_browser_view_set_filter(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* filter = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &filter)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)file_browser_view_set_filter(widget, filter);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_file_browser_view_reload(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)file_browser_view_reload(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_file_browser_view_set_ignore_hidden_files(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t ignore_hidden_files = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &ignore_hidden_files)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)file_browser_view_set_ignore_hidden_files(widget, ignore_hidden_files);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_file_browser_view_set_sort_ascending(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t sort_ascending = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &sort_ascending)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)file_browser_view_set_sort_ascending(widget, sort_ascending);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_file_browser_view_set_show_check_button(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t show_check_button = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &show_check_button)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)file_browser_view_set_show_check_button(widget, show_check_button);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_file_browser_view_set_sort_by(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* sort_by = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &sort_by)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)file_browser_view_set_sort_by(widget, sort_by);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_file_browser_view_get_cwd(pyobject_t self, pyobject_t pyargs) {
  const char* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (const char*)file_browser_view_get_cwd(widget);
  return Py_BuildValue("s", ret);
}

pyobject_t wrap_file_browser_view_create_dir(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)file_browser_view_create_dir(widget, name);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_file_browser_view_create_file(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* name = NULL;
  const char* data = NULL;
  uint32_t size = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ssi" , &parse_voidp, &widget, &name, &data, &size)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)file_browser_view_create_file(widget, name, data, size);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_file_browser_view_t_get_prop_init_dir(pyobject_t self, pyobject_t pyargs) {
  file_browser_view_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->init_dir);
}

pyobject_t wrap_file_browser_view_t_get_prop_filter(pyobject_t self, pyobject_t pyargs) {
  file_browser_view_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->filter);
}

pyobject_t wrap_file_browser_view_t_get_prop_ignore_hidden_files(pyobject_t self, pyobject_t pyargs) {
  file_browser_view_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->ignore_hidden_files);
}

pyobject_t wrap_file_browser_view_t_get_prop_sort_ascending(pyobject_t self, pyobject_t pyargs) {
  file_browser_view_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->sort_ascending);
}

pyobject_t wrap_file_browser_view_t_get_prop_show_check_button(pyobject_t self, pyobject_t pyargs) {
  file_browser_view_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->show_check_button);
}

pyobject_t wrap_file_browser_view_t_get_prop_sort_by(pyobject_t self, pyobject_t pyargs) {
  file_browser_view_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->sort_by);
}

pyobject_t wrap_draggable_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)draggable_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_draggable_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)draggable_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_draggable_set_top(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t top = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &top)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)draggable_set_top(widget, top);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_draggable_set_bottom(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t bottom = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &bottom)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)draggable_set_bottom(widget, bottom);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_draggable_set_left(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t left = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &left)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)draggable_set_left(widget, left);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_draggable_set_right(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t right = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &right)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)draggable_set_right(widget, right);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_draggable_set_vertical_only(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t vertical_only = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &vertical_only)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)draggable_set_vertical_only(widget, vertical_only);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_draggable_set_horizontal_only(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t horizontal_only = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &horizontal_only)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)draggable_set_horizontal_only(widget, horizontal_only);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_draggable_set_drag_window(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t drag_window = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &drag_window)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)draggable_set_drag_window(widget, drag_window);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_draggable_t_get_prop_top(pyobject_t self, pyobject_t pyargs) {
  draggable_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->top);
}

pyobject_t wrap_draggable_t_get_prop_bottom(pyobject_t self, pyobject_t pyargs) {
  draggable_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->bottom);
}

pyobject_t wrap_draggable_t_get_prop_left(pyobject_t self, pyobject_t pyargs) {
  draggable_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->left);
}

pyobject_t wrap_draggable_t_get_prop_right(pyobject_t self, pyobject_t pyargs) {
  draggable_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->right);
}

pyobject_t wrap_draggable_t_get_prop_vertical_only(pyobject_t self, pyobject_t pyargs) {
  draggable_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->vertical_only);
}

pyobject_t wrap_draggable_t_get_prop_horizontal_only(pyobject_t self, pyobject_t pyargs) {
  draggable_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->horizontal_only);
}

pyobject_t wrap_draggable_t_get_prop_drag_window(pyobject_t self, pyobject_t pyargs) {
  draggable_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->drag_window);
}

pyobject_t wrap_assets_event_t_get_prop_type(pyobject_t self, pyobject_t pyargs) {
  assets_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->type);
}

pyobject_t wrap_assets_event_t_get_prop_asset_info(pyobject_t self, pyobject_t pyargs) {
  assets_event_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return PyLong_FromVoidPtr((void*)obj->asset_info);
}

pyobject_t wrap_color_picker_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)color_picker_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_color_picker_set_color(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* color = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &color)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)color_picker_set_color(widget, color);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_color_picker_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)color_picker_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_color_picker_t_get_prop_value(pyobject_t self, pyobject_t pyargs) {
  color_picker_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->value);
}

pyobject_t wrap_color_component_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)color_component_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_canvas_widget_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)canvas_widget_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_canvas_widget_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)canvas_widget_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_image_base_set_image(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_base_set_image(widget, name);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_base_set_rotation(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  float_t rotation = 0;

  if (!PyArg_ParseTuple(pyargs, "O&f" , &parse_voidp, &widget, &rotation)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_base_set_rotation(widget, rotation);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_base_set_scale(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  float_t scale_x = 0;
  float_t scale_y = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ff" , &parse_voidp, &widget, &scale_x, &scale_y)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_base_set_scale(widget, scale_x, scale_y);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_base_set_anchor(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  float_t anchor_x = 0;
  float_t anchor_y = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ff" , &parse_voidp, &widget, &anchor_x, &anchor_y)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_base_set_anchor(widget, anchor_x, anchor_y);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_base_set_selected(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t selected = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &selected)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_base_set_selected(widget, selected);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_base_set_selectable(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t selectable = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &selectable)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_base_set_selectable(widget, selectable);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_base_set_clickable(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t clickable = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &clickable)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_base_set_clickable(widget, clickable);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_base_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)image_base_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_image_base_t_get_prop_image(pyobject_t self, pyobject_t pyargs) {
  image_base_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->image);
}

pyobject_t wrap_image_base_t_get_prop_anchor_x(pyobject_t self, pyobject_t pyargs) {
  image_base_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("f", obj->anchor_x);
}

pyobject_t wrap_image_base_t_get_prop_anchor_y(pyobject_t self, pyobject_t pyargs) {
  image_base_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("f", obj->anchor_y);
}

pyobject_t wrap_image_base_t_get_prop_scale_x(pyobject_t self, pyobject_t pyargs) {
  image_base_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("f", obj->scale_x);
}

pyobject_t wrap_image_base_t_get_prop_scale_y(pyobject_t self, pyobject_t pyargs) {
  image_base_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("f", obj->scale_y);
}

pyobject_t wrap_image_base_t_get_prop_rotation(pyobject_t self, pyobject_t pyargs) {
  image_base_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("f", obj->rotation);
}

pyobject_t wrap_image_base_t_get_prop_clickable(pyobject_t self, pyobject_t pyargs) {
  image_base_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->clickable);
}

pyobject_t wrap_image_base_t_get_prop_selectable(pyobject_t self, pyobject_t pyargs) {
  image_base_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->selectable);
}

pyobject_t wrap_image_base_t_get_prop_selected(pyobject_t self, pyobject_t pyargs) {
  image_base_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->selected);
}

pyobject_t wrap_window_manager(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;

  if (!PyArg_ParseTuple(pyargs, "" )) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)window_manager();
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_window_manager_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)window_manager_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_window_manager_get_top_main_window(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)window_manager_get_top_main_window(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_window_manager_get_top_window(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)window_manager_get_top_window(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_window_manager_get_prev_window(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)window_manager_get_prev_window(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_window_manager_get_pointer_x(pyobject_t self, pyobject_t pyargs) {
  xy_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (xy_t)window_manager_get_pointer_x(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_window_manager_get_pointer_y(pyobject_t self, pyobject_t pyargs) {
  xy_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (xy_t)window_manager_get_pointer_y(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_window_manager_get_pointer_pressed(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)window_manager_get_pointer_pressed(widget);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_window_manager_is_animating(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)window_manager_is_animating(widget);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_window_manager_set_show_fps(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t show_fps = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &show_fps)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)window_manager_set_show_fps(widget, show_fps);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_window_manager_set_screen_saver_time(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t screen_saver_time = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &screen_saver_time)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)window_manager_set_screen_saver_time(widget, screen_saver_time);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_window_manager_set_cursor(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* cursor = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &cursor)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)window_manager_set_cursor(widget, cursor);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_window_manager_back(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)window_manager_back(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_window_manager_back_to_home(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)window_manager_back_to_home(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_window_manager_back_to(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* target = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &target)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)window_manager_back_to(widget, target);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_window_manager_resize(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ii" , &parse_voidp, &widget, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)window_manager_resize(widget, w, h);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_window_manager_close_all(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)window_manager_close_all(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_window_base_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)window_base_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_window_base_t_get_prop_theme(pyobject_t self, pyobject_t pyargs) {
  window_base_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->theme);
}

pyobject_t wrap_window_base_t_get_prop_design_w(pyobject_t self, pyobject_t pyargs) {
  window_base_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->design_w);
}

pyobject_t wrap_window_base_t_get_prop_design_h(pyobject_t self, pyobject_t pyargs) {
  window_base_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->design_h);
}

pyobject_t wrap_window_base_t_get_prop_auto_scale_children_x(pyobject_t self, pyobject_t pyargs) {
  window_base_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->auto_scale_children_x);
}

pyobject_t wrap_window_base_t_get_prop_auto_scale_children_y(pyobject_t self, pyobject_t pyargs) {
  window_base_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->auto_scale_children_y);
}

pyobject_t wrap_window_base_t_get_prop_auto_scale_children_w(pyobject_t self, pyobject_t pyargs) {
  window_base_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->auto_scale_children_w);
}

pyobject_t wrap_window_base_t_get_prop_auto_scale_children_h(pyobject_t self, pyobject_t pyargs) {
  window_base_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->auto_scale_children_h);
}

pyobject_t wrap_window_base_t_get_prop_disable_anim(pyobject_t self, pyobject_t pyargs) {
  window_base_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->disable_anim);
}

pyobject_t wrap_window_base_t_get_prop_closable(pyobject_t self, pyobject_t pyargs) {
  window_base_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->closable);
}

pyobject_t wrap_window_base_t_get_prop_open_anim_hint(pyobject_t self, pyobject_t pyargs) {
  window_base_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->open_anim_hint);
}

pyobject_t wrap_window_base_t_get_prop_close_anim_hint(pyobject_t self, pyobject_t pyargs) {
  window_base_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->close_anim_hint);
}

pyobject_t wrap_window_base_t_get_prop_move_focus_prev_key(pyobject_t self, pyobject_t pyargs) {
  window_base_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->move_focus_prev_key);
}

pyobject_t wrap_window_base_t_get_prop_move_focus_next_key(pyobject_t self, pyobject_t pyargs) {
  window_base_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->move_focus_next_key);
}

pyobject_t wrap_window_base_t_get_prop_move_focus_up_key(pyobject_t self, pyobject_t pyargs) {
  window_base_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->move_focus_up_key);
}

pyobject_t wrap_window_base_t_get_prop_move_focus_down_key(pyobject_t self, pyobject_t pyargs) {
  window_base_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->move_focus_down_key);
}

pyobject_t wrap_window_base_t_get_prop_move_focus_left_key(pyobject_t self, pyobject_t pyargs) {
  window_base_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->move_focus_left_key);
}

pyobject_t wrap_window_base_t_get_prop_move_focus_right_key(pyobject_t self, pyobject_t pyargs) {
  window_base_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->move_focus_right_key);
}

pyobject_t wrap_window_base_t_get_prop_single_instance(pyobject_t self, pyobject_t pyargs) {
  window_base_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->single_instance);
}

pyobject_t wrap_style_mutable_set_name(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  style_t* s = NULL;
  const char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &s, &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)style_mutable_set_name(s, name);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_style_mutable_set_int(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  style_t* s = NULL;
  const char* state = NULL;
  const char* name = NULL;
  uint32_t val = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ssi" , &parse_voidp, &s, &state, &name, &val)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)style_mutable_set_int(s, state, name, val);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_style_mutable_cast(pyobject_t self, pyobject_t pyargs) {
  style_t* ret = NULL;
  style_t* s = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &s)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (style_t*)style_mutable_cast(s);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_style_mutable_create(pyobject_t self, pyobject_t pyargs) {
  style_t* ret = NULL;
  style_t* default_style = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &default_style)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (style_t*)style_mutable_create(default_style);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_style_mutable_t_get_prop_name(pyobject_t self, pyobject_t pyargs) {
  style_mutable_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->name);
}

pyobject_t wrap_native_window_move(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  native_window_t* win = NULL;
  xy_t x = 0;
  xy_t y = 0;
  bool_t force = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iib" , &parse_voidp, &win, &x, &y, &force)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)native_window_move(win, x, y, force);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_native_window_resize(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  native_window_t* win = NULL;
  wh_t w = 0;
  wh_t h = 0;
  bool_t force = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iib" , &parse_voidp, &win, &w, &h, &force)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)native_window_resize(win, w, h, force);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_native_window_minimize(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  native_window_t* win = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &win)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)native_window_minimize(win);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_native_window_maximize(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  native_window_t* win = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &win)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)native_window_maximize(win);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_native_window_restore(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  native_window_t* win = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &win)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)native_window_restore(win);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_native_window_center(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  native_window_t* win = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &win)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)native_window_center(win);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_native_window_show_border(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  native_window_t* win = NULL;
  bool_t show = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &win, &show)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)native_window_show_border(win, show);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_native_window_set_fullscreen(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  native_window_t* win = NULL;
  bool_t fullscreen = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &win, &fullscreen)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)native_window_set_fullscreen(win, fullscreen);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_native_window_set_cursor(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  native_window_t* win = NULL;
  const char* name = NULL;
  bitmap_t* img = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&sO&" , &parse_voidp, &win, &name, &parse_voidp, &img)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)native_window_set_cursor(win, name, img);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_timer_info_cast(pyobject_t self, pyobject_t pyargs) {
  timer_info_t* ret = NULL;
  timer_info_t* timer = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &timer)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (timer_info_t*)timer_info_cast(timer);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_timer_info_t_get_prop_ctx(pyobject_t self, pyobject_t pyargs) {
  timer_info_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return PyLong_FromVoidPtr((void*)obj->ctx);
}

pyobject_t wrap_timer_info_t_get_prop_id(pyobject_t self, pyobject_t pyargs) {
  timer_info_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->id);
}

pyobject_t wrap_timer_info_t_get_prop_now(pyobject_t self, pyobject_t pyargs) {
  timer_info_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->now);
}

pyobject_t wrap_gif_image_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)gif_image_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_gif_image_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)gif_image_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_keyboard_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)keyboard_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_keyboard_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)keyboard_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_object_default_create(pyobject_t self, pyobject_t pyargs) {
  object_t* ret = NULL;

  if (!PyArg_ParseTuple(pyargs, "" )) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (object_t*)object_default_create();
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_object_default_clear_props(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_default_clear_props(obj);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_default_t_get_prop_props_size(pyobject_t self, pyobject_t pyargs) {
  object_default_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->props_size);
}

pyobject_t wrap_object_array_create(pyobject_t self, pyobject_t pyargs) {
  object_t* ret = NULL;

  if (!PyArg_ParseTuple(pyargs, "" )) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (object_t*)object_array_create();
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_object_array_clear_props(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_array_clear_props(obj);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_array_insert(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  uint32_t index = 0;
  const value_t* v = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&iO&" , &parse_voidp, &obj, &index, &parse_voidp, &v)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_array_insert(obj, index, v);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_array_push(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  const value_t* v = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&O&" , &parse_voidp, &obj, &parse_voidp, &v)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_array_push(obj, v);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_array_remove(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  object_t* obj = NULL;
  uint32_t index = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &obj, &index)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)object_array_remove(obj, index);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_object_array_t_get_prop_size(pyobject_t self, pyobject_t pyargs) {
  object_array_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->size);
}

pyobject_t wrap_dialog_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)dialog_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_dialog_create_simple(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)dialog_create_simple(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_dialog_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)dialog_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_dialog_get_title(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)dialog_get_title(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_dialog_get_client(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)dialog_get_client(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_dialog_open(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  const char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "s" , &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)dialog_open(name);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_dialog_set_title(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  char* title = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &title)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)dialog_set_title(widget, title);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_dialog_modal(pyobject_t self, pyobject_t pyargs) {
  dialog_quit_code_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (dialog_quit_code_t)dialog_modal(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_dialog_quit(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t code = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &code)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)dialog_quit(widget, code);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_dialog_is_quited(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)dialog_is_quited(widget);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_dialog_is_modal(pyobject_t self, pyobject_t pyargs) {
  bool_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (bool_t)dialog_is_modal(widget);
  return Py_BuildValue("b", ret);
}

pyobject_t wrap_dialog_toast(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  const char* text = NULL;
  uint32_t duration = 0;

  if (!PyArg_ParseTuple(pyargs, "si" , &text, &duration)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)dialog_toast(text, duration);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_dialog_info(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  const char* title = NULL;
  const char* text = NULL;

  if (!PyArg_ParseTuple(pyargs, "ss" , &title, &text)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)dialog_info(title, text);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_dialog_warn(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  const char* title = NULL;
  const char* text = NULL;

  if (!PyArg_ParseTuple(pyargs, "ss" , &title, &text)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)dialog_warn(title, text);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_dialog_confirm(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  const char* title = NULL;
  const char* text = NULL;

  if (!PyArg_ParseTuple(pyargs, "ss" , &title, &text)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)dialog_confirm(title, text);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_dialog_t_get_prop_highlight(pyobject_t self, pyobject_t pyargs) {
  dialog_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->highlight);
}

pyobject_t wrap_svg_image_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)svg_image_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_svg_image_set_image(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)svg_image_set_image(widget, name);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_svg_image_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)svg_image_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_calibration_win_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)calibration_win_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_idle_info_cast(pyobject_t self, pyobject_t pyargs) {
  idle_info_t* ret = NULL;
  idle_info_t* idle = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &idle)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (idle_info_t*)idle_info_cast(idle);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_idle_info_t_get_prop_ctx(pyobject_t self, pyobject_t pyargs) {
  idle_info_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return PyLong_FromVoidPtr((void*)obj->ctx);
}

pyobject_t wrap_idle_info_t_get_prop_id(pyobject_t self, pyobject_t pyargs) {
  idle_info_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->id);
}

pyobject_t wrap_window_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)window_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_window_create_default(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;

  if (!PyArg_ParseTuple(pyargs, "" )) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)window_create_default();
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_window_set_fullscreen(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t fullscreen = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &fullscreen)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)window_set_fullscreen(widget, fullscreen);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_window_set_auto_scale_children(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t design_w = 0;
  uint32_t design_h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&ii" , &parse_voidp, &widget, &design_w, &design_h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)window_set_auto_scale_children(widget, design_w, design_h);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_window_open(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  const char* name = NULL;

  if (!PyArg_ParseTuple(pyargs, "s" , &name)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)window_open(name);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_window_open_and_close(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  const char* name = NULL;
  widget_t* to_close = NULL;

  if (!PyArg_ParseTuple(pyargs, "sO&" , &name, &parse_voidp, &to_close)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)window_open_and_close(name, to_close);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_window_close(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)window_close(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_window_close_force(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)window_close_force(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_window_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)window_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_window_t_get_prop_fullscreen(pyobject_t self, pyobject_t pyargs) {
  window_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->fullscreen);
}

pyobject_t wrap_combo_box_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)combo_box_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_combo_box_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)combo_box_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_combo_box_set_open_window(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* open_window = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &open_window)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)combo_box_set_open_window(widget, open_window);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_combo_box_reset_options(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)combo_box_reset_options(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_combo_box_count_options(pyobject_t self, pyobject_t pyargs) {
  int32_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (int32_t)combo_box_count_options(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_combo_box_set_selected_index(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t index = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &index)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)combo_box_set_selected_index(widget, index);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_combo_box_set_localize_options(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t localize_options = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &localize_options)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)combo_box_set_localize_options(widget, localize_options);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_combo_box_set_value(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t value = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &value)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)combo_box_set_value(widget, value);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_combo_box_set_item_height(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t item_height = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &item_height)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)combo_box_set_item_height(widget, item_height);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_combo_box_append_option(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  int32_t value = 0;
  const char* text = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&is" , &parse_voidp, &widget, &value, &text)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)combo_box_append_option(widget, value, text);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_combo_box_set_options(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  const char* options = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&s" , &parse_voidp, &widget, &options)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)combo_box_set_options(widget, options);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_combo_box_get_value(pyobject_t self, pyobject_t pyargs) {
  int32_t ret = 0;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (int32_t)combo_box_get_value(widget);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_combo_box_get_text(pyobject_t self, pyobject_t pyargs) {
  const char* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (const char*)combo_box_get_text(widget);
  return Py_BuildValue("s", ret);
}

pyobject_t wrap_combo_box_t_get_prop_open_window(pyobject_t self, pyobject_t pyargs) {
  combo_box_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->open_window);
}

pyobject_t wrap_combo_box_t_get_prop_selected_index(pyobject_t self, pyobject_t pyargs) {
  combo_box_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->selected_index);
}

pyobject_t wrap_combo_box_t_get_prop_value(pyobject_t self, pyobject_t pyargs) {
  combo_box_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->value);
}

pyobject_t wrap_combo_box_t_get_prop_localize_options(pyobject_t self, pyobject_t pyargs) {
  combo_box_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->localize_options);
}

pyobject_t wrap_combo_box_t_get_prop_options(pyobject_t self, pyobject_t pyargs) {
  combo_box_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("s", obj->options);
}

pyobject_t wrap_combo_box_t_get_prop_item_height(pyobject_t self, pyobject_t pyargs) {
  combo_box_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->item_height);
}

pyobject_t wrap_system_bar_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)system_bar_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_system_bar_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)system_bar_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_spin_box_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)spin_box_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_spin_box_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)spin_box_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_popup_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)popup_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_popup_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)popup_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_popup_set_close_when_click(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t close_when_click = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &close_when_click)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)popup_set_close_when_click(widget, close_when_click);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_popup_set_close_when_click_outside(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t close_when_click_outside = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &close_when_click_outside)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)popup_set_close_when_click_outside(widget, close_when_click_outside);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_popup_set_close_when_timeout(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  uint32_t close_when_timeout = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &close_when_timeout)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)popup_set_close_when_timeout(widget, close_when_timeout);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_popup_t_get_prop_close_when_click(pyobject_t self, pyobject_t pyargs) {
  popup_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->close_when_click);
}

pyobject_t wrap_popup_t_get_prop_close_when_click_outside(pyobject_t self, pyobject_t pyargs) {
  popup_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->close_when_click_outside);
}

pyobject_t wrap_popup_t_get_prop_close_when_timeout(pyobject_t self, pyobject_t pyargs) {
  popup_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->close_when_timeout);
}

pyobject_t wrap_overlay_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)overlay_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_overlay_set_click_through(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t click_through = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &click_through)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)overlay_set_click_through(widget, click_through);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_overlay_set_always_on_top(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  bool_t always_on_top = 0;

  if (!PyArg_ParseTuple(pyargs, "O&b" , &parse_voidp, &widget, &always_on_top)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)overlay_set_always_on_top(widget, always_on_top);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_overlay_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)overlay_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_overlay_t_get_prop_click_through(pyobject_t self, pyobject_t pyargs) {
  overlay_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->click_through);
}

pyobject_t wrap_overlay_t_get_prop_always_on_top(pyobject_t self, pyobject_t pyargs) {
  overlay_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("b", obj->always_on_top);
}

pyobject_t wrap_image_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)image_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_image_set_draw_type(pyobject_t self, pyobject_t pyargs) {
  ret_t ret = 0;
  widget_t* widget = NULL;
  image_draw_type_t draw_type = 0;

  if (!PyArg_ParseTuple(pyargs, "O&i" , &parse_voidp, &widget, &draw_type)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (ret_t)image_set_draw_type(widget, draw_type);
  return Py_BuildValue("i", ret);
}

pyobject_t wrap_image_cast(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* widget = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&" , &parse_voidp, &widget)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)image_cast(widget);
  return PyLong_FromVoidPtr((void*)ret);
}

pyobject_t wrap_image_t_get_prop_draw_type(pyobject_t self, pyobject_t pyargs) {
  image_t* obj = NULL;

  if (!PyArg_ParseTuple(pyargs, "O&", &parse_voidp, &obj)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  return Py_BuildValue("i", obj->draw_type);
}

pyobject_t wrap_combo_box_ex_create(pyobject_t self, pyobject_t pyargs) {
  widget_t* ret = NULL;
  widget_t* parent = NULL;
  xy_t x = 0;
  xy_t y = 0;
  wh_t w = 0;
  wh_t h = 0;

  if (!PyArg_ParseTuple(pyargs, "O&iiii" , &parse_voidp, &parent, &x, &y, &w, &h)) {
    PyErr_SetString(PyExc_TypeError, "invalid arguments");
    return NULL;
  }

  ret = (widget_t*)combo_box_ex_create(parent, x, y, w, h);
  return PyLong_FromVoidPtr((void*)ret);
}


static PyMethodDef awtk_methods[] = {    
{"event_cast", wrap_event_cast, METH_VARARGS, "event_cast"},
{"event_create", wrap_event_create, METH_VARARGS, "event_create"},
{"event_t_get_prop_type", wrap_event_t_get_prop_type, METH_VARARGS, "event_t_get_prop_type"},
{"event_t_get_prop_size", wrap_event_t_get_prop_size, METH_VARARGS, "event_t_get_prop_size"},
{"event_t_get_prop_time", wrap_event_t_get_prop_time, METH_VARARGS, "event_t_get_prop_time"},
{"event_t_get_prop_target", wrap_event_t_get_prop_target, METH_VARARGS, "event_t_get_prop_target"},
{"rect_create", wrap_rect_create, METH_VARARGS, "rect_create"},
{"rect_set", wrap_rect_set, METH_VARARGS, "rect_set"},
{"rect_cast", wrap_rect_cast, METH_VARARGS, "rect_cast"},
{"rect_t_get_prop_x", wrap_rect_t_get_prop_x, METH_VARARGS, "rect_t_get_prop_x"},
{"rect_t_get_prop_y", wrap_rect_t_get_prop_y, METH_VARARGS, "rect_t_get_prop_y"},
{"rect_t_get_prop_w", wrap_rect_t_get_prop_w, METH_VARARGS, "rect_t_get_prop_w"},
{"rect_t_get_prop_h", wrap_rect_t_get_prop_h, METH_VARARGS, "rect_t_get_prop_h"},
{"emitter_create", wrap_emitter_create, METH_VARARGS, "emitter_create"},
{"emitter_dispatch", wrap_emitter_dispatch, METH_VARARGS, "emitter_dispatch"},
{"emitter_dispatch_simple_event", wrap_emitter_dispatch_simple_event, METH_VARARGS, "emitter_dispatch_simple_event"},
{"emitter_on", wrap_emitter_on, METH_VARARGS, "emitter_on"},
{"emitter_off", wrap_emitter_off, METH_VARARGS, "emitter_off"},
{"emitter_enable", wrap_emitter_enable, METH_VARARGS, "emitter_enable"},
{"emitter_disable", wrap_emitter_disable, METH_VARARGS, "emitter_disable"},
{"emitter_cast", wrap_emitter_cast, METH_VARARGS, "emitter_cast"},
{"bitmap_create", wrap_bitmap_create, METH_VARARGS, "bitmap_create"},
{"bitmap_create_ex", wrap_bitmap_create_ex, METH_VARARGS, "bitmap_create_ex"},
{"bitmap_get_bpp", wrap_bitmap_get_bpp, METH_VARARGS, "bitmap_get_bpp"},
{"bitmap_get_bpp_of_format", wrap_bitmap_get_bpp_of_format, METH_VARARGS, "bitmap_get_bpp_of_format"},
{"bitmap_t_get_prop_w", wrap_bitmap_t_get_prop_w, METH_VARARGS, "bitmap_t_get_prop_w"},
{"bitmap_t_get_prop_h", wrap_bitmap_t_get_prop_h, METH_VARARGS, "bitmap_t_get_prop_h"},
{"bitmap_t_get_prop_line_length", wrap_bitmap_t_get_prop_line_length, METH_VARARGS, "bitmap_t_get_prop_line_length"},
{"bitmap_t_get_prop_flags", wrap_bitmap_t_get_prop_flags, METH_VARARGS, "bitmap_t_get_prop_flags"},
{"bitmap_t_get_prop_format", wrap_bitmap_t_get_prop_format, METH_VARARGS, "bitmap_t_get_prop_format"},
{"bitmap_t_get_prop_name", wrap_bitmap_t_get_prop_name, METH_VARARGS, "bitmap_t_get_prop_name"},
{"value_set_bool", wrap_value_set_bool, METH_VARARGS, "value_set_bool"},
{"value_bool", wrap_value_bool, METH_VARARGS, "value_bool"},
{"value_set_int8", wrap_value_set_int8, METH_VARARGS, "value_set_int8"},
{"value_int8", wrap_value_int8, METH_VARARGS, "value_int8"},
{"value_set_uint8", wrap_value_set_uint8, METH_VARARGS, "value_set_uint8"},
{"value_uint8", wrap_value_uint8, METH_VARARGS, "value_uint8"},
{"value_set_int16", wrap_value_set_int16, METH_VARARGS, "value_set_int16"},
{"value_int16", wrap_value_int16, METH_VARARGS, "value_int16"},
{"value_set_uint16", wrap_value_set_uint16, METH_VARARGS, "value_set_uint16"},
{"value_uint16", wrap_value_uint16, METH_VARARGS, "value_uint16"},
{"value_set_int32", wrap_value_set_int32, METH_VARARGS, "value_set_int32"},
{"value_int32", wrap_value_int32, METH_VARARGS, "value_int32"},
{"value_set_uint32", wrap_value_set_uint32, METH_VARARGS, "value_set_uint32"},
{"value_set_int64", wrap_value_set_int64, METH_VARARGS, "value_set_int64"},
{"value_int64", wrap_value_int64, METH_VARARGS, "value_int64"},
{"value_set_uint64", wrap_value_set_uint64, METH_VARARGS, "value_set_uint64"},
{"value_uint64", wrap_value_uint64, METH_VARARGS, "value_uint64"},
{"value_set_float", wrap_value_set_float, METH_VARARGS, "value_set_float"},
{"value_float32", wrap_value_float32, METH_VARARGS, "value_float32"},
{"value_set_double", wrap_value_set_double, METH_VARARGS, "value_set_double"},
{"value_double", wrap_value_double, METH_VARARGS, "value_double"},
{"value_dup_str", wrap_value_dup_str, METH_VARARGS, "value_dup_str"},
{"value_str", wrap_value_str, METH_VARARGS, "value_str"},
{"value_str_ex", wrap_value_str_ex, METH_VARARGS, "value_str_ex"},
{"value_is_null", wrap_value_is_null, METH_VARARGS, "value_is_null"},
{"value_set_int", wrap_value_set_int, METH_VARARGS, "value_set_int"},
{"value_set_object", wrap_value_set_object, METH_VARARGS, "value_set_object"},
{"value_object", wrap_value_object, METH_VARARGS, "value_object"},
{"value_set_token", wrap_value_set_token, METH_VARARGS, "value_set_token"},
{"value_token", wrap_value_token, METH_VARARGS, "value_token"},
{"value_create", wrap_value_create, METH_VARARGS, "value_create"},
{"value_reset", wrap_value_reset, METH_VARARGS, "value_reset"},
{"value_cast", wrap_value_cast, METH_VARARGS, "value_cast"},
{"object_ref", wrap_object_ref, METH_VARARGS, "object_ref"},
{"object_get_type", wrap_object_get_type, METH_VARARGS, "object_get_type"},
{"object_get_desc", wrap_object_get_desc, METH_VARARGS, "object_get_desc"},
{"object_get_size", wrap_object_get_size, METH_VARARGS, "object_get_size"},
{"object_is_collection", wrap_object_is_collection, METH_VARARGS, "object_is_collection"},
{"object_set_name", wrap_object_set_name, METH_VARARGS, "object_set_name"},
{"object_compare", wrap_object_compare, METH_VARARGS, "object_compare"},
{"object_get_prop", wrap_object_get_prop, METH_VARARGS, "object_get_prop"},
{"object_get_prop_str", wrap_object_get_prop_str, METH_VARARGS, "object_get_prop_str"},
{"object_get_prop_pointer", wrap_object_get_prop_pointer, METH_VARARGS, "object_get_prop_pointer"},
{"object_get_prop_object", wrap_object_get_prop_object, METH_VARARGS, "object_get_prop_object"},
{"object_get_prop_int", wrap_object_get_prop_int, METH_VARARGS, "object_get_prop_int"},
{"object_get_prop_bool", wrap_object_get_prop_bool, METH_VARARGS, "object_get_prop_bool"},
{"object_get_prop_float", wrap_object_get_prop_float, METH_VARARGS, "object_get_prop_float"},
{"object_get_prop_double", wrap_object_get_prop_double, METH_VARARGS, "object_get_prop_double"},
{"object_remove_prop", wrap_object_remove_prop, METH_VARARGS, "object_remove_prop"},
{"object_set_prop", wrap_object_set_prop, METH_VARARGS, "object_set_prop"},
{"object_set_prop_str", wrap_object_set_prop_str, METH_VARARGS, "object_set_prop_str"},
{"object_set_prop_object", wrap_object_set_prop_object, METH_VARARGS, "object_set_prop_object"},
{"object_set_prop_int", wrap_object_set_prop_int, METH_VARARGS, "object_set_prop_int"},
{"object_set_prop_bool", wrap_object_set_prop_bool, METH_VARARGS, "object_set_prop_bool"},
{"object_set_prop_float", wrap_object_set_prop_float, METH_VARARGS, "object_set_prop_float"},
{"object_set_prop_double", wrap_object_set_prop_double, METH_VARARGS, "object_set_prop_double"},
{"object_copy_prop", wrap_object_copy_prop, METH_VARARGS, "object_copy_prop"},
{"object_has_prop", wrap_object_has_prop, METH_VARARGS, "object_has_prop"},
{"object_eval", wrap_object_eval, METH_VARARGS, "object_eval"},
{"object_can_exec", wrap_object_can_exec, METH_VARARGS, "object_can_exec"},
{"object_exec", wrap_object_exec, METH_VARARGS, "object_exec"},
{"object_notify_changed", wrap_object_notify_changed, METH_VARARGS, "object_notify_changed"},
{"object_has_prop_by_path", wrap_object_has_prop_by_path, METH_VARARGS, "object_has_prop_by_path"},
{"object_get_prop_str_by_path", wrap_object_get_prop_str_by_path, METH_VARARGS, "object_get_prop_str_by_path"},
{"object_get_prop_pointer_by_path", wrap_object_get_prop_pointer_by_path, METH_VARARGS, "object_get_prop_pointer_by_path"},
{"object_get_prop_object_by_path", wrap_object_get_prop_object_by_path, METH_VARARGS, "object_get_prop_object_by_path"},
{"object_get_prop_int_by_path", wrap_object_get_prop_int_by_path, METH_VARARGS, "object_get_prop_int_by_path"},
{"object_get_prop_bool_by_path", wrap_object_get_prop_bool_by_path, METH_VARARGS, "object_get_prop_bool_by_path"},
{"object_get_prop_float_by_path", wrap_object_get_prop_float_by_path, METH_VARARGS, "object_get_prop_float_by_path"},
{"object_set_prop_by_path", wrap_object_set_prop_by_path, METH_VARARGS, "object_set_prop_by_path"},
{"object_set_prop_str_by_path", wrap_object_set_prop_str_by_path, METH_VARARGS, "object_set_prop_str_by_path"},
{"object_set_prop_object_by_path", wrap_object_set_prop_object_by_path, METH_VARARGS, "object_set_prop_object_by_path"},
{"object_set_prop_int_by_path", wrap_object_set_prop_int_by_path, METH_VARARGS, "object_set_prop_int_by_path"},
{"object_set_prop_bool_by_path", wrap_object_set_prop_bool_by_path, METH_VARARGS, "object_set_prop_bool_by_path"},
{"object_set_prop_float_by_path", wrap_object_set_prop_float_by_path, METH_VARARGS, "object_set_prop_float_by_path"},
{"object_can_exec_by_path", wrap_object_can_exec_by_path, METH_VARARGS, "object_can_exec_by_path"},
{"object_exec_by_path", wrap_object_exec_by_path, METH_VARARGS, "object_exec_by_path"},
{"object_get_prop_int8", wrap_object_get_prop_int8, METH_VARARGS, "object_get_prop_int8"},
{"object_set_prop_int8", wrap_object_set_prop_int8, METH_VARARGS, "object_set_prop_int8"},
{"object_get_prop_uint8", wrap_object_get_prop_uint8, METH_VARARGS, "object_get_prop_uint8"},
{"object_set_prop_uint8", wrap_object_set_prop_uint8, METH_VARARGS, "object_set_prop_uint8"},
{"object_get_prop_int16", wrap_object_get_prop_int16, METH_VARARGS, "object_get_prop_int16"},
{"object_set_prop_int16", wrap_object_set_prop_int16, METH_VARARGS, "object_set_prop_int16"},
{"object_get_prop_uint16", wrap_object_get_prop_uint16, METH_VARARGS, "object_get_prop_uint16"},
{"object_set_prop_uint16", wrap_object_set_prop_uint16, METH_VARARGS, "object_set_prop_uint16"},
{"object_get_prop_int32", wrap_object_get_prop_int32, METH_VARARGS, "object_get_prop_int32"},
{"object_set_prop_int32", wrap_object_set_prop_int32, METH_VARARGS, "object_set_prop_int32"},
{"object_get_prop_uint32", wrap_object_get_prop_uint32, METH_VARARGS, "object_get_prop_uint32"},
{"object_set_prop_uint32", wrap_object_set_prop_uint32, METH_VARARGS, "object_set_prop_uint32"},
{"object_get_prop_int64", wrap_object_get_prop_int64, METH_VARARGS, "object_get_prop_int64"},
{"object_set_prop_int64", wrap_object_set_prop_int64, METH_VARARGS, "object_set_prop_int64"},
{"object_get_prop_uint64", wrap_object_get_prop_uint64, METH_VARARGS, "object_get_prop_uint64"},
{"object_set_prop_uint64", wrap_object_set_prop_uint64, METH_VARARGS, "object_set_prop_uint64"},
{"object_t_get_prop_ref_count", wrap_object_t_get_prop_ref_count, METH_VARARGS, "object_t_get_prop_ref_count"},
{"object_t_get_prop_name", wrap_object_t_get_prop_name, METH_VARARGS, "object_t_get_prop_name"},
{"tk_init", wrap_tk_init, METH_VARARGS, "tk_init"},
{"tk_run", wrap_tk_run, METH_VARARGS, "tk_run"},
{"tk_quit", wrap_tk_quit, METH_VARARGS, "tk_quit"},
{"tk_get_pointer_x", wrap_tk_get_pointer_x, METH_VARARGS, "tk_get_pointer_x"},
{"tk_get_pointer_y", wrap_tk_get_pointer_y, METH_VARARGS, "tk_get_pointer_y"},
{"tk_is_pointer_pressed", wrap_tk_is_pointer_pressed, METH_VARARGS, "tk_is_pointer_pressed"},
{"CLIP_BOARD_DATA_TYPE_NONE", get_CLIP_BOARD_DATA_TYPE_NONE, METH_VARARGS, "CLIP_BOARD_DATA_TYPE_NONE"},
{"CLIP_BOARD_DATA_TYPE_TEXT", get_CLIP_BOARD_DATA_TYPE_TEXT, METH_VARARGS, "CLIP_BOARD_DATA_TYPE_TEXT"},
{"clip_board_set_text", wrap_clip_board_set_text, METH_VARARGS, "clip_board_set_text"},
{"clip_board_get_text", wrap_clip_board_get_text, METH_VARARGS, "clip_board_get_text"},
{"DIALOG_QUIT_NONE", get_DIALOG_QUIT_NONE, METH_VARARGS, "DIALOG_QUIT_NONE"},
{"DIALOG_QUIT_OK", get_DIALOG_QUIT_OK, METH_VARARGS, "DIALOG_QUIT_OK"},
{"DIALOG_QUIT_YES", get_DIALOG_QUIT_YES, METH_VARARGS, "DIALOG_QUIT_YES"},
{"DIALOG_QUIT_CANCEL", get_DIALOG_QUIT_CANCEL, METH_VARARGS, "DIALOG_QUIT_CANCEL"},
{"DIALOG_QUIT_NO", get_DIALOG_QUIT_NO, METH_VARARGS, "DIALOG_QUIT_NO"},
{"DIALOG_QUIT_OTHER", get_DIALOG_QUIT_OTHER, METH_VARARGS, "DIALOG_QUIT_OTHER"},
{"EVT_POINTER_DOWN", get_EVT_POINTER_DOWN, METH_VARARGS, "EVT_POINTER_DOWN"},
{"EVT_POINTER_DOWN_BEFORE_CHILDREN", get_EVT_POINTER_DOWN_BEFORE_CHILDREN, METH_VARARGS, "EVT_POINTER_DOWN_BEFORE_CHILDREN"},
{"EVT_POINTER_MOVE", get_EVT_POINTER_MOVE, METH_VARARGS, "EVT_POINTER_MOVE"},
{"EVT_POINTER_MOVE_BEFORE_CHILDREN", get_EVT_POINTER_MOVE_BEFORE_CHILDREN, METH_VARARGS, "EVT_POINTER_MOVE_BEFORE_CHILDREN"},
{"EVT_POINTER_UP", get_EVT_POINTER_UP, METH_VARARGS, "EVT_POINTER_UP"},
{"EVT_POINTER_UP_BEFORE_CHILDREN", get_EVT_POINTER_UP_BEFORE_CHILDREN, METH_VARARGS, "EVT_POINTER_UP_BEFORE_CHILDREN"},
{"EVT_WHEEL", get_EVT_WHEEL, METH_VARARGS, "EVT_WHEEL"},
{"EVT_WHEEL_BEFORE_CHILDREN", get_EVT_WHEEL_BEFORE_CHILDREN, METH_VARARGS, "EVT_WHEEL_BEFORE_CHILDREN"},
{"EVT_POINTER_DOWN_ABORT", get_EVT_POINTER_DOWN_ABORT, METH_VARARGS, "EVT_POINTER_DOWN_ABORT"},
{"EVT_CONTEXT_MENU", get_EVT_CONTEXT_MENU, METH_VARARGS, "EVT_CONTEXT_MENU"},
{"EVT_POINTER_ENTER", get_EVT_POINTER_ENTER, METH_VARARGS, "EVT_POINTER_ENTER"},
{"EVT_POINTER_LEAVE", get_EVT_POINTER_LEAVE, METH_VARARGS, "EVT_POINTER_LEAVE"},
{"EVT_LONG_PRESS", get_EVT_LONG_PRESS, METH_VARARGS, "EVT_LONG_PRESS"},
{"EVT_CLICK", get_EVT_CLICK, METH_VARARGS, "EVT_CLICK"},
{"EVT_FOCUS", get_EVT_FOCUS, METH_VARARGS, "EVT_FOCUS"},
{"EVT_BLUR", get_EVT_BLUR, METH_VARARGS, "EVT_BLUR"},
{"EVT_KEY_DOWN", get_EVT_KEY_DOWN, METH_VARARGS, "EVT_KEY_DOWN"},
{"EVT_KEY_LONG_PRESS", get_EVT_KEY_LONG_PRESS, METH_VARARGS, "EVT_KEY_LONG_PRESS"},
{"EVT_KEY_DOWN_BEFORE_CHILDREN", get_EVT_KEY_DOWN_BEFORE_CHILDREN, METH_VARARGS, "EVT_KEY_DOWN_BEFORE_CHILDREN"},
{"EVT_KEY_REPEAT", get_EVT_KEY_REPEAT, METH_VARARGS, "EVT_KEY_REPEAT"},
{"EVT_KEY_UP", get_EVT_KEY_UP, METH_VARARGS, "EVT_KEY_UP"},
{"EVT_KEY_UP_BEFORE_CHILDREN", get_EVT_KEY_UP_BEFORE_CHILDREN, METH_VARARGS, "EVT_KEY_UP_BEFORE_CHILDREN"},
{"EVT_WILL_MOVE", get_EVT_WILL_MOVE, METH_VARARGS, "EVT_WILL_MOVE"},
{"EVT_MOVE", get_EVT_MOVE, METH_VARARGS, "EVT_MOVE"},
{"EVT_WILL_RESIZE", get_EVT_WILL_RESIZE, METH_VARARGS, "EVT_WILL_RESIZE"},
{"EVT_RESIZE", get_EVT_RESIZE, METH_VARARGS, "EVT_RESIZE"},
{"EVT_WILL_MOVE_RESIZE", get_EVT_WILL_MOVE_RESIZE, METH_VARARGS, "EVT_WILL_MOVE_RESIZE"},
{"EVT_MOVE_RESIZE", get_EVT_MOVE_RESIZE, METH_VARARGS, "EVT_MOVE_RESIZE"},
{"EVT_VALUE_WILL_CHANGE", get_EVT_VALUE_WILL_CHANGE, METH_VARARGS, "EVT_VALUE_WILL_CHANGE"},
{"EVT_VALUE_CHANGED", get_EVT_VALUE_CHANGED, METH_VARARGS, "EVT_VALUE_CHANGED"},
{"EVT_VALUE_CHANGING", get_EVT_VALUE_CHANGING, METH_VARARGS, "EVT_VALUE_CHANGING"},
{"EVT_PAINT", get_EVT_PAINT, METH_VARARGS, "EVT_PAINT"},
{"EVT_BEFORE_PAINT", get_EVT_BEFORE_PAINT, METH_VARARGS, "EVT_BEFORE_PAINT"},
{"EVT_AFTER_PAINT", get_EVT_AFTER_PAINT, METH_VARARGS, "EVT_AFTER_PAINT"},
{"EVT_PAINT_DONE", get_EVT_PAINT_DONE, METH_VARARGS, "EVT_PAINT_DONE"},
{"EVT_LOCALE_CHANGED", get_EVT_LOCALE_CHANGED, METH_VARARGS, "EVT_LOCALE_CHANGED"},
{"EVT_ANIM_START", get_EVT_ANIM_START, METH_VARARGS, "EVT_ANIM_START"},
{"EVT_ANIM_STOP", get_EVT_ANIM_STOP, METH_VARARGS, "EVT_ANIM_STOP"},
{"EVT_ANIM_PAUSE", get_EVT_ANIM_PAUSE, METH_VARARGS, "EVT_ANIM_PAUSE"},
{"EVT_ANIM_ONCE", get_EVT_ANIM_ONCE, METH_VARARGS, "EVT_ANIM_ONCE"},
{"EVT_ANIM_END", get_EVT_ANIM_END, METH_VARARGS, "EVT_ANIM_END"},
{"EVT_WINDOW_LOAD", get_EVT_WINDOW_LOAD, METH_VARARGS, "EVT_WINDOW_LOAD"},
{"EVT_WIDGET_LOAD", get_EVT_WIDGET_LOAD, METH_VARARGS, "EVT_WIDGET_LOAD"},
{"EVT_WINDOW_WILL_OPEN", get_EVT_WINDOW_WILL_OPEN, METH_VARARGS, "EVT_WINDOW_WILL_OPEN"},
{"EVT_WINDOW_OPEN", get_EVT_WINDOW_OPEN, METH_VARARGS, "EVT_WINDOW_OPEN"},
{"EVT_WINDOW_TO_BACKGROUND", get_EVT_WINDOW_TO_BACKGROUND, METH_VARARGS, "EVT_WINDOW_TO_BACKGROUND"},
{"EVT_WINDOW_TO_FOREGROUND", get_EVT_WINDOW_TO_FOREGROUND, METH_VARARGS, "EVT_WINDOW_TO_FOREGROUND"},
{"EVT_WINDOW_CLOSE", get_EVT_WINDOW_CLOSE, METH_VARARGS, "EVT_WINDOW_CLOSE"},
{"EVT_REQUEST_CLOSE_WINDOW", get_EVT_REQUEST_CLOSE_WINDOW, METH_VARARGS, "EVT_REQUEST_CLOSE_WINDOW"},
{"EVT_TOP_WINDOW_CHANGED", get_EVT_TOP_WINDOW_CHANGED, METH_VARARGS, "EVT_TOP_WINDOW_CHANGED"},
{"EVT_IM_START", get_EVT_IM_START, METH_VARARGS, "EVT_IM_START"},
{"EVT_IM_STOP", get_EVT_IM_STOP, METH_VARARGS, "EVT_IM_STOP"},
{"EVT_IM_COMMIT", get_EVT_IM_COMMIT, METH_VARARGS, "EVT_IM_COMMIT"},
{"EVT_IM_CLEAR", get_EVT_IM_CLEAR, METH_VARARGS, "EVT_IM_CLEAR"},
{"EVT_IM_CANCEL", get_EVT_IM_CANCEL, METH_VARARGS, "EVT_IM_CANCEL"},
{"EVT_IM_PREEDIT", get_EVT_IM_PREEDIT, METH_VARARGS, "EVT_IM_PREEDIT"},
{"EVT_IM_PREEDIT_CONFIRM", get_EVT_IM_PREEDIT_CONFIRM, METH_VARARGS, "EVT_IM_PREEDIT_CONFIRM"},
{"EVT_IM_PREEDIT_ABORT", get_EVT_IM_PREEDIT_ABORT, METH_VARARGS, "EVT_IM_PREEDIT_ABORT"},
{"EVT_IM_SHOW_CANDIDATES", get_EVT_IM_SHOW_CANDIDATES, METH_VARARGS, "EVT_IM_SHOW_CANDIDATES"},
{"EVT_IM_SHOW_PRE_CANDIDATES", get_EVT_IM_SHOW_PRE_CANDIDATES, METH_VARARGS, "EVT_IM_SHOW_PRE_CANDIDATES"},
{"EVT_IM_LANG_CHANGED", get_EVT_IM_LANG_CHANGED, METH_VARARGS, "EVT_IM_LANG_CHANGED"},
{"EVT_IM_ACTION", get_EVT_IM_ACTION, METH_VARARGS, "EVT_IM_ACTION"},
{"EVT_IM_ACTION_INFO", get_EVT_IM_ACTION_INFO, METH_VARARGS, "EVT_IM_ACTION_INFO"},
{"EVT_DRAG_START", get_EVT_DRAG_START, METH_VARARGS, "EVT_DRAG_START"},
{"EVT_DRAG", get_EVT_DRAG, METH_VARARGS, "EVT_DRAG"},
{"EVT_DRAG_END", get_EVT_DRAG_END, METH_VARARGS, "EVT_DRAG_END"},
{"EVT_RESET", get_EVT_RESET, METH_VARARGS, "EVT_RESET"},
{"EVT_SCREEN_SAVER", get_EVT_SCREEN_SAVER, METH_VARARGS, "EVT_SCREEN_SAVER"},
{"EVT_LOW_MEMORY", get_EVT_LOW_MEMORY, METH_VARARGS, "EVT_LOW_MEMORY"},
{"EVT_OUT_OF_MEMORY", get_EVT_OUT_OF_MEMORY, METH_VARARGS, "EVT_OUT_OF_MEMORY"},
{"EVT_ORIENTATION_WILL_CHANGED", get_EVT_ORIENTATION_WILL_CHANGED, METH_VARARGS, "EVT_ORIENTATION_WILL_CHANGED"},
{"EVT_ORIENTATION_CHANGED", get_EVT_ORIENTATION_CHANGED, METH_VARARGS, "EVT_ORIENTATION_CHANGED"},
{"EVT_WIDGET_CREATED", get_EVT_WIDGET_CREATED, METH_VARARGS, "EVT_WIDGET_CREATED"},
{"EVT_REQUEST_QUIT_APP", get_EVT_REQUEST_QUIT_APP, METH_VARARGS, "EVT_REQUEST_QUIT_APP"},
{"EVT_THEME_CHANGED", get_EVT_THEME_CHANGED, METH_VARARGS, "EVT_THEME_CHANGED"},
{"EVT_WIDGET_ADD_CHILD", get_EVT_WIDGET_ADD_CHILD, METH_VARARGS, "EVT_WIDGET_ADD_CHILD"},
{"EVT_WIDGET_REMOVE_CHILD", get_EVT_WIDGET_REMOVE_CHILD, METH_VARARGS, "EVT_WIDGET_REMOVE_CHILD"},
{"EVT_SCROLL_START", get_EVT_SCROLL_START, METH_VARARGS, "EVT_SCROLL_START"},
{"EVT_SCROLL", get_EVT_SCROLL, METH_VARARGS, "EVT_SCROLL"},
{"EVT_SCROLL_END", get_EVT_SCROLL_END, METH_VARARGS, "EVT_SCROLL_END"},
{"EVT_MULTI_GESTURE", get_EVT_MULTI_GESTURE, METH_VARARGS, "EVT_MULTI_GESTURE"},
{"EVT_PAGE_CHANGED", get_EVT_PAGE_CHANGED, METH_VARARGS, "EVT_PAGE_CHANGED"},
{"EVT_ASSET_MANAGER_LOAD_ASSET", get_EVT_ASSET_MANAGER_LOAD_ASSET, METH_VARARGS, "EVT_ASSET_MANAGER_LOAD_ASSET"},
{"EVT_ASSET_MANAGER_UNLOAD_ASSET", get_EVT_ASSET_MANAGER_UNLOAD_ASSET, METH_VARARGS, "EVT_ASSET_MANAGER_UNLOAD_ASSET"},
{"EVT_ASSET_MANAGER_CLEAR_CACHE", get_EVT_ASSET_MANAGER_CLEAR_CACHE, METH_VARARGS, "EVT_ASSET_MANAGER_CLEAR_CACHE"},
{"EVT_TIMER", get_EVT_TIMER, METH_VARARGS, "EVT_TIMER"},
{"EVT_REQ_START", get_EVT_REQ_START, METH_VARARGS, "EVT_REQ_START"},
{"EVT_USER_START", get_EVT_USER_START, METH_VARARGS, "EVT_USER_START"},
{"EVT_NONE", get_EVT_NONE, METH_VARARGS, "EVT_NONE"},
{"EVT_PROP_WILL_CHANGE", get_EVT_PROP_WILL_CHANGE, METH_VARARGS, "EVT_PROP_WILL_CHANGE"},
{"EVT_PROP_CHANGED", get_EVT_PROP_CHANGED, METH_VARARGS, "EVT_PROP_CHANGED"},
{"EVT_CMD_WILL_EXEC", get_EVT_CMD_WILL_EXEC, METH_VARARGS, "EVT_CMD_WILL_EXEC"},
{"EVT_CMD_EXECED", get_EVT_CMD_EXECED, METH_VARARGS, "EVT_CMD_EXECED"},
{"EVT_CMD_CAN_EXEC", get_EVT_CMD_CAN_EXEC, METH_VARARGS, "EVT_CMD_CAN_EXEC"},
{"EVT_ITEMS_WILL_CHANGE", get_EVT_ITEMS_WILL_CHANGE, METH_VARARGS, "EVT_ITEMS_WILL_CHANGE"},
{"EVT_ITEMS_CHANGED", get_EVT_ITEMS_CHANGED, METH_VARARGS, "EVT_ITEMS_CHANGED"},
{"EVT_PROPS_CHANGED", get_EVT_PROPS_CHANGED, METH_VARARGS, "EVT_PROPS_CHANGED"},
{"EVT_PROGRESS", get_EVT_PROGRESS, METH_VARARGS, "EVT_PROGRESS"},
{"EVT_DONE", get_EVT_DONE, METH_VARARGS, "EVT_DONE"},
{"EVT_ERROR", get_EVT_ERROR, METH_VARARGS, "EVT_ERROR"},
{"EVT_DESTROY", get_EVT_DESTROY, METH_VARARGS, "EVT_DESTROY"},
{"font_manager_unload_font", wrap_font_manager_unload_font, METH_VARARGS, "font_manager_unload_font"},
{"font_manager_shrink_cache", wrap_font_manager_shrink_cache, METH_VARARGS, "font_manager_shrink_cache"},
{"font_manager_unload_all", wrap_font_manager_unload_all, METH_VARARGS, "font_manager_unload_all"},
{"GLYPH_FMT_ALPHA", get_GLYPH_FMT_ALPHA, METH_VARARGS, "GLYPH_FMT_ALPHA"},
{"GLYPH_FMT_MONO", get_GLYPH_FMT_MONO, METH_VARARGS, "GLYPH_FMT_MONO"},
{"GLYPH_FMT_RGBA", get_GLYPH_FMT_RGBA, METH_VARARGS, "GLYPH_FMT_RGBA"},
{"idle_add", wrap_idle_add, METH_VARARGS, "idle_add"},
{"idle_remove", wrap_idle_remove, METH_VARARGS, "idle_remove"},
{"idle_remove_all_by_ctx", wrap_idle_remove_all_by_ctx, METH_VARARGS, "idle_remove_all_by_ctx"},
{"image_manager", wrap_image_manager, METH_VARARGS, "image_manager"},
{"image_manager_get_bitmap", wrap_image_manager_get_bitmap, METH_VARARGS, "image_manager_get_bitmap"},
{"image_manager_preload", wrap_image_manager_preload, METH_VARARGS, "image_manager_preload"},
{"INPUT_TEXT", get_INPUT_TEXT, METH_VARARGS, "INPUT_TEXT"},
{"INPUT_INT", get_INPUT_INT, METH_VARARGS, "INPUT_INT"},
{"INPUT_UINT", get_INPUT_UINT, METH_VARARGS, "INPUT_UINT"},
{"INPUT_HEX", get_INPUT_HEX, METH_VARARGS, "INPUT_HEX"},
{"INPUT_FLOAT", get_INPUT_FLOAT, METH_VARARGS, "INPUT_FLOAT"},
{"INPUT_UFLOAT", get_INPUT_UFLOAT, METH_VARARGS, "INPUT_UFLOAT"},
{"INPUT_EMAIL", get_INPUT_EMAIL, METH_VARARGS, "INPUT_EMAIL"},
{"INPUT_PASSWORD", get_INPUT_PASSWORD, METH_VARARGS, "INPUT_PASSWORD"},
{"INPUT_PHONE", get_INPUT_PHONE, METH_VARARGS, "INPUT_PHONE"},
{"INPUT_IPV4", get_INPUT_IPV4, METH_VARARGS, "INPUT_IPV4"},
{"INPUT_DATE", get_INPUT_DATE, METH_VARARGS, "INPUT_DATE"},
{"INPUT_TIME", get_INPUT_TIME, METH_VARARGS, "INPUT_TIME"},
{"INPUT_TIME_FULL", get_INPUT_TIME_FULL, METH_VARARGS, "INPUT_TIME_FULL"},
{"INPUT_CUSTOM", get_INPUT_CUSTOM, METH_VARARGS, "INPUT_CUSTOM"},
{"INPUT_CUSTOM_PASSWORD", get_INPUT_CUSTOM_PASSWORD, METH_VARARGS, "INPUT_CUSTOM_PASSWORD"},
{"INPUT_ASCII", get_INPUT_ASCII, METH_VARARGS, "INPUT_ASCII"},
{"input_method_commit_text", wrap_input_method_commit_text, METH_VARARGS, "input_method_commit_text"},
{"input_method_set_lang", wrap_input_method_set_lang, METH_VARARGS, "input_method_set_lang"},
{"input_method_get_lang", wrap_input_method_get_lang, METH_VARARGS, "input_method_get_lang"},
{"input_method_dispatch_key", wrap_input_method_dispatch_key, METH_VARARGS, "input_method_dispatch_key"},
{"input_method_dispatch_keys", wrap_input_method_dispatch_keys, METH_VARARGS, "input_method_dispatch_keys"},
{"input_method_dispatch_preedit", wrap_input_method_dispatch_preedit, METH_VARARGS, "input_method_dispatch_preedit"},
{"input_method_dispatch_preedit_confirm", wrap_input_method_dispatch_preedit_confirm, METH_VARARGS, "input_method_dispatch_preedit_confirm"},
{"input_method_dispatch_preedit_abort", wrap_input_method_dispatch_preedit_abort, METH_VARARGS, "input_method_dispatch_preedit_abort"},
{"input_method", wrap_input_method, METH_VARARGS, "input_method"},
{"TK_KEY_RETURN", get_TK_KEY_RETURN, METH_VARARGS, "TK_KEY_RETURN"},
{"TK_KEY_ESCAPE", get_TK_KEY_ESCAPE, METH_VARARGS, "TK_KEY_ESCAPE"},
{"TK_KEY_BACKSPACE", get_TK_KEY_BACKSPACE, METH_VARARGS, "TK_KEY_BACKSPACE"},
{"TK_KEY_TAB", get_TK_KEY_TAB, METH_VARARGS, "TK_KEY_TAB"},
{"TK_KEY_SPACE", get_TK_KEY_SPACE, METH_VARARGS, "TK_KEY_SPACE"},
{"TK_KEY_EXCLAIM", get_TK_KEY_EXCLAIM, METH_VARARGS, "TK_KEY_EXCLAIM"},
{"TK_KEY_QUOTEDBL", get_TK_KEY_QUOTEDBL, METH_VARARGS, "TK_KEY_QUOTEDBL"},
{"TK_KEY_HASH", get_TK_KEY_HASH, METH_VARARGS, "TK_KEY_HASH"},
{"TK_KEY_PERCENT", get_TK_KEY_PERCENT, METH_VARARGS, "TK_KEY_PERCENT"},
{"TK_KEY_DOLLAR", get_TK_KEY_DOLLAR, METH_VARARGS, "TK_KEY_DOLLAR"},
{"TK_KEY_AMPERSAND", get_TK_KEY_AMPERSAND, METH_VARARGS, "TK_KEY_AMPERSAND"},
{"TK_KEY_QUOTE", get_TK_KEY_QUOTE, METH_VARARGS, "TK_KEY_QUOTE"},
{"TK_KEY_LEFTPAREN", get_TK_KEY_LEFTPAREN, METH_VARARGS, "TK_KEY_LEFTPAREN"},
{"TK_KEY_RIGHTPAREN", get_TK_KEY_RIGHTPAREN, METH_VARARGS, "TK_KEY_RIGHTPAREN"},
{"TK_KEY_ASTERISK", get_TK_KEY_ASTERISK, METH_VARARGS, "TK_KEY_ASTERISK"},
{"TK_KEY_PLUS", get_TK_KEY_PLUS, METH_VARARGS, "TK_KEY_PLUS"},
{"TK_KEY_COMMA", get_TK_KEY_COMMA, METH_VARARGS, "TK_KEY_COMMA"},
{"TK_KEY_MINUS", get_TK_KEY_MINUS, METH_VARARGS, "TK_KEY_MINUS"},
{"TK_KEY_PERIOD", get_TK_KEY_PERIOD, METH_VARARGS, "TK_KEY_PERIOD"},
{"TK_KEY_SLASH", get_TK_KEY_SLASH, METH_VARARGS, "TK_KEY_SLASH"},
{"TK_KEY_0", get_TK_KEY_0, METH_VARARGS, "TK_KEY_0"},
{"TK_KEY_1", get_TK_KEY_1, METH_VARARGS, "TK_KEY_1"},
{"TK_KEY_2", get_TK_KEY_2, METH_VARARGS, "TK_KEY_2"},
{"TK_KEY_3", get_TK_KEY_3, METH_VARARGS, "TK_KEY_3"},
{"TK_KEY_4", get_TK_KEY_4, METH_VARARGS, "TK_KEY_4"},
{"TK_KEY_5", get_TK_KEY_5, METH_VARARGS, "TK_KEY_5"},
{"TK_KEY_6", get_TK_KEY_6, METH_VARARGS, "TK_KEY_6"},
{"TK_KEY_7", get_TK_KEY_7, METH_VARARGS, "TK_KEY_7"},
{"TK_KEY_8", get_TK_KEY_8, METH_VARARGS, "TK_KEY_8"},
{"TK_KEY_9", get_TK_KEY_9, METH_VARARGS, "TK_KEY_9"},
{"TK_KEY_COLON", get_TK_KEY_COLON, METH_VARARGS, "TK_KEY_COLON"},
{"TK_KEY_SEMICOLON", get_TK_KEY_SEMICOLON, METH_VARARGS, "TK_KEY_SEMICOLON"},
{"TK_KEY_LESS", get_TK_KEY_LESS, METH_VARARGS, "TK_KEY_LESS"},
{"TK_KEY_EQUAL", get_TK_KEY_EQUAL, METH_VARARGS, "TK_KEY_EQUAL"},
{"TK_KEY_GREATER", get_TK_KEY_GREATER, METH_VARARGS, "TK_KEY_GREATER"},
{"TK_KEY_QUESTION", get_TK_KEY_QUESTION, METH_VARARGS, "TK_KEY_QUESTION"},
{"TK_KEY_AT", get_TK_KEY_AT, METH_VARARGS, "TK_KEY_AT"},
{"TK_KEY_LEFTBRACKET", get_TK_KEY_LEFTBRACKET, METH_VARARGS, "TK_KEY_LEFTBRACKET"},
{"TK_KEY_BACKSLASH", get_TK_KEY_BACKSLASH, METH_VARARGS, "TK_KEY_BACKSLASH"},
{"TK_KEY_RIGHTBRACKET", get_TK_KEY_RIGHTBRACKET, METH_VARARGS, "TK_KEY_RIGHTBRACKET"},
{"TK_KEY_CARET", get_TK_KEY_CARET, METH_VARARGS, "TK_KEY_CARET"},
{"TK_KEY_UNDERSCORE", get_TK_KEY_UNDERSCORE, METH_VARARGS, "TK_KEY_UNDERSCORE"},
{"TK_KEY_BACKQUOTE", get_TK_KEY_BACKQUOTE, METH_VARARGS, "TK_KEY_BACKQUOTE"},
{"TK_KEY_a", get_TK_KEY_a, METH_VARARGS, "TK_KEY_a"},
{"TK_KEY_b", get_TK_KEY_b, METH_VARARGS, "TK_KEY_b"},
{"TK_KEY_c", get_TK_KEY_c, METH_VARARGS, "TK_KEY_c"},
{"TK_KEY_d", get_TK_KEY_d, METH_VARARGS, "TK_KEY_d"},
{"TK_KEY_e", get_TK_KEY_e, METH_VARARGS, "TK_KEY_e"},
{"TK_KEY_f", get_TK_KEY_f, METH_VARARGS, "TK_KEY_f"},
{"TK_KEY_g", get_TK_KEY_g, METH_VARARGS, "TK_KEY_g"},
{"TK_KEY_h", get_TK_KEY_h, METH_VARARGS, "TK_KEY_h"},
{"TK_KEY_i", get_TK_KEY_i, METH_VARARGS, "TK_KEY_i"},
{"TK_KEY_j", get_TK_KEY_j, METH_VARARGS, "TK_KEY_j"},
{"TK_KEY_k", get_TK_KEY_k, METH_VARARGS, "TK_KEY_k"},
{"TK_KEY_l", get_TK_KEY_l, METH_VARARGS, "TK_KEY_l"},
{"TK_KEY_m", get_TK_KEY_m, METH_VARARGS, "TK_KEY_m"},
{"TK_KEY_n", get_TK_KEY_n, METH_VARARGS, "TK_KEY_n"},
{"TK_KEY_o", get_TK_KEY_o, METH_VARARGS, "TK_KEY_o"},
{"TK_KEY_p", get_TK_KEY_p, METH_VARARGS, "TK_KEY_p"},
{"TK_KEY_q", get_TK_KEY_q, METH_VARARGS, "TK_KEY_q"},
{"TK_KEY_r", get_TK_KEY_r, METH_VARARGS, "TK_KEY_r"},
{"TK_KEY_s", get_TK_KEY_s, METH_VARARGS, "TK_KEY_s"},
{"TK_KEY_t", get_TK_KEY_t, METH_VARARGS, "TK_KEY_t"},
{"TK_KEY_u", get_TK_KEY_u, METH_VARARGS, "TK_KEY_u"},
{"TK_KEY_v", get_TK_KEY_v, METH_VARARGS, "TK_KEY_v"},
{"TK_KEY_w", get_TK_KEY_w, METH_VARARGS, "TK_KEY_w"},
{"TK_KEY_x", get_TK_KEY_x, METH_VARARGS, "TK_KEY_x"},
{"TK_KEY_y", get_TK_KEY_y, METH_VARARGS, "TK_KEY_y"},
{"TK_KEY_z", get_TK_KEY_z, METH_VARARGS, "TK_KEY_z"},
{"TK_KEY_A", get_TK_KEY_A, METH_VARARGS, "TK_KEY_A"},
{"TK_KEY_B", get_TK_KEY_B, METH_VARARGS, "TK_KEY_B"},
{"TK_KEY_C", get_TK_KEY_C, METH_VARARGS, "TK_KEY_C"},
{"TK_KEY_D", get_TK_KEY_D, METH_VARARGS, "TK_KEY_D"},
{"TK_KEY_E", get_TK_KEY_E, METH_VARARGS, "TK_KEY_E"},
{"TK_KEY_F", get_TK_KEY_F, METH_VARARGS, "TK_KEY_F"},
{"TK_KEY_G", get_TK_KEY_G, METH_VARARGS, "TK_KEY_G"},
{"TK_KEY_H", get_TK_KEY_H, METH_VARARGS, "TK_KEY_H"},
{"TK_KEY_I", get_TK_KEY_I, METH_VARARGS, "TK_KEY_I"},
{"TK_KEY_J", get_TK_KEY_J, METH_VARARGS, "TK_KEY_J"},
{"TK_KEY_K", get_TK_KEY_K, METH_VARARGS, "TK_KEY_K"},
{"TK_KEY_L", get_TK_KEY_L, METH_VARARGS, "TK_KEY_L"},
{"TK_KEY_M", get_TK_KEY_M, METH_VARARGS, "TK_KEY_M"},
{"TK_KEY_N", get_TK_KEY_N, METH_VARARGS, "TK_KEY_N"},
{"TK_KEY_O", get_TK_KEY_O, METH_VARARGS, "TK_KEY_O"},
{"TK_KEY_P", get_TK_KEY_P, METH_VARARGS, "TK_KEY_P"},
{"TK_KEY_Q", get_TK_KEY_Q, METH_VARARGS, "TK_KEY_Q"},
{"TK_KEY_R", get_TK_KEY_R, METH_VARARGS, "TK_KEY_R"},
{"TK_KEY_S", get_TK_KEY_S, METH_VARARGS, "TK_KEY_S"},
{"TK_KEY_T", get_TK_KEY_T, METH_VARARGS, "TK_KEY_T"},
{"TK_KEY_U", get_TK_KEY_U, METH_VARARGS, "TK_KEY_U"},
{"TK_KEY_V", get_TK_KEY_V, METH_VARARGS, "TK_KEY_V"},
{"TK_KEY_W", get_TK_KEY_W, METH_VARARGS, "TK_KEY_W"},
{"TK_KEY_X", get_TK_KEY_X, METH_VARARGS, "TK_KEY_X"},
{"TK_KEY_Y", get_TK_KEY_Y, METH_VARARGS, "TK_KEY_Y"},
{"TK_KEY_Z", get_TK_KEY_Z, METH_VARARGS, "TK_KEY_Z"},
{"TK_KEY_DOT", get_TK_KEY_DOT, METH_VARARGS, "TK_KEY_DOT"},
{"TK_KEY_DELETE", get_TK_KEY_DELETE, METH_VARARGS, "TK_KEY_DELETE"},
{"TK_KEY_LEFTBRACE", get_TK_KEY_LEFTBRACE, METH_VARARGS, "TK_KEY_LEFTBRACE"},
{"TK_KEY_RIGHTBRACE", get_TK_KEY_RIGHTBRACE, METH_VARARGS, "TK_KEY_RIGHTBRACE"},
{"TK_KEY_LSHIFT", get_TK_KEY_LSHIFT, METH_VARARGS, "TK_KEY_LSHIFT"},
{"TK_KEY_RSHIFT", get_TK_KEY_RSHIFT, METH_VARARGS, "TK_KEY_RSHIFT"},
{"TK_KEY_LCTRL", get_TK_KEY_LCTRL, METH_VARARGS, "TK_KEY_LCTRL"},
{"TK_KEY_RCTRL", get_TK_KEY_RCTRL, METH_VARARGS, "TK_KEY_RCTRL"},
{"TK_KEY_LALT", get_TK_KEY_LALT, METH_VARARGS, "TK_KEY_LALT"},
{"TK_KEY_RALT", get_TK_KEY_RALT, METH_VARARGS, "TK_KEY_RALT"},
{"TK_KEY_CAPSLOCK", get_TK_KEY_CAPSLOCK, METH_VARARGS, "TK_KEY_CAPSLOCK"},
{"TK_KEY_HOME", get_TK_KEY_HOME, METH_VARARGS, "TK_KEY_HOME"},
{"TK_KEY_END", get_TK_KEY_END, METH_VARARGS, "TK_KEY_END"},
{"TK_KEY_INSERT", get_TK_KEY_INSERT, METH_VARARGS, "TK_KEY_INSERT"},
{"TK_KEY_UP", get_TK_KEY_UP, METH_VARARGS, "TK_KEY_UP"},
{"TK_KEY_DOWN", get_TK_KEY_DOWN, METH_VARARGS, "TK_KEY_DOWN"},
{"TK_KEY_LEFT", get_TK_KEY_LEFT, METH_VARARGS, "TK_KEY_LEFT"},
{"TK_KEY_RIGHT", get_TK_KEY_RIGHT, METH_VARARGS, "TK_KEY_RIGHT"},
{"TK_KEY_PAGEUP", get_TK_KEY_PAGEUP, METH_VARARGS, "TK_KEY_PAGEUP"},
{"TK_KEY_PAGEDOWN", get_TK_KEY_PAGEDOWN, METH_VARARGS, "TK_KEY_PAGEDOWN"},
{"TK_KEY_F1", get_TK_KEY_F1, METH_VARARGS, "TK_KEY_F1"},
{"TK_KEY_F2", get_TK_KEY_F2, METH_VARARGS, "TK_KEY_F2"},
{"TK_KEY_F3", get_TK_KEY_F3, METH_VARARGS, "TK_KEY_F3"},
{"TK_KEY_F4", get_TK_KEY_F4, METH_VARARGS, "TK_KEY_F4"},
{"TK_KEY_F5", get_TK_KEY_F5, METH_VARARGS, "TK_KEY_F5"},
{"TK_KEY_F6", get_TK_KEY_F6, METH_VARARGS, "TK_KEY_F6"},
{"TK_KEY_F7", get_TK_KEY_F7, METH_VARARGS, "TK_KEY_F7"},
{"TK_KEY_F8", get_TK_KEY_F8, METH_VARARGS, "TK_KEY_F8"},
{"TK_KEY_F9", get_TK_KEY_F9, METH_VARARGS, "TK_KEY_F9"},
{"TK_KEY_F10", get_TK_KEY_F10, METH_VARARGS, "TK_KEY_F10"},
{"TK_KEY_F11", get_TK_KEY_F11, METH_VARARGS, "TK_KEY_F11"},
{"TK_KEY_F12", get_TK_KEY_F12, METH_VARARGS, "TK_KEY_F12"},
{"TK_KEY_MENU", get_TK_KEY_MENU, METH_VARARGS, "TK_KEY_MENU"},
{"TK_KEY_COMMAND", get_TK_KEY_COMMAND, METH_VARARGS, "TK_KEY_COMMAND"},
{"TK_KEY_BACK", get_TK_KEY_BACK, METH_VARARGS, "TK_KEY_BACK"},
{"TK_KEY_CANCEL", get_TK_KEY_CANCEL, METH_VARARGS, "TK_KEY_CANCEL"},
{"TK_KEY_WHEEL", get_TK_KEY_WHEEL, METH_VARARGS, "TK_KEY_WHEEL"},
{"VALUE_TYPE_INVALID", get_VALUE_TYPE_INVALID, METH_VARARGS, "VALUE_TYPE_INVALID"},
{"VALUE_TYPE_BOOL", get_VALUE_TYPE_BOOL, METH_VARARGS, "VALUE_TYPE_BOOL"},
{"VALUE_TYPE_INT8", get_VALUE_TYPE_INT8, METH_VARARGS, "VALUE_TYPE_INT8"},
{"VALUE_TYPE_UINT8", get_VALUE_TYPE_UINT8, METH_VARARGS, "VALUE_TYPE_UINT8"},
{"VALUE_TYPE_INT16", get_VALUE_TYPE_INT16, METH_VARARGS, "VALUE_TYPE_INT16"},
{"VALUE_TYPE_UINT16", get_VALUE_TYPE_UINT16, METH_VARARGS, "VALUE_TYPE_UINT16"},
{"VALUE_TYPE_INT32", get_VALUE_TYPE_INT32, METH_VARARGS, "VALUE_TYPE_INT32"},
{"VALUE_TYPE_UINT32", get_VALUE_TYPE_UINT32, METH_VARARGS, "VALUE_TYPE_UINT32"},
{"VALUE_TYPE_INT64", get_VALUE_TYPE_INT64, METH_VARARGS, "VALUE_TYPE_INT64"},
{"VALUE_TYPE_UINT64", get_VALUE_TYPE_UINT64, METH_VARARGS, "VALUE_TYPE_UINT64"},
{"VALUE_TYPE_POINTER", get_VALUE_TYPE_POINTER, METH_VARARGS, "VALUE_TYPE_POINTER"},
{"VALUE_TYPE_FLOAT", get_VALUE_TYPE_FLOAT, METH_VARARGS, "VALUE_TYPE_FLOAT"},
{"VALUE_TYPE_FLOAT32", get_VALUE_TYPE_FLOAT32, METH_VARARGS, "VALUE_TYPE_FLOAT32"},
{"VALUE_TYPE_DOUBLE", get_VALUE_TYPE_DOUBLE, METH_VARARGS, "VALUE_TYPE_DOUBLE"},
{"VALUE_TYPE_STRING", get_VALUE_TYPE_STRING, METH_VARARGS, "VALUE_TYPE_STRING"},
{"VALUE_TYPE_WSTRING", get_VALUE_TYPE_WSTRING, METH_VARARGS, "VALUE_TYPE_WSTRING"},
{"VALUE_TYPE_OBJECT", get_VALUE_TYPE_OBJECT, METH_VARARGS, "VALUE_TYPE_OBJECT"},
{"VALUE_TYPE_SIZED_STRING", get_VALUE_TYPE_SIZED_STRING, METH_VARARGS, "VALUE_TYPE_SIZED_STRING"},
{"VALUE_TYPE_BINARY", get_VALUE_TYPE_BINARY, METH_VARARGS, "VALUE_TYPE_BINARY"},
{"VALUE_TYPE_UBJSON", get_VALUE_TYPE_UBJSON, METH_VARARGS, "VALUE_TYPE_UBJSON"},
{"VALUE_TYPE_TOKEN", get_VALUE_TYPE_TOKEN, METH_VARARGS, "VALUE_TYPE_TOKEN"},
{"locale_info", wrap_locale_info, METH_VARARGS, "locale_info"},
{"locale_info_tr", wrap_locale_info_tr, METH_VARARGS, "locale_info_tr"},
{"locale_info_change", wrap_locale_info_change, METH_VARARGS, "locale_info_change"},
{"locale_info_off", wrap_locale_info_off, METH_VARARGS, "locale_info_off"},
{"STYLE_ID_BG_COLOR", get_STYLE_ID_BG_COLOR, METH_VARARGS, "STYLE_ID_BG_COLOR"},
{"STYLE_ID_FG_COLOR", get_STYLE_ID_FG_COLOR, METH_VARARGS, "STYLE_ID_FG_COLOR"},
{"STYLE_ID_MASK_COLOR", get_STYLE_ID_MASK_COLOR, METH_VARARGS, "STYLE_ID_MASK_COLOR"},
{"STYLE_ID_FONT_NAME", get_STYLE_ID_FONT_NAME, METH_VARARGS, "STYLE_ID_FONT_NAME"},
{"STYLE_ID_FONT_SIZE", get_STYLE_ID_FONT_SIZE, METH_VARARGS, "STYLE_ID_FONT_SIZE"},
{"STYLE_ID_FONT_STYLE", get_STYLE_ID_FONT_STYLE, METH_VARARGS, "STYLE_ID_FONT_STYLE"},
{"STYLE_ID_TEXT_COLOR", get_STYLE_ID_TEXT_COLOR, METH_VARARGS, "STYLE_ID_TEXT_COLOR"},
{"STYLE_ID_HIGHLIGHT_FONT_NAME", get_STYLE_ID_HIGHLIGHT_FONT_NAME, METH_VARARGS, "STYLE_ID_HIGHLIGHT_FONT_NAME"},
{"STYLE_ID_HIGHLIGHT_FONT_SIZE", get_STYLE_ID_HIGHLIGHT_FONT_SIZE, METH_VARARGS, "STYLE_ID_HIGHLIGHT_FONT_SIZE"},
{"STYLE_ID_HIGHLIGHT_TEXT_COLOR", get_STYLE_ID_HIGHLIGHT_TEXT_COLOR, METH_VARARGS, "STYLE_ID_HIGHLIGHT_TEXT_COLOR"},
{"STYLE_ID_TIPS_TEXT_COLOR", get_STYLE_ID_TIPS_TEXT_COLOR, METH_VARARGS, "STYLE_ID_TIPS_TEXT_COLOR"},
{"STYLE_ID_TEXT_ALIGN_H", get_STYLE_ID_TEXT_ALIGN_H, METH_VARARGS, "STYLE_ID_TEXT_ALIGN_H"},
{"STYLE_ID_TEXT_ALIGN_V", get_STYLE_ID_TEXT_ALIGN_V, METH_VARARGS, "STYLE_ID_TEXT_ALIGN_V"},
{"STYLE_ID_BORDER_COLOR", get_STYLE_ID_BORDER_COLOR, METH_VARARGS, "STYLE_ID_BORDER_COLOR"},
{"STYLE_ID_BORDER_WIDTH", get_STYLE_ID_BORDER_WIDTH, METH_VARARGS, "STYLE_ID_BORDER_WIDTH"},
{"STYLE_ID_BORDER", get_STYLE_ID_BORDER, METH_VARARGS, "STYLE_ID_BORDER"},
{"STYLE_ID_BG_IMAGE", get_STYLE_ID_BG_IMAGE, METH_VARARGS, "STYLE_ID_BG_IMAGE"},
{"STYLE_ID_BG_IMAGE_DRAW_TYPE", get_STYLE_ID_BG_IMAGE_DRAW_TYPE, METH_VARARGS, "STYLE_ID_BG_IMAGE_DRAW_TYPE"},
{"STYLE_ID_ICON", get_STYLE_ID_ICON, METH_VARARGS, "STYLE_ID_ICON"},
{"STYLE_ID_FG_IMAGE", get_STYLE_ID_FG_IMAGE, METH_VARARGS, "STYLE_ID_FG_IMAGE"},
{"STYLE_ID_FG_IMAGE_DRAW_TYPE", get_STYLE_ID_FG_IMAGE_DRAW_TYPE, METH_VARARGS, "STYLE_ID_FG_IMAGE_DRAW_TYPE"},
{"STYLE_ID_SPACER", get_STYLE_ID_SPACER, METH_VARARGS, "STYLE_ID_SPACER"},
{"STYLE_ID_MARGIN", get_STYLE_ID_MARGIN, METH_VARARGS, "STYLE_ID_MARGIN"},
{"STYLE_ID_MARGIN_LEFT", get_STYLE_ID_MARGIN_LEFT, METH_VARARGS, "STYLE_ID_MARGIN_LEFT"},
{"STYLE_ID_MARGIN_RIGHT", get_STYLE_ID_MARGIN_RIGHT, METH_VARARGS, "STYLE_ID_MARGIN_RIGHT"},
{"STYLE_ID_MARGIN_TOP", get_STYLE_ID_MARGIN_TOP, METH_VARARGS, "STYLE_ID_MARGIN_TOP"},
{"STYLE_ID_MARGIN_BOTTOM", get_STYLE_ID_MARGIN_BOTTOM, METH_VARARGS, "STYLE_ID_MARGIN_BOTTOM"},
{"STYLE_ID_ICON_AT", get_STYLE_ID_ICON_AT, METH_VARARGS, "STYLE_ID_ICON_AT"},
{"STYLE_ID_ACTIVE_ICON", get_STYLE_ID_ACTIVE_ICON, METH_VARARGS, "STYLE_ID_ACTIVE_ICON"},
{"STYLE_ID_X_OFFSET", get_STYLE_ID_X_OFFSET, METH_VARARGS, "STYLE_ID_X_OFFSET"},
{"STYLE_ID_Y_OFFSET", get_STYLE_ID_Y_OFFSET, METH_VARARGS, "STYLE_ID_Y_OFFSET"},
{"STYLE_ID_SELECTED_BG_COLOR", get_STYLE_ID_SELECTED_BG_COLOR, METH_VARARGS, "STYLE_ID_SELECTED_BG_COLOR"},
{"STYLE_ID_SELECTED_FG_COLOR", get_STYLE_ID_SELECTED_FG_COLOR, METH_VARARGS, "STYLE_ID_SELECTED_FG_COLOR"},
{"STYLE_ID_SELECTED_TEXT_COLOR", get_STYLE_ID_SELECTED_TEXT_COLOR, METH_VARARGS, "STYLE_ID_SELECTED_TEXT_COLOR"},
{"STYLE_ID_ROUND_RADIUS", get_STYLE_ID_ROUND_RADIUS, METH_VARARGS, "STYLE_ID_ROUND_RADIUS"},
{"STYLE_ID_ROUND_RADIUS_TOP_LETF", get_STYLE_ID_ROUND_RADIUS_TOP_LETF, METH_VARARGS, "STYLE_ID_ROUND_RADIUS_TOP_LETF"},
{"STYLE_ID_ROUND_RADIUS_TOP_RIGHT", get_STYLE_ID_ROUND_RADIUS_TOP_RIGHT, METH_VARARGS, "STYLE_ID_ROUND_RADIUS_TOP_RIGHT"},
{"STYLE_ID_ROUND_RADIUS_BOTTOM_LETF", get_STYLE_ID_ROUND_RADIUS_BOTTOM_LETF, METH_VARARGS, "STYLE_ID_ROUND_RADIUS_BOTTOM_LETF"},
{"STYLE_ID_ROUND_RADIUS_BOTTOM_RIGHT", get_STYLE_ID_ROUND_RADIUS_BOTTOM_RIGHT, METH_VARARGS, "STYLE_ID_ROUND_RADIUS_BOTTOM_RIGHT"},
{"STYLE_ID_CHILDREN_LAYOUT", get_STYLE_ID_CHILDREN_LAYOUT, METH_VARARGS, "STYLE_ID_CHILDREN_LAYOUT"},
{"STYLE_ID_SELF_LAYOUT", get_STYLE_ID_SELF_LAYOUT, METH_VARARGS, "STYLE_ID_SELF_LAYOUT"},
{"style_notify_widget_state_changed", wrap_style_notify_widget_state_changed, METH_VARARGS, "style_notify_widget_state_changed"},
{"style_is_valid", wrap_style_is_valid, METH_VARARGS, "style_is_valid"},
{"style_get_int", wrap_style_get_int, METH_VARARGS, "style_get_int"},
{"style_get_uint", wrap_style_get_uint, METH_VARARGS, "style_get_uint"},
{"style_get_str", wrap_style_get_str, METH_VARARGS, "style_get_str"},
{"style_set", wrap_style_set, METH_VARARGS, "style_set"},
{"style_set_style_data", wrap_style_set_style_data, METH_VARARGS, "style_set_style_data"},
{"style_update_state", wrap_style_update_state, METH_VARARGS, "style_update_state"},
{"style_get_style_state", wrap_style_get_style_state, METH_VARARGS, "style_get_style_state"},
{"style_is_mutable", wrap_style_is_mutable, METH_VARARGS, "style_is_mutable"},
{"style_get_style_type", wrap_style_get_style_type, METH_VARARGS, "style_get_style_type"},
{"theme", wrap_theme, METH_VARARGS, "theme"},
{"timer_add", wrap_timer_add, METH_VARARGS, "timer_add"},
{"timer_remove", wrap_timer_remove, METH_VARARGS, "timer_remove"},
{"timer_remove_all_by_ctx", wrap_timer_remove_all_by_ctx, METH_VARARGS, "timer_remove_all_by_ctx"},
{"timer_reset", wrap_timer_reset, METH_VARARGS, "timer_reset"},
{"timer_suspend", wrap_timer_suspend, METH_VARARGS, "timer_suspend"},
{"timer_resume", wrap_timer_resume, METH_VARARGS, "timer_resume"},
{"timer_modify", wrap_timer_modify, METH_VARARGS, "timer_modify"},
{"ALIGN_V_NONE", get_ALIGN_V_NONE, METH_VARARGS, "ALIGN_V_NONE"},
{"ALIGN_V_MIDDLE", get_ALIGN_V_MIDDLE, METH_VARARGS, "ALIGN_V_MIDDLE"},
{"ALIGN_V_TOP", get_ALIGN_V_TOP, METH_VARARGS, "ALIGN_V_TOP"},
{"ALIGN_V_BOTTOM", get_ALIGN_V_BOTTOM, METH_VARARGS, "ALIGN_V_BOTTOM"},
{"ALIGN_H_NONE", get_ALIGN_H_NONE, METH_VARARGS, "ALIGN_H_NONE"},
{"ALIGN_H_CENTER", get_ALIGN_H_CENTER, METH_VARARGS, "ALIGN_H_CENTER"},
{"ALIGN_H_LEFT", get_ALIGN_H_LEFT, METH_VARARGS, "ALIGN_H_LEFT"},
{"ALIGN_H_RIGHT", get_ALIGN_H_RIGHT, METH_VARARGS, "ALIGN_H_RIGHT"},
{"APP_MOBILE", get_APP_MOBILE, METH_VARARGS, "APP_MOBILE"},
{"APP_SIMULATOR", get_APP_SIMULATOR, METH_VARARGS, "APP_SIMULATOR"},
{"APP_DESKTOP", get_APP_DESKTOP, METH_VARARGS, "APP_DESKTOP"},
{"BITMAP_FMT_NONE", get_BITMAP_FMT_NONE, METH_VARARGS, "BITMAP_FMT_NONE"},
{"BITMAP_FMT_RGBA8888", get_BITMAP_FMT_RGBA8888, METH_VARARGS, "BITMAP_FMT_RGBA8888"},
{"BITMAP_FMT_ABGR8888", get_BITMAP_FMT_ABGR8888, METH_VARARGS, "BITMAP_FMT_ABGR8888"},
{"BITMAP_FMT_BGRA8888", get_BITMAP_FMT_BGRA8888, METH_VARARGS, "BITMAP_FMT_BGRA8888"},
{"BITMAP_FMT_ARGB8888", get_BITMAP_FMT_ARGB8888, METH_VARARGS, "BITMAP_FMT_ARGB8888"},
{"BITMAP_FMT_RGB565", get_BITMAP_FMT_RGB565, METH_VARARGS, "BITMAP_FMT_RGB565"},
{"BITMAP_FMT_BGR565", get_BITMAP_FMT_BGR565, METH_VARARGS, "BITMAP_FMT_BGR565"},
{"BITMAP_FMT_RGB888", get_BITMAP_FMT_RGB888, METH_VARARGS, "BITMAP_FMT_RGB888"},
{"BITMAP_FMT_BGR888", get_BITMAP_FMT_BGR888, METH_VARARGS, "BITMAP_FMT_BGR888"},
{"BITMAP_FMT_GRAY", get_BITMAP_FMT_GRAY, METH_VARARGS, "BITMAP_FMT_GRAY"},
{"BITMAP_FMT_MONO", get_BITMAP_FMT_MONO, METH_VARARGS, "BITMAP_FMT_MONO"},
{"BITMAP_FLAG_NONE", get_BITMAP_FLAG_NONE, METH_VARARGS, "BITMAP_FLAG_NONE"},
{"BITMAP_FLAG_OPAQUE", get_BITMAP_FLAG_OPAQUE, METH_VARARGS, "BITMAP_FLAG_OPAQUE"},
{"BITMAP_FLAG_IMMUTABLE", get_BITMAP_FLAG_IMMUTABLE, METH_VARARGS, "BITMAP_FLAG_IMMUTABLE"},
{"BITMAP_FLAG_TEXTURE", get_BITMAP_FLAG_TEXTURE, METH_VARARGS, "BITMAP_FLAG_TEXTURE"},
{"BITMAP_FLAG_CHANGED", get_BITMAP_FLAG_CHANGED, METH_VARARGS, "BITMAP_FLAG_CHANGED"},
{"BITMAP_FLAG_PREMULTI_ALPHA", get_BITMAP_FLAG_PREMULTI_ALPHA, METH_VARARGS, "BITMAP_FLAG_PREMULTI_ALPHA"},
{"vgcanvas_cast", wrap_vgcanvas_cast, METH_VARARGS, "vgcanvas_cast"},
{"vgcanvas_flush", wrap_vgcanvas_flush, METH_VARARGS, "vgcanvas_flush"},
{"vgcanvas_begin_path", wrap_vgcanvas_begin_path, METH_VARARGS, "vgcanvas_begin_path"},
{"vgcanvas_move_to", wrap_vgcanvas_move_to, METH_VARARGS, "vgcanvas_move_to"},
{"vgcanvas_line_to", wrap_vgcanvas_line_to, METH_VARARGS, "vgcanvas_line_to"},
{"vgcanvas_quad_to", wrap_vgcanvas_quad_to, METH_VARARGS, "vgcanvas_quad_to"},
{"vgcanvas_bezier_to", wrap_vgcanvas_bezier_to, METH_VARARGS, "vgcanvas_bezier_to"},
{"vgcanvas_arc_to", wrap_vgcanvas_arc_to, METH_VARARGS, "vgcanvas_arc_to"},
{"vgcanvas_arc", wrap_vgcanvas_arc, METH_VARARGS, "vgcanvas_arc"},
{"vgcanvas_is_point_in_path", wrap_vgcanvas_is_point_in_path, METH_VARARGS, "vgcanvas_is_point_in_path"},
{"vgcanvas_rect", wrap_vgcanvas_rect, METH_VARARGS, "vgcanvas_rect"},
{"vgcanvas_rounded_rect", wrap_vgcanvas_rounded_rect, METH_VARARGS, "vgcanvas_rounded_rect"},
{"vgcanvas_ellipse", wrap_vgcanvas_ellipse, METH_VARARGS, "vgcanvas_ellipse"},
{"vgcanvas_close_path", wrap_vgcanvas_close_path, METH_VARARGS, "vgcanvas_close_path"},
{"vgcanvas_path_winding", wrap_vgcanvas_path_winding, METH_VARARGS, "vgcanvas_path_winding"},
{"vgcanvas_rotate", wrap_vgcanvas_rotate, METH_VARARGS, "vgcanvas_rotate"},
{"vgcanvas_scale", wrap_vgcanvas_scale, METH_VARARGS, "vgcanvas_scale"},
{"vgcanvas_translate", wrap_vgcanvas_translate, METH_VARARGS, "vgcanvas_translate"},
{"vgcanvas_transform", wrap_vgcanvas_transform, METH_VARARGS, "vgcanvas_transform"},
{"vgcanvas_set_transform", wrap_vgcanvas_set_transform, METH_VARARGS, "vgcanvas_set_transform"},
{"vgcanvas_clip_rect", wrap_vgcanvas_clip_rect, METH_VARARGS, "vgcanvas_clip_rect"},
{"vgcanvas_intersect_clip_rect", wrap_vgcanvas_intersect_clip_rect, METH_VARARGS, "vgcanvas_intersect_clip_rect"},
{"vgcanvas_fill", wrap_vgcanvas_fill, METH_VARARGS, "vgcanvas_fill"},
{"vgcanvas_stroke", wrap_vgcanvas_stroke, METH_VARARGS, "vgcanvas_stroke"},
{"vgcanvas_paint", wrap_vgcanvas_paint, METH_VARARGS, "vgcanvas_paint"},
{"vgcanvas_set_font", wrap_vgcanvas_set_font, METH_VARARGS, "vgcanvas_set_font"},
{"vgcanvas_set_font_size", wrap_vgcanvas_set_font_size, METH_VARARGS, "vgcanvas_set_font_size"},
{"vgcanvas_set_text_align", wrap_vgcanvas_set_text_align, METH_VARARGS, "vgcanvas_set_text_align"},
{"vgcanvas_set_text_baseline", wrap_vgcanvas_set_text_baseline, METH_VARARGS, "vgcanvas_set_text_baseline"},
{"vgcanvas_fill_text", wrap_vgcanvas_fill_text, METH_VARARGS, "vgcanvas_fill_text"},
{"vgcanvas_measure_text", wrap_vgcanvas_measure_text, METH_VARARGS, "vgcanvas_measure_text"},
{"vgcanvas_draw_image", wrap_vgcanvas_draw_image, METH_VARARGS, "vgcanvas_draw_image"},
{"vgcanvas_draw_icon", wrap_vgcanvas_draw_icon, METH_VARARGS, "vgcanvas_draw_icon"},
{"vgcanvas_set_antialias", wrap_vgcanvas_set_antialias, METH_VARARGS, "vgcanvas_set_antialias"},
{"vgcanvas_set_global_alpha", wrap_vgcanvas_set_global_alpha, METH_VARARGS, "vgcanvas_set_global_alpha"},
{"vgcanvas_set_line_width", wrap_vgcanvas_set_line_width, METH_VARARGS, "vgcanvas_set_line_width"},
{"vgcanvas_set_fill_color_str", wrap_vgcanvas_set_fill_color_str, METH_VARARGS, "vgcanvas_set_fill_color_str"},
{"vgcanvas_set_stroke_color_str", wrap_vgcanvas_set_stroke_color_str, METH_VARARGS, "vgcanvas_set_stroke_color_str"},
{"vgcanvas_set_line_cap", wrap_vgcanvas_set_line_cap, METH_VARARGS, "vgcanvas_set_line_cap"},
{"vgcanvas_set_line_join", wrap_vgcanvas_set_line_join, METH_VARARGS, "vgcanvas_set_line_join"},
{"vgcanvas_set_miter_limit", wrap_vgcanvas_set_miter_limit, METH_VARARGS, "vgcanvas_set_miter_limit"},
{"vgcanvas_save", wrap_vgcanvas_save, METH_VARARGS, "vgcanvas_save"},
{"vgcanvas_restore", wrap_vgcanvas_restore, METH_VARARGS, "vgcanvas_restore"},
{"vgcanvas_t_get_prop_w", wrap_vgcanvas_t_get_prop_w, METH_VARARGS, "vgcanvas_t_get_prop_w"},
{"vgcanvas_t_get_prop_h", wrap_vgcanvas_t_get_prop_h, METH_VARARGS, "vgcanvas_t_get_prop_h"},
{"vgcanvas_t_get_prop_stride", wrap_vgcanvas_t_get_prop_stride, METH_VARARGS, "vgcanvas_t_get_prop_stride"},
{"vgcanvas_t_get_prop_ratio", wrap_vgcanvas_t_get_prop_ratio, METH_VARARGS, "vgcanvas_t_get_prop_ratio"},
{"vgcanvas_t_get_prop_anti_alias", wrap_vgcanvas_t_get_prop_anti_alias, METH_VARARGS, "vgcanvas_t_get_prop_anti_alias"},
{"vgcanvas_t_get_prop_line_width", wrap_vgcanvas_t_get_prop_line_width, METH_VARARGS, "vgcanvas_t_get_prop_line_width"},
{"vgcanvas_t_get_prop_global_alpha", wrap_vgcanvas_t_get_prop_global_alpha, METH_VARARGS, "vgcanvas_t_get_prop_global_alpha"},
{"vgcanvas_t_get_prop_miter_limit", wrap_vgcanvas_t_get_prop_miter_limit, METH_VARARGS, "vgcanvas_t_get_prop_miter_limit"},
{"vgcanvas_t_get_prop_line_cap", wrap_vgcanvas_t_get_prop_line_cap, METH_VARARGS, "vgcanvas_t_get_prop_line_cap"},
{"vgcanvas_t_get_prop_line_join", wrap_vgcanvas_t_get_prop_line_join, METH_VARARGS, "vgcanvas_t_get_prop_line_join"},
{"vgcanvas_t_get_prop_font", wrap_vgcanvas_t_get_prop_font, METH_VARARGS, "vgcanvas_t_get_prop_font"},
{"vgcanvas_t_get_prop_font_size", wrap_vgcanvas_t_get_prop_font_size, METH_VARARGS, "vgcanvas_t_get_prop_font_size"},
{"vgcanvas_t_get_prop_text_align", wrap_vgcanvas_t_get_prop_text_align, METH_VARARGS, "vgcanvas_t_get_prop_text_align"},
{"vgcanvas_t_get_prop_text_baseline", wrap_vgcanvas_t_get_prop_text_baseline, METH_VARARGS, "vgcanvas_t_get_prop_text_baseline"},
{"VGCANVAS_LINE_CAP_ROUND", get_VGCANVAS_LINE_CAP_ROUND, METH_VARARGS, "VGCANVAS_LINE_CAP_ROUND"},
{"VGCANVAS_LINE_CAP_SQUARE", get_VGCANVAS_LINE_CAP_SQUARE, METH_VARARGS, "VGCANVAS_LINE_CAP_SQUARE"},
{"VGCANVAS_LINE_CAP_BUTT", get_VGCANVAS_LINE_CAP_BUTT, METH_VARARGS, "VGCANVAS_LINE_CAP_BUTT"},
{"VGCANVAS_LINE_JOIN_ROUND", get_VGCANVAS_LINE_JOIN_ROUND, METH_VARARGS, "VGCANVAS_LINE_JOIN_ROUND"},
{"VGCANVAS_LINE_JOIN_BEVEL", get_VGCANVAS_LINE_JOIN_BEVEL, METH_VARARGS, "VGCANVAS_LINE_JOIN_BEVEL"},
{"VGCANVAS_LINE_JOIN_MITTER", get_VGCANVAS_LINE_JOIN_MITTER, METH_VARARGS, "VGCANVAS_LINE_JOIN_MITTER"},
{"WIDGET_PROP_EXEC", get_WIDGET_PROP_EXEC, METH_VARARGS, "WIDGET_PROP_EXEC"},
{"WIDGET_PROP_X", get_WIDGET_PROP_X, METH_VARARGS, "WIDGET_PROP_X"},
{"WIDGET_PROP_Y", get_WIDGET_PROP_Y, METH_VARARGS, "WIDGET_PROP_Y"},
{"WIDGET_PROP_W", get_WIDGET_PROP_W, METH_VARARGS, "WIDGET_PROP_W"},
{"WIDGET_PROP_H", get_WIDGET_PROP_H, METH_VARARGS, "WIDGET_PROP_H"},
{"WIDGET_PROP_DESIGN_W", get_WIDGET_PROP_DESIGN_W, METH_VARARGS, "WIDGET_PROP_DESIGN_W"},
{"WIDGET_PROP_DESIGN_H", get_WIDGET_PROP_DESIGN_H, METH_VARARGS, "WIDGET_PROP_DESIGN_H"},
{"WIDGET_PROP_AUTO_SCALE_CHILDREN_X", get_WIDGET_PROP_AUTO_SCALE_CHILDREN_X, METH_VARARGS, "WIDGET_PROP_AUTO_SCALE_CHILDREN_X"},
{"WIDGET_PROP_AUTO_SCALE_CHILDREN_Y", get_WIDGET_PROP_AUTO_SCALE_CHILDREN_Y, METH_VARARGS, "WIDGET_PROP_AUTO_SCALE_CHILDREN_Y"},
{"WIDGET_PROP_AUTO_SCALE_CHILDREN_W", get_WIDGET_PROP_AUTO_SCALE_CHILDREN_W, METH_VARARGS, "WIDGET_PROP_AUTO_SCALE_CHILDREN_W"},
{"WIDGET_PROP_AUTO_SCALE_CHILDREN_H", get_WIDGET_PROP_AUTO_SCALE_CHILDREN_H, METH_VARARGS, "WIDGET_PROP_AUTO_SCALE_CHILDREN_H"},
{"WIDGET_PROP_INPUTING", get_WIDGET_PROP_INPUTING, METH_VARARGS, "WIDGET_PROP_INPUTING"},
{"WIDGET_PROP_ALWAYS_ON_TOP", get_WIDGET_PROP_ALWAYS_ON_TOP, METH_VARARGS, "WIDGET_PROP_ALWAYS_ON_TOP"},
{"WIDGET_PROP_CARET_X", get_WIDGET_PROP_CARET_X, METH_VARARGS, "WIDGET_PROP_CARET_X"},
{"WIDGET_PROP_CARET_Y", get_WIDGET_PROP_CARET_Y, METH_VARARGS, "WIDGET_PROP_CARET_Y"},
{"WIDGET_PROP_DIRTY_RECT_TOLERANCE", get_WIDGET_PROP_DIRTY_RECT_TOLERANCE, METH_VARARGS, "WIDGET_PROP_DIRTY_RECT_TOLERANCE"},
{"WIDGET_PROP_BIDI", get_WIDGET_PROP_BIDI, METH_VARARGS, "WIDGET_PROP_BIDI"},
{"WIDGET_PROP_CANVAS", get_WIDGET_PROP_CANVAS, METH_VARARGS, "WIDGET_PROP_CANVAS"},
{"WIDGET_PROP_LOCALIZE_OPTIONS", get_WIDGET_PROP_LOCALIZE_OPTIONS, METH_VARARGS, "WIDGET_PROP_LOCALIZE_OPTIONS"},
{"WIDGET_PROP_NATIVE_WINDOW", get_WIDGET_PROP_NATIVE_WINDOW, METH_VARARGS, "WIDGET_PROP_NATIVE_WINDOW"},
{"WIDGET_PROP_HIGHLIGHT", get_WIDGET_PROP_HIGHLIGHT, METH_VARARGS, "WIDGET_PROP_HIGHLIGHT"},
{"WIDGET_PROP_BAR_SIZE", get_WIDGET_PROP_BAR_SIZE, METH_VARARGS, "WIDGET_PROP_BAR_SIZE"},
{"WIDGET_PROP_OPACITY", get_WIDGET_PROP_OPACITY, METH_VARARGS, "WIDGET_PROP_OPACITY"},
{"WIDGET_PROP_MIN_W", get_WIDGET_PROP_MIN_W, METH_VARARGS, "WIDGET_PROP_MIN_W"},
{"WIDGET_PROP_MAX_W", get_WIDGET_PROP_MAX_W, METH_VARARGS, "WIDGET_PROP_MAX_W"},
{"WIDGET_PROP_AUTO_ADJUST_SIZE", get_WIDGET_PROP_AUTO_ADJUST_SIZE, METH_VARARGS, "WIDGET_PROP_AUTO_ADJUST_SIZE"},
{"WIDGET_PROP_SINGLE_INSTANCE", get_WIDGET_PROP_SINGLE_INSTANCE, METH_VARARGS, "WIDGET_PROP_SINGLE_INSTANCE"},
{"WIDGET_PROP_CHILDREN_LAYOUT", get_WIDGET_PROP_CHILDREN_LAYOUT, METH_VARARGS, "WIDGET_PROP_CHILDREN_LAYOUT"},
{"WIDGET_PROP_LAYOUT", get_WIDGET_PROP_LAYOUT, METH_VARARGS, "WIDGET_PROP_LAYOUT"},
{"WIDGET_PROP_SELF_LAYOUT", get_WIDGET_PROP_SELF_LAYOUT, METH_VARARGS, "WIDGET_PROP_SELF_LAYOUT"},
{"WIDGET_PROP_LAYOUT_W", get_WIDGET_PROP_LAYOUT_W, METH_VARARGS, "WIDGET_PROP_LAYOUT_W"},
{"WIDGET_PROP_LAYOUT_H", get_WIDGET_PROP_LAYOUT_H, METH_VARARGS, "WIDGET_PROP_LAYOUT_H"},
{"WIDGET_PROP_VIRTUAL_W", get_WIDGET_PROP_VIRTUAL_W, METH_VARARGS, "WIDGET_PROP_VIRTUAL_W"},
{"WIDGET_PROP_VIRTUAL_H", get_WIDGET_PROP_VIRTUAL_H, METH_VARARGS, "WIDGET_PROP_VIRTUAL_H"},
{"WIDGET_PROP_NAME", get_WIDGET_PROP_NAME, METH_VARARGS, "WIDGET_PROP_NAME"},
{"WIDGET_PROP_TYPE", get_WIDGET_PROP_TYPE, METH_VARARGS, "WIDGET_PROP_TYPE"},
{"WIDGET_PROP_CLOSABLE", get_WIDGET_PROP_CLOSABLE, METH_VARARGS, "WIDGET_PROP_CLOSABLE"},
{"WIDGET_PROP_POINTER_CURSOR", get_WIDGET_PROP_POINTER_CURSOR, METH_VARARGS, "WIDGET_PROP_POINTER_CURSOR"},
{"WIDGET_PROP_VALUE", get_WIDGET_PROP_VALUE, METH_VARARGS, "WIDGET_PROP_VALUE"},
{"WIDGET_PROP_REVERSE", get_WIDGET_PROP_REVERSE, METH_VARARGS, "WIDGET_PROP_REVERSE"},
{"WIDGET_PROP_LENGTH", get_WIDGET_PROP_LENGTH, METH_VARARGS, "WIDGET_PROP_LENGTH"},
{"WIDGET_PROP_LINE_WRAP", get_WIDGET_PROP_LINE_WRAP, METH_VARARGS, "WIDGET_PROP_LINE_WRAP"},
{"WIDGET_PROP_WORD_WRAP", get_WIDGET_PROP_WORD_WRAP, METH_VARARGS, "WIDGET_PROP_WORD_WRAP"},
{"WIDGET_PROP_TEXT", get_WIDGET_PROP_TEXT, METH_VARARGS, "WIDGET_PROP_TEXT"},
{"WIDGET_PROP_TR_TEXT", get_WIDGET_PROP_TR_TEXT, METH_VARARGS, "WIDGET_PROP_TR_TEXT"},
{"WIDGET_PROP_STYLE", get_WIDGET_PROP_STYLE, METH_VARARGS, "WIDGET_PROP_STYLE"},
{"WIDGET_PROP_ENABLE", get_WIDGET_PROP_ENABLE, METH_VARARGS, "WIDGET_PROP_ENABLE"},
{"WIDGET_PROP_FEEDBACK", get_WIDGET_PROP_FEEDBACK, METH_VARARGS, "WIDGET_PROP_FEEDBACK"},
{"WIDGET_PROP_FLOATING", get_WIDGET_PROP_FLOATING, METH_VARARGS, "WIDGET_PROP_FLOATING"},
{"WIDGET_PROP_MARGIN", get_WIDGET_PROP_MARGIN, METH_VARARGS, "WIDGET_PROP_MARGIN"},
{"WIDGET_PROP_SPACING", get_WIDGET_PROP_SPACING, METH_VARARGS, "WIDGET_PROP_SPACING"},
{"WIDGET_PROP_LEFT_MARGIN", get_WIDGET_PROP_LEFT_MARGIN, METH_VARARGS, "WIDGET_PROP_LEFT_MARGIN"},
{"WIDGET_PROP_RIGHT_MARGIN", get_WIDGET_PROP_RIGHT_MARGIN, METH_VARARGS, "WIDGET_PROP_RIGHT_MARGIN"},
{"WIDGET_PROP_TOP_MARGIN", get_WIDGET_PROP_TOP_MARGIN, METH_VARARGS, "WIDGET_PROP_TOP_MARGIN"},
{"WIDGET_PROP_BOTTOM_MARGIN", get_WIDGET_PROP_BOTTOM_MARGIN, METH_VARARGS, "WIDGET_PROP_BOTTOM_MARGIN"},
{"WIDGET_PROP_STEP", get_WIDGET_PROP_STEP, METH_VARARGS, "WIDGET_PROP_STEP"},
{"WIDGET_PROP_VISIBLE", get_WIDGET_PROP_VISIBLE, METH_VARARGS, "WIDGET_PROP_VISIBLE"},
{"WIDGET_PROP_SENSITIVE", get_WIDGET_PROP_SENSITIVE, METH_VARARGS, "WIDGET_PROP_SENSITIVE"},
{"WIDGET_PROP_ANIMATION", get_WIDGET_PROP_ANIMATION, METH_VARARGS, "WIDGET_PROP_ANIMATION"},
{"WIDGET_PROP_ANIM_HINT", get_WIDGET_PROP_ANIM_HINT, METH_VARARGS, "WIDGET_PROP_ANIM_HINT"},
{"WIDGET_PROP_FULLSCREEN", get_WIDGET_PROP_FULLSCREEN, METH_VARARGS, "WIDGET_PROP_FULLSCREEN"},
{"WIDGET_PROP_DISABLE_ANIM", get_WIDGET_PROP_DISABLE_ANIM, METH_VARARGS, "WIDGET_PROP_DISABLE_ANIM"},
{"WIDGET_PROP_OPEN_ANIM_HINT", get_WIDGET_PROP_OPEN_ANIM_HINT, METH_VARARGS, "WIDGET_PROP_OPEN_ANIM_HINT"},
{"WIDGET_PROP_CLOSE_ANIM_HINT", get_WIDGET_PROP_CLOSE_ANIM_HINT, METH_VARARGS, "WIDGET_PROP_CLOSE_ANIM_HINT"},
{"WIDGET_PROP_MIN", get_WIDGET_PROP_MIN, METH_VARARGS, "WIDGET_PROP_MIN"},
{"WIDGET_PROP_ACTION_TEXT", get_WIDGET_PROP_ACTION_TEXT, METH_VARARGS, "WIDGET_PROP_ACTION_TEXT"},
{"WIDGET_PROP_TIPS", get_WIDGET_PROP_TIPS, METH_VARARGS, "WIDGET_PROP_TIPS"},
{"WIDGET_PROP_TR_TIPS", get_WIDGET_PROP_TR_TIPS, METH_VARARGS, "WIDGET_PROP_TR_TIPS"},
{"WIDGET_PROP_INPUT_TYPE", get_WIDGET_PROP_INPUT_TYPE, METH_VARARGS, "WIDGET_PROP_INPUT_TYPE"},
{"WIDGET_PROP_KEYBOARD", get_WIDGET_PROP_KEYBOARD, METH_VARARGS, "WIDGET_PROP_KEYBOARD"},
{"WIDGET_PROP_DEFAULT_FOCUSED_CHILD", get_WIDGET_PROP_DEFAULT_FOCUSED_CHILD, METH_VARARGS, "WIDGET_PROP_DEFAULT_FOCUSED_CHILD"},
{"WIDGET_PROP_READONLY", get_WIDGET_PROP_READONLY, METH_VARARGS, "WIDGET_PROP_READONLY"},
{"WIDGET_PROP_CANCELABLE", get_WIDGET_PROP_CANCELABLE, METH_VARARGS, "WIDGET_PROP_CANCELABLE"},
{"WIDGET_PROP_PASSWORD_VISIBLE", get_WIDGET_PROP_PASSWORD_VISIBLE, METH_VARARGS, "WIDGET_PROP_PASSWORD_VISIBLE"},
{"WIDGET_PROP_ACTIVE", get_WIDGET_PROP_ACTIVE, METH_VARARGS, "WIDGET_PROP_ACTIVE"},
{"WIDGET_PROP_CURR_PAGE", get_WIDGET_PROP_CURR_PAGE, METH_VARARGS, "WIDGET_PROP_CURR_PAGE"},
{"WIDGET_PROP_PAGE_MAX_NUMBER", get_WIDGET_PROP_PAGE_MAX_NUMBER, METH_VARARGS, "WIDGET_PROP_PAGE_MAX_NUMBER"},
{"WIDGET_PROP_VERTICAL", get_WIDGET_PROP_VERTICAL, METH_VARARGS, "WIDGET_PROP_VERTICAL"},
{"WIDGET_PROP_SHOW_TEXT", get_WIDGET_PROP_SHOW_TEXT, METH_VARARGS, "WIDGET_PROP_SHOW_TEXT"},
{"WIDGET_PROP_XOFFSET", get_WIDGET_PROP_XOFFSET, METH_VARARGS, "WIDGET_PROP_XOFFSET"},
{"WIDGET_PROP_YOFFSET", get_WIDGET_PROP_YOFFSET, METH_VARARGS, "WIDGET_PROP_YOFFSET"},
{"WIDGET_PROP_ALIGN_V", get_WIDGET_PROP_ALIGN_V, METH_VARARGS, "WIDGET_PROP_ALIGN_V"},
{"WIDGET_PROP_ALIGN_H", get_WIDGET_PROP_ALIGN_H, METH_VARARGS, "WIDGET_PROP_ALIGN_H"},
{"WIDGET_PROP_AUTO_PLAY", get_WIDGET_PROP_AUTO_PLAY, METH_VARARGS, "WIDGET_PROP_AUTO_PLAY"},
{"WIDGET_PROP_LOOP", get_WIDGET_PROP_LOOP, METH_VARARGS, "WIDGET_PROP_LOOP"},
{"WIDGET_PROP_AUTO_FIX", get_WIDGET_PROP_AUTO_FIX, METH_VARARGS, "WIDGET_PROP_AUTO_FIX"},
{"WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED", get_WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED, METH_VARARGS, "WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED"},
{"WIDGET_PROP_OPEN_IM_WHEN_FOCUSED", get_WIDGET_PROP_OPEN_IM_WHEN_FOCUSED, METH_VARARGS, "WIDGET_PROP_OPEN_IM_WHEN_FOCUSED"},
{"WIDGET_PROP_CLOSE_IM_WHEN_BLURED", get_WIDGET_PROP_CLOSE_IM_WHEN_BLURED, METH_VARARGS, "WIDGET_PROP_CLOSE_IM_WHEN_BLURED"},
{"WIDGET_PROP_X_MIN", get_WIDGET_PROP_X_MIN, METH_VARARGS, "WIDGET_PROP_X_MIN"},
{"WIDGET_PROP_X_MAX", get_WIDGET_PROP_X_MAX, METH_VARARGS, "WIDGET_PROP_X_MAX"},
{"WIDGET_PROP_Y_MIN", get_WIDGET_PROP_Y_MIN, METH_VARARGS, "WIDGET_PROP_Y_MIN"},
{"WIDGET_PROP_Y_MAX", get_WIDGET_PROP_Y_MAX, METH_VARARGS, "WIDGET_PROP_Y_MAX"},
{"WIDGET_PROP_MAX", get_WIDGET_PROP_MAX, METH_VARARGS, "WIDGET_PROP_MAX"},
{"WIDGET_PROP_GRAB_KEYS", get_WIDGET_PROP_GRAB_KEYS, METH_VARARGS, "WIDGET_PROP_GRAB_KEYS"},
{"WIDGET_PROP_ROW", get_WIDGET_PROP_ROW, METH_VARARGS, "WIDGET_PROP_ROW"},
{"WIDGET_PROP_STATE_FOR_STYLE", get_WIDGET_PROP_STATE_FOR_STYLE, METH_VARARGS, "WIDGET_PROP_STATE_FOR_STYLE"},
{"WIDGET_PROP_THEME", get_WIDGET_PROP_THEME, METH_VARARGS, "WIDGET_PROP_THEME"},
{"WIDGET_PROP_STAGE", get_WIDGET_PROP_STAGE, METH_VARARGS, "WIDGET_PROP_STAGE"},
{"WIDGET_PROP_IMAGE_MANAGER", get_WIDGET_PROP_IMAGE_MANAGER, METH_VARARGS, "WIDGET_PROP_IMAGE_MANAGER"},
{"WIDGET_PROP_ASSETS_MANAGER", get_WIDGET_PROP_ASSETS_MANAGER, METH_VARARGS, "WIDGET_PROP_ASSETS_MANAGER"},
{"WIDGET_PROP_LOCALE_INFO", get_WIDGET_PROP_LOCALE_INFO, METH_VARARGS, "WIDGET_PROP_LOCALE_INFO"},
{"WIDGET_PROP_FONT_MANAGER", get_WIDGET_PROP_FONT_MANAGER, METH_VARARGS, "WIDGET_PROP_FONT_MANAGER"},
{"WIDGET_PROP_THEME_OBJ", get_WIDGET_PROP_THEME_OBJ, METH_VARARGS, "WIDGET_PROP_THEME_OBJ"},
{"WIDGET_PROP_DEFAULT_THEME_OBJ", get_WIDGET_PROP_DEFAULT_THEME_OBJ, METH_VARARGS, "WIDGET_PROP_DEFAULT_THEME_OBJ"},
{"WIDGET_PROP_ITEM_WIDTH", get_WIDGET_PROP_ITEM_WIDTH, METH_VARARGS, "WIDGET_PROP_ITEM_WIDTH"},
{"WIDGET_PROP_ITEM_HEIGHT", get_WIDGET_PROP_ITEM_HEIGHT, METH_VARARGS, "WIDGET_PROP_ITEM_HEIGHT"},
{"WIDGET_PROP_DEFAULT_ITEM_HEIGHT", get_WIDGET_PROP_DEFAULT_ITEM_HEIGHT, METH_VARARGS, "WIDGET_PROP_DEFAULT_ITEM_HEIGHT"},
{"WIDGET_PROP_XSLIDABLE", get_WIDGET_PROP_XSLIDABLE, METH_VARARGS, "WIDGET_PROP_XSLIDABLE"},
{"WIDGET_PROP_YSLIDABLE", get_WIDGET_PROP_YSLIDABLE, METH_VARARGS, "WIDGET_PROP_YSLIDABLE"},
{"WIDGET_PROP_REPEAT", get_WIDGET_PROP_REPEAT, METH_VARARGS, "WIDGET_PROP_REPEAT"},
{"WIDGET_PROP_LONG_PRESS_TIME", get_WIDGET_PROP_LONG_PRESS_TIME, METH_VARARGS, "WIDGET_PROP_LONG_PRESS_TIME"},
{"WIDGET_PROP_ENABLE_LONG_PRESS", get_WIDGET_PROP_ENABLE_LONG_PRESS, METH_VARARGS, "WIDGET_PROP_ENABLE_LONG_PRESS"},
{"WIDGET_PROP_CLICK_THROUGH", get_WIDGET_PROP_CLICK_THROUGH, METH_VARARGS, "WIDGET_PROP_CLICK_THROUGH"},
{"WIDGET_PROP_ANIMATABLE", get_WIDGET_PROP_ANIMATABLE, METH_VARARGS, "WIDGET_PROP_ANIMATABLE"},
{"WIDGET_PROP_AUTO_HIDE_SCROLL_BAR", get_WIDGET_PROP_AUTO_HIDE_SCROLL_BAR, METH_VARARGS, "WIDGET_PROP_AUTO_HIDE_SCROLL_BAR"},
{"WIDGET_PROP_IMAGE", get_WIDGET_PROP_IMAGE, METH_VARARGS, "WIDGET_PROP_IMAGE"},
{"WIDGET_PROP_FORMAT", get_WIDGET_PROP_FORMAT, METH_VARARGS, "WIDGET_PROP_FORMAT"},
{"WIDGET_PROP_DRAW_TYPE", get_WIDGET_PROP_DRAW_TYPE, METH_VARARGS, "WIDGET_PROP_DRAW_TYPE"},
{"WIDGET_PROP_SELECTABLE", get_WIDGET_PROP_SELECTABLE, METH_VARARGS, "WIDGET_PROP_SELECTABLE"},
{"WIDGET_PROP_CLICKABLE", get_WIDGET_PROP_CLICKABLE, METH_VARARGS, "WIDGET_PROP_CLICKABLE"},
{"WIDGET_PROP_SCALE_X", get_WIDGET_PROP_SCALE_X, METH_VARARGS, "WIDGET_PROP_SCALE_X"},
{"WIDGET_PROP_SCALE_Y", get_WIDGET_PROP_SCALE_Y, METH_VARARGS, "WIDGET_PROP_SCALE_Y"},
{"WIDGET_PROP_ANCHOR_X", get_WIDGET_PROP_ANCHOR_X, METH_VARARGS, "WIDGET_PROP_ANCHOR_X"},
{"WIDGET_PROP_ANCHOR_Y", get_WIDGET_PROP_ANCHOR_Y, METH_VARARGS, "WIDGET_PROP_ANCHOR_Y"},
{"WIDGET_PROP_ROTATION", get_WIDGET_PROP_ROTATION, METH_VARARGS, "WIDGET_PROP_ROTATION"},
{"WIDGET_PROP_COMPACT", get_WIDGET_PROP_COMPACT, METH_VARARGS, "WIDGET_PROP_COMPACT"},
{"WIDGET_PROP_SCROLLABLE", get_WIDGET_PROP_SCROLLABLE, METH_VARARGS, "WIDGET_PROP_SCROLLABLE"},
{"WIDGET_PROP_ICON", get_WIDGET_PROP_ICON, METH_VARARGS, "WIDGET_PROP_ICON"},
{"WIDGET_PROP_OPTIONS", get_WIDGET_PROP_OPTIONS, METH_VARARGS, "WIDGET_PROP_OPTIONS"},
{"WIDGET_PROP_SELECTED", get_WIDGET_PROP_SELECTED, METH_VARARGS, "WIDGET_PROP_SELECTED"},
{"WIDGET_PROP_CHECKED", get_WIDGET_PROP_CHECKED, METH_VARARGS, "WIDGET_PROP_CHECKED"},
{"WIDGET_PROP_ACTIVE_ICON", get_WIDGET_PROP_ACTIVE_ICON, METH_VARARGS, "WIDGET_PROP_ACTIVE_ICON"},
{"WIDGET_PROP_LOAD_UI", get_WIDGET_PROP_LOAD_UI, METH_VARARGS, "WIDGET_PROP_LOAD_UI"},
{"WIDGET_PROP_OPEN_WINDOW", get_WIDGET_PROP_OPEN_WINDOW, METH_VARARGS, "WIDGET_PROP_OPEN_WINDOW"},
{"WIDGET_PROP_SELECTED_INDEX", get_WIDGET_PROP_SELECTED_INDEX, METH_VARARGS, "WIDGET_PROP_SELECTED_INDEX"},
{"WIDGET_PROP_CLOSE_WHEN_CLICK", get_WIDGET_PROP_CLOSE_WHEN_CLICK, METH_VARARGS, "WIDGET_PROP_CLOSE_WHEN_CLICK"},
{"WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE", get_WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE, METH_VARARGS, "WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE"},
{"WIDGET_PROP_CLOSE_WHEN_TIMEOUT", get_WIDGET_PROP_CLOSE_WHEN_TIMEOUT, METH_VARARGS, "WIDGET_PROP_CLOSE_WHEN_TIMEOUT"},
{"WIDGET_PROP_LINE_GAP", get_WIDGET_PROP_LINE_GAP, METH_VARARGS, "WIDGET_PROP_LINE_GAP"},
{"WIDGET_PROP_BG_COLOR", get_WIDGET_PROP_BG_COLOR, METH_VARARGS, "WIDGET_PROP_BG_COLOR"},
{"WIDGET_PROP_BORDER_COLOR", get_WIDGET_PROP_BORDER_COLOR, METH_VARARGS, "WIDGET_PROP_BORDER_COLOR"},
{"WIDGET_PROP_DELAY", get_WIDGET_PROP_DELAY, METH_VARARGS, "WIDGET_PROP_DELAY"},
{"WIDGET_PROP_IS_KEYBOARD", get_WIDGET_PROP_IS_KEYBOARD, METH_VARARGS, "WIDGET_PROP_IS_KEYBOARD"},
{"WIDGET_PROP_FOCUSED", get_WIDGET_PROP_FOCUSED, METH_VARARGS, "WIDGET_PROP_FOCUSED"},
{"WIDGET_PROP_FOCUS", get_WIDGET_PROP_FOCUS, METH_VARARGS, "WIDGET_PROP_FOCUS"},
{"WIDGET_PROP_FOCUSABLE", get_WIDGET_PROP_FOCUSABLE, METH_VARARGS, "WIDGET_PROP_FOCUSABLE"},
{"WIDGET_PROP_WITH_FOCUS_STATE", get_WIDGET_PROP_WITH_FOCUS_STATE, METH_VARARGS, "WIDGET_PROP_WITH_FOCUS_STATE"},
{"WIDGET_PROP_MOVE_FOCUS_PREV_KEY", get_WIDGET_PROP_MOVE_FOCUS_PREV_KEY, METH_VARARGS, "WIDGET_PROP_MOVE_FOCUS_PREV_KEY"},
{"WIDGET_PROP_MOVE_FOCUS_NEXT_KEY", get_WIDGET_PROP_MOVE_FOCUS_NEXT_KEY, METH_VARARGS, "WIDGET_PROP_MOVE_FOCUS_NEXT_KEY"},
{"WIDGET_PROP_MOVE_FOCUS_UP_KEY", get_WIDGET_PROP_MOVE_FOCUS_UP_KEY, METH_VARARGS, "WIDGET_PROP_MOVE_FOCUS_UP_KEY"},
{"WIDGET_PROP_MOVE_FOCUS_DOWN_KEY", get_WIDGET_PROP_MOVE_FOCUS_DOWN_KEY, METH_VARARGS, "WIDGET_PROP_MOVE_FOCUS_DOWN_KEY"},
{"WIDGET_PROP_MOVE_FOCUS_LEFT_KEY", get_WIDGET_PROP_MOVE_FOCUS_LEFT_KEY, METH_VARARGS, "WIDGET_PROP_MOVE_FOCUS_LEFT_KEY"},
{"WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY", get_WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY, METH_VARARGS, "WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY"},
{"WIDGET_TYPE_NONE", get_WIDGET_TYPE_NONE, METH_VARARGS, "WIDGET_TYPE_NONE"},
{"WIDGET_TYPE_WINDOW_MANAGER", get_WIDGET_TYPE_WINDOW_MANAGER, METH_VARARGS, "WIDGET_TYPE_WINDOW_MANAGER"},
{"WIDGET_TYPE_NORMAL_WINDOW", get_WIDGET_TYPE_NORMAL_WINDOW, METH_VARARGS, "WIDGET_TYPE_NORMAL_WINDOW"},
{"WIDGET_TYPE_OVERLAY", get_WIDGET_TYPE_OVERLAY, METH_VARARGS, "WIDGET_TYPE_OVERLAY"},
{"WIDGET_TYPE_TOOL_BAR", get_WIDGET_TYPE_TOOL_BAR, METH_VARARGS, "WIDGET_TYPE_TOOL_BAR"},
{"WIDGET_TYPE_DIALOG", get_WIDGET_TYPE_DIALOG, METH_VARARGS, "WIDGET_TYPE_DIALOG"},
{"WIDGET_TYPE_POPUP", get_WIDGET_TYPE_POPUP, METH_VARARGS, "WIDGET_TYPE_POPUP"},
{"WIDGET_TYPE_SYSTEM_BAR", get_WIDGET_TYPE_SYSTEM_BAR, METH_VARARGS, "WIDGET_TYPE_SYSTEM_BAR"},
{"WIDGET_TYPE_SYSTEM_BAR_BOTTOM", get_WIDGET_TYPE_SYSTEM_BAR_BOTTOM, METH_VARARGS, "WIDGET_TYPE_SYSTEM_BAR_BOTTOM"},
{"WIDGET_TYPE_SPRITE", get_WIDGET_TYPE_SPRITE, METH_VARARGS, "WIDGET_TYPE_SPRITE"},
{"WIDGET_TYPE_KEYBOARD", get_WIDGET_TYPE_KEYBOARD, METH_VARARGS, "WIDGET_TYPE_KEYBOARD"},
{"WIDGET_TYPE_DND", get_WIDGET_TYPE_DND, METH_VARARGS, "WIDGET_TYPE_DND"},
{"WIDGET_TYPE_LABEL", get_WIDGET_TYPE_LABEL, METH_VARARGS, "WIDGET_TYPE_LABEL"},
{"WIDGET_TYPE_BUTTON", get_WIDGET_TYPE_BUTTON, METH_VARARGS, "WIDGET_TYPE_BUTTON"},
{"WIDGET_TYPE_IMAGE", get_WIDGET_TYPE_IMAGE, METH_VARARGS, "WIDGET_TYPE_IMAGE"},
{"WIDGET_TYPE_EDIT", get_WIDGET_TYPE_EDIT, METH_VARARGS, "WIDGET_TYPE_EDIT"},
{"WIDGET_TYPE_PROGRESS_BAR", get_WIDGET_TYPE_PROGRESS_BAR, METH_VARARGS, "WIDGET_TYPE_PROGRESS_BAR"},
{"WIDGET_TYPE_GROUP_BOX", get_WIDGET_TYPE_GROUP_BOX, METH_VARARGS, "WIDGET_TYPE_GROUP_BOX"},
{"WIDGET_TYPE_CHECK_BUTTON", get_WIDGET_TYPE_CHECK_BUTTON, METH_VARARGS, "WIDGET_TYPE_CHECK_BUTTON"},
{"WIDGET_TYPE_RADIO_BUTTON", get_WIDGET_TYPE_RADIO_BUTTON, METH_VARARGS, "WIDGET_TYPE_RADIO_BUTTON"},
{"WIDGET_TYPE_DIALOG_TITLE", get_WIDGET_TYPE_DIALOG_TITLE, METH_VARARGS, "WIDGET_TYPE_DIALOG_TITLE"},
{"WIDGET_TYPE_DIALOG_CLIENT", get_WIDGET_TYPE_DIALOG_CLIENT, METH_VARARGS, "WIDGET_TYPE_DIALOG_CLIENT"},
{"WIDGET_TYPE_SLIDER", get_WIDGET_TYPE_SLIDER, METH_VARARGS, "WIDGET_TYPE_SLIDER"},
{"WIDGET_TYPE_VIEW", get_WIDGET_TYPE_VIEW, METH_VARARGS, "WIDGET_TYPE_VIEW"},
{"WIDGET_TYPE_COMBO_BOX", get_WIDGET_TYPE_COMBO_BOX, METH_VARARGS, "WIDGET_TYPE_COMBO_BOX"},
{"WIDGET_TYPE_COMBO_BOX_ITEM", get_WIDGET_TYPE_COMBO_BOX_ITEM, METH_VARARGS, "WIDGET_TYPE_COMBO_BOX_ITEM"},
{"WIDGET_TYPE_SLIDE_VIEW", get_WIDGET_TYPE_SLIDE_VIEW, METH_VARARGS, "WIDGET_TYPE_SLIDE_VIEW"},
{"WIDGET_TYPE_SLIDE_INDICATOR", get_WIDGET_TYPE_SLIDE_INDICATOR, METH_VARARGS, "WIDGET_TYPE_SLIDE_INDICATOR"},
{"WIDGET_TYPE_SLIDE_INDICATOR_ARC", get_WIDGET_TYPE_SLIDE_INDICATOR_ARC, METH_VARARGS, "WIDGET_TYPE_SLIDE_INDICATOR_ARC"},
{"WIDGET_TYPE_PAGES", get_WIDGET_TYPE_PAGES, METH_VARARGS, "WIDGET_TYPE_PAGES"},
{"WIDGET_TYPE_TAB_BUTTON", get_WIDGET_TYPE_TAB_BUTTON, METH_VARARGS, "WIDGET_TYPE_TAB_BUTTON"},
{"WIDGET_TYPE_TAB_CONTROL", get_WIDGET_TYPE_TAB_CONTROL, METH_VARARGS, "WIDGET_TYPE_TAB_CONTROL"},
{"WIDGET_TYPE_TAB_BUTTON_GROUP", get_WIDGET_TYPE_TAB_BUTTON_GROUP, METH_VARARGS, "WIDGET_TYPE_TAB_BUTTON_GROUP"},
{"WIDGET_TYPE_BUTTON_GROUP", get_WIDGET_TYPE_BUTTON_GROUP, METH_VARARGS, "WIDGET_TYPE_BUTTON_GROUP"},
{"WIDGET_TYPE_CANDIDATES", get_WIDGET_TYPE_CANDIDATES, METH_VARARGS, "WIDGET_TYPE_CANDIDATES"},
{"WIDGET_TYPE_SPIN_BOX", get_WIDGET_TYPE_SPIN_BOX, METH_VARARGS, "WIDGET_TYPE_SPIN_BOX"},
{"WIDGET_TYPE_DRAGGER", get_WIDGET_TYPE_DRAGGER, METH_VARARGS, "WIDGET_TYPE_DRAGGER"},
{"WIDGET_TYPE_SCROLL_BAR", get_WIDGET_TYPE_SCROLL_BAR, METH_VARARGS, "WIDGET_TYPE_SCROLL_BAR"},
{"WIDGET_TYPE_SCROLL_BAR_DESKTOP", get_WIDGET_TYPE_SCROLL_BAR_DESKTOP, METH_VARARGS, "WIDGET_TYPE_SCROLL_BAR_DESKTOP"},
{"WIDGET_TYPE_SCROLL_BAR_MOBILE", get_WIDGET_TYPE_SCROLL_BAR_MOBILE, METH_VARARGS, "WIDGET_TYPE_SCROLL_BAR_MOBILE"},
{"WIDGET_TYPE_SCROLL_VIEW", get_WIDGET_TYPE_SCROLL_VIEW, METH_VARARGS, "WIDGET_TYPE_SCROLL_VIEW"},
{"WIDGET_TYPE_LIST_VIEW", get_WIDGET_TYPE_LIST_VIEW, METH_VARARGS, "WIDGET_TYPE_LIST_VIEW"},
{"WIDGET_TYPE_LIST_VIEW_H", get_WIDGET_TYPE_LIST_VIEW_H, METH_VARARGS, "WIDGET_TYPE_LIST_VIEW_H"},
{"WIDGET_TYPE_LIST_ITEM", get_WIDGET_TYPE_LIST_ITEM, METH_VARARGS, "WIDGET_TYPE_LIST_ITEM"},
{"WIDGET_TYPE_COLOR_PICKER", get_WIDGET_TYPE_COLOR_PICKER, METH_VARARGS, "WIDGET_TYPE_COLOR_PICKER"},
{"WIDGET_TYPE_COLOR_COMPONENT", get_WIDGET_TYPE_COLOR_COMPONENT, METH_VARARGS, "WIDGET_TYPE_COLOR_COMPONENT"},
{"WIDGET_TYPE_COLOR_TILE", get_WIDGET_TYPE_COLOR_TILE, METH_VARARGS, "WIDGET_TYPE_COLOR_TILE"},
{"WIDGET_TYPE_CLIP_VIEW", get_WIDGET_TYPE_CLIP_VIEW, METH_VARARGS, "WIDGET_TYPE_CLIP_VIEW"},
{"WIDGET_TYPE_RICH_TEXT", get_WIDGET_TYPE_RICH_TEXT, METH_VARARGS, "WIDGET_TYPE_RICH_TEXT"},
{"WIDGET_TYPE_APP_BAR", get_WIDGET_TYPE_APP_BAR, METH_VARARGS, "WIDGET_TYPE_APP_BAR"},
{"WIDGET_TYPE_GRID", get_WIDGET_TYPE_GRID, METH_VARARGS, "WIDGET_TYPE_GRID"},
{"WIDGET_TYPE_GRID_ITEM", get_WIDGET_TYPE_GRID_ITEM, METH_VARARGS, "WIDGET_TYPE_GRID_ITEM"},
{"WIDGET_TYPE_ROW", get_WIDGET_TYPE_ROW, METH_VARARGS, "WIDGET_TYPE_ROW"},
{"WIDGET_TYPE_COLUMN", get_WIDGET_TYPE_COLUMN, METH_VARARGS, "WIDGET_TYPE_COLUMN"},
{"WIDGET_TYPE_CALIBRATION_WIN", get_WIDGET_TYPE_CALIBRATION_WIN, METH_VARARGS, "WIDGET_TYPE_CALIBRATION_WIN"},
{"WINDOW_STAGE_NONE", get_WINDOW_STAGE_NONE, METH_VARARGS, "WINDOW_STAGE_NONE"},
{"WINDOW_STAGE_CREATED", get_WINDOW_STAGE_CREATED, METH_VARARGS, "WINDOW_STAGE_CREATED"},
{"WINDOW_STAGE_OPENED", get_WINDOW_STAGE_OPENED, METH_VARARGS, "WINDOW_STAGE_OPENED"},
{"WINDOW_STAGE_CLOSED", get_WINDOW_STAGE_CLOSED, METH_VARARGS, "WINDOW_STAGE_CLOSED"},
{"WINDOW_STAGE_SUSPEND", get_WINDOW_STAGE_SUSPEND, METH_VARARGS, "WINDOW_STAGE_SUSPEND"},
{"WINDOW_CLOSABLE_YES", get_WINDOW_CLOSABLE_YES, METH_VARARGS, "WINDOW_CLOSABLE_YES"},
{"WINDOW_CLOSABLE_NO", get_WINDOW_CLOSABLE_NO, METH_VARARGS, "WINDOW_CLOSABLE_NO"},
{"WINDOW_CLOSABLE_CONFIRM", get_WINDOW_CLOSABLE_CONFIRM, METH_VARARGS, "WINDOW_CLOSABLE_CONFIRM"},
{"WIDGET_STATE_NONE", get_WIDGET_STATE_NONE, METH_VARARGS, "WIDGET_STATE_NONE"},
{"WIDGET_STATE_NORMAL", get_WIDGET_STATE_NORMAL, METH_VARARGS, "WIDGET_STATE_NORMAL"},
{"WIDGET_STATE_CHANGED", get_WIDGET_STATE_CHANGED, METH_VARARGS, "WIDGET_STATE_CHANGED"},
{"WIDGET_STATE_PRESSED", get_WIDGET_STATE_PRESSED, METH_VARARGS, "WIDGET_STATE_PRESSED"},
{"WIDGET_STATE_OVER", get_WIDGET_STATE_OVER, METH_VARARGS, "WIDGET_STATE_OVER"},
{"WIDGET_STATE_DISABLE", get_WIDGET_STATE_DISABLE, METH_VARARGS, "WIDGET_STATE_DISABLE"},
{"WIDGET_STATE_FOCUSED", get_WIDGET_STATE_FOCUSED, METH_VARARGS, "WIDGET_STATE_FOCUSED"},
{"WIDGET_STATE_CHECKED", get_WIDGET_STATE_CHECKED, METH_VARARGS, "WIDGET_STATE_CHECKED"},
{"WIDGET_STATE_UNCHECKED", get_WIDGET_STATE_UNCHECKED, METH_VARARGS, "WIDGET_STATE_UNCHECKED"},
{"WIDGET_STATE_EMPTY", get_WIDGET_STATE_EMPTY, METH_VARARGS, "WIDGET_STATE_EMPTY"},
{"WIDGET_STATE_EMPTY_FOCUS", get_WIDGET_STATE_EMPTY_FOCUS, METH_VARARGS, "WIDGET_STATE_EMPTY_FOCUS"},
{"WIDGET_STATE_ERROR", get_WIDGET_STATE_ERROR, METH_VARARGS, "WIDGET_STATE_ERROR"},
{"WIDGET_STATE_SELECTED", get_WIDGET_STATE_SELECTED, METH_VARARGS, "WIDGET_STATE_SELECTED"},
{"WIDGET_STATE_NORMAL_OF_CHECKED", get_WIDGET_STATE_NORMAL_OF_CHECKED, METH_VARARGS, "WIDGET_STATE_NORMAL_OF_CHECKED"},
{"WIDGET_STATE_PRESSED_OF_CHECKED", get_WIDGET_STATE_PRESSED_OF_CHECKED, METH_VARARGS, "WIDGET_STATE_PRESSED_OF_CHECKED"},
{"WIDGET_STATE_OVER_OF_CHECKED", get_WIDGET_STATE_OVER_OF_CHECKED, METH_VARARGS, "WIDGET_STATE_OVER_OF_CHECKED"},
{"WIDGET_STATE_DISABLE_OF_CHECKED", get_WIDGET_STATE_DISABLE_OF_CHECKED, METH_VARARGS, "WIDGET_STATE_DISABLE_OF_CHECKED"},
{"WIDGET_STATE_FOCUSED_OF_CHECKED", get_WIDGET_STATE_FOCUSED_OF_CHECKED, METH_VARARGS, "WIDGET_STATE_FOCUSED_OF_CHECKED"},
{"WIDGET_STATE_NORMAL_OF_ACTIVE", get_WIDGET_STATE_NORMAL_OF_ACTIVE, METH_VARARGS, "WIDGET_STATE_NORMAL_OF_ACTIVE"},
{"WIDGET_STATE_PRESSED_OF_ACTIVE", get_WIDGET_STATE_PRESSED_OF_ACTIVE, METH_VARARGS, "WIDGET_STATE_PRESSED_OF_ACTIVE"},
{"WIDGET_STATE_OVER_OF_ACTIVE", get_WIDGET_STATE_OVER_OF_ACTIVE, METH_VARARGS, "WIDGET_STATE_OVER_OF_ACTIVE"},
{"WIDGET_STATE_DISABLE_OF_ACTIVE", get_WIDGET_STATE_DISABLE_OF_ACTIVE, METH_VARARGS, "WIDGET_STATE_DISABLE_OF_ACTIVE"},
{"WIDGET_STATE_FOCUSED_OF_ACTIVE", get_WIDGET_STATE_FOCUSED_OF_ACTIVE, METH_VARARGS, "WIDGET_STATE_FOCUSED_OF_ACTIVE"},
{"WIDGET_CURSOR_DEFAULT", get_WIDGET_CURSOR_DEFAULT, METH_VARARGS, "WIDGET_CURSOR_DEFAULT"},
{"WIDGET_CURSOR_EDIT", get_WIDGET_CURSOR_EDIT, METH_VARARGS, "WIDGET_CURSOR_EDIT"},
{"WIDGET_CURSOR_HAND", get_WIDGET_CURSOR_HAND, METH_VARARGS, "WIDGET_CURSOR_HAND"},
{"WIDGET_CURSOR_WAIT", get_WIDGET_CURSOR_WAIT, METH_VARARGS, "WIDGET_CURSOR_WAIT"},
{"WIDGET_CURSOR_CROSS", get_WIDGET_CURSOR_CROSS, METH_VARARGS, "WIDGET_CURSOR_CROSS"},
{"WIDGET_CURSOR_NO", get_WIDGET_CURSOR_NO, METH_VARARGS, "WIDGET_CURSOR_NO"},
{"WIDGET_CURSOR_SIZENWSE", get_WIDGET_CURSOR_SIZENWSE, METH_VARARGS, "WIDGET_CURSOR_SIZENWSE"},
{"WIDGET_CURSOR_SIZENESW", get_WIDGET_CURSOR_SIZENESW, METH_VARARGS, "WIDGET_CURSOR_SIZENESW"},
{"WIDGET_CURSOR_SIZEWE", get_WIDGET_CURSOR_SIZEWE, METH_VARARGS, "WIDGET_CURSOR_SIZEWE"},
{"WIDGET_CURSOR_SIZENS", get_WIDGET_CURSOR_SIZENS, METH_VARARGS, "WIDGET_CURSOR_SIZENS"},
{"WIDGET_CURSOR_SIZEALL", get_WIDGET_CURSOR_SIZEALL, METH_VARARGS, "WIDGET_CURSOR_SIZEALL"},
{"widget_count_children", wrap_widget_count_children, METH_VARARGS, "widget_count_children"},
{"widget_get_child", wrap_widget_get_child, METH_VARARGS, "widget_get_child"},
{"widget_get_native_window", wrap_widget_get_native_window, METH_VARARGS, "widget_get_native_window"},
{"widget_index_of", wrap_widget_index_of, METH_VARARGS, "widget_index_of"},
{"widget_close_window", wrap_widget_close_window, METH_VARARGS, "widget_close_window"},
{"widget_move", wrap_widget_move, METH_VARARGS, "widget_move"},
{"widget_resize", wrap_widget_resize, METH_VARARGS, "widget_resize"},
{"widget_move_resize", wrap_widget_move_resize, METH_VARARGS, "widget_move_resize"},
{"widget_set_value", wrap_widget_set_value, METH_VARARGS, "widget_set_value"},
{"widget_animate_value_to", wrap_widget_animate_value_to, METH_VARARGS, "widget_animate_value_to"},
{"widget_add_value", wrap_widget_add_value, METH_VARARGS, "widget_add_value"},
{"widget_is_style_exist", wrap_widget_is_style_exist, METH_VARARGS, "widget_is_style_exist"},
{"widget_use_style", wrap_widget_use_style, METH_VARARGS, "widget_use_style"},
{"widget_set_text_utf8", wrap_widget_set_text_utf8, METH_VARARGS, "widget_set_text_utf8"},
{"widget_set_child_text_utf8", wrap_widget_set_child_text_utf8, METH_VARARGS, "widget_set_child_text_utf8"},
{"widget_set_child_text_with_double", wrap_widget_set_child_text_with_double, METH_VARARGS, "widget_set_child_text_with_double"},
{"widget_set_child_text_with_int", wrap_widget_set_child_text_with_int, METH_VARARGS, "widget_set_child_text_with_int"},
{"widget_set_tr_text", wrap_widget_set_tr_text, METH_VARARGS, "widget_set_tr_text"},
{"widget_get_value", wrap_widget_get_value, METH_VARARGS, "widget_get_value"},
{"widget_get_text", wrap_widget_get_text, METH_VARARGS, "widget_get_text"},
{"widget_set_name", wrap_widget_set_name, METH_VARARGS, "widget_set_name"},
{"widget_set_theme", wrap_widget_set_theme, METH_VARARGS, "widget_set_theme"},
{"widget_set_pointer_cursor", wrap_widget_set_pointer_cursor, METH_VARARGS, "widget_set_pointer_cursor"},
{"widget_set_animation", wrap_widget_set_animation, METH_VARARGS, "widget_set_animation"},
{"widget_create_animator", wrap_widget_create_animator, METH_VARARGS, "widget_create_animator"},
{"widget_start_animator", wrap_widget_start_animator, METH_VARARGS, "widget_start_animator"},
{"widget_set_animator_time_scale", wrap_widget_set_animator_time_scale, METH_VARARGS, "widget_set_animator_time_scale"},
{"widget_pause_animator", wrap_widget_pause_animator, METH_VARARGS, "widget_pause_animator"},
{"widget_stop_animator", wrap_widget_stop_animator, METH_VARARGS, "widget_stop_animator"},
{"widget_destroy_animator", wrap_widget_destroy_animator, METH_VARARGS, "widget_destroy_animator"},
{"widget_set_enable", wrap_widget_set_enable, METH_VARARGS, "widget_set_enable"},
{"widget_set_feedback", wrap_widget_set_feedback, METH_VARARGS, "widget_set_feedback"},
{"widget_set_auto_adjust_size", wrap_widget_set_auto_adjust_size, METH_VARARGS, "widget_set_auto_adjust_size"},
{"widget_set_floating", wrap_widget_set_floating, METH_VARARGS, "widget_set_floating"},
{"widget_set_focused", wrap_widget_set_focused, METH_VARARGS, "widget_set_focused"},
{"widget_set_focusable", wrap_widget_set_focusable, METH_VARARGS, "widget_set_focusable"},
{"widget_set_state", wrap_widget_set_state, METH_VARARGS, "widget_set_state"},
{"widget_set_opacity", wrap_widget_set_opacity, METH_VARARGS, "widget_set_opacity"},
{"widget_set_dirty_rect_tolerance", wrap_widget_set_dirty_rect_tolerance, METH_VARARGS, "widget_set_dirty_rect_tolerance"},
{"widget_destroy_children", wrap_widget_destroy_children, METH_VARARGS, "widget_destroy_children"},
{"widget_add_child", wrap_widget_add_child, METH_VARARGS, "widget_add_child"},
{"widget_remove_child", wrap_widget_remove_child, METH_VARARGS, "widget_remove_child"},
{"widget_insert_child", wrap_widget_insert_child, METH_VARARGS, "widget_insert_child"},
{"widget_restack", wrap_widget_restack, METH_VARARGS, "widget_restack"},
{"widget_child", wrap_widget_child, METH_VARARGS, "widget_child"},
{"widget_lookup", wrap_widget_lookup, METH_VARARGS, "widget_lookup"},
{"widget_lookup_by_type", wrap_widget_lookup_by_type, METH_VARARGS, "widget_lookup_by_type"},
{"widget_set_visible", wrap_widget_set_visible, METH_VARARGS, "widget_set_visible"},
{"widget_set_visible_only", wrap_widget_set_visible_only, METH_VARARGS, "widget_set_visible_only"},
{"widget_set_sensitive", wrap_widget_set_sensitive, METH_VARARGS, "widget_set_sensitive"},
{"widget_on", wrap_widget_on, METH_VARARGS, "widget_on"},
{"widget_off", wrap_widget_off, METH_VARARGS, "widget_off"},
{"widget_invalidate_force", wrap_widget_invalidate_force, METH_VARARGS, "widget_invalidate_force"},
{"widget_set_prop_str", wrap_widget_set_prop_str, METH_VARARGS, "widget_set_prop_str"},
{"widget_get_prop_str", wrap_widget_get_prop_str, METH_VARARGS, "widget_get_prop_str"},
{"widget_set_prop_pointer", wrap_widget_set_prop_pointer, METH_VARARGS, "widget_set_prop_pointer"},
{"widget_get_prop_pointer", wrap_widget_get_prop_pointer, METH_VARARGS, "widget_get_prop_pointer"},
{"widget_set_prop_int", wrap_widget_set_prop_int, METH_VARARGS, "widget_set_prop_int"},
{"widget_get_prop_int", wrap_widget_get_prop_int, METH_VARARGS, "widget_get_prop_int"},
{"widget_set_prop_bool", wrap_widget_set_prop_bool, METH_VARARGS, "widget_set_prop_bool"},
{"widget_get_prop_bool", wrap_widget_get_prop_bool, METH_VARARGS, "widget_get_prop_bool"},
{"widget_is_window_opened", wrap_widget_is_window_opened, METH_VARARGS, "widget_is_window_opened"},
{"widget_is_parent_of", wrap_widget_is_parent_of, METH_VARARGS, "widget_is_parent_of"},
{"widget_is_direct_parent_of", wrap_widget_is_direct_parent_of, METH_VARARGS, "widget_is_direct_parent_of"},
{"widget_is_window", wrap_widget_is_window, METH_VARARGS, "widget_is_window"},
{"widget_is_system_bar", wrap_widget_is_system_bar, METH_VARARGS, "widget_is_system_bar"},
{"widget_is_normal_window", wrap_widget_is_normal_window, METH_VARARGS, "widget_is_normal_window"},
{"widget_is_dialog", wrap_widget_is_dialog, METH_VARARGS, "widget_is_dialog"},
{"widget_is_popup", wrap_widget_is_popup, METH_VARARGS, "widget_is_popup"},
{"widget_is_overlay", wrap_widget_is_overlay, METH_VARARGS, "widget_is_overlay"},
{"widget_is_opened_dialog", wrap_widget_is_opened_dialog, METH_VARARGS, "widget_is_opened_dialog"},
{"widget_is_opened_popup", wrap_widget_is_opened_popup, METH_VARARGS, "widget_is_opened_popup"},
{"widget_is_keyboard", wrap_widget_is_keyboard, METH_VARARGS, "widget_is_keyboard"},
{"widget_is_designing_window", wrap_widget_is_designing_window, METH_VARARGS, "widget_is_designing_window"},
{"widget_is_window_manager", wrap_widget_is_window_manager, METH_VARARGS, "widget_is_window_manager"},
{"widget_foreach", wrap_widget_foreach, METH_VARARGS, "widget_foreach"},
{"widget_get_window", wrap_widget_get_window, METH_VARARGS, "widget_get_window"},
{"widget_get_window_manager", wrap_widget_get_window_manager, METH_VARARGS, "widget_get_window_manager"},
{"widget_get_type", wrap_widget_get_type, METH_VARARGS, "widget_get_type"},
{"widget_clone", wrap_widget_clone, METH_VARARGS, "widget_clone"},
{"widget_equal", wrap_widget_equal, METH_VARARGS, "widget_equal"},
{"widget_cast", wrap_widget_cast, METH_VARARGS, "widget_cast"},
{"widget_destroy", wrap_widget_destroy, METH_VARARGS, "widget_destroy"},
{"widget_destroy_async", wrap_widget_destroy_async, METH_VARARGS, "widget_destroy_async"},
{"widget_unref", wrap_widget_unref, METH_VARARGS, "widget_unref"},
{"widget_stroke_border_rect", wrap_widget_stroke_border_rect, METH_VARARGS, "widget_stroke_border_rect"},
{"widget_fill_bg_rect", wrap_widget_fill_bg_rect, METH_VARARGS, "widget_fill_bg_rect"},
{"widget_fill_fg_rect", wrap_widget_fill_fg_rect, METH_VARARGS, "widget_fill_fg_rect"},
{"widget_dispatch_to_target", wrap_widget_dispatch_to_target, METH_VARARGS, "widget_dispatch_to_target"},
{"widget_dispatch_to_key_target", wrap_widget_dispatch_to_key_target, METH_VARARGS, "widget_dispatch_to_key_target"},
{"widget_get_style_type", wrap_widget_get_style_type, METH_VARARGS, "widget_get_style_type"},
{"widget_update_style", wrap_widget_update_style, METH_VARARGS, "widget_update_style"},
{"widget_update_style_recursive", wrap_widget_update_style_recursive, METH_VARARGS, "widget_update_style_recursive"},
{"widget_set_as_key_target", wrap_widget_set_as_key_target, METH_VARARGS, "widget_set_as_key_target"},
{"widget_focus_next", wrap_widget_focus_next, METH_VARARGS, "widget_focus_next"},
{"widget_focus_prev", wrap_widget_focus_prev, METH_VARARGS, "widget_focus_prev"},
{"widget_get_state_for_style", wrap_widget_get_state_for_style, METH_VARARGS, "widget_get_state_for_style"},
{"widget_layout", wrap_widget_layout, METH_VARARGS, "widget_layout"},
{"widget_set_self_layout", wrap_widget_set_self_layout, METH_VARARGS, "widget_set_self_layout"},
{"widget_set_children_layout", wrap_widget_set_children_layout, METH_VARARGS, "widget_set_children_layout"},
{"widget_set_self_layout_params", wrap_widget_set_self_layout_params, METH_VARARGS, "widget_set_self_layout_params"},
{"widget_set_style_int", wrap_widget_set_style_int, METH_VARARGS, "widget_set_style_int"},
{"widget_set_style_str", wrap_widget_set_style_str, METH_VARARGS, "widget_set_style_str"},
{"widget_set_style_color", wrap_widget_set_style_color, METH_VARARGS, "widget_set_style_color"},
{"widget_t_get_prop_x", wrap_widget_t_get_prop_x, METH_VARARGS, "widget_t_get_prop_x"},
{"widget_t_get_prop_y", wrap_widget_t_get_prop_y, METH_VARARGS, "widget_t_get_prop_y"},
{"widget_t_get_prop_w", wrap_widget_t_get_prop_w, METH_VARARGS, "widget_t_get_prop_w"},
{"widget_t_get_prop_h", wrap_widget_t_get_prop_h, METH_VARARGS, "widget_t_get_prop_h"},
{"widget_t_get_prop_name", wrap_widget_t_get_prop_name, METH_VARARGS, "widget_t_get_prop_name"},
{"widget_t_get_prop_pointer_cursor", wrap_widget_t_get_prop_pointer_cursor, METH_VARARGS, "widget_t_get_prop_pointer_cursor"},
{"widget_t_get_prop_tr_text", wrap_widget_t_get_prop_tr_text, METH_VARARGS, "widget_t_get_prop_tr_text"},
{"widget_t_get_prop_style", wrap_widget_t_get_prop_style, METH_VARARGS, "widget_t_get_prop_style"},
{"widget_t_get_prop_animation", wrap_widget_t_get_prop_animation, METH_VARARGS, "widget_t_get_prop_animation"},
{"widget_t_get_prop_enable", wrap_widget_t_get_prop_enable, METH_VARARGS, "widget_t_get_prop_enable"},
{"widget_t_get_prop_feedback", wrap_widget_t_get_prop_feedback, METH_VARARGS, "widget_t_get_prop_feedback"},
{"widget_t_get_prop_visible", wrap_widget_t_get_prop_visible, METH_VARARGS, "widget_t_get_prop_visible"},
{"widget_t_get_prop_sensitive", wrap_widget_t_get_prop_sensitive, METH_VARARGS, "widget_t_get_prop_sensitive"},
{"widget_t_get_prop_focusable", wrap_widget_t_get_prop_focusable, METH_VARARGS, "widget_t_get_prop_focusable"},
{"widget_t_get_prop_with_focus_state", wrap_widget_t_get_prop_with_focus_state, METH_VARARGS, "widget_t_get_prop_with_focus_state"},
{"widget_t_get_prop_auto_adjust_size", wrap_widget_t_get_prop_auto_adjust_size, METH_VARARGS, "widget_t_get_prop_auto_adjust_size"},
{"widget_t_get_prop_floating", wrap_widget_t_get_prop_floating, METH_VARARGS, "widget_t_get_prop_floating"},
{"widget_t_get_prop_dirty_rect_tolerance", wrap_widget_t_get_prop_dirty_rect_tolerance, METH_VARARGS, "widget_t_get_prop_dirty_rect_tolerance"},
{"widget_t_get_prop_parent", wrap_widget_t_get_prop_parent, METH_VARARGS, "widget_t_get_prop_parent"},
{"app_conf_save", wrap_app_conf_save, METH_VARARGS, "app_conf_save"},
{"app_conf_reload", wrap_app_conf_reload, METH_VARARGS, "app_conf_reload"},
{"app_conf_deinit", wrap_app_conf_deinit, METH_VARARGS, "app_conf_deinit"},
{"app_conf_exist", wrap_app_conf_exist, METH_VARARGS, "app_conf_exist"},
{"app_conf_set_int", wrap_app_conf_set_int, METH_VARARGS, "app_conf_set_int"},
{"app_conf_set_int64", wrap_app_conf_set_int64, METH_VARARGS, "app_conf_set_int64"},
{"app_conf_set_bool", wrap_app_conf_set_bool, METH_VARARGS, "app_conf_set_bool"},
{"app_conf_set_double", wrap_app_conf_set_double, METH_VARARGS, "app_conf_set_double"},
{"app_conf_set_str", wrap_app_conf_set_str, METH_VARARGS, "app_conf_set_str"},
{"app_conf_get_int", wrap_app_conf_get_int, METH_VARARGS, "app_conf_get_int"},
{"app_conf_get_int64", wrap_app_conf_get_int64, METH_VARARGS, "app_conf_get_int64"},
{"app_conf_get_bool", wrap_app_conf_get_bool, METH_VARARGS, "app_conf_get_bool"},
{"app_conf_get_double", wrap_app_conf_get_double, METH_VARARGS, "app_conf_get_double"},
{"app_conf_get_str", wrap_app_conf_get_str, METH_VARARGS, "app_conf_get_str"},
{"app_conf_remove", wrap_app_conf_remove, METH_VARARGS, "app_conf_remove"},
{"RET_OK", get_RET_OK, METH_VARARGS, "RET_OK"},
{"RET_OOM", get_RET_OOM, METH_VARARGS, "RET_OOM"},
{"RET_FAIL", get_RET_FAIL, METH_VARARGS, "RET_FAIL"},
{"RET_NOT_IMPL", get_RET_NOT_IMPL, METH_VARARGS, "RET_NOT_IMPL"},
{"RET_QUIT", get_RET_QUIT, METH_VARARGS, "RET_QUIT"},
{"RET_FOUND", get_RET_FOUND, METH_VARARGS, "RET_FOUND"},
{"RET_BUSY", get_RET_BUSY, METH_VARARGS, "RET_BUSY"},
{"RET_REMOVE", get_RET_REMOVE, METH_VARARGS, "RET_REMOVE"},
{"RET_REPEAT", get_RET_REPEAT, METH_VARARGS, "RET_REPEAT"},
{"RET_NOT_FOUND", get_RET_NOT_FOUND, METH_VARARGS, "RET_NOT_FOUND"},
{"RET_DONE", get_RET_DONE, METH_VARARGS, "RET_DONE"},
{"RET_STOP", get_RET_STOP, METH_VARARGS, "RET_STOP"},
{"RET_SKIP", get_RET_SKIP, METH_VARARGS, "RET_SKIP"},
{"RET_CONTINUE", get_RET_CONTINUE, METH_VARARGS, "RET_CONTINUE"},
{"RET_OBJECT_CHANGED", get_RET_OBJECT_CHANGED, METH_VARARGS, "RET_OBJECT_CHANGED"},
{"RET_ITEMS_CHANGED", get_RET_ITEMS_CHANGED, METH_VARARGS, "RET_ITEMS_CHANGED"},
{"RET_BAD_PARAMS", get_RET_BAD_PARAMS, METH_VARARGS, "RET_BAD_PARAMS"},
{"RET_TIMEOUT", get_RET_TIMEOUT, METH_VARARGS, "RET_TIMEOUT"},
{"RET_CRC", get_RET_CRC, METH_VARARGS, "RET_CRC"},
{"RET_IO", get_RET_IO, METH_VARARGS, "RET_IO"},
{"RET_EOS", get_RET_EOS, METH_VARARGS, "RET_EOS"},
{"RET_NOT_MODIFIED", get_RET_NOT_MODIFIED, METH_VARARGS, "RET_NOT_MODIFIED"},
{"time_now_s", wrap_time_now_s, METH_VARARGS, "time_now_s"},
{"time_now_ms", wrap_time_now_ms, METH_VARARGS, "time_now_ms"},
{"time_now_us", wrap_time_now_us, METH_VARARGS, "time_now_us"},
{"rlog_create", wrap_rlog_create, METH_VARARGS, "rlog_create"},
{"rlog_write", wrap_rlog_write, METH_VARARGS, "rlog_write"},
{"BIDI_TYPE_AUTO", get_BIDI_TYPE_AUTO, METH_VARARGS, "BIDI_TYPE_AUTO"},
{"BIDI_TYPE_LTR", get_BIDI_TYPE_LTR, METH_VARARGS, "BIDI_TYPE_LTR"},
{"BIDI_TYPE_RTL", get_BIDI_TYPE_RTL, METH_VARARGS, "BIDI_TYPE_RTL"},
{"BIDI_TYPE_LRO", get_BIDI_TYPE_LRO, METH_VARARGS, "BIDI_TYPE_LRO"},
{"BIDI_TYPE_RLO", get_BIDI_TYPE_RLO, METH_VARARGS, "BIDI_TYPE_RLO"},
{"BIDI_TYPE_WLTR", get_BIDI_TYPE_WLTR, METH_VARARGS, "BIDI_TYPE_WLTR"},
{"BIDI_TYPE_WRTL", get_BIDI_TYPE_WRTL, METH_VARARGS, "BIDI_TYPE_WRTL"},
{"OBJECT_PROP_SIZE", get_OBJECT_PROP_SIZE, METH_VARARGS, "OBJECT_PROP_SIZE"},
{"OBJECT_PROP_CHECKED", get_OBJECT_PROP_CHECKED, METH_VARARGS, "OBJECT_PROP_CHECKED"},
{"OBJECT_CMD_SAVE", get_OBJECT_CMD_SAVE, METH_VARARGS, "OBJECT_CMD_SAVE"},
{"OBJECT_CMD_RELOAD", get_OBJECT_CMD_RELOAD, METH_VARARGS, "OBJECT_CMD_RELOAD"},
{"OBJECT_CMD_MOVE_UP", get_OBJECT_CMD_MOVE_UP, METH_VARARGS, "OBJECT_CMD_MOVE_UP"},
{"OBJECT_CMD_MOVE_DOWN", get_OBJECT_CMD_MOVE_DOWN, METH_VARARGS, "OBJECT_CMD_MOVE_DOWN"},
{"OBJECT_CMD_REMOVE", get_OBJECT_CMD_REMOVE, METH_VARARGS, "OBJECT_CMD_REMOVE"},
{"OBJECT_CMD_REMOVE_CHECKED", get_OBJECT_CMD_REMOVE_CHECKED, METH_VARARGS, "OBJECT_CMD_REMOVE_CHECKED"},
{"OBJECT_CMD_CLEAR", get_OBJECT_CMD_CLEAR, METH_VARARGS, "OBJECT_CMD_CLEAR"},
{"OBJECT_CMD_ADD", get_OBJECT_CMD_ADD, METH_VARARGS, "OBJECT_CMD_ADD"},
{"OBJECT_CMD_DETAIL", get_OBJECT_CMD_DETAIL, METH_VARARGS, "OBJECT_CMD_DETAIL"},
{"OBJECT_CMD_EDIT", get_OBJECT_CMD_EDIT, METH_VARARGS, "OBJECT_CMD_EDIT"},
{"IMAGE_DRAW_DEFAULT", get_IMAGE_DRAW_DEFAULT, METH_VARARGS, "IMAGE_DRAW_DEFAULT"},
{"IMAGE_DRAW_CENTER", get_IMAGE_DRAW_CENTER, METH_VARARGS, "IMAGE_DRAW_CENTER"},
{"IMAGE_DRAW_ICON", get_IMAGE_DRAW_ICON, METH_VARARGS, "IMAGE_DRAW_ICON"},
{"IMAGE_DRAW_SCALE", get_IMAGE_DRAW_SCALE, METH_VARARGS, "IMAGE_DRAW_SCALE"},
{"IMAGE_DRAW_SCALE_AUTO", get_IMAGE_DRAW_SCALE_AUTO, METH_VARARGS, "IMAGE_DRAW_SCALE_AUTO"},
{"IMAGE_DRAW_SCALE_DOWN", get_IMAGE_DRAW_SCALE_DOWN, METH_VARARGS, "IMAGE_DRAW_SCALE_DOWN"},
{"IMAGE_DRAW_SCALE_W", get_IMAGE_DRAW_SCALE_W, METH_VARARGS, "IMAGE_DRAW_SCALE_W"},
{"IMAGE_DRAW_SCALE_H", get_IMAGE_DRAW_SCALE_H, METH_VARARGS, "IMAGE_DRAW_SCALE_H"},
{"IMAGE_DRAW_REPEAT", get_IMAGE_DRAW_REPEAT, METH_VARARGS, "IMAGE_DRAW_REPEAT"},
{"IMAGE_DRAW_REPEAT_X", get_IMAGE_DRAW_REPEAT_X, METH_VARARGS, "IMAGE_DRAW_REPEAT_X"},
{"IMAGE_DRAW_REPEAT_Y", get_IMAGE_DRAW_REPEAT_Y, METH_VARARGS, "IMAGE_DRAW_REPEAT_Y"},
{"IMAGE_DRAW_REPEAT_Y_INVERSE", get_IMAGE_DRAW_REPEAT_Y_INVERSE, METH_VARARGS, "IMAGE_DRAW_REPEAT_Y_INVERSE"},
{"IMAGE_DRAW_PATCH9", get_IMAGE_DRAW_PATCH9, METH_VARARGS, "IMAGE_DRAW_PATCH9"},
{"IMAGE_DRAW_PATCH3_X", get_IMAGE_DRAW_PATCH3_X, METH_VARARGS, "IMAGE_DRAW_PATCH3_X"},
{"IMAGE_DRAW_PATCH3_Y", get_IMAGE_DRAW_PATCH3_Y, METH_VARARGS, "IMAGE_DRAW_PATCH3_Y"},
{"IMAGE_DRAW_PATCH3_X_SCALE_Y", get_IMAGE_DRAW_PATCH3_X_SCALE_Y, METH_VARARGS, "IMAGE_DRAW_PATCH3_X_SCALE_Y"},
{"IMAGE_DRAW_PATCH3_Y_SCALE_X", get_IMAGE_DRAW_PATCH3_Y_SCALE_X, METH_VARARGS, "IMAGE_DRAW_PATCH3_Y_SCALE_X"},
{"IMAGE_DRAW_REPEAT9", get_IMAGE_DRAW_REPEAT9, METH_VARARGS, "IMAGE_DRAW_REPEAT9"},
{"IMAGE_DRAW_REPEAT3_X", get_IMAGE_DRAW_REPEAT3_X, METH_VARARGS, "IMAGE_DRAW_REPEAT3_X"},
{"IMAGE_DRAW_REPEAT3_Y", get_IMAGE_DRAW_REPEAT3_Y, METH_VARARGS, "IMAGE_DRAW_REPEAT3_Y"},
{"named_value_create", wrap_named_value_create, METH_VARARGS, "named_value_create"},
{"named_value_cast", wrap_named_value_cast, METH_VARARGS, "named_value_cast"},
{"named_value_set_name", wrap_named_value_set_name, METH_VARARGS, "named_value_set_name"},
{"named_value_set_value", wrap_named_value_set_value, METH_VARARGS, "named_value_set_value"},
{"named_value_get_value", wrap_named_value_get_value, METH_VARARGS, "named_value_get_value"},
{"named_value_t_get_prop_name", wrap_named_value_t_get_prop_name, METH_VARARGS, "named_value_t_get_prop_name"},
{"MIME_TYPE_APPLICATION_ENVOY", get_MIME_TYPE_APPLICATION_ENVOY, METH_VARARGS, "MIME_TYPE_APPLICATION_ENVOY"},
{"MIME_TYPE_APPLICATION_FRACTALS", get_MIME_TYPE_APPLICATION_FRACTALS, METH_VARARGS, "MIME_TYPE_APPLICATION_FRACTALS"},
{"MIME_TYPE_APPLICATION_FUTURESPLASH", get_MIME_TYPE_APPLICATION_FUTURESPLASH, METH_VARARGS, "MIME_TYPE_APPLICATION_FUTURESPLASH"},
{"MIME_TYPE_APPLICATION_HTA", get_MIME_TYPE_APPLICATION_HTA, METH_VARARGS, "MIME_TYPE_APPLICATION_HTA"},
{"MIME_TYPE_APPLICATION_JSON", get_MIME_TYPE_APPLICATION_JSON, METH_VARARGS, "MIME_TYPE_APPLICATION_JSON"},
{"MIME_TYPE_APPLICATION_UBJSON", get_MIME_TYPE_APPLICATION_UBJSON, METH_VARARGS, "MIME_TYPE_APPLICATION_UBJSON"},
{"MIME_TYPE_APPLICATION_MAC_BINHEX40", get_MIME_TYPE_APPLICATION_MAC_BINHEX40, METH_VARARGS, "MIME_TYPE_APPLICATION_MAC_BINHEX40"},
{"MIME_TYPE_APPLICATION_MSWORD", get_MIME_TYPE_APPLICATION_MSWORD, METH_VARARGS, "MIME_TYPE_APPLICATION_MSWORD"},
{"MIME_TYPE_APPLICATION_OCTET_STREAM", get_MIME_TYPE_APPLICATION_OCTET_STREAM, METH_VARARGS, "MIME_TYPE_APPLICATION_OCTET_STREAM"},
{"MIME_TYPE_APPLICATION_ODA", get_MIME_TYPE_APPLICATION_ODA, METH_VARARGS, "MIME_TYPE_APPLICATION_ODA"},
{"MIME_TYPE_APPLICATION_OLESCRIPT", get_MIME_TYPE_APPLICATION_OLESCRIPT, METH_VARARGS, "MIME_TYPE_APPLICATION_OLESCRIPT"},
{"MIME_TYPE_APPLICATION_PDF", get_MIME_TYPE_APPLICATION_PDF, METH_VARARGS, "MIME_TYPE_APPLICATION_PDF"},
{"MIME_TYPE_APPLICATION_PICS_RULES", get_MIME_TYPE_APPLICATION_PICS_RULES, METH_VARARGS, "MIME_TYPE_APPLICATION_PICS_RULES"},
{"MIME_TYPE_APPLICATION_PKCS10", get_MIME_TYPE_APPLICATION_PKCS10, METH_VARARGS, "MIME_TYPE_APPLICATION_PKCS10"},
{"MIME_TYPE_APPLICATION_PKIX_CRL", get_MIME_TYPE_APPLICATION_PKIX_CRL, METH_VARARGS, "MIME_TYPE_APPLICATION_PKIX_CRL"},
{"MIME_TYPE_APPLICATION_POSTSCRIPT", get_MIME_TYPE_APPLICATION_POSTSCRIPT, METH_VARARGS, "MIME_TYPE_APPLICATION_POSTSCRIPT"},
{"MIME_TYPE_APPLICATION_RTF", get_MIME_TYPE_APPLICATION_RTF, METH_VARARGS, "MIME_TYPE_APPLICATION_RTF"},
{"MIME_TYPE_APPLICATION_VND_MS_EXCEL", get_MIME_TYPE_APPLICATION_VND_MS_EXCEL, METH_VARARGS, "MIME_TYPE_APPLICATION_VND_MS_EXCEL"},
{"MIME_TYPE_APPLICATION_VND_MS_OUTLOOK", get_MIME_TYPE_APPLICATION_VND_MS_OUTLOOK, METH_VARARGS, "MIME_TYPE_APPLICATION_VND_MS_OUTLOOK"},
{"MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE", get_MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE, METH_VARARGS, "MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE"},
{"MIME_TYPE_APPLICATION_VND_MS_PKISECCAT", get_MIME_TYPE_APPLICATION_VND_MS_PKISECCAT, METH_VARARGS, "MIME_TYPE_APPLICATION_VND_MS_PKISECCAT"},
{"MIME_TYPE_APPLICATION_VND_MS_PKISTL", get_MIME_TYPE_APPLICATION_VND_MS_PKISTL, METH_VARARGS, "MIME_TYPE_APPLICATION_VND_MS_PKISTL"},
{"MIME_TYPE_APPLICATION_VND_MS_POWERPOINT", get_MIME_TYPE_APPLICATION_VND_MS_POWERPOINT, METH_VARARGS, "MIME_TYPE_APPLICATION_VND_MS_POWERPOINT"},
{"MIME_TYPE_APPLICATION_VND_MS_PROJECT", get_MIME_TYPE_APPLICATION_VND_MS_PROJECT, METH_VARARGS, "MIME_TYPE_APPLICATION_VND_MS_PROJECT"},
{"MIME_TYPE_APPLICATION_VND_MS_WORKS", get_MIME_TYPE_APPLICATION_VND_MS_WORKS, METH_VARARGS, "MIME_TYPE_APPLICATION_VND_MS_WORKS"},
{"MIME_TYPE_APPLICATION_WINHLP", get_MIME_TYPE_APPLICATION_WINHLP, METH_VARARGS, "MIME_TYPE_APPLICATION_WINHLP"},
{"MIME_TYPE_APPLICATION_X_BCPIO", get_MIME_TYPE_APPLICATION_X_BCPIO, METH_VARARGS, "MIME_TYPE_APPLICATION_X_BCPIO"},
{"MIME_TYPE_APPLICATION_X_CDF", get_MIME_TYPE_APPLICATION_X_CDF, METH_VARARGS, "MIME_TYPE_APPLICATION_X_CDF"},
{"MIME_TYPE_APPLICATION_X_COMPRESS", get_MIME_TYPE_APPLICATION_X_COMPRESS, METH_VARARGS, "MIME_TYPE_APPLICATION_X_COMPRESS"},
{"MIME_TYPE_APPLICATION_X_COMPRESSED", get_MIME_TYPE_APPLICATION_X_COMPRESSED, METH_VARARGS, "MIME_TYPE_APPLICATION_X_COMPRESSED"},
{"MIME_TYPE_APPLICATION_X_CPIO", get_MIME_TYPE_APPLICATION_X_CPIO, METH_VARARGS, "MIME_TYPE_APPLICATION_X_CPIO"},
{"MIME_TYPE_APPLICATION_X_CSH", get_MIME_TYPE_APPLICATION_X_CSH, METH_VARARGS, "MIME_TYPE_APPLICATION_X_CSH"},
{"MIME_TYPE_APPLICATION_X_DIRECTOR", get_MIME_TYPE_APPLICATION_X_DIRECTOR, METH_VARARGS, "MIME_TYPE_APPLICATION_X_DIRECTOR"},
{"MIME_TYPE_APPLICATION_X_DVI", get_MIME_TYPE_APPLICATION_X_DVI, METH_VARARGS, "MIME_TYPE_APPLICATION_X_DVI"},
{"MIME_TYPE_APPLICATION_X_GTAR", get_MIME_TYPE_APPLICATION_X_GTAR, METH_VARARGS, "MIME_TYPE_APPLICATION_X_GTAR"},
{"MIME_TYPE_APPLICATION_X_GZIP", get_MIME_TYPE_APPLICATION_X_GZIP, METH_VARARGS, "MIME_TYPE_APPLICATION_X_GZIP"},
{"MIME_TYPE_APPLICATION_X_HDF", get_MIME_TYPE_APPLICATION_X_HDF, METH_VARARGS, "MIME_TYPE_APPLICATION_X_HDF"},
{"MIME_TYPE_APPLICATION_X_IPHONE", get_MIME_TYPE_APPLICATION_X_IPHONE, METH_VARARGS, "MIME_TYPE_APPLICATION_X_IPHONE"},
{"MIME_TYPE_APPLICATION_X_JAVASCRIPT", get_MIME_TYPE_APPLICATION_X_JAVASCRIPT, METH_VARARGS, "MIME_TYPE_APPLICATION_X_JAVASCRIPT"},
{"MIME_TYPE_APPLICATION_X_LATEX", get_MIME_TYPE_APPLICATION_X_LATEX, METH_VARARGS, "MIME_TYPE_APPLICATION_X_LATEX"},
{"MIME_TYPE_APPLICATION_X_MSACCESS", get_MIME_TYPE_APPLICATION_X_MSACCESS, METH_VARARGS, "MIME_TYPE_APPLICATION_X_MSACCESS"},
{"MIME_TYPE_APPLICATION_X_MSCARDFILE", get_MIME_TYPE_APPLICATION_X_MSCARDFILE, METH_VARARGS, "MIME_TYPE_APPLICATION_X_MSCARDFILE"},
{"MIME_TYPE_APPLICATION_X_MSCLIP", get_MIME_TYPE_APPLICATION_X_MSCLIP, METH_VARARGS, "MIME_TYPE_APPLICATION_X_MSCLIP"},
{"MIME_TYPE_APPLICATION_X_MSDOWNLOAD", get_MIME_TYPE_APPLICATION_X_MSDOWNLOAD, METH_VARARGS, "MIME_TYPE_APPLICATION_X_MSDOWNLOAD"},
{"MIME_TYPE_APPLICATION_X_MSMEDIAVIEW", get_MIME_TYPE_APPLICATION_X_MSMEDIAVIEW, METH_VARARGS, "MIME_TYPE_APPLICATION_X_MSMEDIAVIEW"},
{"MIME_TYPE_APPLICATION_X_MSMETAFILE", get_MIME_TYPE_APPLICATION_X_MSMETAFILE, METH_VARARGS, "MIME_TYPE_APPLICATION_X_MSMETAFILE"},
{"MIME_TYPE_APPLICATION_X_MSMONEY", get_MIME_TYPE_APPLICATION_X_MSMONEY, METH_VARARGS, "MIME_TYPE_APPLICATION_X_MSMONEY"},
{"MIME_TYPE_APPLICATION_X_MSPUBLISHER", get_MIME_TYPE_APPLICATION_X_MSPUBLISHER, METH_VARARGS, "MIME_TYPE_APPLICATION_X_MSPUBLISHER"},
{"MIME_TYPE_APPLICATION_X_MSSCHEDULE", get_MIME_TYPE_APPLICATION_X_MSSCHEDULE, METH_VARARGS, "MIME_TYPE_APPLICATION_X_MSSCHEDULE"},
{"MIME_TYPE_APPLICATION_X_MSTERMINAL", get_MIME_TYPE_APPLICATION_X_MSTERMINAL, METH_VARARGS, "MIME_TYPE_APPLICATION_X_MSTERMINAL"},
{"MIME_TYPE_APPLICATION_X_MSWRITE", get_MIME_TYPE_APPLICATION_X_MSWRITE, METH_VARARGS, "MIME_TYPE_APPLICATION_X_MSWRITE"},
{"MIME_TYPE_APPLICATION_X_NETCDF", get_MIME_TYPE_APPLICATION_X_NETCDF, METH_VARARGS, "MIME_TYPE_APPLICATION_X_NETCDF"},
{"MIME_TYPE_APPLICATION_X_PERFMON", get_MIME_TYPE_APPLICATION_X_PERFMON, METH_VARARGS, "MIME_TYPE_APPLICATION_X_PERFMON"},
{"MIME_TYPE_APPLICATION_X_PKCS12", get_MIME_TYPE_APPLICATION_X_PKCS12, METH_VARARGS, "MIME_TYPE_APPLICATION_X_PKCS12"},
{"MIME_TYPE_APPLICATION_X_SH", get_MIME_TYPE_APPLICATION_X_SH, METH_VARARGS, "MIME_TYPE_APPLICATION_X_SH"},
{"MIME_TYPE_APPLICATION_X_SHAR", get_MIME_TYPE_APPLICATION_X_SHAR, METH_VARARGS, "MIME_TYPE_APPLICATION_X_SHAR"},
{"MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH", get_MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH, METH_VARARGS, "MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH"},
{"MIME_TYPE_APPLICATION_X_STUFFIT", get_MIME_TYPE_APPLICATION_X_STUFFIT, METH_VARARGS, "MIME_TYPE_APPLICATION_X_STUFFIT"},
{"MIME_TYPE_APPLICATION_X_SV4CPIO", get_MIME_TYPE_APPLICATION_X_SV4CPIO, METH_VARARGS, "MIME_TYPE_APPLICATION_X_SV4CPIO"},
{"MIME_TYPE_APPLICATION_X_SV4CRC", get_MIME_TYPE_APPLICATION_X_SV4CRC, METH_VARARGS, "MIME_TYPE_APPLICATION_X_SV4CRC"},
{"MIME_TYPE_APPLICATION_X_TAR", get_MIME_TYPE_APPLICATION_X_TAR, METH_VARARGS, "MIME_TYPE_APPLICATION_X_TAR"},
{"MIME_TYPE_APPLICATION_X_TCL", get_MIME_TYPE_APPLICATION_X_TCL, METH_VARARGS, "MIME_TYPE_APPLICATION_X_TCL"},
{"MIME_TYPE_APPLICATION_X_TEX", get_MIME_TYPE_APPLICATION_X_TEX, METH_VARARGS, "MIME_TYPE_APPLICATION_X_TEX"},
{"MIME_TYPE_APPLICATION_X_TEXINFO", get_MIME_TYPE_APPLICATION_X_TEXINFO, METH_VARARGS, "MIME_TYPE_APPLICATION_X_TEXINFO"},
{"MIME_TYPE_APPLICATION_X_TROFF", get_MIME_TYPE_APPLICATION_X_TROFF, METH_VARARGS, "MIME_TYPE_APPLICATION_X_TROFF"},
{"MIME_TYPE_APPLICATION_X_USTAR", get_MIME_TYPE_APPLICATION_X_USTAR, METH_VARARGS, "MIME_TYPE_APPLICATION_X_USTAR"},
{"MIME_TYPE_APPLICATION_ZIP", get_MIME_TYPE_APPLICATION_ZIP, METH_VARARGS, "MIME_TYPE_APPLICATION_ZIP"},
{"MIME_TYPE_AUDIO_BASIC", get_MIME_TYPE_AUDIO_BASIC, METH_VARARGS, "MIME_TYPE_AUDIO_BASIC"},
{"MIME_TYPE_AUDIO_MID", get_MIME_TYPE_AUDIO_MID, METH_VARARGS, "MIME_TYPE_AUDIO_MID"},
{"MIME_TYPE_AUDIO_MPEG", get_MIME_TYPE_AUDIO_MPEG, METH_VARARGS, "MIME_TYPE_AUDIO_MPEG"},
{"MIME_TYPE_AUDIO_X_AIFF", get_MIME_TYPE_AUDIO_X_AIFF, METH_VARARGS, "MIME_TYPE_AUDIO_X_AIFF"},
{"MIME_TYPE_AUDIO_X_MPEGURL", get_MIME_TYPE_AUDIO_X_MPEGURL, METH_VARARGS, "MIME_TYPE_AUDIO_X_MPEGURL"},
{"MIME_TYPE_AUDIO_X_WAV", get_MIME_TYPE_AUDIO_X_WAV, METH_VARARGS, "MIME_TYPE_AUDIO_X_WAV"},
{"MIME_TYPE_IMAGE_BMP", get_MIME_TYPE_IMAGE_BMP, METH_VARARGS, "MIME_TYPE_IMAGE_BMP"},
{"MIME_TYPE_IMAGE_CIS_COD", get_MIME_TYPE_IMAGE_CIS_COD, METH_VARARGS, "MIME_TYPE_IMAGE_CIS_COD"},
{"MIME_TYPE_IMAGE_GIF", get_MIME_TYPE_IMAGE_GIF, METH_VARARGS, "MIME_TYPE_IMAGE_GIF"},
{"MIME_TYPE_IMAGE_IEF", get_MIME_TYPE_IMAGE_IEF, METH_VARARGS, "MIME_TYPE_IMAGE_IEF"},
{"MIME_TYPE_IMAGE_JPEG", get_MIME_TYPE_IMAGE_JPEG, METH_VARARGS, "MIME_TYPE_IMAGE_JPEG"},
{"MIME_TYPE_IMAGE_PIPEG", get_MIME_TYPE_IMAGE_PIPEG, METH_VARARGS, "MIME_TYPE_IMAGE_PIPEG"},
{"MIME_TYPE_IMAGE_SVG_XML", get_MIME_TYPE_IMAGE_SVG_XML, METH_VARARGS, "MIME_TYPE_IMAGE_SVG_XML"},
{"MIME_TYPE_IMAGE_TIFF", get_MIME_TYPE_IMAGE_TIFF, METH_VARARGS, "MIME_TYPE_IMAGE_TIFF"},
{"MIME_TYPE_IMAGE_X_CMX", get_MIME_TYPE_IMAGE_X_CMX, METH_VARARGS, "MIME_TYPE_IMAGE_X_CMX"},
{"MIME_TYPE_IMAGE_X_ICON", get_MIME_TYPE_IMAGE_X_ICON, METH_VARARGS, "MIME_TYPE_IMAGE_X_ICON"},
{"MIME_TYPE_IMAGE_X_RGB", get_MIME_TYPE_IMAGE_X_RGB, METH_VARARGS, "MIME_TYPE_IMAGE_X_RGB"},
{"MIME_TYPE_IMAGE_X_XBITMAP", get_MIME_TYPE_IMAGE_X_XBITMAP, METH_VARARGS, "MIME_TYPE_IMAGE_X_XBITMAP"},
{"MIME_TYPE_IMAGE_X_XPIXMAP", get_MIME_TYPE_IMAGE_X_XPIXMAP, METH_VARARGS, "MIME_TYPE_IMAGE_X_XPIXMAP"},
{"MIME_TYPE_IMAGE_X_XWINDOWDUMP", get_MIME_TYPE_IMAGE_X_XWINDOWDUMP, METH_VARARGS, "MIME_TYPE_IMAGE_X_XWINDOWDUMP"},
{"MIME_TYPE_MESSAGE_RFC822", get_MIME_TYPE_MESSAGE_RFC822, METH_VARARGS, "MIME_TYPE_MESSAGE_RFC822"},
{"MIME_TYPE_TEXT_CSS", get_MIME_TYPE_TEXT_CSS, METH_VARARGS, "MIME_TYPE_TEXT_CSS"},
{"MIME_TYPE_TEXT_H323", get_MIME_TYPE_TEXT_H323, METH_VARARGS, "MIME_TYPE_TEXT_H323"},
{"MIME_TYPE_TEXT_HTML", get_MIME_TYPE_TEXT_HTML, METH_VARARGS, "MIME_TYPE_TEXT_HTML"},
{"MIME_TYPE_TEXT_IULS", get_MIME_TYPE_TEXT_IULS, METH_VARARGS, "MIME_TYPE_TEXT_IULS"},
{"MIME_TYPE_TEXT_PLAIN", get_MIME_TYPE_TEXT_PLAIN, METH_VARARGS, "MIME_TYPE_TEXT_PLAIN"},
{"MIME_TYPE_TEXT_RICHTEXT", get_MIME_TYPE_TEXT_RICHTEXT, METH_VARARGS, "MIME_TYPE_TEXT_RICHTEXT"},
{"MIME_TYPE_TEXT_SCRIPTLET", get_MIME_TYPE_TEXT_SCRIPTLET, METH_VARARGS, "MIME_TYPE_TEXT_SCRIPTLET"},
{"MIME_TYPE_TEXT_WEBVIEWHTML", get_MIME_TYPE_TEXT_WEBVIEWHTML, METH_VARARGS, "MIME_TYPE_TEXT_WEBVIEWHTML"},
{"MIME_TYPE_TEXT_X_COMPONENT", get_MIME_TYPE_TEXT_X_COMPONENT, METH_VARARGS, "MIME_TYPE_TEXT_X_COMPONENT"},
{"MIME_TYPE_TEXT_X_SETEXT", get_MIME_TYPE_TEXT_X_SETEXT, METH_VARARGS, "MIME_TYPE_TEXT_X_SETEXT"},
{"MIME_TYPE_TEXT_X_VCARD", get_MIME_TYPE_TEXT_X_VCARD, METH_VARARGS, "MIME_TYPE_TEXT_X_VCARD"},
{"MIME_TYPE_VIDEO_MPEG", get_MIME_TYPE_VIDEO_MPEG, METH_VARARGS, "MIME_TYPE_VIDEO_MPEG"},
{"MIME_TYPE_VIDEO_QUICKTIME", get_MIME_TYPE_VIDEO_QUICKTIME, METH_VARARGS, "MIME_TYPE_VIDEO_QUICKTIME"},
{"MIME_TYPE_VIDEO_X_MSVIDEO", get_MIME_TYPE_VIDEO_X_MSVIDEO, METH_VARARGS, "MIME_TYPE_VIDEO_X_MSVIDEO"},
{"INDICATOR_DEFAULT_PAINT_AUTO", get_INDICATOR_DEFAULT_PAINT_AUTO, METH_VARARGS, "INDICATOR_DEFAULT_PAINT_AUTO"},
{"INDICATOR_DEFAULT_PAINT_FILL_DOT", get_INDICATOR_DEFAULT_PAINT_FILL_DOT, METH_VARARGS, "INDICATOR_DEFAULT_PAINT_FILL_DOT"},
{"INDICATOR_DEFAULT_PAINT_STROKE_DOT", get_INDICATOR_DEFAULT_PAINT_STROKE_DOT, METH_VARARGS, "INDICATOR_DEFAULT_PAINT_STROKE_DOT"},
{"INDICATOR_DEFAULT_PAINT_FILL_RECT", get_INDICATOR_DEFAULT_PAINT_FILL_RECT, METH_VARARGS, "INDICATOR_DEFAULT_PAINT_FILL_RECT"},
{"INDICATOR_DEFAULT_PAINT_STROKE_RECT", get_INDICATOR_DEFAULT_PAINT_STROKE_RECT, METH_VARARGS, "INDICATOR_DEFAULT_PAINT_STROKE_RECT"},
{"canvas_get_width", wrap_canvas_get_width, METH_VARARGS, "canvas_get_width"},
{"canvas_get_height", wrap_canvas_get_height, METH_VARARGS, "canvas_get_height"},
{"canvas_get_clip_rect", wrap_canvas_get_clip_rect, METH_VARARGS, "canvas_get_clip_rect"},
{"canvas_set_clip_rect", wrap_canvas_set_clip_rect, METH_VARARGS, "canvas_set_clip_rect"},
{"canvas_set_clip_rect_ex", wrap_canvas_set_clip_rect_ex, METH_VARARGS, "canvas_set_clip_rect_ex"},
{"canvas_set_fill_color_str", wrap_canvas_set_fill_color_str, METH_VARARGS, "canvas_set_fill_color_str"},
{"canvas_set_text_color_str", wrap_canvas_set_text_color_str, METH_VARARGS, "canvas_set_text_color_str"},
{"canvas_set_stroke_color_str", wrap_canvas_set_stroke_color_str, METH_VARARGS, "canvas_set_stroke_color_str"},
{"canvas_set_global_alpha", wrap_canvas_set_global_alpha, METH_VARARGS, "canvas_set_global_alpha"},
{"canvas_translate", wrap_canvas_translate, METH_VARARGS, "canvas_translate"},
{"canvas_untranslate", wrap_canvas_untranslate, METH_VARARGS, "canvas_untranslate"},
{"canvas_draw_vline", wrap_canvas_draw_vline, METH_VARARGS, "canvas_draw_vline"},
{"canvas_draw_hline", wrap_canvas_draw_hline, METH_VARARGS, "canvas_draw_hline"},
{"canvas_fill_rect", wrap_canvas_fill_rect, METH_VARARGS, "canvas_fill_rect"},
{"canvas_clear_rect", wrap_canvas_clear_rect, METH_VARARGS, "canvas_clear_rect"},
{"canvas_stroke_rect", wrap_canvas_stroke_rect, METH_VARARGS, "canvas_stroke_rect"},
{"canvas_set_font", wrap_canvas_set_font, METH_VARARGS, "canvas_set_font"},
{"canvas_measure_utf8", wrap_canvas_measure_utf8, METH_VARARGS, "canvas_measure_utf8"},
{"canvas_draw_utf8", wrap_canvas_draw_utf8, METH_VARARGS, "canvas_draw_utf8"},
{"canvas_draw_utf8_in_rect", wrap_canvas_draw_utf8_in_rect, METH_VARARGS, "canvas_draw_utf8_in_rect"},
{"canvas_draw_icon", wrap_canvas_draw_icon, METH_VARARGS, "canvas_draw_icon"},
{"canvas_draw_image", wrap_canvas_draw_image, METH_VARARGS, "canvas_draw_image"},
{"canvas_draw_image_ex", wrap_canvas_draw_image_ex, METH_VARARGS, "canvas_draw_image_ex"},
{"canvas_draw_image_ex2", wrap_canvas_draw_image_ex2, METH_VARARGS, "canvas_draw_image_ex2"},
{"canvas_get_vgcanvas", wrap_canvas_get_vgcanvas, METH_VARARGS, "canvas_get_vgcanvas"},
{"canvas_cast", wrap_canvas_cast, METH_VARARGS, "canvas_cast"},
{"canvas_reset", wrap_canvas_reset, METH_VARARGS, "canvas_reset"},
{"canvas_t_get_prop_ox", wrap_canvas_t_get_prop_ox, METH_VARARGS, "canvas_t_get_prop_ox"},
{"canvas_t_get_prop_oy", wrap_canvas_t_get_prop_oy, METH_VARARGS, "canvas_t_get_prop_oy"},
{"canvas_t_get_prop_font_name", wrap_canvas_t_get_prop_font_name, METH_VARARGS, "canvas_t_get_prop_font_name"},
{"canvas_t_get_prop_font_size", wrap_canvas_t_get_prop_font_size, METH_VARARGS, "canvas_t_get_prop_font_size"},
{"canvas_t_get_prop_global_alpha", wrap_canvas_t_get_prop_global_alpha, METH_VARARGS, "canvas_t_get_prop_global_alpha"},
{"EASING_LINEAR", get_EASING_LINEAR, METH_VARARGS, "EASING_LINEAR"},
{"EASING_QUADRATIC_IN", get_EASING_QUADRATIC_IN, METH_VARARGS, "EASING_QUADRATIC_IN"},
{"EASING_QUADRATIC_OUT", get_EASING_QUADRATIC_OUT, METH_VARARGS, "EASING_QUADRATIC_OUT"},
{"EASING_QUADRATIC_INOUT", get_EASING_QUADRATIC_INOUT, METH_VARARGS, "EASING_QUADRATIC_INOUT"},
{"EASING_CUBIC_IN", get_EASING_CUBIC_IN, METH_VARARGS, "EASING_CUBIC_IN"},
{"EASING_CUBIC_OUT", get_EASING_CUBIC_OUT, METH_VARARGS, "EASING_CUBIC_OUT"},
{"EASING_SIN_IN", get_EASING_SIN_IN, METH_VARARGS, "EASING_SIN_IN"},
{"EASING_SIN_OUT", get_EASING_SIN_OUT, METH_VARARGS, "EASING_SIN_OUT"},
{"EASING_SIN_INOUT", get_EASING_SIN_INOUT, METH_VARARGS, "EASING_SIN_INOUT"},
{"EASING_POW_IN", get_EASING_POW_IN, METH_VARARGS, "EASING_POW_IN"},
{"EASING_POW_OUT", get_EASING_POW_OUT, METH_VARARGS, "EASING_POW_OUT"},
{"EASING_POW_INOUT", get_EASING_POW_INOUT, METH_VARARGS, "EASING_POW_INOUT"},
{"EASING_CIRCULAR_IN", get_EASING_CIRCULAR_IN, METH_VARARGS, "EASING_CIRCULAR_IN"},
{"EASING_CIRCULAR_OUT", get_EASING_CIRCULAR_OUT, METH_VARARGS, "EASING_CIRCULAR_OUT"},
{"EASING_CIRCULAR_INOUT", get_EASING_CIRCULAR_INOUT, METH_VARARGS, "EASING_CIRCULAR_INOUT"},
{"EASING_ELASTIC_IN", get_EASING_ELASTIC_IN, METH_VARARGS, "EASING_ELASTIC_IN"},
{"EASING_ELASTIC_OUT", get_EASING_ELASTIC_OUT, METH_VARARGS, "EASING_ELASTIC_OUT"},
{"EASING_ELASTIC_INOUT", get_EASING_ELASTIC_INOUT, METH_VARARGS, "EASING_ELASTIC_INOUT"},
{"EASING_BACK_IN", get_EASING_BACK_IN, METH_VARARGS, "EASING_BACK_IN"},
{"EASING_BACK_OUT", get_EASING_BACK_OUT, METH_VARARGS, "EASING_BACK_OUT"},
{"EASING_BACK_INOUT", get_EASING_BACK_INOUT, METH_VARARGS, "EASING_BACK_INOUT"},
{"EASING_BOUNCE_IN", get_EASING_BOUNCE_IN, METH_VARARGS, "EASING_BOUNCE_IN"},
{"EASING_BOUNCE_OUT", get_EASING_BOUNCE_OUT, METH_VARARGS, "EASING_BOUNCE_OUT"},
{"EASING_BOUNCE_INOUT", get_EASING_BOUNCE_INOUT, METH_VARARGS, "EASING_BOUNCE_INOUT"},
{"date_time_create", wrap_date_time_create, METH_VARARGS, "date_time_create"},
{"date_time_set_year", wrap_date_time_set_year, METH_VARARGS, "date_time_set_year"},
{"date_time_set_month", wrap_date_time_set_month, METH_VARARGS, "date_time_set_month"},
{"date_time_set_day", wrap_date_time_set_day, METH_VARARGS, "date_time_set_day"},
{"date_time_set_hour", wrap_date_time_set_hour, METH_VARARGS, "date_time_set_hour"},
{"date_time_set_minute", wrap_date_time_set_minute, METH_VARARGS, "date_time_set_minute"},
{"date_time_set_second", wrap_date_time_set_second, METH_VARARGS, "date_time_set_second"},
{"date_time_set", wrap_date_time_set, METH_VARARGS, "date_time_set"},
{"date_time_from_time", wrap_date_time_from_time, METH_VARARGS, "date_time_from_time"},
{"date_time_to_time", wrap_date_time_to_time, METH_VARARGS, "date_time_to_time"},
{"date_time_add_delta", wrap_date_time_add_delta, METH_VARARGS, "date_time_add_delta"},
{"date_time_is_leap", wrap_date_time_is_leap, METH_VARARGS, "date_time_is_leap"},
{"date_time_get_days", wrap_date_time_get_days, METH_VARARGS, "date_time_get_days"},
{"date_time_get_wday", wrap_date_time_get_wday, METH_VARARGS, "date_time_get_wday"},
{"date_time_get_month_name", wrap_date_time_get_month_name, METH_VARARGS, "date_time_get_month_name"},
{"date_time_get_wday_name", wrap_date_time_get_wday_name, METH_VARARGS, "date_time_get_wday_name"},
{"date_time_t_get_prop_second", wrap_date_time_t_get_prop_second, METH_VARARGS, "date_time_t_get_prop_second"},
{"date_time_t_get_prop_minute", wrap_date_time_t_get_prop_minute, METH_VARARGS, "date_time_t_get_prop_minute"},
{"date_time_t_get_prop_hour", wrap_date_time_t_get_prop_hour, METH_VARARGS, "date_time_t_get_prop_hour"},
{"date_time_t_get_prop_day", wrap_date_time_t_get_prop_day, METH_VARARGS, "date_time_t_get_prop_day"},
{"date_time_t_get_prop_wday", wrap_date_time_t_get_prop_wday, METH_VARARGS, "date_time_t_get_prop_wday"},
{"date_time_t_get_prop_month", wrap_date_time_t_get_prop_month, METH_VARARGS, "date_time_t_get_prop_month"},
{"date_time_t_get_prop_year", wrap_date_time_t_get_prop_year, METH_VARARGS, "date_time_t_get_prop_year"},
{"color_create", wrap_color_create, METH_VARARGS, "color_create"},
{"color_from_str", wrap_color_from_str, METH_VARARGS, "color_from_str"},
{"color_r", wrap_color_r, METH_VARARGS, "color_r"},
{"color_g", wrap_color_g, METH_VARARGS, "color_g"},
{"color_b", wrap_color_b, METH_VARARGS, "color_b"},
{"color_a", wrap_color_a, METH_VARARGS, "color_a"},
{"color_cast", wrap_color_cast, METH_VARARGS, "color_cast"},
{"color_t_set_prop_color", wrap_color_t_set_prop_color, METH_VARARGS, "color_t_set_prop_color"},
{"color_t_get_prop_color", wrap_color_t_get_prop_color, METH_VARARGS, "color_t_get_prop_color"},
{"asset_info_t_get_prop_type", wrap_asset_info_t_get_prop_type, METH_VARARGS, "asset_info_t_get_prop_type"},
{"asset_info_t_get_prop_subtype", wrap_asset_info_t_get_prop_subtype, METH_VARARGS, "asset_info_t_get_prop_subtype"},
{"asset_info_t_get_prop_is_in_rom", wrap_asset_info_t_get_prop_is_in_rom, METH_VARARGS, "asset_info_t_get_prop_is_in_rom"},
{"asset_info_t_get_prop_size", wrap_asset_info_t_get_prop_size, METH_VARARGS, "asset_info_t_get_prop_size"},
{"asset_info_t_get_prop_refcount", wrap_asset_info_t_get_prop_refcount, METH_VARARGS, "asset_info_t_get_prop_refcount"},
{"asset_info_t_get_prop_name", wrap_asset_info_t_get_prop_name, METH_VARARGS, "asset_info_t_get_prop_name"},
{"ASSET_TYPE_NONE", get_ASSET_TYPE_NONE, METH_VARARGS, "ASSET_TYPE_NONE"},
{"ASSET_TYPE_FONT", get_ASSET_TYPE_FONT, METH_VARARGS, "ASSET_TYPE_FONT"},
{"ASSET_TYPE_IMAGE", get_ASSET_TYPE_IMAGE, METH_VARARGS, "ASSET_TYPE_IMAGE"},
{"ASSET_TYPE_STYLE", get_ASSET_TYPE_STYLE, METH_VARARGS, "ASSET_TYPE_STYLE"},
{"ASSET_TYPE_UI", get_ASSET_TYPE_UI, METH_VARARGS, "ASSET_TYPE_UI"},
{"ASSET_TYPE_XML", get_ASSET_TYPE_XML, METH_VARARGS, "ASSET_TYPE_XML"},
{"ASSET_TYPE_STRINGS", get_ASSET_TYPE_STRINGS, METH_VARARGS, "ASSET_TYPE_STRINGS"},
{"ASSET_TYPE_SCRIPT", get_ASSET_TYPE_SCRIPT, METH_VARARGS, "ASSET_TYPE_SCRIPT"},
{"ASSET_TYPE_FLOW", get_ASSET_TYPE_FLOW, METH_VARARGS, "ASSET_TYPE_FLOW"},
{"ASSET_TYPE_DATA", get_ASSET_TYPE_DATA, METH_VARARGS, "ASSET_TYPE_DATA"},
{"image_animation_create", wrap_image_animation_create, METH_VARARGS, "image_animation_create"},
{"image_animation_set_loop", wrap_image_animation_set_loop, METH_VARARGS, "image_animation_set_loop"},
{"image_animation_set_image", wrap_image_animation_set_image, METH_VARARGS, "image_animation_set_image"},
{"image_animation_set_interval", wrap_image_animation_set_interval, METH_VARARGS, "image_animation_set_interval"},
{"image_animation_set_delay", wrap_image_animation_set_delay, METH_VARARGS, "image_animation_set_delay"},
{"image_animation_set_auto_play", wrap_image_animation_set_auto_play, METH_VARARGS, "image_animation_set_auto_play"},
{"image_animation_set_sequence", wrap_image_animation_set_sequence, METH_VARARGS, "image_animation_set_sequence"},
{"image_animation_set_range_sequence", wrap_image_animation_set_range_sequence, METH_VARARGS, "image_animation_set_range_sequence"},
{"image_animation_play", wrap_image_animation_play, METH_VARARGS, "image_animation_play"},
{"image_animation_stop", wrap_image_animation_stop, METH_VARARGS, "image_animation_stop"},
{"image_animation_pause", wrap_image_animation_pause, METH_VARARGS, "image_animation_pause"},
{"image_animation_next", wrap_image_animation_next, METH_VARARGS, "image_animation_next"},
{"image_animation_set_format", wrap_image_animation_set_format, METH_VARARGS, "image_animation_set_format"},
{"image_animation_set_unload_after_paint", wrap_image_animation_set_unload_after_paint, METH_VARARGS, "image_animation_set_unload_after_paint"},
{"image_animation_cast", wrap_image_animation_cast, METH_VARARGS, "image_animation_cast"},
{"image_animation_is_playing", wrap_image_animation_is_playing, METH_VARARGS, "image_animation_is_playing"},
{"image_animation_t_get_prop_image", wrap_image_animation_t_get_prop_image, METH_VARARGS, "image_animation_t_get_prop_image"},
{"image_animation_t_get_prop_sequence", wrap_image_animation_t_get_prop_sequence, METH_VARARGS, "image_animation_t_get_prop_sequence"},
{"image_animation_t_get_prop_start_index", wrap_image_animation_t_get_prop_start_index, METH_VARARGS, "image_animation_t_get_prop_start_index"},
{"image_animation_t_get_prop_end_index", wrap_image_animation_t_get_prop_end_index, METH_VARARGS, "image_animation_t_get_prop_end_index"},
{"image_animation_t_get_prop_loop", wrap_image_animation_t_get_prop_loop, METH_VARARGS, "image_animation_t_get_prop_loop"},
{"image_animation_t_get_prop_auto_play", wrap_image_animation_t_get_prop_auto_play, METH_VARARGS, "image_animation_t_get_prop_auto_play"},
{"image_animation_t_get_prop_unload_after_paint", wrap_image_animation_t_get_prop_unload_after_paint, METH_VARARGS, "image_animation_t_get_prop_unload_after_paint"},
{"image_animation_t_get_prop_format", wrap_image_animation_t_get_prop_format, METH_VARARGS, "image_animation_t_get_prop_format"},
{"image_animation_t_get_prop_interval", wrap_image_animation_t_get_prop_interval, METH_VARARGS, "image_animation_t_get_prop_interval"},
{"image_animation_t_get_prop_delay", wrap_image_animation_t_get_prop_delay, METH_VARARGS, "image_animation_t_get_prop_delay"},
{"assets_manager", wrap_assets_manager, METH_VARARGS, "assets_manager"},
{"assets_manager_set_theme", wrap_assets_manager_set_theme, METH_VARARGS, "assets_manager_set_theme"},
{"assets_manager_ref", wrap_assets_manager_ref, METH_VARARGS, "assets_manager_ref"},
{"assets_manager_ref_ex", wrap_assets_manager_ref_ex, METH_VARARGS, "assets_manager_ref_ex"},
{"assets_manager_unref", wrap_assets_manager_unref, METH_VARARGS, "assets_manager_unref"},
{"view_create", wrap_view_create, METH_VARARGS, "view_create"},
{"view_set_default_focused_child", wrap_view_set_default_focused_child, METH_VARARGS, "view_set_default_focused_child"},
{"view_cast", wrap_view_cast, METH_VARARGS, "view_cast"},
{"view_t_get_prop_default_focused_child", wrap_view_t_get_prop_default_focused_child, METH_VARARGS, "view_t_get_prop_default_focused_child"},
{"tab_control_create", wrap_tab_control_create, METH_VARARGS, "tab_control_create"},
{"tab_control_cast", wrap_tab_control_cast, METH_VARARGS, "tab_control_cast"},
{"tab_button_create", wrap_tab_button_create, METH_VARARGS, "tab_button_create"},
{"tab_button_cast", wrap_tab_button_cast, METH_VARARGS, "tab_button_cast"},
{"tab_button_set_value", wrap_tab_button_set_value, METH_VARARGS, "tab_button_set_value"},
{"tab_button_set_icon", wrap_tab_button_set_icon, METH_VARARGS, "tab_button_set_icon"},
{"tab_button_set_active_icon", wrap_tab_button_set_active_icon, METH_VARARGS, "tab_button_set_active_icon"},
{"tab_button_set_load_ui", wrap_tab_button_set_load_ui, METH_VARARGS, "tab_button_set_load_ui"},
{"tab_button_t_get_prop_value", wrap_tab_button_t_get_prop_value, METH_VARARGS, "tab_button_t_get_prop_value"},
{"tab_button_t_get_prop_load_ui", wrap_tab_button_t_get_prop_load_ui, METH_VARARGS, "tab_button_t_get_prop_load_ui"},
{"tab_button_t_get_prop_active_icon", wrap_tab_button_t_get_prop_active_icon, METH_VARARGS, "tab_button_t_get_prop_active_icon"},
{"tab_button_t_get_prop_icon", wrap_tab_button_t_get_prop_icon, METH_VARARGS, "tab_button_t_get_prop_icon"},
{"tab_button_group_create", wrap_tab_button_group_create, METH_VARARGS, "tab_button_group_create"},
{"tab_button_group_set_compact", wrap_tab_button_group_set_compact, METH_VARARGS, "tab_button_group_set_compact"},
{"tab_button_group_set_scrollable", wrap_tab_button_group_set_scrollable, METH_VARARGS, "tab_button_group_set_scrollable"},
{"tab_button_group_cast", wrap_tab_button_group_cast, METH_VARARGS, "tab_button_group_cast"},
{"tab_button_group_t_get_prop_compact", wrap_tab_button_group_t_get_prop_compact, METH_VARARGS, "tab_button_group_t_get_prop_compact"},
{"tab_button_group_t_get_prop_scrollable", wrap_tab_button_group_t_get_prop_scrollable, METH_VARARGS, "tab_button_group_t_get_prop_scrollable"},
{"slider_create", wrap_slider_create, METH_VARARGS, "slider_create"},
{"slider_cast", wrap_slider_cast, METH_VARARGS, "slider_cast"},
{"slider_set_value", wrap_slider_set_value, METH_VARARGS, "slider_set_value"},
{"slider_set_min", wrap_slider_set_min, METH_VARARGS, "slider_set_min"},
{"slider_set_max", wrap_slider_set_max, METH_VARARGS, "slider_set_max"},
{"slider_set_step", wrap_slider_set_step, METH_VARARGS, "slider_set_step"},
{"slider_set_bar_size", wrap_slider_set_bar_size, METH_VARARGS, "slider_set_bar_size"},
{"slider_set_vertical", wrap_slider_set_vertical, METH_VARARGS, "slider_set_vertical"},
{"slider_t_get_prop_value", wrap_slider_t_get_prop_value, METH_VARARGS, "slider_t_get_prop_value"},
{"slider_t_get_prop_min", wrap_slider_t_get_prop_min, METH_VARARGS, "slider_t_get_prop_min"},
{"slider_t_get_prop_max", wrap_slider_t_get_prop_max, METH_VARARGS, "slider_t_get_prop_max"},
{"slider_t_get_prop_step", wrap_slider_t_get_prop_step, METH_VARARGS, "slider_t_get_prop_step"},
{"slider_t_get_prop_vertical", wrap_slider_t_get_prop_vertical, METH_VARARGS, "slider_t_get_prop_vertical"},
{"slider_t_get_prop_bar_size", wrap_slider_t_get_prop_bar_size, METH_VARARGS, "slider_t_get_prop_bar_size"},
{"slider_t_get_prop_dragger_size", wrap_slider_t_get_prop_dragger_size, METH_VARARGS, "slider_t_get_prop_dragger_size"},
{"slider_t_get_prop_dragger_adapt_to_icon", wrap_slider_t_get_prop_dragger_adapt_to_icon, METH_VARARGS, "slider_t_get_prop_dragger_adapt_to_icon"},
{"slider_t_get_prop_slide_with_bar", wrap_slider_t_get_prop_slide_with_bar, METH_VARARGS, "slider_t_get_prop_slide_with_bar"},
{"row_create", wrap_row_create, METH_VARARGS, "row_create"},
{"row_cast", wrap_row_cast, METH_VARARGS, "row_cast"},
{"progress_bar_create", wrap_progress_bar_create, METH_VARARGS, "progress_bar_create"},
{"progress_bar_cast", wrap_progress_bar_cast, METH_VARARGS, "progress_bar_cast"},
{"progress_bar_set_value", wrap_progress_bar_set_value, METH_VARARGS, "progress_bar_set_value"},
{"progress_bar_set_max", wrap_progress_bar_set_max, METH_VARARGS, "progress_bar_set_max"},
{"progress_bar_set_format", wrap_progress_bar_set_format, METH_VARARGS, "progress_bar_set_format"},
{"progress_bar_set_vertical", wrap_progress_bar_set_vertical, METH_VARARGS, "progress_bar_set_vertical"},
{"progress_bar_set_show_text", wrap_progress_bar_set_show_text, METH_VARARGS, "progress_bar_set_show_text"},
{"progress_bar_set_reverse", wrap_progress_bar_set_reverse, METH_VARARGS, "progress_bar_set_reverse"},
{"progress_bar_get_percent", wrap_progress_bar_get_percent, METH_VARARGS, "progress_bar_get_percent"},
{"progress_bar_t_get_prop_value", wrap_progress_bar_t_get_prop_value, METH_VARARGS, "progress_bar_t_get_prop_value"},
{"progress_bar_t_get_prop_max", wrap_progress_bar_t_get_prop_max, METH_VARARGS, "progress_bar_t_get_prop_max"},
{"progress_bar_t_get_prop_format", wrap_progress_bar_t_get_prop_format, METH_VARARGS, "progress_bar_t_get_prop_format"},
{"progress_bar_t_get_prop_vertical", wrap_progress_bar_t_get_prop_vertical, METH_VARARGS, "progress_bar_t_get_prop_vertical"},
{"progress_bar_t_get_prop_show_text", wrap_progress_bar_t_get_prop_show_text, METH_VARARGS, "progress_bar_t_get_prop_show_text"},
{"progress_bar_t_get_prop_reverse", wrap_progress_bar_t_get_prop_reverse, METH_VARARGS, "progress_bar_t_get_prop_reverse"},
{"pages_create", wrap_pages_create, METH_VARARGS, "pages_create"},
{"pages_cast", wrap_pages_cast, METH_VARARGS, "pages_cast"},
{"pages_set_active", wrap_pages_set_active, METH_VARARGS, "pages_set_active"},
{"pages_set_active_by_name", wrap_pages_set_active_by_name, METH_VARARGS, "pages_set_active_by_name"},
{"pages_t_get_prop_active", wrap_pages_t_get_prop_active, METH_VARARGS, "pages_t_get_prop_active"},
{"label_create", wrap_label_create, METH_VARARGS, "label_create"},
{"label_set_length", wrap_label_set_length, METH_VARARGS, "label_set_length"},
{"label_set_line_wrap", wrap_label_set_line_wrap, METH_VARARGS, "label_set_line_wrap"},
{"label_set_word_wrap", wrap_label_set_word_wrap, METH_VARARGS, "label_set_word_wrap"},
{"label_resize_to_content", wrap_label_resize_to_content, METH_VARARGS, "label_resize_to_content"},
{"label_cast", wrap_label_cast, METH_VARARGS, "label_cast"},
{"label_t_get_prop_length", wrap_label_t_get_prop_length, METH_VARARGS, "label_t_get_prop_length"},
{"label_t_get_prop_line_wrap", wrap_label_t_get_prop_line_wrap, METH_VARARGS, "label_t_get_prop_line_wrap"},
{"label_t_get_prop_word_wrap", wrap_label_t_get_prop_word_wrap, METH_VARARGS, "label_t_get_prop_word_wrap"},
{"group_box_create", wrap_group_box_create, METH_VARARGS, "group_box_create"},
{"group_box_cast", wrap_group_box_cast, METH_VARARGS, "group_box_cast"},
{"grid_create", wrap_grid_create, METH_VARARGS, "grid_create"},
{"grid_cast", wrap_grid_cast, METH_VARARGS, "grid_cast"},
{"grid_item_create", wrap_grid_item_create, METH_VARARGS, "grid_item_create"},
{"grid_item_cast", wrap_grid_item_cast, METH_VARARGS, "grid_item_cast"},
{"edit_create", wrap_edit_create, METH_VARARGS, "edit_create"},
{"edit_cast", wrap_edit_cast, METH_VARARGS, "edit_cast"},
{"edit_get_int", wrap_edit_get_int, METH_VARARGS, "edit_get_int"},
{"edit_get_double", wrap_edit_get_double, METH_VARARGS, "edit_get_double"},
{"edit_set_int", wrap_edit_set_int, METH_VARARGS, "edit_set_int"},
{"edit_set_double", wrap_edit_set_double, METH_VARARGS, "edit_set_double"},
{"edit_set_text_limit", wrap_edit_set_text_limit, METH_VARARGS, "edit_set_text_limit"},
{"edit_set_int_limit", wrap_edit_set_int_limit, METH_VARARGS, "edit_set_int_limit"},
{"edit_set_float_limit", wrap_edit_set_float_limit, METH_VARARGS, "edit_set_float_limit"},
{"edit_set_readonly", wrap_edit_set_readonly, METH_VARARGS, "edit_set_readonly"},
{"edit_set_cancelable", wrap_edit_set_cancelable, METH_VARARGS, "edit_set_cancelable"},
{"edit_set_auto_fix", wrap_edit_set_auto_fix, METH_VARARGS, "edit_set_auto_fix"},
{"edit_set_select_none_when_focused", wrap_edit_set_select_none_when_focused, METH_VARARGS, "edit_set_select_none_when_focused"},
{"edit_set_open_im_when_focused", wrap_edit_set_open_im_when_focused, METH_VARARGS, "edit_set_open_im_when_focused"},
{"edit_set_close_im_when_blured", wrap_edit_set_close_im_when_blured, METH_VARARGS, "edit_set_close_im_when_blured"},
{"edit_set_input_type", wrap_edit_set_input_type, METH_VARARGS, "edit_set_input_type"},
{"edit_set_action_text", wrap_edit_set_action_text, METH_VARARGS, "edit_set_action_text"},
{"edit_set_tips", wrap_edit_set_tips, METH_VARARGS, "edit_set_tips"},
{"edit_set_tr_tips", wrap_edit_set_tr_tips, METH_VARARGS, "edit_set_tr_tips"},
{"edit_set_keyboard", wrap_edit_set_keyboard, METH_VARARGS, "edit_set_keyboard"},
{"edit_set_password_visible", wrap_edit_set_password_visible, METH_VARARGS, "edit_set_password_visible"},
{"edit_set_focus", wrap_edit_set_focus, METH_VARARGS, "edit_set_focus"},
{"edit_set_cursor", wrap_edit_set_cursor, METH_VARARGS, "edit_set_cursor"},
{"edit_t_get_prop_tips", wrap_edit_t_get_prop_tips, METH_VARARGS, "edit_t_get_prop_tips"},
{"edit_t_get_prop_tr_tips", wrap_edit_t_get_prop_tr_tips, METH_VARARGS, "edit_t_get_prop_tr_tips"},
{"edit_t_get_prop_action_text", wrap_edit_t_get_prop_action_text, METH_VARARGS, "edit_t_get_prop_action_text"},
{"edit_t_get_prop_keyboard", wrap_edit_t_get_prop_keyboard, METH_VARARGS, "edit_t_get_prop_keyboard"},
{"edit_t_get_prop_min", wrap_edit_t_get_prop_min, METH_VARARGS, "edit_t_get_prop_min"},
{"edit_t_get_prop_max", wrap_edit_t_get_prop_max, METH_VARARGS, "edit_t_get_prop_max"},
{"edit_t_get_prop_step", wrap_edit_t_get_prop_step, METH_VARARGS, "edit_t_get_prop_step"},
{"edit_t_get_prop_input_type", wrap_edit_t_get_prop_input_type, METH_VARARGS, "edit_t_get_prop_input_type"},
{"edit_t_get_prop_readonly", wrap_edit_t_get_prop_readonly, METH_VARARGS, "edit_t_get_prop_readonly"},
{"edit_t_get_prop_password_visible", wrap_edit_t_get_prop_password_visible, METH_VARARGS, "edit_t_get_prop_password_visible"},
{"edit_t_get_prop_auto_fix", wrap_edit_t_get_prop_auto_fix, METH_VARARGS, "edit_t_get_prop_auto_fix"},
{"edit_t_get_prop_select_none_when_focused", wrap_edit_t_get_prop_select_none_when_focused, METH_VARARGS, "edit_t_get_prop_select_none_when_focused"},
{"edit_t_get_prop_open_im_when_focused", wrap_edit_t_get_prop_open_im_when_focused, METH_VARARGS, "edit_t_get_prop_open_im_when_focused"},
{"edit_t_get_prop_close_im_when_blured", wrap_edit_t_get_prop_close_im_when_blured, METH_VARARGS, "edit_t_get_prop_close_im_when_blured"},
{"edit_t_get_prop_cancelable", wrap_edit_t_get_prop_cancelable, METH_VARARGS, "edit_t_get_prop_cancelable"},
{"dragger_create", wrap_dragger_create, METH_VARARGS, "dragger_create"},
{"dragger_cast", wrap_dragger_cast, METH_VARARGS, "dragger_cast"},
{"dragger_set_range", wrap_dragger_set_range, METH_VARARGS, "dragger_set_range"},
{"dragger_t_get_prop_x_min", wrap_dragger_t_get_prop_x_min, METH_VARARGS, "dragger_t_get_prop_x_min"},
{"dragger_t_get_prop_y_min", wrap_dragger_t_get_prop_y_min, METH_VARARGS, "dragger_t_get_prop_y_min"},
{"dragger_t_get_prop_x_max", wrap_dragger_t_get_prop_x_max, METH_VARARGS, "dragger_t_get_prop_x_max"},
{"dragger_t_get_prop_y_max", wrap_dragger_t_get_prop_y_max, METH_VARARGS, "dragger_t_get_prop_y_max"},
{"digit_clock_create", wrap_digit_clock_create, METH_VARARGS, "digit_clock_create"},
{"digit_clock_cast", wrap_digit_clock_cast, METH_VARARGS, "digit_clock_cast"},
{"digit_clock_set_format", wrap_digit_clock_set_format, METH_VARARGS, "digit_clock_set_format"},
{"digit_clock_t_get_prop_format", wrap_digit_clock_t_get_prop_format, METH_VARARGS, "digit_clock_t_get_prop_format"},
{"dialog_title_create", wrap_dialog_title_create, METH_VARARGS, "dialog_title_create"},
{"dialog_title_cast", wrap_dialog_title_cast, METH_VARARGS, "dialog_title_cast"},
{"dialog_client_create", wrap_dialog_client_create, METH_VARARGS, "dialog_client_create"},
{"dialog_client_cast", wrap_dialog_client_cast, METH_VARARGS, "dialog_client_cast"},
{"combo_box_item_create", wrap_combo_box_item_create, METH_VARARGS, "combo_box_item_create"},
{"combo_box_item_cast", wrap_combo_box_item_cast, METH_VARARGS, "combo_box_item_cast"},
{"combo_box_item_set_checked", wrap_combo_box_item_set_checked, METH_VARARGS, "combo_box_item_set_checked"},
{"combo_box_item_set_value", wrap_combo_box_item_set_value, METH_VARARGS, "combo_box_item_set_value"},
{"combo_box_item_t_get_prop_value", wrap_combo_box_item_t_get_prop_value, METH_VARARGS, "combo_box_item_t_get_prop_value"},
{"combo_box_item_t_get_prop_checked", wrap_combo_box_item_t_get_prop_checked, METH_VARARGS, "combo_box_item_t_get_prop_checked"},
{"column_create", wrap_column_create, METH_VARARGS, "column_create"},
{"column_cast", wrap_column_cast, METH_VARARGS, "column_cast"},
{"color_tile_create", wrap_color_tile_create, METH_VARARGS, "color_tile_create"},
{"color_tile_cast", wrap_color_tile_cast, METH_VARARGS, "color_tile_cast"},
{"color_tile_set_bg_color", wrap_color_tile_set_bg_color, METH_VARARGS, "color_tile_set_bg_color"},
{"color_tile_t_get_prop_bg_color", wrap_color_tile_t_get_prop_bg_color, METH_VARARGS, "color_tile_t_get_prop_bg_color"},
{"color_tile_t_get_prop_border_color", wrap_color_tile_t_get_prop_border_color, METH_VARARGS, "color_tile_t_get_prop_border_color"},
{"clip_view_create", wrap_clip_view_create, METH_VARARGS, "clip_view_create"},
{"clip_view_cast", wrap_clip_view_cast, METH_VARARGS, "clip_view_cast"},
{"prop_change_event_cast", wrap_prop_change_event_cast, METH_VARARGS, "prop_change_event_cast"},
{"prop_change_event_t_get_prop_name", wrap_prop_change_event_t_get_prop_name, METH_VARARGS, "prop_change_event_t_get_prop_name"},
{"prop_change_event_t_get_prop_value", wrap_prop_change_event_t_get_prop_value, METH_VARARGS, "prop_change_event_t_get_prop_value"},
{"progress_event_cast", wrap_progress_event_cast, METH_VARARGS, "progress_event_cast"},
{"progress_event_t_get_prop_percent", wrap_progress_event_t_get_prop_percent, METH_VARARGS, "progress_event_t_get_prop_percent"},
{"done_event_cast", wrap_done_event_cast, METH_VARARGS, "done_event_cast"},
{"done_event_t_get_prop_result", wrap_done_event_t_get_prop_result, METH_VARARGS, "done_event_t_get_prop_result"},
{"error_event_cast", wrap_error_event_cast, METH_VARARGS, "error_event_cast"},
{"error_event_t_get_prop_code", wrap_error_event_t_get_prop_code, METH_VARARGS, "error_event_t_get_prop_code"},
{"error_event_t_get_prop_message", wrap_error_event_t_get_prop_message, METH_VARARGS, "error_event_t_get_prop_message"},
{"cmd_exec_event_cast", wrap_cmd_exec_event_cast, METH_VARARGS, "cmd_exec_event_cast"},
{"cmd_exec_event_t_get_prop_name", wrap_cmd_exec_event_t_get_prop_name, METH_VARARGS, "cmd_exec_event_t_get_prop_name"},
{"cmd_exec_event_t_get_prop_args", wrap_cmd_exec_event_t_get_prop_args, METH_VARARGS, "cmd_exec_event_t_get_prop_args"},
{"cmd_exec_event_t_get_prop_result", wrap_cmd_exec_event_t_get_prop_result, METH_VARARGS, "cmd_exec_event_t_get_prop_result"},
{"cmd_exec_event_t_get_prop_can_exec", wrap_cmd_exec_event_t_get_prop_can_exec, METH_VARARGS, "cmd_exec_event_t_get_prop_can_exec"},
{"time_clock_create", wrap_time_clock_create, METH_VARARGS, "time_clock_create"},
{"time_clock_cast", wrap_time_clock_cast, METH_VARARGS, "time_clock_cast"},
{"time_clock_set_hour", wrap_time_clock_set_hour, METH_VARARGS, "time_clock_set_hour"},
{"time_clock_set_minute", wrap_time_clock_set_minute, METH_VARARGS, "time_clock_set_minute"},
{"time_clock_set_second", wrap_time_clock_set_second, METH_VARARGS, "time_clock_set_second"},
{"time_clock_set_hour_image", wrap_time_clock_set_hour_image, METH_VARARGS, "time_clock_set_hour_image"},
{"time_clock_set_minute_image", wrap_time_clock_set_minute_image, METH_VARARGS, "time_clock_set_minute_image"},
{"time_clock_set_second_image", wrap_time_clock_set_second_image, METH_VARARGS, "time_clock_set_second_image"},
{"time_clock_set_bg_image", wrap_time_clock_set_bg_image, METH_VARARGS, "time_clock_set_bg_image"},
{"time_clock_set_image", wrap_time_clock_set_image, METH_VARARGS, "time_clock_set_image"},
{"time_clock_set_hour_anchor", wrap_time_clock_set_hour_anchor, METH_VARARGS, "time_clock_set_hour_anchor"},
{"time_clock_set_minute_anchor", wrap_time_clock_set_minute_anchor, METH_VARARGS, "time_clock_set_minute_anchor"},
{"time_clock_set_second_anchor", wrap_time_clock_set_second_anchor, METH_VARARGS, "time_clock_set_second_anchor"},
{"time_clock_t_get_prop_hour", wrap_time_clock_t_get_prop_hour, METH_VARARGS, "time_clock_t_get_prop_hour"},
{"time_clock_t_get_prop_minute", wrap_time_clock_t_get_prop_minute, METH_VARARGS, "time_clock_t_get_prop_minute"},
{"time_clock_t_get_prop_second", wrap_time_clock_t_get_prop_second, METH_VARARGS, "time_clock_t_get_prop_second"},
{"time_clock_t_get_prop_image", wrap_time_clock_t_get_prop_image, METH_VARARGS, "time_clock_t_get_prop_image"},
{"time_clock_t_get_prop_bg_image", wrap_time_clock_t_get_prop_bg_image, METH_VARARGS, "time_clock_t_get_prop_bg_image"},
{"time_clock_t_get_prop_hour_image", wrap_time_clock_t_get_prop_hour_image, METH_VARARGS, "time_clock_t_get_prop_hour_image"},
{"time_clock_t_get_prop_minute_image", wrap_time_clock_t_get_prop_minute_image, METH_VARARGS, "time_clock_t_get_prop_minute_image"},
{"time_clock_t_get_prop_second_image", wrap_time_clock_t_get_prop_second_image, METH_VARARGS, "time_clock_t_get_prop_second_image"},
{"time_clock_t_get_prop_hour_anchor_x", wrap_time_clock_t_get_prop_hour_anchor_x, METH_VARARGS, "time_clock_t_get_prop_hour_anchor_x"},
{"time_clock_t_get_prop_hour_anchor_y", wrap_time_clock_t_get_prop_hour_anchor_y, METH_VARARGS, "time_clock_t_get_prop_hour_anchor_y"},
{"time_clock_t_get_prop_minute_anchor_x", wrap_time_clock_t_get_prop_minute_anchor_x, METH_VARARGS, "time_clock_t_get_prop_minute_anchor_x"},
{"time_clock_t_get_prop_minute_anchor_y", wrap_time_clock_t_get_prop_minute_anchor_y, METH_VARARGS, "time_clock_t_get_prop_minute_anchor_y"},
{"time_clock_t_get_prop_second_anchor_x", wrap_time_clock_t_get_prop_second_anchor_x, METH_VARARGS, "time_clock_t_get_prop_second_anchor_x"},
{"time_clock_t_get_prop_second_anchor_y", wrap_time_clock_t_get_prop_second_anchor_y, METH_VARARGS, "time_clock_t_get_prop_second_anchor_y"},
{"check_button_create", wrap_check_button_create, METH_VARARGS, "check_button_create"},
{"check_button_create_radio", wrap_check_button_create_radio, METH_VARARGS, "check_button_create_radio"},
{"check_button_set_value", wrap_check_button_set_value, METH_VARARGS, "check_button_set_value"},
{"check_button_cast", wrap_check_button_cast, METH_VARARGS, "check_button_cast"},
{"check_button_t_get_prop_value", wrap_check_button_t_get_prop_value, METH_VARARGS, "check_button_t_get_prop_value"},
{"text_selector_create", wrap_text_selector_create, METH_VARARGS, "text_selector_create"},
{"text_selector_cast", wrap_text_selector_cast, METH_VARARGS, "text_selector_cast"},
{"text_selector_reset_options", wrap_text_selector_reset_options, METH_VARARGS, "text_selector_reset_options"},
{"text_selector_count_options", wrap_text_selector_count_options, METH_VARARGS, "text_selector_count_options"},
{"text_selector_append_option", wrap_text_selector_append_option, METH_VARARGS, "text_selector_append_option"},
{"text_selector_set_options", wrap_text_selector_set_options, METH_VARARGS, "text_selector_set_options"},
{"text_selector_set_range_options_ex", wrap_text_selector_set_range_options_ex, METH_VARARGS, "text_selector_set_range_options_ex"},
{"text_selector_set_range_options", wrap_text_selector_set_range_options, METH_VARARGS, "text_selector_set_range_options"},
{"text_selector_get_value", wrap_text_selector_get_value, METH_VARARGS, "text_selector_get_value"},
{"text_selector_set_value", wrap_text_selector_set_value, METH_VARARGS, "text_selector_set_value"},
{"text_selector_get_text", wrap_text_selector_get_text, METH_VARARGS, "text_selector_get_text"},
{"text_selector_set_text", wrap_text_selector_set_text, METH_VARARGS, "text_selector_set_text"},
{"text_selector_set_selected_index", wrap_text_selector_set_selected_index, METH_VARARGS, "text_selector_set_selected_index"},
{"text_selector_set_visible_nr", wrap_text_selector_set_visible_nr, METH_VARARGS, "text_selector_set_visible_nr"},
{"text_selector_set_localize_options", wrap_text_selector_set_localize_options, METH_VARARGS, "text_selector_set_localize_options"},
{"text_selector_set_loop_options", wrap_text_selector_set_loop_options, METH_VARARGS, "text_selector_set_loop_options"},
{"text_selector_set_yspeed_scale", wrap_text_selector_set_yspeed_scale, METH_VARARGS, "text_selector_set_yspeed_scale"},
{"text_selector_t_get_prop_visible_nr", wrap_text_selector_t_get_prop_visible_nr, METH_VARARGS, "text_selector_t_get_prop_visible_nr"},
{"text_selector_t_get_prop_selected_index", wrap_text_selector_t_get_prop_selected_index, METH_VARARGS, "text_selector_t_get_prop_selected_index"},
{"text_selector_t_get_prop_options", wrap_text_selector_t_get_prop_options, METH_VARARGS, "text_selector_t_get_prop_options"},
{"text_selector_t_get_prop_yspeed_scale", wrap_text_selector_t_get_prop_yspeed_scale, METH_VARARGS, "text_selector_t_get_prop_yspeed_scale"},
{"text_selector_t_get_prop_localize_options", wrap_text_selector_t_get_prop_localize_options, METH_VARARGS, "text_selector_t_get_prop_localize_options"},
{"text_selector_t_get_prop_loop_options", wrap_text_selector_t_get_prop_loop_options, METH_VARARGS, "text_selector_t_get_prop_loop_options"},
{"switch_create", wrap_switch_create, METH_VARARGS, "switch_create"},
{"switch_set_value", wrap_switch_set_value, METH_VARARGS, "switch_set_value"},
{"switch_cast", wrap_switch_cast, METH_VARARGS, "switch_cast"},
{"switch_t_get_prop_value", wrap_switch_t_get_prop_value, METH_VARARGS, "switch_t_get_prop_value"},
{"switch_t_get_prop_max_xoffset_ratio", wrap_switch_t_get_prop_max_xoffset_ratio, METH_VARARGS, "switch_t_get_prop_max_xoffset_ratio"},
{"button_create", wrap_button_create, METH_VARARGS, "button_create"},
{"button_cast", wrap_button_cast, METH_VARARGS, "button_cast"},
{"button_set_repeat", wrap_button_set_repeat, METH_VARARGS, "button_set_repeat"},
{"button_set_long_press_time", wrap_button_set_long_press_time, METH_VARARGS, "button_set_long_press_time"},
{"button_set_enable_long_press", wrap_button_set_enable_long_press, METH_VARARGS, "button_set_enable_long_press"},
{"button_t_get_prop_repeat", wrap_button_t_get_prop_repeat, METH_VARARGS, "button_t_get_prop_repeat"},
{"button_t_get_prop_enable_long_press", wrap_button_t_get_prop_enable_long_press, METH_VARARGS, "button_t_get_prop_enable_long_press"},
{"button_t_get_prop_long_press_time", wrap_button_t_get_prop_long_press_time, METH_VARARGS, "button_t_get_prop_long_press_time"},
{"button_group_create", wrap_button_group_create, METH_VARARGS, "button_group_create"},
{"button_group_cast", wrap_button_group_cast, METH_VARARGS, "button_group_cast"},
{"app_bar_create", wrap_app_bar_create, METH_VARARGS, "app_bar_create"},
{"app_bar_cast", wrap_app_bar_cast, METH_VARARGS, "app_bar_cast"},
{"slide_view_create", wrap_slide_view_create, METH_VARARGS, "slide_view_create"},
{"slide_view_cast", wrap_slide_view_cast, METH_VARARGS, "slide_view_cast"},
{"slide_view_set_auto_play", wrap_slide_view_set_auto_play, METH_VARARGS, "slide_view_set_auto_play"},
{"slide_view_set_active", wrap_slide_view_set_active, METH_VARARGS, "slide_view_set_active"},
{"slide_view_set_active_ex", wrap_slide_view_set_active_ex, METH_VARARGS, "slide_view_set_active_ex"},
{"slide_view_set_vertical", wrap_slide_view_set_vertical, METH_VARARGS, "slide_view_set_vertical"},
{"slide_view_set_anim_hint", wrap_slide_view_set_anim_hint, METH_VARARGS, "slide_view_set_anim_hint"},
{"slide_view_set_loop", wrap_slide_view_set_loop, METH_VARARGS, "slide_view_set_loop"},
{"slide_view_t_get_prop_vertical", wrap_slide_view_t_get_prop_vertical, METH_VARARGS, "slide_view_t_get_prop_vertical"},
{"slide_view_t_get_prop_auto_play", wrap_slide_view_t_get_prop_auto_play, METH_VARARGS, "slide_view_t_get_prop_auto_play"},
{"slide_view_t_get_prop_loop", wrap_slide_view_t_get_prop_loop, METH_VARARGS, "slide_view_t_get_prop_loop"},
{"slide_view_t_get_prop_anim_hint", wrap_slide_view_t_get_prop_anim_hint, METH_VARARGS, "slide_view_t_get_prop_anim_hint"},
{"slide_indicator_create", wrap_slide_indicator_create, METH_VARARGS, "slide_indicator_create"},
{"slide_indicator_create_linear", wrap_slide_indicator_create_linear, METH_VARARGS, "slide_indicator_create_linear"},
{"slide_indicator_create_arc", wrap_slide_indicator_create_arc, METH_VARARGS, "slide_indicator_create_arc"},
{"slide_indicator_cast", wrap_slide_indicator_cast, METH_VARARGS, "slide_indicator_cast"},
{"slide_indicator_set_value", wrap_slide_indicator_set_value, METH_VARARGS, "slide_indicator_set_value"},
{"slide_indicator_set_max", wrap_slide_indicator_set_max, METH_VARARGS, "slide_indicator_set_max"},
{"slide_indicator_set_default_paint", wrap_slide_indicator_set_default_paint, METH_VARARGS, "slide_indicator_set_default_paint"},
{"slide_indicator_set_auto_hide", wrap_slide_indicator_set_auto_hide, METH_VARARGS, "slide_indicator_set_auto_hide"},
{"slide_indicator_set_margin", wrap_slide_indicator_set_margin, METH_VARARGS, "slide_indicator_set_margin"},
{"slide_indicator_set_spacing", wrap_slide_indicator_set_spacing, METH_VARARGS, "slide_indicator_set_spacing"},
{"slide_indicator_set_size", wrap_slide_indicator_set_size, METH_VARARGS, "slide_indicator_set_size"},
{"slide_indicator_set_anchor", wrap_slide_indicator_set_anchor, METH_VARARGS, "slide_indicator_set_anchor"},
{"slide_indicator_set_indicated_target", wrap_slide_indicator_set_indicated_target, METH_VARARGS, "slide_indicator_set_indicated_target"},
{"slide_indicator_t_get_prop_value", wrap_slide_indicator_t_get_prop_value, METH_VARARGS, "slide_indicator_t_get_prop_value"},
{"slide_indicator_t_get_prop_max", wrap_slide_indicator_t_get_prop_max, METH_VARARGS, "slide_indicator_t_get_prop_max"},
{"slide_indicator_t_get_prop_default_paint", wrap_slide_indicator_t_get_prop_default_paint, METH_VARARGS, "slide_indicator_t_get_prop_default_paint"},
{"slide_indicator_t_get_prop_auto_hide", wrap_slide_indicator_t_get_prop_auto_hide, METH_VARARGS, "slide_indicator_t_get_prop_auto_hide"},
{"slide_indicator_t_get_prop_margin", wrap_slide_indicator_t_get_prop_margin, METH_VARARGS, "slide_indicator_t_get_prop_margin"},
{"slide_indicator_t_get_prop_spacing", wrap_slide_indicator_t_get_prop_spacing, METH_VARARGS, "slide_indicator_t_get_prop_spacing"},
{"slide_indicator_t_get_prop_size", wrap_slide_indicator_t_get_prop_size, METH_VARARGS, "slide_indicator_t_get_prop_size"},
{"slide_indicator_t_get_prop_anchor_x", wrap_slide_indicator_t_get_prop_anchor_x, METH_VARARGS, "slide_indicator_t_get_prop_anchor_x"},
{"slide_indicator_t_get_prop_anchor_y", wrap_slide_indicator_t_get_prop_anchor_y, METH_VARARGS, "slide_indicator_t_get_prop_anchor_y"},
{"slide_indicator_t_get_prop_indicated_target", wrap_slide_indicator_t_get_prop_indicated_target, METH_VARARGS, "slide_indicator_t_get_prop_indicated_target"},
{"slide_menu_create", wrap_slide_menu_create, METH_VARARGS, "slide_menu_create"},
{"slide_menu_cast", wrap_slide_menu_cast, METH_VARARGS, "slide_menu_cast"},
{"slide_menu_set_value", wrap_slide_menu_set_value, METH_VARARGS, "slide_menu_set_value"},
{"slide_menu_set_align_v", wrap_slide_menu_set_align_v, METH_VARARGS, "slide_menu_set_align_v"},
{"slide_menu_set_min_scale", wrap_slide_menu_set_min_scale, METH_VARARGS, "slide_menu_set_min_scale"},
{"slide_menu_t_get_prop_value", wrap_slide_menu_t_get_prop_value, METH_VARARGS, "slide_menu_t_get_prop_value"},
{"slide_menu_t_get_prop_align_v", wrap_slide_menu_t_get_prop_align_v, METH_VARARGS, "slide_menu_t_get_prop_align_v"},
{"slide_menu_t_get_prop_min_scale", wrap_slide_menu_t_get_prop_min_scale, METH_VARARGS, "slide_menu_t_get_prop_min_scale"},
{"scroll_view_create", wrap_scroll_view_create, METH_VARARGS, "scroll_view_create"},
{"scroll_view_cast", wrap_scroll_view_cast, METH_VARARGS, "scroll_view_cast"},
{"scroll_view_set_virtual_w", wrap_scroll_view_set_virtual_w, METH_VARARGS, "scroll_view_set_virtual_w"},
{"scroll_view_set_virtual_h", wrap_scroll_view_set_virtual_h, METH_VARARGS, "scroll_view_set_virtual_h"},
{"scroll_view_set_xslidable", wrap_scroll_view_set_xslidable, METH_VARARGS, "scroll_view_set_xslidable"},
{"scroll_view_set_yslidable", wrap_scroll_view_set_yslidable, METH_VARARGS, "scroll_view_set_yslidable"},
{"scroll_view_set_snap_to_page", wrap_scroll_view_set_snap_to_page, METH_VARARGS, "scroll_view_set_snap_to_page"},
{"scroll_view_set_move_to_page", wrap_scroll_view_set_move_to_page, METH_VARARGS, "scroll_view_set_move_to_page"},
{"scroll_view_set_recursive", wrap_scroll_view_set_recursive, METH_VARARGS, "scroll_view_set_recursive"},
{"scroll_view_set_recursive_only", wrap_scroll_view_set_recursive_only, METH_VARARGS, "scroll_view_set_recursive_only"},
{"scroll_view_set_offset", wrap_scroll_view_set_offset, METH_VARARGS, "scroll_view_set_offset"},
{"scroll_view_set_speed_scale", wrap_scroll_view_set_speed_scale, METH_VARARGS, "scroll_view_set_speed_scale"},
{"scroll_view_scroll_to", wrap_scroll_view_scroll_to, METH_VARARGS, "scroll_view_scroll_to"},
{"scroll_view_scroll_delta_to", wrap_scroll_view_scroll_delta_to, METH_VARARGS, "scroll_view_scroll_delta_to"},
{"scroll_view_t_get_prop_virtual_w", wrap_scroll_view_t_get_prop_virtual_w, METH_VARARGS, "scroll_view_t_get_prop_virtual_w"},
{"scroll_view_t_get_prop_virtual_h", wrap_scroll_view_t_get_prop_virtual_h, METH_VARARGS, "scroll_view_t_get_prop_virtual_h"},
{"scroll_view_t_get_prop_xoffset", wrap_scroll_view_t_get_prop_xoffset, METH_VARARGS, "scroll_view_t_get_prop_xoffset"},
{"scroll_view_t_get_prop_yoffset", wrap_scroll_view_t_get_prop_yoffset, METH_VARARGS, "scroll_view_t_get_prop_yoffset"},
{"scroll_view_t_get_prop_xspeed_scale", wrap_scroll_view_t_get_prop_xspeed_scale, METH_VARARGS, "scroll_view_t_get_prop_xspeed_scale"},
{"scroll_view_t_get_prop_yspeed_scale", wrap_scroll_view_t_get_prop_yspeed_scale, METH_VARARGS, "scroll_view_t_get_prop_yspeed_scale"},
{"scroll_view_t_get_prop_xslidable", wrap_scroll_view_t_get_prop_xslidable, METH_VARARGS, "scroll_view_t_get_prop_xslidable"},
{"scroll_view_t_get_prop_yslidable", wrap_scroll_view_t_get_prop_yslidable, METH_VARARGS, "scroll_view_t_get_prop_yslidable"},
{"scroll_view_t_get_prop_snap_to_page", wrap_scroll_view_t_get_prop_snap_to_page, METH_VARARGS, "scroll_view_t_get_prop_snap_to_page"},
{"scroll_view_t_get_prop_move_to_page", wrap_scroll_view_t_get_prop_move_to_page, METH_VARARGS, "scroll_view_t_get_prop_move_to_page"},
{"scroll_view_t_get_prop_recursive", wrap_scroll_view_t_get_prop_recursive, METH_VARARGS, "scroll_view_t_get_prop_recursive"},
{"scroll_bar_create", wrap_scroll_bar_create, METH_VARARGS, "scroll_bar_create"},
{"scroll_bar_cast", wrap_scroll_bar_cast, METH_VARARGS, "scroll_bar_cast"},
{"scroll_bar_create_mobile", wrap_scroll_bar_create_mobile, METH_VARARGS, "scroll_bar_create_mobile"},
{"scroll_bar_create_desktop", wrap_scroll_bar_create_desktop, METH_VARARGS, "scroll_bar_create_desktop"},
{"scroll_bar_set_params", wrap_scroll_bar_set_params, METH_VARARGS, "scroll_bar_set_params"},
{"scroll_bar_scroll_to", wrap_scroll_bar_scroll_to, METH_VARARGS, "scroll_bar_scroll_to"},
{"scroll_bar_set_value", wrap_scroll_bar_set_value, METH_VARARGS, "scroll_bar_set_value"},
{"scroll_bar_add_delta", wrap_scroll_bar_add_delta, METH_VARARGS, "scroll_bar_add_delta"},
{"scroll_bar_scroll_delta", wrap_scroll_bar_scroll_delta, METH_VARARGS, "scroll_bar_scroll_delta"},
{"scroll_bar_set_value_only", wrap_scroll_bar_set_value_only, METH_VARARGS, "scroll_bar_set_value_only"},
{"scroll_bar_is_mobile", wrap_scroll_bar_is_mobile, METH_VARARGS, "scroll_bar_is_mobile"},
{"scroll_bar_t_get_prop_virtual_size", wrap_scroll_bar_t_get_prop_virtual_size, METH_VARARGS, "scroll_bar_t_get_prop_virtual_size"},
{"scroll_bar_t_get_prop_value", wrap_scroll_bar_t_get_prop_value, METH_VARARGS, "scroll_bar_t_get_prop_value"},
{"scroll_bar_t_get_prop_row", wrap_scroll_bar_t_get_prop_row, METH_VARARGS, "scroll_bar_t_get_prop_row"},
{"scroll_bar_t_get_prop_animatable", wrap_scroll_bar_t_get_prop_animatable, METH_VARARGS, "scroll_bar_t_get_prop_animatable"},
{"list_view_create", wrap_list_view_create, METH_VARARGS, "list_view_create"},
{"list_view_set_item_height", wrap_list_view_set_item_height, METH_VARARGS, "list_view_set_item_height"},
{"list_view_set_default_item_height", wrap_list_view_set_default_item_height, METH_VARARGS, "list_view_set_default_item_height"},
{"list_view_set_auto_hide_scroll_bar", wrap_list_view_set_auto_hide_scroll_bar, METH_VARARGS, "list_view_set_auto_hide_scroll_bar"},
{"list_view_set_floating_scroll_bar", wrap_list_view_set_floating_scroll_bar, METH_VARARGS, "list_view_set_floating_scroll_bar"},
{"list_view_cast", wrap_list_view_cast, METH_VARARGS, "list_view_cast"},
{"list_view_reinit", wrap_list_view_reinit, METH_VARARGS, "list_view_reinit"},
{"list_view_t_get_prop_item_height", wrap_list_view_t_get_prop_item_height, METH_VARARGS, "list_view_t_get_prop_item_height"},
{"list_view_t_get_prop_default_item_height", wrap_list_view_t_get_prop_default_item_height, METH_VARARGS, "list_view_t_get_prop_default_item_height"},
{"list_view_t_get_prop_auto_hide_scroll_bar", wrap_list_view_t_get_prop_auto_hide_scroll_bar, METH_VARARGS, "list_view_t_get_prop_auto_hide_scroll_bar"},
{"list_view_t_get_prop_floating_scroll_bar", wrap_list_view_t_get_prop_floating_scroll_bar, METH_VARARGS, "list_view_t_get_prop_floating_scroll_bar"},
{"list_view_h_create", wrap_list_view_h_create, METH_VARARGS, "list_view_h_create"},
{"list_view_h_set_item_width", wrap_list_view_h_set_item_width, METH_VARARGS, "list_view_h_set_item_width"},
{"list_view_h_set_spacing", wrap_list_view_h_set_spacing, METH_VARARGS, "list_view_h_set_spacing"},
{"list_view_h_cast", wrap_list_view_h_cast, METH_VARARGS, "list_view_h_cast"},
{"list_view_h_t_get_prop_item_width", wrap_list_view_h_t_get_prop_item_width, METH_VARARGS, "list_view_h_t_get_prop_item_width"},
{"list_view_h_t_get_prop_spacing", wrap_list_view_h_t_get_prop_spacing, METH_VARARGS, "list_view_h_t_get_prop_spacing"},
{"list_item_create", wrap_list_item_create, METH_VARARGS, "list_item_create"},
{"list_item_cast", wrap_list_item_cast, METH_VARARGS, "list_item_cast"},
{"wheel_event_cast", wrap_wheel_event_cast, METH_VARARGS, "wheel_event_cast"},
{"wheel_event_t_get_prop_dy", wrap_wheel_event_t_get_prop_dy, METH_VARARGS, "wheel_event_t_get_prop_dy"},
{"wheel_event_t_get_prop_alt", wrap_wheel_event_t_get_prop_alt, METH_VARARGS, "wheel_event_t_get_prop_alt"},
{"wheel_event_t_get_prop_ctrl", wrap_wheel_event_t_get_prop_ctrl, METH_VARARGS, "wheel_event_t_get_prop_ctrl"},
{"wheel_event_t_get_prop_shift", wrap_wheel_event_t_get_prop_shift, METH_VARARGS, "wheel_event_t_get_prop_shift"},
{"orientation_event_cast", wrap_orientation_event_cast, METH_VARARGS, "orientation_event_cast"},
{"orientation_event_t_get_prop_orientation", wrap_orientation_event_t_get_prop_orientation, METH_VARARGS, "orientation_event_t_get_prop_orientation"},
{"value_change_event_cast", wrap_value_change_event_cast, METH_VARARGS, "value_change_event_cast"},
{"hscroll_label_create", wrap_hscroll_label_create, METH_VARARGS, "hscroll_label_create"},
{"hscroll_label_set_lull", wrap_hscroll_label_set_lull, METH_VARARGS, "hscroll_label_set_lull"},
{"hscroll_label_set_duration", wrap_hscroll_label_set_duration, METH_VARARGS, "hscroll_label_set_duration"},
{"hscroll_label_set_only_focus", wrap_hscroll_label_set_only_focus, METH_VARARGS, "hscroll_label_set_only_focus"},
{"hscroll_label_set_only_parent_focus", wrap_hscroll_label_set_only_parent_focus, METH_VARARGS, "hscroll_label_set_only_parent_focus"},
{"hscroll_label_set_loop", wrap_hscroll_label_set_loop, METH_VARARGS, "hscroll_label_set_loop"},
{"hscroll_label_set_yoyo", wrap_hscroll_label_set_yoyo, METH_VARARGS, "hscroll_label_set_yoyo"},
{"hscroll_label_set_ellipses", wrap_hscroll_label_set_ellipses, METH_VARARGS, "hscroll_label_set_ellipses"},
{"hscroll_label_set_xoffset", wrap_hscroll_label_set_xoffset, METH_VARARGS, "hscroll_label_set_xoffset"},
{"hscroll_label_start", wrap_hscroll_label_start, METH_VARARGS, "hscroll_label_start"},
{"hscroll_label_stop", wrap_hscroll_label_stop, METH_VARARGS, "hscroll_label_stop"},
{"hscroll_label_cast", wrap_hscroll_label_cast, METH_VARARGS, "hscroll_label_cast"},
{"hscroll_label_t_get_prop_only_focus", wrap_hscroll_label_t_get_prop_only_focus, METH_VARARGS, "hscroll_label_t_get_prop_only_focus"},
{"hscroll_label_t_get_prop_only_parent_focus", wrap_hscroll_label_t_get_prop_only_parent_focus, METH_VARARGS, "hscroll_label_t_get_prop_only_parent_focus"},
{"hscroll_label_t_get_prop_loop", wrap_hscroll_label_t_get_prop_loop, METH_VARARGS, "hscroll_label_t_get_prop_loop"},
{"hscroll_label_t_get_prop_yoyo", wrap_hscroll_label_t_get_prop_yoyo, METH_VARARGS, "hscroll_label_t_get_prop_yoyo"},
{"hscroll_label_t_get_prop_ellipses", wrap_hscroll_label_t_get_prop_ellipses, METH_VARARGS, "hscroll_label_t_get_prop_ellipses"},
{"hscroll_label_t_get_prop_lull", wrap_hscroll_label_t_get_prop_lull, METH_VARARGS, "hscroll_label_t_get_prop_lull"},
{"hscroll_label_t_get_prop_duration", wrap_hscroll_label_t_get_prop_duration, METH_VARARGS, "hscroll_label_t_get_prop_duration"},
{"hscroll_label_t_get_prop_xoffset", wrap_hscroll_label_t_get_prop_xoffset, METH_VARARGS, "hscroll_label_t_get_prop_xoffset"},
{"hscroll_label_t_get_prop_text_w", wrap_hscroll_label_t_get_prop_text_w, METH_VARARGS, "hscroll_label_t_get_prop_text_w"},
{"rich_text_create", wrap_rich_text_create, METH_VARARGS, "rich_text_create"},
{"rich_text_set_text", wrap_rich_text_set_text, METH_VARARGS, "rich_text_set_text"},
{"rich_text_set_yslidable", wrap_rich_text_set_yslidable, METH_VARARGS, "rich_text_set_yslidable"},
{"rich_text_cast", wrap_rich_text_cast, METH_VARARGS, "rich_text_cast"},
{"rich_text_t_get_prop_line_gap", wrap_rich_text_t_get_prop_line_gap, METH_VARARGS, "rich_text_t_get_prop_line_gap"},
{"rich_text_t_get_prop_yslidable", wrap_rich_text_t_get_prop_yslidable, METH_VARARGS, "rich_text_t_get_prop_yslidable"},
{"rich_text_view_create", wrap_rich_text_view_create, METH_VARARGS, "rich_text_view_create"},
{"rich_text_view_cast", wrap_rich_text_view_cast, METH_VARARGS, "rich_text_view_cast"},
{"pointer_event_cast", wrap_pointer_event_cast, METH_VARARGS, "pointer_event_cast"},
{"pointer_event_t_get_prop_x", wrap_pointer_event_t_get_prop_x, METH_VARARGS, "pointer_event_t_get_prop_x"},
{"pointer_event_t_get_prop_y", wrap_pointer_event_t_get_prop_y, METH_VARARGS, "pointer_event_t_get_prop_y"},
{"pointer_event_t_get_prop_button", wrap_pointer_event_t_get_prop_button, METH_VARARGS, "pointer_event_t_get_prop_button"},
{"pointer_event_t_get_prop_pressed", wrap_pointer_event_t_get_prop_pressed, METH_VARARGS, "pointer_event_t_get_prop_pressed"},
{"pointer_event_t_get_prop_alt", wrap_pointer_event_t_get_prop_alt, METH_VARARGS, "pointer_event_t_get_prop_alt"},
{"pointer_event_t_get_prop_ctrl", wrap_pointer_event_t_get_prop_ctrl, METH_VARARGS, "pointer_event_t_get_prop_ctrl"},
{"pointer_event_t_get_prop_cmd", wrap_pointer_event_t_get_prop_cmd, METH_VARARGS, "pointer_event_t_get_prop_cmd"},
{"pointer_event_t_get_prop_menu", wrap_pointer_event_t_get_prop_menu, METH_VARARGS, "pointer_event_t_get_prop_menu"},
{"pointer_event_t_get_prop_shift", wrap_pointer_event_t_get_prop_shift, METH_VARARGS, "pointer_event_t_get_prop_shift"},
{"progress_circle_create", wrap_progress_circle_create, METH_VARARGS, "progress_circle_create"},
{"progress_circle_cast", wrap_progress_circle_cast, METH_VARARGS, "progress_circle_cast"},
{"progress_circle_set_value", wrap_progress_circle_set_value, METH_VARARGS, "progress_circle_set_value"},
{"progress_circle_set_max", wrap_progress_circle_set_max, METH_VARARGS, "progress_circle_set_max"},
{"progress_circle_set_format", wrap_progress_circle_set_format, METH_VARARGS, "progress_circle_set_format"},
{"progress_circle_set_line_width", wrap_progress_circle_set_line_width, METH_VARARGS, "progress_circle_set_line_width"},
{"progress_circle_set_start_angle", wrap_progress_circle_set_start_angle, METH_VARARGS, "progress_circle_set_start_angle"},
{"progress_circle_set_line_cap", wrap_progress_circle_set_line_cap, METH_VARARGS, "progress_circle_set_line_cap"},
{"progress_circle_set_show_text", wrap_progress_circle_set_show_text, METH_VARARGS, "progress_circle_set_show_text"},
{"progress_circle_set_counter_clock_wise", wrap_progress_circle_set_counter_clock_wise, METH_VARARGS, "progress_circle_set_counter_clock_wise"},
{"progress_circle_t_get_prop_value", wrap_progress_circle_t_get_prop_value, METH_VARARGS, "progress_circle_t_get_prop_value"},
{"progress_circle_t_get_prop_max", wrap_progress_circle_t_get_prop_max, METH_VARARGS, "progress_circle_t_get_prop_max"},
{"progress_circle_t_get_prop_format", wrap_progress_circle_t_get_prop_format, METH_VARARGS, "progress_circle_t_get_prop_format"},
{"progress_circle_t_get_prop_start_angle", wrap_progress_circle_t_get_prop_start_angle, METH_VARARGS, "progress_circle_t_get_prop_start_angle"},
{"progress_circle_t_get_prop_line_width", wrap_progress_circle_t_get_prop_line_width, METH_VARARGS, "progress_circle_t_get_prop_line_width"},
{"progress_circle_t_get_prop_line_cap", wrap_progress_circle_t_get_prop_line_cap, METH_VARARGS, "progress_circle_t_get_prop_line_cap"},
{"progress_circle_t_get_prop_counter_clock_wise", wrap_progress_circle_t_get_prop_counter_clock_wise, METH_VARARGS, "progress_circle_t_get_prop_counter_clock_wise"},
{"progress_circle_t_get_prop_show_text", wrap_progress_circle_t_get_prop_show_text, METH_VARARGS, "progress_circle_t_get_prop_show_text"},
{"key_event_cast", wrap_key_event_cast, METH_VARARGS, "key_event_cast"},
{"key_event_t_get_prop_key", wrap_key_event_t_get_prop_key, METH_VARARGS, "key_event_t_get_prop_key"},
{"key_event_t_get_prop_alt", wrap_key_event_t_get_prop_alt, METH_VARARGS, "key_event_t_get_prop_alt"},
{"key_event_t_get_prop_lalt", wrap_key_event_t_get_prop_lalt, METH_VARARGS, "key_event_t_get_prop_lalt"},
{"key_event_t_get_prop_ralt", wrap_key_event_t_get_prop_ralt, METH_VARARGS, "key_event_t_get_prop_ralt"},
{"key_event_t_get_prop_ctrl", wrap_key_event_t_get_prop_ctrl, METH_VARARGS, "key_event_t_get_prop_ctrl"},
{"key_event_t_get_prop_lctrl", wrap_key_event_t_get_prop_lctrl, METH_VARARGS, "key_event_t_get_prop_lctrl"},
{"key_event_t_get_prop_rctrl", wrap_key_event_t_get_prop_rctrl, METH_VARARGS, "key_event_t_get_prop_rctrl"},
{"key_event_t_get_prop_shift", wrap_key_event_t_get_prop_shift, METH_VARARGS, "key_event_t_get_prop_shift"},
{"key_event_t_get_prop_lshift", wrap_key_event_t_get_prop_lshift, METH_VARARGS, "key_event_t_get_prop_lshift"},
{"key_event_t_get_prop_rshift", wrap_key_event_t_get_prop_rshift, METH_VARARGS, "key_event_t_get_prop_rshift"},
{"key_event_t_get_prop_cmd", wrap_key_event_t_get_prop_cmd, METH_VARARGS, "key_event_t_get_prop_cmd"},
{"key_event_t_get_prop_menu", wrap_key_event_t_get_prop_menu, METH_VARARGS, "key_event_t_get_prop_menu"},
{"key_event_t_get_prop_capslock", wrap_key_event_t_get_prop_capslock, METH_VARARGS, "key_event_t_get_prop_capslock"},
{"mledit_create", wrap_mledit_create, METH_VARARGS, "mledit_create"},
{"mledit_set_readonly", wrap_mledit_set_readonly, METH_VARARGS, "mledit_set_readonly"},
{"mledit_set_cancelable", wrap_mledit_set_cancelable, METH_VARARGS, "mledit_set_cancelable"},
{"mledit_set_focus", wrap_mledit_set_focus, METH_VARARGS, "mledit_set_focus"},
{"mledit_set_wrap_word", wrap_mledit_set_wrap_word, METH_VARARGS, "mledit_set_wrap_word"},
{"mledit_set_max_lines", wrap_mledit_set_max_lines, METH_VARARGS, "mledit_set_max_lines"},
{"mledit_set_tips", wrap_mledit_set_tips, METH_VARARGS, "mledit_set_tips"},
{"mledit_set_tr_tips", wrap_mledit_set_tr_tips, METH_VARARGS, "mledit_set_tr_tips"},
{"mledit_set_keyboard", wrap_mledit_set_keyboard, METH_VARARGS, "mledit_set_keyboard"},
{"mledit_set_cursor", wrap_mledit_set_cursor, METH_VARARGS, "mledit_set_cursor"},
{"mledit_set_scroll_line", wrap_mledit_set_scroll_line, METH_VARARGS, "mledit_set_scroll_line"},
{"mledit_set_open_im_when_focused", wrap_mledit_set_open_im_when_focused, METH_VARARGS, "mledit_set_open_im_when_focused"},
{"mledit_set_close_im_when_blured", wrap_mledit_set_close_im_when_blured, METH_VARARGS, "mledit_set_close_im_when_blured"},
{"mledit_cast", wrap_mledit_cast, METH_VARARGS, "mledit_cast"},
{"mledit_t_get_prop_tips", wrap_mledit_t_get_prop_tips, METH_VARARGS, "mledit_t_get_prop_tips"},
{"mledit_t_get_prop_tr_tips", wrap_mledit_t_get_prop_tr_tips, METH_VARARGS, "mledit_t_get_prop_tr_tips"},
{"mledit_t_get_prop_keyboard", wrap_mledit_t_get_prop_keyboard, METH_VARARGS, "mledit_t_get_prop_keyboard"},
{"mledit_t_get_prop_max_lines", wrap_mledit_t_get_prop_max_lines, METH_VARARGS, "mledit_t_get_prop_max_lines"},
{"mledit_t_get_prop_wrap_word", wrap_mledit_t_get_prop_wrap_word, METH_VARARGS, "mledit_t_get_prop_wrap_word"},
{"mledit_t_get_prop_scroll_line", wrap_mledit_t_get_prop_scroll_line, METH_VARARGS, "mledit_t_get_prop_scroll_line"},
{"mledit_t_get_prop_readonly", wrap_mledit_t_get_prop_readonly, METH_VARARGS, "mledit_t_get_prop_readonly"},
{"mledit_t_get_prop_cancelable", wrap_mledit_t_get_prop_cancelable, METH_VARARGS, "mledit_t_get_prop_cancelable"},
{"mledit_t_get_prop_open_im_when_focused", wrap_mledit_t_get_prop_open_im_when_focused, METH_VARARGS, "mledit_t_get_prop_open_im_when_focused"},
{"mledit_t_get_prop_close_im_when_blured", wrap_mledit_t_get_prop_close_im_when_blured, METH_VARARGS, "mledit_t_get_prop_close_im_when_blured"},
{"line_number_create", wrap_line_number_create, METH_VARARGS, "line_number_create"},
{"line_number_set_top_margin", wrap_line_number_set_top_margin, METH_VARARGS, "line_number_set_top_margin"},
{"line_number_set_bottom_margin", wrap_line_number_set_bottom_margin, METH_VARARGS, "line_number_set_bottom_margin"},
{"line_number_set_line_height", wrap_line_number_set_line_height, METH_VARARGS, "line_number_set_line_height"},
{"line_number_set_yoffset", wrap_line_number_set_yoffset, METH_VARARGS, "line_number_set_yoffset"},
{"line_number_cast", wrap_line_number_cast, METH_VARARGS, "line_number_cast"},
{"lang_indicator_create", wrap_lang_indicator_create, METH_VARARGS, "lang_indicator_create"},
{"lang_indicator_set_image", wrap_lang_indicator_set_image, METH_VARARGS, "lang_indicator_set_image"},
{"lang_indicator_cast", wrap_lang_indicator_cast, METH_VARARGS, "lang_indicator_cast"},
{"lang_indicator_t_get_prop_image", wrap_lang_indicator_t_get_prop_image, METH_VARARGS, "lang_indicator_t_get_prop_image"},
{"paint_event_cast", wrap_paint_event_cast, METH_VARARGS, "paint_event_cast"},
{"paint_event_t_get_prop_c", wrap_paint_event_t_get_prop_c, METH_VARARGS, "paint_event_t_get_prop_c"},
{"candidates_cast", wrap_candidates_cast, METH_VARARGS, "candidates_cast"},
{"candidates_set_pre", wrap_candidates_set_pre, METH_VARARGS, "candidates_set_pre"},
{"candidates_set_select_by_num", wrap_candidates_set_select_by_num, METH_VARARGS, "candidates_set_select_by_num"},
{"candidates_set_auto_hide", wrap_candidates_set_auto_hide, METH_VARARGS, "candidates_set_auto_hide"},
{"candidates_set_button_style", wrap_candidates_set_button_style, METH_VARARGS, "candidates_set_button_style"},
{"candidates_t_get_prop_pre", wrap_candidates_t_get_prop_pre, METH_VARARGS, "candidates_t_get_prop_pre"},
{"candidates_t_get_prop_select_by_num", wrap_candidates_t_get_prop_select_by_num, METH_VARARGS, "candidates_t_get_prop_select_by_num"},
{"candidates_t_get_prop_auto_hide", wrap_candidates_t_get_prop_auto_hide, METH_VARARGS, "candidates_t_get_prop_auto_hide"},
{"candidates_t_get_prop_button_style", wrap_candidates_t_get_prop_button_style, METH_VARARGS, "candidates_t_get_prop_button_style"},
{"image_value_create", wrap_image_value_create, METH_VARARGS, "image_value_create"},
{"image_value_set_image", wrap_image_value_set_image, METH_VARARGS, "image_value_set_image"},
{"image_value_set_format", wrap_image_value_set_format, METH_VARARGS, "image_value_set_format"},
{"image_value_set_click_add_delta", wrap_image_value_set_click_add_delta, METH_VARARGS, "image_value_set_click_add_delta"},
{"image_value_set_value", wrap_image_value_set_value, METH_VARARGS, "image_value_set_value"},
{"image_value_set_min", wrap_image_value_set_min, METH_VARARGS, "image_value_set_min"},
{"image_value_set_max", wrap_image_value_set_max, METH_VARARGS, "image_value_set_max"},
{"image_value_cast", wrap_image_value_cast, METH_VARARGS, "image_value_cast"},
{"image_value_t_get_prop_image", wrap_image_value_t_get_prop_image, METH_VARARGS, "image_value_t_get_prop_image"},
{"image_value_t_get_prop_format", wrap_image_value_t_get_prop_format, METH_VARARGS, "image_value_t_get_prop_format"},
{"image_value_t_get_prop_click_add_delta", wrap_image_value_t_get_prop_click_add_delta, METH_VARARGS, "image_value_t_get_prop_click_add_delta"},
{"image_value_t_get_prop_value", wrap_image_value_t_get_prop_value, METH_VARARGS, "image_value_t_get_prop_value"},
{"image_value_t_get_prop_min", wrap_image_value_t_get_prop_min, METH_VARARGS, "image_value_t_get_prop_min"},
{"image_value_t_get_prop_max", wrap_image_value_t_get_prop_max, METH_VARARGS, "image_value_t_get_prop_max"},
{"window_event_cast", wrap_window_event_cast, METH_VARARGS, "window_event_cast"},
{"window_event_t_get_prop_window", wrap_window_event_t_get_prop_window, METH_VARARGS, "window_event_t_get_prop_window"},
{"guage_create", wrap_guage_create, METH_VARARGS, "guage_create"},
{"guage_cast", wrap_guage_cast, METH_VARARGS, "guage_cast"},
{"guage_set_image", wrap_guage_set_image, METH_VARARGS, "guage_set_image"},
{"guage_set_draw_type", wrap_guage_set_draw_type, METH_VARARGS, "guage_set_draw_type"},
{"guage_t_get_prop_image", wrap_guage_t_get_prop_image, METH_VARARGS, "guage_t_get_prop_image"},
{"guage_t_get_prop_draw_type", wrap_guage_t_get_prop_draw_type, METH_VARARGS, "guage_t_get_prop_draw_type"},
{"guage_pointer_create", wrap_guage_pointer_create, METH_VARARGS, "guage_pointer_create"},
{"guage_pointer_cast", wrap_guage_pointer_cast, METH_VARARGS, "guage_pointer_cast"},
{"guage_pointer_set_angle", wrap_guage_pointer_set_angle, METH_VARARGS, "guage_pointer_set_angle"},
{"guage_pointer_set_image", wrap_guage_pointer_set_image, METH_VARARGS, "guage_pointer_set_image"},
{"guage_pointer_set_anchor", wrap_guage_pointer_set_anchor, METH_VARARGS, "guage_pointer_set_anchor"},
{"guage_pointer_t_get_prop_angle", wrap_guage_pointer_t_get_prop_angle, METH_VARARGS, "guage_pointer_t_get_prop_angle"},
{"guage_pointer_t_get_prop_image", wrap_guage_pointer_t_get_prop_image, METH_VARARGS, "guage_pointer_t_get_prop_image"},
{"guage_pointer_t_get_prop_anchor_x", wrap_guage_pointer_t_get_prop_anchor_x, METH_VARARGS, "guage_pointer_t_get_prop_anchor_x"},
{"guage_pointer_t_get_prop_anchor_y", wrap_guage_pointer_t_get_prop_anchor_y, METH_VARARGS, "guage_pointer_t_get_prop_anchor_y"},
{"multi_gesture_event_cast", wrap_multi_gesture_event_cast, METH_VARARGS, "multi_gesture_event_cast"},
{"multi_gesture_event_t_get_prop_x", wrap_multi_gesture_event_t_get_prop_x, METH_VARARGS, "multi_gesture_event_t_get_prop_x"},
{"multi_gesture_event_t_get_prop_y", wrap_multi_gesture_event_t_get_prop_y, METH_VARARGS, "multi_gesture_event_t_get_prop_y"},
{"multi_gesture_event_t_get_prop_rotation", wrap_multi_gesture_event_t_get_prop_rotation, METH_VARARGS, "multi_gesture_event_t_get_prop_rotation"},
{"multi_gesture_event_t_get_prop_distance", wrap_multi_gesture_event_t_get_prop_distance, METH_VARARGS, "multi_gesture_event_t_get_prop_distance"},
{"file_chooser_create", wrap_file_chooser_create, METH_VARARGS, "file_chooser_create"},
{"file_chooser_set_init_dir", wrap_file_chooser_set_init_dir, METH_VARARGS, "file_chooser_set_init_dir"},
{"file_chooser_set_filter", wrap_file_chooser_set_filter, METH_VARARGS, "file_chooser_set_filter"},
{"file_chooser_cast", wrap_file_chooser_cast, METH_VARARGS, "file_chooser_cast"},
{"file_chooser_choose_file_for_save", wrap_file_chooser_choose_file_for_save, METH_VARARGS, "file_chooser_choose_file_for_save"},
{"file_chooser_choose_file_for_open", wrap_file_chooser_choose_file_for_open, METH_VARARGS, "file_chooser_choose_file_for_open"},
{"file_chooser_choose_folder", wrap_file_chooser_choose_folder, METH_VARARGS, "file_chooser_choose_folder"},
{"file_chooser_get_dir", wrap_file_chooser_get_dir, METH_VARARGS, "file_chooser_get_dir"},
{"file_chooser_get_filename", wrap_file_chooser_get_filename, METH_VARARGS, "file_chooser_get_filename"},
{"file_chooser_is_aborted", wrap_file_chooser_is_aborted, METH_VARARGS, "file_chooser_is_aborted"},
{"file_browser_view_create", wrap_file_browser_view_create, METH_VARARGS, "file_browser_view_create"},
{"file_browser_view_cast", wrap_file_browser_view_cast, METH_VARARGS, "file_browser_view_cast"},
{"file_browser_view_set_init_dir", wrap_file_browser_view_set_init_dir, METH_VARARGS, "file_browser_view_set_init_dir"},
{"file_browser_view_set_filter", wrap_file_browser_view_set_filter, METH_VARARGS, "file_browser_view_set_filter"},
{"file_browser_view_reload", wrap_file_browser_view_reload, METH_VARARGS, "file_browser_view_reload"},
{"file_browser_view_set_ignore_hidden_files", wrap_file_browser_view_set_ignore_hidden_files, METH_VARARGS, "file_browser_view_set_ignore_hidden_files"},
{"file_browser_view_set_sort_ascending", wrap_file_browser_view_set_sort_ascending, METH_VARARGS, "file_browser_view_set_sort_ascending"},
{"file_browser_view_set_show_check_button", wrap_file_browser_view_set_show_check_button, METH_VARARGS, "file_browser_view_set_show_check_button"},
{"file_browser_view_set_sort_by", wrap_file_browser_view_set_sort_by, METH_VARARGS, "file_browser_view_set_sort_by"},
{"file_browser_view_get_cwd", wrap_file_browser_view_get_cwd, METH_VARARGS, "file_browser_view_get_cwd"},
{"file_browser_view_create_dir", wrap_file_browser_view_create_dir, METH_VARARGS, "file_browser_view_create_dir"},
{"file_browser_view_create_file", wrap_file_browser_view_create_file, METH_VARARGS, "file_browser_view_create_file"},
{"file_browser_view_t_get_prop_init_dir", wrap_file_browser_view_t_get_prop_init_dir, METH_VARARGS, "file_browser_view_t_get_prop_init_dir"},
{"file_browser_view_t_get_prop_filter", wrap_file_browser_view_t_get_prop_filter, METH_VARARGS, "file_browser_view_t_get_prop_filter"},
{"file_browser_view_t_get_prop_ignore_hidden_files", wrap_file_browser_view_t_get_prop_ignore_hidden_files, METH_VARARGS, "file_browser_view_t_get_prop_ignore_hidden_files"},
{"file_browser_view_t_get_prop_sort_ascending", wrap_file_browser_view_t_get_prop_sort_ascending, METH_VARARGS, "file_browser_view_t_get_prop_sort_ascending"},
{"file_browser_view_t_get_prop_show_check_button", wrap_file_browser_view_t_get_prop_show_check_button, METH_VARARGS, "file_browser_view_t_get_prop_show_check_button"},
{"file_browser_view_t_get_prop_sort_by", wrap_file_browser_view_t_get_prop_sort_by, METH_VARARGS, "file_browser_view_t_get_prop_sort_by"},
{"draggable_create", wrap_draggable_create, METH_VARARGS, "draggable_create"},
{"draggable_cast", wrap_draggable_cast, METH_VARARGS, "draggable_cast"},
{"draggable_set_top", wrap_draggable_set_top, METH_VARARGS, "draggable_set_top"},
{"draggable_set_bottom", wrap_draggable_set_bottom, METH_VARARGS, "draggable_set_bottom"},
{"draggable_set_left", wrap_draggable_set_left, METH_VARARGS, "draggable_set_left"},
{"draggable_set_right", wrap_draggable_set_right, METH_VARARGS, "draggable_set_right"},
{"draggable_set_vertical_only", wrap_draggable_set_vertical_only, METH_VARARGS, "draggable_set_vertical_only"},
{"draggable_set_horizontal_only", wrap_draggable_set_horizontal_only, METH_VARARGS, "draggable_set_horizontal_only"},
{"draggable_set_drag_window", wrap_draggable_set_drag_window, METH_VARARGS, "draggable_set_drag_window"},
{"draggable_t_get_prop_top", wrap_draggable_t_get_prop_top, METH_VARARGS, "draggable_t_get_prop_top"},
{"draggable_t_get_prop_bottom", wrap_draggable_t_get_prop_bottom, METH_VARARGS, "draggable_t_get_prop_bottom"},
{"draggable_t_get_prop_left", wrap_draggable_t_get_prop_left, METH_VARARGS, "draggable_t_get_prop_left"},
{"draggable_t_get_prop_right", wrap_draggable_t_get_prop_right, METH_VARARGS, "draggable_t_get_prop_right"},
{"draggable_t_get_prop_vertical_only", wrap_draggable_t_get_prop_vertical_only, METH_VARARGS, "draggable_t_get_prop_vertical_only"},
{"draggable_t_get_prop_horizontal_only", wrap_draggable_t_get_prop_horizontal_only, METH_VARARGS, "draggable_t_get_prop_horizontal_only"},
{"draggable_t_get_prop_drag_window", wrap_draggable_t_get_prop_drag_window, METH_VARARGS, "draggable_t_get_prop_drag_window"},
{"assets_event_t_get_prop_type", wrap_assets_event_t_get_prop_type, METH_VARARGS, "assets_event_t_get_prop_type"},
{"assets_event_t_get_prop_asset_info", wrap_assets_event_t_get_prop_asset_info, METH_VARARGS, "assets_event_t_get_prop_asset_info"},
{"color_picker_create", wrap_color_picker_create, METH_VARARGS, "color_picker_create"},
{"color_picker_set_color", wrap_color_picker_set_color, METH_VARARGS, "color_picker_set_color"},
{"color_picker_cast", wrap_color_picker_cast, METH_VARARGS, "color_picker_cast"},
{"color_picker_t_get_prop_value", wrap_color_picker_t_get_prop_value, METH_VARARGS, "color_picker_t_get_prop_value"},
{"color_component_cast", wrap_color_component_cast, METH_VARARGS, "color_component_cast"},
{"canvas_widget_create", wrap_canvas_widget_create, METH_VARARGS, "canvas_widget_create"},
{"canvas_widget_cast", wrap_canvas_widget_cast, METH_VARARGS, "canvas_widget_cast"},
{"image_base_set_image", wrap_image_base_set_image, METH_VARARGS, "image_base_set_image"},
{"image_base_set_rotation", wrap_image_base_set_rotation, METH_VARARGS, "image_base_set_rotation"},
{"image_base_set_scale", wrap_image_base_set_scale, METH_VARARGS, "image_base_set_scale"},
{"image_base_set_anchor", wrap_image_base_set_anchor, METH_VARARGS, "image_base_set_anchor"},
{"image_base_set_selected", wrap_image_base_set_selected, METH_VARARGS, "image_base_set_selected"},
{"image_base_set_selectable", wrap_image_base_set_selectable, METH_VARARGS, "image_base_set_selectable"},
{"image_base_set_clickable", wrap_image_base_set_clickable, METH_VARARGS, "image_base_set_clickable"},
{"image_base_cast", wrap_image_base_cast, METH_VARARGS, "image_base_cast"},
{"image_base_t_get_prop_image", wrap_image_base_t_get_prop_image, METH_VARARGS, "image_base_t_get_prop_image"},
{"image_base_t_get_prop_anchor_x", wrap_image_base_t_get_prop_anchor_x, METH_VARARGS, "image_base_t_get_prop_anchor_x"},
{"image_base_t_get_prop_anchor_y", wrap_image_base_t_get_prop_anchor_y, METH_VARARGS, "image_base_t_get_prop_anchor_y"},
{"image_base_t_get_prop_scale_x", wrap_image_base_t_get_prop_scale_x, METH_VARARGS, "image_base_t_get_prop_scale_x"},
{"image_base_t_get_prop_scale_y", wrap_image_base_t_get_prop_scale_y, METH_VARARGS, "image_base_t_get_prop_scale_y"},
{"image_base_t_get_prop_rotation", wrap_image_base_t_get_prop_rotation, METH_VARARGS, "image_base_t_get_prop_rotation"},
{"image_base_t_get_prop_clickable", wrap_image_base_t_get_prop_clickable, METH_VARARGS, "image_base_t_get_prop_clickable"},
{"image_base_t_get_prop_selectable", wrap_image_base_t_get_prop_selectable, METH_VARARGS, "image_base_t_get_prop_selectable"},
{"image_base_t_get_prop_selected", wrap_image_base_t_get_prop_selected, METH_VARARGS, "image_base_t_get_prop_selected"},
{"window_manager", wrap_window_manager, METH_VARARGS, "window_manager"},
{"window_manager_cast", wrap_window_manager_cast, METH_VARARGS, "window_manager_cast"},
{"window_manager_get_top_main_window", wrap_window_manager_get_top_main_window, METH_VARARGS, "window_manager_get_top_main_window"},
{"window_manager_get_top_window", wrap_window_manager_get_top_window, METH_VARARGS, "window_manager_get_top_window"},
{"window_manager_get_prev_window", wrap_window_manager_get_prev_window, METH_VARARGS, "window_manager_get_prev_window"},
{"window_manager_get_pointer_x", wrap_window_manager_get_pointer_x, METH_VARARGS, "window_manager_get_pointer_x"},
{"window_manager_get_pointer_y", wrap_window_manager_get_pointer_y, METH_VARARGS, "window_manager_get_pointer_y"},
{"window_manager_get_pointer_pressed", wrap_window_manager_get_pointer_pressed, METH_VARARGS, "window_manager_get_pointer_pressed"},
{"window_manager_is_animating", wrap_window_manager_is_animating, METH_VARARGS, "window_manager_is_animating"},
{"window_manager_set_show_fps", wrap_window_manager_set_show_fps, METH_VARARGS, "window_manager_set_show_fps"},
{"window_manager_set_screen_saver_time", wrap_window_manager_set_screen_saver_time, METH_VARARGS, "window_manager_set_screen_saver_time"},
{"window_manager_set_cursor", wrap_window_manager_set_cursor, METH_VARARGS, "window_manager_set_cursor"},
{"window_manager_back", wrap_window_manager_back, METH_VARARGS, "window_manager_back"},
{"window_manager_back_to_home", wrap_window_manager_back_to_home, METH_VARARGS, "window_manager_back_to_home"},
{"window_manager_back_to", wrap_window_manager_back_to, METH_VARARGS, "window_manager_back_to"},
{"window_manager_resize", wrap_window_manager_resize, METH_VARARGS, "window_manager_resize"},
{"window_manager_close_all", wrap_window_manager_close_all, METH_VARARGS, "window_manager_close_all"},
{"window_base_cast", wrap_window_base_cast, METH_VARARGS, "window_base_cast"},
{"window_base_t_get_prop_theme", wrap_window_base_t_get_prop_theme, METH_VARARGS, "window_base_t_get_prop_theme"},
{"window_base_t_get_prop_design_w", wrap_window_base_t_get_prop_design_w, METH_VARARGS, "window_base_t_get_prop_design_w"},
{"window_base_t_get_prop_design_h", wrap_window_base_t_get_prop_design_h, METH_VARARGS, "window_base_t_get_prop_design_h"},
{"window_base_t_get_prop_auto_scale_children_x", wrap_window_base_t_get_prop_auto_scale_children_x, METH_VARARGS, "window_base_t_get_prop_auto_scale_children_x"},
{"window_base_t_get_prop_auto_scale_children_y", wrap_window_base_t_get_prop_auto_scale_children_y, METH_VARARGS, "window_base_t_get_prop_auto_scale_children_y"},
{"window_base_t_get_prop_auto_scale_children_w", wrap_window_base_t_get_prop_auto_scale_children_w, METH_VARARGS, "window_base_t_get_prop_auto_scale_children_w"},
{"window_base_t_get_prop_auto_scale_children_h", wrap_window_base_t_get_prop_auto_scale_children_h, METH_VARARGS, "window_base_t_get_prop_auto_scale_children_h"},
{"window_base_t_get_prop_disable_anim", wrap_window_base_t_get_prop_disable_anim, METH_VARARGS, "window_base_t_get_prop_disable_anim"},
{"window_base_t_get_prop_closable", wrap_window_base_t_get_prop_closable, METH_VARARGS, "window_base_t_get_prop_closable"},
{"window_base_t_get_prop_open_anim_hint", wrap_window_base_t_get_prop_open_anim_hint, METH_VARARGS, "window_base_t_get_prop_open_anim_hint"},
{"window_base_t_get_prop_close_anim_hint", wrap_window_base_t_get_prop_close_anim_hint, METH_VARARGS, "window_base_t_get_prop_close_anim_hint"},
{"window_base_t_get_prop_move_focus_prev_key", wrap_window_base_t_get_prop_move_focus_prev_key, METH_VARARGS, "window_base_t_get_prop_move_focus_prev_key"},
{"window_base_t_get_prop_move_focus_next_key", wrap_window_base_t_get_prop_move_focus_next_key, METH_VARARGS, "window_base_t_get_prop_move_focus_next_key"},
{"window_base_t_get_prop_move_focus_up_key", wrap_window_base_t_get_prop_move_focus_up_key, METH_VARARGS, "window_base_t_get_prop_move_focus_up_key"},
{"window_base_t_get_prop_move_focus_down_key", wrap_window_base_t_get_prop_move_focus_down_key, METH_VARARGS, "window_base_t_get_prop_move_focus_down_key"},
{"window_base_t_get_prop_move_focus_left_key", wrap_window_base_t_get_prop_move_focus_left_key, METH_VARARGS, "window_base_t_get_prop_move_focus_left_key"},
{"window_base_t_get_prop_move_focus_right_key", wrap_window_base_t_get_prop_move_focus_right_key, METH_VARARGS, "window_base_t_get_prop_move_focus_right_key"},
{"window_base_t_get_prop_single_instance", wrap_window_base_t_get_prop_single_instance, METH_VARARGS, "window_base_t_get_prop_single_instance"},
{"style_mutable_set_name", wrap_style_mutable_set_name, METH_VARARGS, "style_mutable_set_name"},
{"style_mutable_set_int", wrap_style_mutable_set_int, METH_VARARGS, "style_mutable_set_int"},
{"style_mutable_cast", wrap_style_mutable_cast, METH_VARARGS, "style_mutable_cast"},
{"style_mutable_create", wrap_style_mutable_create, METH_VARARGS, "style_mutable_create"},
{"style_mutable_t_get_prop_name", wrap_style_mutable_t_get_prop_name, METH_VARARGS, "style_mutable_t_get_prop_name"},
{"native_window_move", wrap_native_window_move, METH_VARARGS, "native_window_move"},
{"native_window_resize", wrap_native_window_resize, METH_VARARGS, "native_window_resize"},
{"native_window_minimize", wrap_native_window_minimize, METH_VARARGS, "native_window_minimize"},
{"native_window_maximize", wrap_native_window_maximize, METH_VARARGS, "native_window_maximize"},
{"native_window_restore", wrap_native_window_restore, METH_VARARGS, "native_window_restore"},
{"native_window_center", wrap_native_window_center, METH_VARARGS, "native_window_center"},
{"native_window_show_border", wrap_native_window_show_border, METH_VARARGS, "native_window_show_border"},
{"native_window_set_fullscreen", wrap_native_window_set_fullscreen, METH_VARARGS, "native_window_set_fullscreen"},
{"native_window_set_cursor", wrap_native_window_set_cursor, METH_VARARGS, "native_window_set_cursor"},
{"timer_info_cast", wrap_timer_info_cast, METH_VARARGS, "timer_info_cast"},
{"timer_info_t_get_prop_ctx", wrap_timer_info_t_get_prop_ctx, METH_VARARGS, "timer_info_t_get_prop_ctx"},
{"timer_info_t_get_prop_id", wrap_timer_info_t_get_prop_id, METH_VARARGS, "timer_info_t_get_prop_id"},
{"timer_info_t_get_prop_now", wrap_timer_info_t_get_prop_now, METH_VARARGS, "timer_info_t_get_prop_now"},
{"gif_image_create", wrap_gif_image_create, METH_VARARGS, "gif_image_create"},
{"gif_image_cast", wrap_gif_image_cast, METH_VARARGS, "gif_image_cast"},
{"keyboard_create", wrap_keyboard_create, METH_VARARGS, "keyboard_create"},
{"keyboard_cast", wrap_keyboard_cast, METH_VARARGS, "keyboard_cast"},
{"object_default_create", wrap_object_default_create, METH_VARARGS, "object_default_create"},
{"object_default_clear_props", wrap_object_default_clear_props, METH_VARARGS, "object_default_clear_props"},
{"object_default_t_get_prop_props_size", wrap_object_default_t_get_prop_props_size, METH_VARARGS, "object_default_t_get_prop_props_size"},
{"object_array_create", wrap_object_array_create, METH_VARARGS, "object_array_create"},
{"object_array_clear_props", wrap_object_array_clear_props, METH_VARARGS, "object_array_clear_props"},
{"object_array_insert", wrap_object_array_insert, METH_VARARGS, "object_array_insert"},
{"object_array_push", wrap_object_array_push, METH_VARARGS, "object_array_push"},
{"object_array_remove", wrap_object_array_remove, METH_VARARGS, "object_array_remove"},
{"object_array_t_get_prop_size", wrap_object_array_t_get_prop_size, METH_VARARGS, "object_array_t_get_prop_size"},
{"dialog_create", wrap_dialog_create, METH_VARARGS, "dialog_create"},
{"dialog_create_simple", wrap_dialog_create_simple, METH_VARARGS, "dialog_create_simple"},
{"dialog_cast", wrap_dialog_cast, METH_VARARGS, "dialog_cast"},
{"dialog_get_title", wrap_dialog_get_title, METH_VARARGS, "dialog_get_title"},
{"dialog_get_client", wrap_dialog_get_client, METH_VARARGS, "dialog_get_client"},
{"dialog_open", wrap_dialog_open, METH_VARARGS, "dialog_open"},
{"dialog_set_title", wrap_dialog_set_title, METH_VARARGS, "dialog_set_title"},
{"dialog_modal", wrap_dialog_modal, METH_VARARGS, "dialog_modal"},
{"dialog_quit", wrap_dialog_quit, METH_VARARGS, "dialog_quit"},
{"dialog_is_quited", wrap_dialog_is_quited, METH_VARARGS, "dialog_is_quited"},
{"dialog_is_modal", wrap_dialog_is_modal, METH_VARARGS, "dialog_is_modal"},
{"dialog_toast", wrap_dialog_toast, METH_VARARGS, "dialog_toast"},
{"dialog_info", wrap_dialog_info, METH_VARARGS, "dialog_info"},
{"dialog_warn", wrap_dialog_warn, METH_VARARGS, "dialog_warn"},
{"dialog_confirm", wrap_dialog_confirm, METH_VARARGS, "dialog_confirm"},
{"dialog_t_get_prop_highlight", wrap_dialog_t_get_prop_highlight, METH_VARARGS, "dialog_t_get_prop_highlight"},
{"svg_image_create", wrap_svg_image_create, METH_VARARGS, "svg_image_create"},
{"svg_image_set_image", wrap_svg_image_set_image, METH_VARARGS, "svg_image_set_image"},
{"svg_image_cast", wrap_svg_image_cast, METH_VARARGS, "svg_image_cast"},
{"calibration_win_cast", wrap_calibration_win_cast, METH_VARARGS, "calibration_win_cast"},
{"idle_info_cast", wrap_idle_info_cast, METH_VARARGS, "idle_info_cast"},
{"idle_info_t_get_prop_ctx", wrap_idle_info_t_get_prop_ctx, METH_VARARGS, "idle_info_t_get_prop_ctx"},
{"idle_info_t_get_prop_id", wrap_idle_info_t_get_prop_id, METH_VARARGS, "idle_info_t_get_prop_id"},
{"window_create", wrap_window_create, METH_VARARGS, "window_create"},
{"window_create_default", wrap_window_create_default, METH_VARARGS, "window_create_default"},
{"window_set_fullscreen", wrap_window_set_fullscreen, METH_VARARGS, "window_set_fullscreen"},
{"window_set_auto_scale_children", wrap_window_set_auto_scale_children, METH_VARARGS, "window_set_auto_scale_children"},
{"window_open", wrap_window_open, METH_VARARGS, "window_open"},
{"window_open_and_close", wrap_window_open_and_close, METH_VARARGS, "window_open_and_close"},
{"window_close", wrap_window_close, METH_VARARGS, "window_close"},
{"window_close_force", wrap_window_close_force, METH_VARARGS, "window_close_force"},
{"window_cast", wrap_window_cast, METH_VARARGS, "window_cast"},
{"window_t_get_prop_fullscreen", wrap_window_t_get_prop_fullscreen, METH_VARARGS, "window_t_get_prop_fullscreen"},
{"combo_box_create", wrap_combo_box_create, METH_VARARGS, "combo_box_create"},
{"combo_box_cast", wrap_combo_box_cast, METH_VARARGS, "combo_box_cast"},
{"combo_box_set_open_window", wrap_combo_box_set_open_window, METH_VARARGS, "combo_box_set_open_window"},
{"combo_box_reset_options", wrap_combo_box_reset_options, METH_VARARGS, "combo_box_reset_options"},
{"combo_box_count_options", wrap_combo_box_count_options, METH_VARARGS, "combo_box_count_options"},
{"combo_box_set_selected_index", wrap_combo_box_set_selected_index, METH_VARARGS, "combo_box_set_selected_index"},
{"combo_box_set_localize_options", wrap_combo_box_set_localize_options, METH_VARARGS, "combo_box_set_localize_options"},
{"combo_box_set_value", wrap_combo_box_set_value, METH_VARARGS, "combo_box_set_value"},
{"combo_box_set_item_height", wrap_combo_box_set_item_height, METH_VARARGS, "combo_box_set_item_height"},
{"combo_box_append_option", wrap_combo_box_append_option, METH_VARARGS, "combo_box_append_option"},
{"combo_box_set_options", wrap_combo_box_set_options, METH_VARARGS, "combo_box_set_options"},
{"combo_box_get_value", wrap_combo_box_get_value, METH_VARARGS, "combo_box_get_value"},
{"combo_box_get_text", wrap_combo_box_get_text, METH_VARARGS, "combo_box_get_text"},
{"combo_box_t_get_prop_open_window", wrap_combo_box_t_get_prop_open_window, METH_VARARGS, "combo_box_t_get_prop_open_window"},
{"combo_box_t_get_prop_selected_index", wrap_combo_box_t_get_prop_selected_index, METH_VARARGS, "combo_box_t_get_prop_selected_index"},
{"combo_box_t_get_prop_value", wrap_combo_box_t_get_prop_value, METH_VARARGS, "combo_box_t_get_prop_value"},
{"combo_box_t_get_prop_localize_options", wrap_combo_box_t_get_prop_localize_options, METH_VARARGS, "combo_box_t_get_prop_localize_options"},
{"combo_box_t_get_prop_options", wrap_combo_box_t_get_prop_options, METH_VARARGS, "combo_box_t_get_prop_options"},
{"combo_box_t_get_prop_item_height", wrap_combo_box_t_get_prop_item_height, METH_VARARGS, "combo_box_t_get_prop_item_height"},
{"system_bar_create", wrap_system_bar_create, METH_VARARGS, "system_bar_create"},
{"system_bar_cast", wrap_system_bar_cast, METH_VARARGS, "system_bar_cast"},
{"spin_box_create", wrap_spin_box_create, METH_VARARGS, "spin_box_create"},
{"spin_box_cast", wrap_spin_box_cast, METH_VARARGS, "spin_box_cast"},
{"popup_create", wrap_popup_create, METH_VARARGS, "popup_create"},
{"popup_cast", wrap_popup_cast, METH_VARARGS, "popup_cast"},
{"popup_set_close_when_click", wrap_popup_set_close_when_click, METH_VARARGS, "popup_set_close_when_click"},
{"popup_set_close_when_click_outside", wrap_popup_set_close_when_click_outside, METH_VARARGS, "popup_set_close_when_click_outside"},
{"popup_set_close_when_timeout", wrap_popup_set_close_when_timeout, METH_VARARGS, "popup_set_close_when_timeout"},
{"popup_t_get_prop_close_when_click", wrap_popup_t_get_prop_close_when_click, METH_VARARGS, "popup_t_get_prop_close_when_click"},
{"popup_t_get_prop_close_when_click_outside", wrap_popup_t_get_prop_close_when_click_outside, METH_VARARGS, "popup_t_get_prop_close_when_click_outside"},
{"popup_t_get_prop_close_when_timeout", wrap_popup_t_get_prop_close_when_timeout, METH_VARARGS, "popup_t_get_prop_close_when_timeout"},
{"overlay_create", wrap_overlay_create, METH_VARARGS, "overlay_create"},
{"overlay_set_click_through", wrap_overlay_set_click_through, METH_VARARGS, "overlay_set_click_through"},
{"overlay_set_always_on_top", wrap_overlay_set_always_on_top, METH_VARARGS, "overlay_set_always_on_top"},
{"overlay_cast", wrap_overlay_cast, METH_VARARGS, "overlay_cast"},
{"overlay_t_get_prop_click_through", wrap_overlay_t_get_prop_click_through, METH_VARARGS, "overlay_t_get_prop_click_through"},
{"overlay_t_get_prop_always_on_top", wrap_overlay_t_get_prop_always_on_top, METH_VARARGS, "overlay_t_get_prop_always_on_top"},
{"image_create", wrap_image_create, METH_VARARGS, "image_create"},
{"image_set_draw_type", wrap_image_set_draw_type, METH_VARARGS, "image_set_draw_type"},
{"image_cast", wrap_image_cast, METH_VARARGS, "image_cast"},
{"image_t_get_prop_draw_type", wrap_image_t_get_prop_draw_type, METH_VARARGS, "image_t_get_prop_draw_type"},
{"combo_box_ex_create", wrap_combo_box_ex_create, METH_VARARGS, "combo_box_ex_create"},

{NULL, NULL, 0, NULL}};

#include "awtk_module_init.c"

