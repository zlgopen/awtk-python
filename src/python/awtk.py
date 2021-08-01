
def awtk_get_native_obj(obj):
    if(isinstance(obj, int)) :
        return obj;
    elif obj:
        return obj.nativeObj;
    else: 
      return 0

#
# 事件基类。
#
#
class TEvent(object):
  def __init__(self, nativeObj):
    self.nativeObj = nativeObj;


  #
  # 转换为event对象。
  #
  #> 供脚本语言使用
  # 
  # @param event event对象。
  #
  # @return event对象。
  #
  @classmethod
  def cast(cls, event): 
    return  TEvent(event_cast(awtk_get_native_obj(event)));


  #
  # 获取event类型。
  # 
  #
  # @return 返回event类型。
  #
  def get_type(self): 
    return event_get_type(awtk_get_native_obj(self));


  #
  # 创建event对象。
  #
  #主要给脚本语言使用。
  # 
  # @param type 事件类型。
  #
  # @return 返回事件对象。
  #
  @classmethod
  def create(cls, type): 
    return  TEvent(event_create(type));


  #
  # 销毁事件对象。
  #
  #主要给脚本语言使用。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def destroy(self): 
    return event_destroy(awtk_get_native_obj(self));


  #
  # 类型。
  #
  #
  @property
  def type(self):
    return event_t_get_prop_type(self.nativeObj);


  #
  # 结构体的大小。
  #
  #
  @property
  def size(self):
    return event_t_get_prop_size(self.nativeObj);


  #
  # 事件发生的时间。
  #
  #
  @property
  def time(self):
    return event_t_get_prop_time(self.nativeObj);


  #
  # 事件发生的目标对象。
  #
  #
  @property
  def target(self):
    return event_t_get_prop_target(self.nativeObj);


#
# 事件分发器, 用于实现观察者模式。
#
#
class TEmitter(object):
  def __init__(self, nativeObj):
    self.nativeObj = nativeObj;


  #
  # 创建emitter对象。
  # 
  #
  # @return 对象。
  #
  @classmethod
  def create(cls): 
    return  TEmitter(emitter_create());


  #
  # 分发事件。如果当前分发的回调函数返回RET_REMOVE，该回调函数将被移出。
  #禁用状态下，本函数不做任何事情。
  # 
  # @param e 事件对象。
  #
  # @return 如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。
  #
  def dispatch(self, e): 
    return emitter_dispatch(awtk_get_native_obj(self), awtk_get_native_obj(e));


  #
  # 分发事件。
  #> 对emitter_dispatch的包装，分发一个简单的事件。
  #如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。
  # 
  # @param type 事件类型。
  #
  # @return 
  #
  def dispatch_simple_event(self, type): 
    return emitter_dispatch_simple_event(awtk_get_native_obj(self), type);


  #
  # 注册指定事件的处理函数。
  # 
  # @param etype 事件类型。
  # @param handler 事件处理函数。
  # @param ctx 事件处理函数上下文。
  #
  # @return 返回id，用于emitter_off。
  #
  def on(self, etype, handler, ctx): 
    return emitter_on(awtk_get_native_obj(self), etype, handler, ctx);


  #
  # 注销指定事件的处理函数。
  # 
  # @param id emitter_on返回的ID。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def off(self, id): 
    return emitter_off(awtk_get_native_obj(self), id);


  #
  # 启用。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def enable(self): 
    return emitter_enable(awtk_get_native_obj(self));


  #
  # 禁用。
  #
  #禁用后emitter_dispatch无效，但可以注册和注销。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def disable(self): 
    return emitter_disable(awtk_get_native_obj(self));


  #
  # 销毁。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def destroy(self): 
    return emitter_destroy(awtk_get_native_obj(self));


  #
  # 转换为emitter对象(供脚本语言使用)。
  #
  #主要给脚本语言使用。
  # 
  # @param emitter emitter对象。
  #
  # @return 对象。
  #
  @classmethod
  def cast(cls, emitter): 
    return  TEmitter(emitter_cast(awtk_get_native_obj(emitter)));


#
# 点。包括一个x坐标和一个y坐标。
#
#
class TPoint(object):
  def __init__(self, nativeObj):
    self.nativeObj = nativeObj;


#
# 点(浮点数)。包括一个x坐标和一个y坐标。
#
#
class TPointf(object):
  def __init__(self, nativeObj):
    self.nativeObj = nativeObj;


#
# 矩形。包括一个x坐标、y坐标、宽度和高度。
#
#
class TRectf(object):
  def __init__(self, nativeObj):
    self.nativeObj = nativeObj;


  #
  # x坐标。
  #
  #
  @property
  def x(self):
    return rectf_t_get_prop_x(self.nativeObj);


  #
  # y坐标。
  #
  #
  @property
  def y(self):
    return rectf_t_get_prop_y(self.nativeObj);


  #
  # 宽度。
  #
  #
  @property
  def w(self):
    return rectf_t_get_prop_w(self.nativeObj);


  #
  # 高度。
  #
  #
  @property
  def h(self):
    return rectf_t_get_prop_h(self.nativeObj);


#
# 矩形。包括一个x坐标、y坐标、宽度和高度。
#
#
class TRect(object):
  def __init__(self, nativeObj):
    self.nativeObj = nativeObj;


  #
  # 创建rect对象。
  #
  #> 主要供脚本语言使用。
  # 
  # @param x x坐标。
  # @param y y坐标。
  # @param w 宽度。
  # @param h 高度。
  #
  # @return rect对象。
  #
  @classmethod
  def create(cls, x, y, w, h): 
    return  TRect(rect_create(x, y, w, h));


  #
  # 设置rect对象的xywh。
  #
  #> 主要供脚本语言使用。
  # 
  # @param x x坐标。
  # @param y y坐标。
  # @param w 宽度。
  # @param h 高度。
  #
  # @return rect对象。
  #
  def set(self, x, y, w, h): 
    return  TRect(rect_set(awtk_get_native_obj(self), x, y, w, h));


  #
  # 转换为rect对象。
  #
  #> 供脚本语言使用。
  # 
  # @param rect rect对象。
  #
  # @return rect对象。
  #
  @classmethod
  def cast(cls, rect): 
    return  TRect(rect_cast(awtk_get_native_obj(rect)));


  #
  # 销毁rect对象。
  #
  #> 主要供脚本语言使用。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def destroy(self): 
    return rect_destroy(awtk_get_native_obj(self));


  #
  # x坐标。
  #
  #
  @property
  def x(self):
    return rect_t_get_prop_x(self.nativeObj);


  #
  # y坐标。
  #
  #
  @property
  def y(self):
    return rect_t_get_prop_y(self.nativeObj);


  #
  # 宽度。
  #
  #
  @property
  def w(self):
    return rect_t_get_prop_w(self.nativeObj);


  #
  # 高度。
  #
  #
  @property
  def h(self):
    return rect_t_get_prop_h(self.nativeObj);


#
# 位图。
#
#
class TBitmap(object):
  def __init__(self, nativeObj):
    self.nativeObj = nativeObj;


  #
  # 创建图片对象(一般供脚本语言中使用)。
  # 
  #
  # @return 返回bitmap对象。
  #
  @classmethod
  def create(cls): 
    return  TBitmap(bitmap_create());


  #
  # 创建图片对象。
  # 
  # @param w 宽度。
  # @param h 高度。
  # @param line_length line_length。
  # @param format 格式。
  #
  # @return 返回bitmap对象。
  #
  @classmethod
  def create_ex(cls, w, h, line_length, format): 
    return  TBitmap(bitmap_create_ex(w, h, line_length, format));


  #
  # 获取图片一个像素占用的字节数。
  # 
  #
  # @return 返回一个像素占用的字节数。
  #
  def get_bpp(self): 
    return bitmap_get_bpp(awtk_get_native_obj(self));


  #
  # 销毁图片(for script only)。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def destroy(self): 
    return bitmap_destroy_with_self(awtk_get_native_obj(self));


  #
  # 获取位图格式对应的颜色位数。
  # 
  # @param format 位图格式。
  #
  # @return 成功返回颜色位数，失败返回0。
  #
  @classmethod
  def get_bpp_of_format(cls, format): 
    return bitmap_get_bpp_of_format(format);


  #
  # 宽度。
  #
  #
  @property
  def w(self):
    return bitmap_t_get_prop_w(self.nativeObj);


  #
  # 高度。
  #
  #
  @property
  def h(self):
    return bitmap_t_get_prop_h(self.nativeObj);


  #
  # 每一行实际占用的内存(也称为stride或pitch)，一般情况下为w*bpp。
  #
  #
  @property
  def line_length(self):
    return bitmap_t_get_prop_line_length(self.nativeObj);


  #
  # 标志。请参考{bitmap_flag_t}。
  #
  #
  @property
  def flags(self):
    return bitmap_t_get_prop_flags(self.nativeObj);


  #
  # 格式。请参考{bitmap_format_t}。
  #
  #
  @property
  def format(self):
    return bitmap_t_get_prop_format(self.nativeObj);


  #
  # 名称。
  #
  #
  @property
  def name(self):
    return bitmap_t_get_prop_name(self.nativeObj);


#
# 对象接口。
#
#
class TObject (TEmitter):
  def __init__(self, nativeObj):
    super(TObject, self).__init__(nativeObj)


  #
  # 引用计数减1。引用计数为0时，销毁对象。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def unref(self): 
    return object_unref(awtk_get_native_obj(self));


  #
  # 引用计数加1。
  # 
  # @param obj object对象。
  #
  # @return 返回object对象。
  #
  @classmethod
  def ref(cls, obj): 
    return  TObject(object_ref(awtk_get_native_obj(obj)));


  #
  # 获取对象的类型名称。
  # 
  #
  # @return 返回对象的类型名称。
  #
  def get_type(self): 
    return object_get_type(awtk_get_native_obj(self));


  #
  # 获取对象的描述信息。
  # 
  #
  # @return 返回对象的描述信息。
  #
  def get_desc(self): 
    return object_get_desc(awtk_get_native_obj(self));


  #
  # 获取对象占用内存的大小。
  # 
  #
  # @return 返回对象占用内存的大小。
  #
  def get_size(self): 
    return object_get_size(awtk_get_native_obj(self));


  #
  # 判断对象是否是集合。
  # 
  #
  # @return 返回TRUE表示是集合，否则不是。
  #
  def is_collection(self): 
    return object_is_collection(awtk_get_native_obj(self));


  #
  # 设置对象的名称。
  # 
  # @param name 对象的名称。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_name(self, name): 
    return object_set_name(awtk_get_native_obj(self), name);


  #
  # 比较两个对象。
  # 
  # @param other 比较的object对象。
  #
  # @return 返回比较结果。
  #
  def compare(self, other): 
    return object_compare(awtk_get_native_obj(self), awtk_get_native_obj(other));


  #
  # 获取指定属性的值。
  # 
  # @param name 属性的名称。
  # @param v 返回属性的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def get_prop(self, name, v): 
    return object_get_prop(awtk_get_native_obj(self), name, awtk_get_native_obj(v));


  #
  # 获取指定属性的字符串类型的值。
  # 
  # @param name 属性的名称。
  #
  # @return 返回指定属性的字符串类型的值。
  #
  def get_prop_str(self, name): 
    return object_get_prop_str(awtk_get_native_obj(self), name);


  #
  # 获取指定属性的指针类型的值。
  # 
  # @param name 属性的名称。
  #
  # @return 返回指定属性的指针类型的值。
  #
  def get_prop_pointer(self, name): 
    return object_get_prop_pointer(awtk_get_native_obj(self), name);


  #
  # 获取指定属性的object类型的值。
  # 
  # @param name 属性的名称。
  #
  # @return 返回指定属性的object类型的值。
  #
  def get_prop_object(self, name): 
    return  TObject(object_get_prop_object(awtk_get_native_obj(self), name));


  #
  # 获取指定属性的整数类型的值。
  # 
  # @param name 属性的名称。
  # @param defval 缺省值。
  #
  # @return 返回指定属性的整数类型的值。
  #
  def get_prop_int(self, name, defval): 
    return object_get_prop_int(awtk_get_native_obj(self), name, defval);


  #
  # 获取指定属性的bool类型的值。
  # 
  # @param name 属性的名称。
  # @param defval 缺省值。
  #
  # @return 返回指定属性的bool类型的值。
  #
  def get_prop_bool(self, name, defval): 
    return object_get_prop_bool(awtk_get_native_obj(self), name, defval);


  #
  # 获取指定属性的浮点数类型的值。
  # 
  # @param name 属性的名称。
  # @param defval 缺省值。
  #
  # @return 返回指定属性的浮点数类型的值。
  #
  def get_prop_float(self, name, defval): 
    return object_get_prop_float(awtk_get_native_obj(self), name, defval);


  #
  # 获取指定属性的浮点数类型的值。
  # 
  # @param name 属性的名称。
  # @param defval 缺省值。
  #
  # @return 返回指定属性的浮点数类型的值。
  #
  def get_prop_double(self, name, defval): 
    return object_get_prop_double(awtk_get_native_obj(self), name, defval);


  #
  # 删除指定属性。
  # 
  # @param name 属性的名称。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def remove_prop(self, name): 
    return object_remove_prop(awtk_get_native_obj(self), name);


  #
  # 设置指定属性的值。
  # 
  # @param name 属性的名称。
  # @param value 属性的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_prop(self, name, value): 
    return object_set_prop(awtk_get_native_obj(self), name, awtk_get_native_obj(value));


  #
  # 设置指定属性的字符串类型的值。
  # 
  # @param name 属性的名称。
  # @param value 属性的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_prop_str(self, name, value): 
    return object_set_prop_str(awtk_get_native_obj(self), name, value);


  #
  # 设置指定属性的object类型的值。
  # 
  # @param name 属性的名称。
  # @param value 属性的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_prop_object(self, name, value): 
    return object_set_prop_object(awtk_get_native_obj(self), name, awtk_get_native_obj(value));


  #
  # 设置指定属性的整数类型的值。
  # 
  # @param name 属性的名称。
  # @param value 属性的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_prop_int(self, name, value): 
    return object_set_prop_int(awtk_get_native_obj(self), name, value);


  #
  # 设置指定属性的bool类型的值。
  # 
  # @param name 属性的名称。
  # @param value 属性的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_prop_bool(self, name, value): 
    return object_set_prop_bool(awtk_get_native_obj(self), name, value);


  #
  # 设置指定属性的浮点数类型的值。
  # 
  # @param name 属性的名称。
  # @param value 属性的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_prop_float(self, name, value): 
    return object_set_prop_float(awtk_get_native_obj(self), name, value);


  #
  # 设置指定属性的浮点数类型的值。
  # 
  # @param name 属性的名称。
  # @param value 属性的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_prop_double(self, name, value): 
    return object_set_prop_double(awtk_get_native_obj(self), name, value);


  #
  # 拷贝指定的属性。
  # 
  # @param src 源对象。
  # @param name 属性的名称。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def copy_prop(self, src, name): 
    return object_copy_prop(awtk_get_native_obj(self), awtk_get_native_obj(src), name);


  #
  # 检查是否存在指定的属性。
  # 
  # @param name 属性的名称。
  #
  # @return 返回TRUE表示存在，否则表示不存在。
  #
  def has_prop(self, name): 
    return object_has_prop(awtk_get_native_obj(self), name);


  #
  # 计算一个表达式，表达式中引用的变量从prop中获取。
  # 
  # @param expr 表达式。
  # @param v 返回计算结果。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def eval(self, expr, v): 
    return object_eval(awtk_get_native_obj(self), expr, awtk_get_native_obj(v));


  #
  # 检查是否可以执行指定的命令。
  # 
  # @param name 命令的名称。
  # @param args 命令的参数。
  #
  # @return 返回TRUE表示可以执行，否则表示不可以执行。
  #
  def can_exec(self, name, args): 
    return object_can_exec(awtk_get_native_obj(self), name, args);


  #
  # 执行指定的命令。
  # 
  # @param name 命令的名称。
  # @param args 命令的参数。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def execute(self, name, args): 
    return object_exec(awtk_get_native_obj(self), name, args);


  #
  # 触发EVT_PROPS_CHANGED事件。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def notify_changed(self): 
    return object_notify_changed(awtk_get_native_obj(self));


  #
  # 检查是否存在指定的属性。
  # 
  # @param path 属性的path，各级之间用.分隔。
  #
  # @return 返回TRUE表示存在，否则表示不存在。
  #
  def has_prop_by_path(self, path): 
    return object_has_prop_by_path(awtk_get_native_obj(self), path);


  #
  # 获取指定属性的字符串类型的值。
  # 
  # @param path 属性的path。
  #
  # @return 返回指定属性的字符串类型的值。
  #
  def get_prop_str_by_path(self, path): 
    return object_get_prop_str_by_path(awtk_get_native_obj(self), path);


  #
  # 获取指定属性的指针类型的值。
  # 
  # @param path 属性的path。
  #
  # @return 返回指定属性的指针类型的值。
  #
  def get_prop_pointer_by_path(self, path): 
    return object_get_prop_pointer_by_path(awtk_get_native_obj(self), path);


  #
  # 获取指定属性的object类型的值。
  # 
  # @param path 属性的path。
  #
  # @return 返回指定属性的object类型的值。
  #
  def get_prop_object_by_path(self, path): 
    return  TObject(object_get_prop_object_by_path(awtk_get_native_obj(self), path));


  #
  # 获取指定属性的整数类型的值。
  # 
  # @param path 属性的path。
  # @param defval 缺省值。
  #
  # @return 返回指定属性的整数类型的值。
  #
  def get_prop_int_by_path(self, path, defval): 
    return object_get_prop_int_by_path(awtk_get_native_obj(self), path, defval);


  #
  # 获取指定属性的bool类型的值。
  # 
  # @param path 属性的path。
  # @param defval 缺省值。
  #
  # @return 返回指定属性的bool类型的值。
  #
  def get_prop_bool_by_path(self, path, defval): 
    return object_get_prop_bool_by_path(awtk_get_native_obj(self), path, defval);


  #
  # 获取指定属性的浮点数类型的值。
  #
  #e
  # 
  # @param path 属性的path。
  # @param defval 缺省值。
  #
  # @return 返回指定属性的浮点数类型的值。
  #
  def get_prop_float_by_path(self, path, defval): 
    return object_get_prop_float_by_path(awtk_get_native_obj(self), path, defval);


  #
  # 设置指定属性的值。
  # 
  # @param path 属性的path。
  # @param value 属性的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_prop_by_path(self, path, value): 
    return object_set_prop_by_path(awtk_get_native_obj(self), path, awtk_get_native_obj(value));


  #
  # 设置指定属性的字符串类型的值。
  # 
  # @param path 属性的path。
  # @param value 属性的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_prop_str_by_path(self, path, value): 
    return object_set_prop_str_by_path(awtk_get_native_obj(self), path, value);


  #
  # 设置指定属性的object类型的值。
  # 
  # @param path 属性的path。
  # @param value 属性的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_prop_object_by_path(self, path, value): 
    return object_set_prop_object_by_path(awtk_get_native_obj(self), path, awtk_get_native_obj(value));


  #
  # 设置指定属性的整数类型的值。
  # 
  # @param path 属性的path。
  # @param value 属性的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_prop_int_by_path(self, path, value): 
    return object_set_prop_int_by_path(awtk_get_native_obj(self), path, value);


  #
  # 设置指定属性的bool类型的值。
  # 
  # @param path 属性的path。
  # @param value 属性的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_prop_bool_by_path(self, path, value): 
    return object_set_prop_bool_by_path(awtk_get_native_obj(self), path, value);


  #
  # 设置指定属性的浮点数类型的值。
  # 
  # @param path 属性的path。
  # @param value 属性的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_prop_float_by_path(self, path, value): 
    return object_set_prop_float_by_path(awtk_get_native_obj(self), path, value);


  #
  # 检查是否可以执行指定的命令。
  # 
  # @param path 命令的path。
  # @param args 命令的参数。
  #
  # @return 返回TRUE表示可以执行，否则表示不可以执行。
  #
  def can_exec_by_path(self, path, args): 
    return object_can_exec_by_path(awtk_get_native_obj(self), path, args);


  #
  # 执行指定的命令。
  # 
  # @param path 命令的path。
  # @param args 命令的参数。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def execute_by_path(self, path, args): 
    return object_exec_by_path(awtk_get_native_obj(self), path, args);


  #
  # 获取指定属性的int8类型的值。
  # 
  # @param name 属性的名称。
  # @param defval 缺省值。
  #
  # @return 返回指定属性的int8类型的值。
  #
  def get_prop_int8(self, name, defval): 
    return object_get_prop_int8(awtk_get_native_obj(self), name, defval);


  #
  # 设置指定属性的int8类型的值。
  # 
  # @param name 属性的名称。
  # @param value 属性的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_prop_int8(self, name, value): 
    return object_set_prop_int8(awtk_get_native_obj(self), name, value);


  #
  # 获取指定属性的uint8类型的值。
  # 
  # @param name 属性的名称。
  # @param defval 缺省值。
  #
  # @return 返回指定属性的uint8类型的值。
  #
  def get_prop_uint8(self, name, defval): 
    return object_get_prop_uint8(awtk_get_native_obj(self), name, defval);


  #
  # 设置指定属性的uint8类型的值。
  # 
  # @param name 属性的名称。
  # @param value 属性的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_prop_uint8(self, name, value): 
    return object_set_prop_uint8(awtk_get_native_obj(self), name, value);


  #
  # 获取指定属性的int16类型的值。
  # 
  # @param name 属性的名称。
  # @param defval 缺省值。
  #
  # @return 返回指定属性的int16类型的值。
  #
  def get_prop_int16(self, name, defval): 
    return object_get_prop_int16(awtk_get_native_obj(self), name, defval);


  #
  # 设置指定属性的int16类型的值。
  # 
  # @param name 属性的名称。
  # @param value 属性的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_prop_int16(self, name, value): 
    return object_set_prop_int16(awtk_get_native_obj(self), name, value);


  #
  # 获取指定属性的uint16类型的值。
  # 
  # @param name 属性的名称。
  # @param defval 缺省值。
  #
  # @return 返回指定属性的uint16类型的值。
  #
  def get_prop_uint16(self, name, defval): 
    return object_get_prop_uint16(awtk_get_native_obj(self), name, defval);


  #
  # 设置指定属性的uint16类型的值。
  # 
  # @param name 属性的名称。
  # @param value 属性的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_prop_uint16(self, name, value): 
    return object_set_prop_uint16(awtk_get_native_obj(self), name, value);


  #
  # 获取指定属性的int32类型的值。
  # 
  # @param name 属性的名称。
  # @param defval 缺省值。
  #
  # @return 返回指定属性的int32类型的值。
  #
  def get_prop_int32(self, name, defval): 
    return object_get_prop_int32(awtk_get_native_obj(self), name, defval);


  #
  # 设置指定属性的int32类型的值。
  # 
  # @param name 属性的名称。
  # @param value 属性的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_prop_int32(self, name, value): 
    return object_set_prop_int32(awtk_get_native_obj(self), name, value);


  #
  # 获取指定属性的uint32类型的值。
  # 
  # @param name 属性的名称。
  # @param defval 缺省值。
  #
  # @return 返回指定属性的uint32类型的值。
  #
  def get_prop_uint32(self, name, defval): 
    return object_get_prop_uint32(awtk_get_native_obj(self), name, defval);


  #
  # 设置指定属性的uint32类型的值。
  # 
  # @param name 属性的名称。
  # @param value 属性的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_prop_uint32(self, name, value): 
    return object_set_prop_uint32(awtk_get_native_obj(self), name, value);


  #
  # 获取指定属性的int64类型的值。
  # 
  # @param name 属性的名称。
  # @param defval 缺省值。
  #
  # @return 返回指定属性的int64类型的值。
  #
  def get_prop_int64(self, name, defval): 
    return object_get_prop_int64(awtk_get_native_obj(self), name, defval);


  #
  # 设置指定属性的int64类型的值。
  # 
  # @param name 属性的名称。
  # @param value 属性的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_prop_int64(self, name, value): 
    return object_set_prop_int64(awtk_get_native_obj(self), name, value);


  #
  # 获取指定属性的uint64类型的值。
  # 
  # @param name 属性的名称。
  # @param defval 缺省值。
  #
  # @return 返回指定属性的uint64类型的值。
  #
  def get_prop_uint64(self, name, defval): 
    return object_get_prop_uint64(awtk_get_native_obj(self), name, defval);


  #
  # 设置指定属性的uint64类型的值。
  # 
  # @param name 属性的名称。
  # @param value 属性的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_prop_uint64(self, name, value): 
    return object_set_prop_uint64(awtk_get_native_obj(self), name, value);


  #
  # 引用计数。
  #
  #
  @property
  def ref_count(self):
    return object_t_get_prop_ref_count(self.nativeObj);


  #
  # 对象的名称。
  #
  #
  @property
  def name(self):
    return object_t_get_prop_name(self.nativeObj);

  @name.setter
  def name(self, v):
   this.set_name(v);


#
# 一个通用数据类型，用来存放整数、浮点数、字符串和其它对象。
#
#在C/C++中，一般不需动态创建对象，直接声明并初始化即可。如：
#
#
#> 在脚本语言中，需要动态创建对象。
#
#
class TValue(object):
  def __init__(self, nativeObj):
    self.nativeObj = nativeObj;


  #
  # 设置类型为bool的值。
  # 
  # @param value 待设置的值。
  #
  # @return value对象本身。
  #
  def set_bool(self, value): 
    return  TValue(value_set_bool(awtk_get_native_obj(self), value));


  #
  # 获取类型为bool的值。
  # 
  #
  # @return 值。
  #
  def bool(self): 
    return value_bool(awtk_get_native_obj(self));


  #
  # 设置类型为int8的值。
  # 
  # @param value 待设置的值。
  #
  # @return value对象本身。
  #
  def set_int8(self, value): 
    return  TValue(value_set_int8(awtk_get_native_obj(self), value));


  #
  # 获取类型为int8的值。
  # 
  #
  # @return 值。
  #
  def int8(self): 
    return value_int8(awtk_get_native_obj(self));


  #
  # 设置类型为uint8的值。
  # 
  # @param value 待设置的值。
  #
  # @return value对象本身。
  #
  def set_uint8(self, value): 
    return  TValue(value_set_uint8(awtk_get_native_obj(self), value));


  #
  # 获取类型为uint8的值。
  # 
  #
  # @return 值。
  #
  def uint8(self): 
    return value_uint8(awtk_get_native_obj(self));


  #
  # 设置类型为int16的值。
  # 
  # @param value 待设置的值。
  #
  # @return value对象本身。
  #
  def set_int16(self, value): 
    return  TValue(value_set_int16(awtk_get_native_obj(self), value));


  #
  # 获取类型为int16的值。
  # 
  #
  # @return 值。
  #
  def int16(self): 
    return value_int16(awtk_get_native_obj(self));


  #
  # 设置类型为uint16的值。
  # 
  # @param value 待设置的值。
  #
  # @return value对象本身。
  #
  def set_uint16(self, value): 
    return  TValue(value_set_uint16(awtk_get_native_obj(self), value));


  #
  # 获取类型为uint16的值。
  # 
  #
  # @return 值。
  #
  def uint16(self): 
    return value_uint16(awtk_get_native_obj(self));


  #
  # 设置类型为int32的值。
  # 
  # @param value 待设置的值。
  #
  # @return value对象本身。
  #
  def set_int32(self, value): 
    return  TValue(value_set_int32(awtk_get_native_obj(self), value));


  #
  # 获取类型为int32的值。
  # 
  #
  # @return 值。
  #
  def int32(self): 
    return value_int32(awtk_get_native_obj(self));


  #
  # 设置类型为uint32的值。
  # 
  # @param value 待设置的值。
  #
  # @return value对象本身。
  #
  def set_uint32(self, value): 
    return  TValue(value_set_uint32(awtk_get_native_obj(self), value));


  #
  # 设置类型为int64的值。
  # 
  # @param value 待设置的值。
  #
  # @return value对象本身。
  #
  def set_int64(self, value): 
    return  TValue(value_set_int64(awtk_get_native_obj(self), value));


  #
  # 获取类型为int64的值。
  # 
  #
  # @return 值。
  #
  def int64(self): 
    return value_int64(awtk_get_native_obj(self));


  #
  # 设置类型为uint64的值。
  # 
  # @param value 待设置的值。
  #
  # @return value对象本身。
  #
  def set_uint64(self, value): 
    return  TValue(value_set_uint64(awtk_get_native_obj(self), value));


  #
  # 获取类型为uint64的值。
  # 
  #
  # @return 值。
  #
  def uint64(self): 
    return value_uint64(awtk_get_native_obj(self));


  #
  # 设置类型为float\_t的值。
  # 
  # @param value 待设置的值。
  #
  # @return value对象本身。
  #
  def set_float(self, value): 
    return  TValue(value_set_float(awtk_get_native_obj(self), value));


  #
  # 获取类型为float的值。
  # 
  #
  # @return 值。
  #
  def float32(self): 
    return value_float32(awtk_get_native_obj(self));


  #
  # 设置类型为double的值。
  # 
  # @param value 待设置的值。
  #
  # @return value对象本身。
  #
  def set_float64(self, value): 
    return  TValue(value_set_double(awtk_get_native_obj(self), value));


  #
  # 获取类型为double的值。
  # 
  #
  # @return 值。
  #
  def float64(self): 
    return value_double(awtk_get_native_obj(self));


  #
  # 设置类型为字符串的值(并拷贝字符串)。
  # 
  # @param value 待设置的值。
  #
  # @return value对象本身。
  #
  def set_str(self, value): 
    return  TValue(value_dup_str(awtk_get_native_obj(self), value));


  #
  # 获取类型为字符串的值。
  # 
  #
  # @return 值。
  #
  def str(self): 
    return value_str(awtk_get_native_obj(self));


  #
  # 获取类型为字符串的值。
  # 
  # @param buff 用于格式转换的缓冲区。
  # @param size 缓冲区大小。
  #
  # @return 值。
  #
  def str_ex(self, buff, size): 
    return value_str_ex(awtk_get_native_obj(self), buff, size);


  #
  # 判断value是否为空值。
  # 
  #
  # @return 为空值返回TRUE，否则返回FALSE。
  #
  def is_null(self): 
    return value_is_null(awtk_get_native_obj(self));


  #
  # 设置类型为int的值。
  # 
  # @param value 待设置的值。
  #
  # @return value对象本身。
  #
  def set_int(self, value): 
    return  TValue(value_set_int(awtk_get_native_obj(self), value));


  #
  # 设置类型为object的值。
  # 
  # @param value 待设置的值。
  #
  # @return value对象本身。
  #
  def set_object(self, value): 
    return  TValue(value_set_object(awtk_get_native_obj(self), awtk_get_native_obj(value)));


  #
  # 转换为object的值。
  # 
  #
  # @return 值。
  #
  def object(self): 
    return  TObject(value_object(awtk_get_native_obj(self)));


  #
  # 设置类型为token的值。
  # 
  # @param value 待设置的值。
  #
  # @return value对象本身。
  #
  def set_token(self, value): 
    return  TValue(value_set_token(awtk_get_native_obj(self), value));


  #
  # 获取token的值。
  # 
  #
  # @return 值。
  #
  def token(self): 
    return value_token(awtk_get_native_obj(self));


  #
  # 创建value对象。
  # 
  #
  # @return 对象。
  #
  @classmethod
  def create(cls): 
    return  TValue(value_create());


  #
  # 销毁value对象。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def destroy(self): 
    return value_destroy(awtk_get_native_obj(self));


  #
  # 重置value对象。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def reset(self): 
    return value_reset(awtk_get_native_obj(self));


  #
  # 转换为value对象。
  #
  #> 供脚本语言使用
  # 
  # @param value value对象。
  #
  # @return 对象。
  #
  @classmethod
  def cast(cls, value): 
    return  TValue(value_cast(awtk_get_native_obj(value)));


#
# TK全局对象。
#
#
class TGlobal(object):

  #
  # 初始化TK。
  # 
  # @param w LCD宽度。
  # @param h LCD高度。
  # @param app_type 应用程序的类型。
  # @param app_name 应用程序的名称(必须为常量字符串)。
  # @param app_root 应用程序的根目录，用于定位资源文件(必须为常量字符串)。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  @classmethod
  def init(cls, w, h, app_type, app_name, app_root): 
    return tk_init(w, h, app_type, app_name, app_root);


  #
  # 进入TK事件主循环。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  @classmethod
  def run(cls): 
    return tk_run();


  #
  # 退出TK事件主循环。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  @classmethod
  def quit(cls): 
    return tk_quit();


  #
  # 获取全局指针的X坐标。
  # 
  #
  # @return 返回全局指针的X坐标。
  #
  @classmethod
  def get_pointer_x(cls): 
    return tk_get_pointer_x();


  #
  # 获取全局指针的Y坐标。
  # 
  #
  # @return 返回全局指针的X坐标。
  #
  @classmethod
  def get_pointer_y(cls): 
    return tk_get_pointer_y();


  #
  # 获取全局指针是否按下。
  # 
  #
  # @return 返回全局指针是否按下。
  #
  @classmethod
  def is_pointer_pressed(cls): 
    return tk_is_pointer_pressed();


#
# bidi 类型常量定义。
#
#
class TBidiType: 

  #
  # 自动检查。
  #
  #
  AUTO = BIDI_TYPE_AUTO();

  #
  # Left-To-Right letter。
  #
  #
  LTR = BIDI_TYPE_LTR();

  #
  # Right-To-Left letter。
  #
  #
  RTL = BIDI_TYPE_RTL();

  #
  # Left-To-Right letter Override。
  #
  #
  LRO = BIDI_TYPE_LRO();

  #
  # Right-To-Left letter Override。
  #
  #
  RLO = BIDI_TYPE_RLO();

  #
  # Weak Left To Right paragraph。
  #
  #
  WLTR = BIDI_TYPE_WLTR();

  #
  # Weak Right To Left paragraph。
  #
  #
  WRTL = BIDI_TYPE_WRTL();

#
# 图片绘制方法常量定义。
#
#
class TImageDrawType: 

  #
  # 缺省显示。将图片按原大小显示在目标矩形的左上角。
  #
  #
  DEFAULT = IMAGE_DRAW_DEFAULT();

  #
  # 居中显示。将图片按原大小显示在目标矩形的中央。
  #
  #
  CENTER = IMAGE_DRAW_CENTER();

  #
  # 图标显示。同居中显示，但会根据屏幕密度调整大小。
  #
  #
  ICON = IMAGE_DRAW_ICON();

  #
  # 缩放显示。将图片缩放至目标矩形的大小(不保证宽高成比例)。
  #
  #
  SCALE = IMAGE_DRAW_SCALE();

  #
  # 自动缩放显示。将图片缩放至目标矩形的宽度或高度(选取最小的比例)，并居中显示。
  #
  #
  SCALE_AUTO = IMAGE_DRAW_SCALE_AUTO();

  #
  # 如果图片比目标矩形大，自动缩小显示，否则居中显示。
  #
  #
  SCALE_DOWN = IMAGE_DRAW_SCALE_DOWN();

  #
  # 宽度缩放显示。 将图片缩放至目标矩形的宽度，高度按此比例进行缩放，超出不部分不显示。
  #
  #
  SCALE_W = IMAGE_DRAW_SCALE_W();

  #
  # 高度缩放显示。将图片缩放至目标矩形的高度，宽度按此比例进行缩放，超出不部分不显示。
  #
  #
  SCALE_H = IMAGE_DRAW_SCALE_H();

  #
  # 平铺显示。
  #
  #
  REPEAT = IMAGE_DRAW_REPEAT();

  #
  # 水平方向平铺显示，垂直方向缩放。
  #
  #
  REPEAT_X = IMAGE_DRAW_REPEAT_X();

  #
  # 垂直方向平铺显示，水平方向缩放。
  #
  #
  REPEAT_Y = IMAGE_DRAW_REPEAT_Y();

  #
  # 垂直方向平铺显示，水平方向缩放(从底部到顶部)。
  #
  #
  REPEAT_Y_INVERSE = IMAGE_DRAW_REPEAT_Y_INVERSE();

  #
  # 9宫格显示。
  #将图片分成等大小的9块，4个角按原大小显示在目标矩形的4个角，左右上下和中间5块分别缩放显示在对应的目标区域。
  #
  #
  PATCH9 = IMAGE_DRAW_PATCH9();

  #
  # 水平方向3宫格显示，垂直方向居中显示。
  #将图片在水平方向上分成等大小的3块，左右两块按原大小显示在目标矩形的左右，中间一块缩放显示在目标区域中间剩余部分。
  #
  #
  PATCH3_X = IMAGE_DRAW_PATCH3_X();

  #
  # 垂直方向3宫格显示，水平方向居中显示。
  #将图片在垂直方向上分成等大小的3块，上下两块按原大小显示在目标矩形的上下，中间一块缩放显示在目标区域中间剩余部分。
  #
  #
  PATCH3_Y = IMAGE_DRAW_PATCH3_Y();

  #
  # 水平方向3宫格显示，垂直方向缩放显示。
  #将图片在水平方向上分成等大小的3块，左右两块按原大小显示在目标矩形的左右，中间一块缩放显示在目标区域中间剩余部分。
  #
  #
  PATCH3_X_SCALE_Y = IMAGE_DRAW_PATCH3_X_SCALE_Y();

  #
  # 垂直方向3宫格显示，水平方向缩放显示。
  #将图片在垂直方向上分成等大小的3块，上下两块按原大小显示在目标矩形的上下，中间一块缩放显示在目标区域中间剩余部分。
  #
  #
  PATCH3_Y_SCALE_X = IMAGE_DRAW_PATCH3_Y_SCALE_X();

  #
  # 平铺9宫格显示。
  #将图片分成4个角和5块平铺块，4个角按原大小显示在目标矩形的4个角，其余5块会平铺对应的目标区域。
  #切割方法为（如下图）：
  #如果图片宽度为奇数，则中间一块为一列数据，如果图片宽度为偶数，则中间一块为二列数据，其他数据分为左右块
  #如果图片高度为奇数，则中间一块为一行数据，如果图片高度为偶数，则中间一块为二行数据，其他数据分为上下块
  #中间一块数据根据上面两条规则组成4中情况，分别是一列一行数据，一列两行数据，两列一行数据和两行两列数据
  #
  #
  REPEAT9 = IMAGE_DRAW_REPEAT9();

  #
  # 水平方向3宫格显示，垂直方向居中显示。
  #将图片在水平方向上分成左右相等两块和中间一块，如果图片宽度为奇数，则中间一块为一列数据，如果图片宽度为偶数，则中间一块为二列数据，其他数据分为左右块。
  #左右两块按原大小显示在目标矩形的左右，中间一列像素点平铺显示在目标区域中间剩余部分。
  #
  #
  REPEAT3_X = IMAGE_DRAW_REPEAT3_X();

  #
  # 垂直方向3宫格显示，水平方向居中显示。
  #将图片在垂直方向上分成上下相等两块和中间一块，如果图片高度为奇数，则中间一块为一行数据，如果图片高度为偶数，则中间一块为二行数据，其他数据分为上下块
  #上下两块按原大小显示在目标矩形的上下，中间一块平铺显示在目标区域中间剩余部分。
  #
  #
  REPEAT3_Y = IMAGE_DRAW_REPEAT3_Y();

#
# 离线画布 canvas。
#
#
class TCanvasOffline(object):
  def __init__(self, nativeObj):
    self.nativeObj = nativeObj;


#
# 提供基本的绘图功能和状态管理。
#
#
class TCanvas(object):
  def __init__(self, nativeObj):
    self.nativeObj = nativeObj;


  #
  # 获取画布的宽度。
  # 
  #
  # @return 返回画布的宽度。
  #
  def get_width(self): 
    return canvas_get_width(awtk_get_native_obj(self));


  #
  # 获取画布的高度。
  # 
  #
  # @return 返回画布的高度。
  #
  def get_height(self): 
    return canvas_get_height(awtk_get_native_obj(self));


  #
  # 获取裁剪区。
  # 
  # @param r rect对象。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def get_clip_rect(self, r): 
    return canvas_get_clip_rect(awtk_get_native_obj(self), awtk_get_native_obj(r));


  #
  # 设置裁剪区。
  # 
  # @param r rect对象。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_clip_rect(self, r): 
    return canvas_set_clip_rect(awtk_get_native_obj(self), awtk_get_native_obj(r));


  #
  # 设置裁剪区。
  # 
  # @param r rect对象。
  # @param translate 是否将裁剪区的位置加上canvas当前的偏移。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_clip_rect_ex(self, r, translate): 
    return canvas_set_clip_rect_ex(awtk_get_native_obj(self), awtk_get_native_obj(r), translate);


  #
  # 设置填充颜色。
  #
  #> 供脚本语言使用。
  # 
  # @param color 颜色。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_fill_color(self, color): 
    return canvas_set_fill_color_str(awtk_get_native_obj(self), color);


  #
  # 设置文本颜色。
  #
  #> 供脚本语言使用。
  # 
  # @param color 颜色。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_text_color(self, color): 
    return canvas_set_text_color_str(awtk_get_native_obj(self), color);


  #
  # 设置线条颜色。
  #
  #> 供脚本语言使用。
  # 
  # @param color 颜色。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_stroke_color(self, color): 
    return canvas_set_stroke_color_str(awtk_get_native_obj(self), color);


  #
  # 设置全局alpha值。
  # 
  # @param alpha alpha值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_global_alpha(self, alpha): 
    return canvas_set_global_alpha(awtk_get_native_obj(self), alpha);


  #
  # 平移原点坐标。
  # 
  # @param dx x偏移。
  # @param dy y偏移。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def translate(self, dx, dy): 
    return canvas_translate(awtk_get_native_obj(self), dx, dy);


  #
  # 反向平移原点坐标。
  # 
  # @param dx x偏移。
  # @param dy y偏移。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def untranslate(self, dx, dy): 
    return canvas_untranslate(awtk_get_native_obj(self), dx, dy);


  #
  # 画垂直线。
  # 
  # @param x x坐标。
  # @param y y坐标。
  # @param h 高度。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def draw_vline(self, x, y, h): 
    return canvas_draw_vline(awtk_get_native_obj(self), x, y, h);


  #
  # 画水平线。
  # 
  # @param x x坐标。
  # @param y y坐标。
  # @param w 宽度。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def draw_hline(self, x, y, w): 
    return canvas_draw_hline(awtk_get_native_obj(self), x, y, w);


  #
  # 绘制矩形。
  # 
  # @param x x坐标。
  # @param y y坐标。
  # @param w 宽度。
  # @param h 高度。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def fill_rect(self, x, y, w, h): 
    return canvas_fill_rect(awtk_get_native_obj(self), x, y, w, h);


  #
  # 用填充颜色填充指定矩形。
  #
  #> 如果lcd的颜色格式带alpha通道，连同alpha的值一起修改。
  # 
  # @param x x坐标。
  # @param y y坐标。
  # @param w 宽度。
  # @param h 高度。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def clear_rect(self, x, y, w, h): 
    return canvas_clear_rect(awtk_get_native_obj(self), x, y, w, h);


  #
  # 绘制矩形。
  # 
  # @param x x坐标。
  # @param y y坐标。
  # @param w 宽度。
  # @param h 高度。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def stroke_rect(self, x, y, w, h): 
    return canvas_stroke_rect(awtk_get_native_obj(self), x, y, w, h);


  #
  # 设置字体。
  # 
  # @param name 字体名称。
  # @param size 字体大小。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_font(self, name, size): 
    return canvas_set_font(awtk_get_native_obj(self), name, size);


  #
  # 计算文本所占的宽度。
  #
  #> 供脚本语言使用。
  # 
  # @param str 字符串。
  #
  # @return 返回文本所占的宽度。
  #
  def measure_text(self, str): 
    return canvas_measure_utf8(awtk_get_native_obj(self), str);


  #
  # 绘制文本。
  #
  #> 供脚本语言使用。
  # 
  # @param str 字符串。
  # @param x x坐标。
  # @param y y坐标。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def draw_text(self, str, x, y): 
    return canvas_draw_utf8(awtk_get_native_obj(self), str, x, y);


  #
  # 绘制文本。
  #
  #> 供脚本语言使用。
  # 
  # @param str 字符串。
  # @param r 矩形区域。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def draw_text_in_rect(self, str, r): 
    return canvas_draw_utf8_in_rect(awtk_get_native_obj(self), str, awtk_get_native_obj(r));


  #
  # 绘制图标。
  # 
  # @param img 图片对象。
  # @param cx 中心点x坐标。
  # @param cy 中心点y坐标。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def draw_icon(self, img, cx, cy): 
    return canvas_draw_icon(awtk_get_native_obj(self), awtk_get_native_obj(img), cx, cy);


  #
  # 绘制图片。
  # 
  # @param img 图片对象。
  # @param src 源区域。
  # @param dst 目的区域。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def draw_image(self, img, src, dst): 
    return canvas_draw_image(awtk_get_native_obj(self), awtk_get_native_obj(img), awtk_get_native_obj(src), awtk_get_native_obj(dst));


  #
  # 绘制图片。
  # 
  # @param img 图片对象。
  # @param draw_type 绘制类型。
  # @param dst 目的区域。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def draw_image_ex(self, img, draw_type, dst): 
    return canvas_draw_image_ex(awtk_get_native_obj(self), awtk_get_native_obj(img), draw_type, awtk_get_native_obj(dst));


  #
  # 绘制图片。
  # 
  # @param img 图片对象。
  # @param draw_type 绘制类型。
  # @param src 源区域。
  # @param dst 目的区域。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def draw_image_ex2(self, img, draw_type, src, dst): 
    return canvas_draw_image_ex2(awtk_get_native_obj(self), awtk_get_native_obj(img), draw_type, awtk_get_native_obj(src), awtk_get_native_obj(dst));


  #
  # 获取vgcanvas对象。
  # 
  #
  # @return 返回vgcanvas对象。
  #
  def get_vgcanvas(self): 
    return  TVgcanvas(canvas_get_vgcanvas(awtk_get_native_obj(self)));


  #
  # 转换为canvas对象(供脚本语言使用)。
  # 
  # @param c canvas对象。
  #
  # @return canvas对象。
  #
  @classmethod
  def cast(cls, c): 
    return  TCanvas(canvas_cast(awtk_get_native_obj(c)));


  #
  # 释放相关资源。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def reset(self): 
    return canvas_reset(awtk_get_native_obj(self));


  #
  # x坐标偏移。
  #
  #
  @property
  def ox(self):
    return canvas_t_get_prop_ox(self.nativeObj);


  #
  # y坐标偏移。
  #
  #
  @property
  def oy(self):
    return canvas_t_get_prop_oy(self.nativeObj);


  #
  # 当前字体名称。
  #
  #
  @property
  def font_name(self):
    return canvas_t_get_prop_font_name(self.nativeObj);


  #
  # 当前字体大小。
  #
  #
  @property
  def font_size(self):
    return canvas_t_get_prop_font_size(self.nativeObj);


  #
  # 当前全局alpha。
  #
  #
  @property
  def global_alpha(self):
    return canvas_t_get_prop_global_alpha(self.nativeObj);

  @global_alpha.setter
  def global_alpha(self, v):
   this.set_global_alpha(v);


#
# 剪切板数据类型定义。
#
#
class TClipBoardDataType: 

  #
  # 无数据。
  #
  #
  NONE = CLIP_BOARD_DATA_TYPE_NONE();

  #
  # UTF8文本。
  #
  #
  TEXT = CLIP_BOARD_DATA_TYPE_TEXT();

#
# 剪切板接口。
#
#
class TClipBoard(object):
  def __init__(self, nativeObj):
    self.nativeObj = nativeObj;


  #
  # 设置文本(UTF8)数据到剪切板。
  # 
  # @param text 文本。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  @classmethod
  def set_text(cls, text): 
    return clip_board_set_text(text);


  #
  # 从剪切板中获取文本(UTF8)数据。
  # 
  #
  # @return 返回文本数据。
  #
  @classmethod
  def get_text(cls): 
    return clip_board_get_text();


#
# 对话框退出码。
#
#> 一般用作dialog_quit函数的参数。
#
#
class TDialogQuitCode: 

  #
  # 对话框被强行关闭或不关心关闭原因。
  #
  #
  NONE = DIALOG_QUIT_NONE();

  #
  # 点击“OK”按钮关闭。
  #
  #
  OK = DIALOG_QUIT_OK();

  #
  # 点击“YES”按钮关闭。
  #
  #
  YES = DIALOG_QUIT_YES();

  #
  # 点击“CANCEL”按钮关闭。
  #
  #
  CANCEL = DIALOG_QUIT_CANCEL();

  #
  # 点击“NO”按钮关闭。
  #
  #
  NO = DIALOG_QUIT_NO();

  #
  # 点击其它按钮关闭。
  #
  #
  OTHER = DIALOG_QUIT_OTHER();

#
# 类型常量定义。
#
#
class TEventType: 

  #
  # 指针按下事件名(pointer_event_t)。
  #
  #
  POINTER_DOWN = EVT_POINTER_DOWN();

  #
  # 指针按下事件名，在子控件处理之前触发(pointer_event_t)。
  #
  #
  POINTER_DOWN_BEFORE_CHILDREN = EVT_POINTER_DOWN_BEFORE_CHILDREN();

  #
  # 指针移动事件名(pointer_event_t)。
  #
  #
  POINTER_MOVE = EVT_POINTER_MOVE();

  #
  # 指针移动事件名，在子控件处理之前触发(pointer_event_t)。
  #
  #
  POINTER_MOVE_BEFORE_CHILDREN = EVT_POINTER_MOVE_BEFORE_CHILDREN();

  #
  # 指针抬起事件名(pointer_event_t)。
  #
  #
  POINTER_UP = EVT_POINTER_UP();

  #
  # 指针抬起事件名，在子控件处理之前触发(pointer_event_t)。
  #
  #
  POINTER_UP_BEFORE_CHILDREN = EVT_POINTER_UP_BEFORE_CHILDREN();

  #
  # 滚轮事件名(wheel_event_t)。
  #
  #
  WHEEL = EVT_WHEEL();

  #
  # 鼠标滚轮事件名，在子控件处理之前触发(wheel_event_t)。
  #
  #
  WHEEL_BEFORE_CHILDREN = EVT_WHEEL_BEFORE_CHILDREN();

  #
  # 取消前一个指针按下事件名(pointer_event_t)。
  #
  #
  POINTER_DOWN_ABORT = EVT_POINTER_DOWN_ABORT();

  #
  # 右键/长按弹出上下文菜单的事件名(pointer_event_t)。
  #
  #
  CONTEXT_MENU = EVT_CONTEXT_MENU();

  #
  # 指针进入事件名(pointer_event_t)。
  #
  #
  POINTER_ENTER = EVT_POINTER_ENTER();

  #
  # 指针离开事件名(pointer_event_t)。
  #
  #
  POINTER_LEAVE = EVT_POINTER_LEAVE();

  #
  # 长按事件名(pointer_event_t)。
  #
  #
  LONG_PRESS = EVT_LONG_PRESS();

  #
  # 点击事件名(pointer_event_t)。
  #
  #
  CLICK = EVT_CLICK();

  #
  # 得到焦点事件名(event_t)。
  #
  #
  FOCUS = EVT_FOCUS();

  #
  # 失去焦点事件名(event_t)。
  #
  #
  BLUR = EVT_BLUR();

  #
  # 键按下事件名(key_event_t)。
  #
  #
  KEY_DOWN = EVT_KEY_DOWN();

  #
  # 键长按事件名(key_event_t)。
  #
  #
  KEY_LONG_PRESS = EVT_KEY_LONG_PRESS();

  #
  # 键按下事件名，在子控件处理之前触发(key_event_t)。
  #
  #
  KEY_DOWN_BEFORE_CHILDREN = EVT_KEY_DOWN_BEFORE_CHILDREN();

  #
  # 按键repeat事件名(key_event_t)。
  #
  #
  KEY_REPEAT = EVT_KEY_REPEAT();

  #
  # 键抬起事件名(key_event_t)。
  #
  #
  KEY_UP = EVT_KEY_UP();

  #
  # 键抬起事件名，在子控件处理之前触发(key_event_t)。
  #
  #
  KEY_UP_BEFORE_CHILDREN = EVT_KEY_UP_BEFORE_CHILDREN();

  #
  # 即将移动Widget的事件名(event_t)。
  #
  #
  WILL_MOVE = EVT_WILL_MOVE();

  #
  # 移动Widget的事件名(event_t)。
  #
  #
  MOVE = EVT_MOVE();

  #
  # 即将调整Widget大小的事件名(event_t)。
  #
  #
  WILL_RESIZE = EVT_WILL_RESIZE();

  #
  # 调整Widget大小的事件名(event_t)。
  #
  #
  RESIZE = EVT_RESIZE();

  #
  # 即将调整Widget大小/位置的事件名(event_t)。
  #
  #
  WILL_MOVE_RESIZE = EVT_WILL_MOVE_RESIZE();

  #
  # 调整Widget大小/位置的事件名(event_t)。
  #
  #
  MOVE_RESIZE = EVT_MOVE_RESIZE();

  #
  # 控件的值即将改变的事件名(value_change_event_t)。
  #
  #
  VALUE_WILL_CHANGE = EVT_VALUE_WILL_CHANGE();

  #
  # 控件的值改变的事件名(value_change_event_t)。
  #
  #
  VALUE_CHANGED = EVT_VALUE_CHANGED();

  #
  # 控件的值持续改变(如编辑器正在编辑)的事件名(value_change_event_t)。
  #
  #
  VALUE_CHANGING = EVT_VALUE_CHANGING();

  #
  # 绘制的事件名(paint_event_t)。
  #
  #
  PAINT = EVT_PAINT();

  #
  # 即将绘制的事件名(paint_event_t)。
  #
  #
  BEFORE_PAINT = EVT_BEFORE_PAINT();

  #
  # 绘制完成的事件名(paint_event_t)。
  #
  #
  AFTER_PAINT = EVT_AFTER_PAINT();

  #
  # 绘制完成(canvas状态已经恢复)的事件名(paint_event_t)。
  #
  #
  PAINT_DONE = EVT_PAINT_DONE();

  #
  # locale改变的事件(event_t)。
  #
  #
  LOCALE_CHANGED = EVT_LOCALE_CHANGED();

  #
  # 控件动画开始事件(event_t)。
  #
  #
  ANIM_START = EVT_ANIM_START();

  #
  # 控件动画被主动停止的事件(event_t)。
  #
  #
  ANIM_STOP = EVT_ANIM_STOP();

  #
  # 控件动画被暂停的事件(event_t)。
  #
  #
  ANIM_PAUSE = EVT_ANIM_PAUSE();

  #
  # 控件动画yoyo/repeat时，完成一次的事件(event_t)。
  #
  #
  ANIM_ONCE = EVT_ANIM_ONCE();

  #
  # 控件动画完成事件(event_t)。
  #
  #
  ANIM_END = EVT_ANIM_END();

  #
  # 窗口加载完成事件(event_t)。
  #
  #
  WINDOW_LOAD = EVT_WINDOW_LOAD();

  #
  # 控件加载完成事件(event_t)。
  #
  #
  WIDGET_LOAD = EVT_WIDGET_LOAD();

  #
  # 窗口即将打开事件(event_t)。
  #如果有窗口动画，在窗口动画开始前触发。如果没有窗口动画，在窗口被加载后的下一次循环中触发。
  #
  #
  WINDOW_WILL_OPEN = EVT_WINDOW_WILL_OPEN();

  #
  # 窗口打开事件(event_t)。
  #如果有窗口动画，在窗口动画完成时触发。如果没有窗口动画，在窗口被加载后的下一次循环中触发。
  #
  #
  WINDOW_OPEN = EVT_WINDOW_OPEN();

  #
  # 窗口被切换到后台事件(event_t)。
  #打开新窗口时，当前窗口被切换到后台时，对当前窗口触发本事件。
  #
  #
  WINDOW_TO_BACKGROUND = EVT_WINDOW_TO_BACKGROUND();

  #
  # 窗口被切换到前台事件(event_t)。
  #关闭当前窗口时，前一个窗口被切换到前台时，对前一个窗口触发本事件。
  #
  #
  WINDOW_TO_FOREGROUND = EVT_WINDOW_TO_FOREGROUND();

  #
  # 窗口关闭事件。
  #
  #
  WINDOW_CLOSE = EVT_WINDOW_CLOSE();

  #
  # 请求关闭窗口的事件(event_t)。
  #
  #
  REQUEST_CLOSE_WINDOW = EVT_REQUEST_CLOSE_WINDOW();

  #
  # 顶层窗口改变的事件(window_event_t)。
  #
  #
  TOP_WINDOW_CHANGED = EVT_TOP_WINDOW_CHANGED();

  #
  # 输入法启动(event_t)。
  #
  #
  IM_START = EVT_IM_START();

  #
  # 输入法停止(event_t)。
  #
  #
  IM_STOP = EVT_IM_STOP();

  #
  # 输入法提交输入的文本事件(im_commit_event_t)。
  #
  #
  IM_COMMIT = EVT_IM_COMMIT();

  #
  # 清除编辑器内容(event_t)。
  #
  #
  IM_CLEAR = EVT_IM_CLEAR();

  #
  # 取消编辑，恢复之前的内容(event_t)。
  #
  #
  IM_CANCEL = EVT_IM_CANCEL();

  #
  # 进入预编辑状态(event_t)。
  #
  #
  IM_PREEDIT = EVT_IM_PREEDIT();

  #
  # 确认预编辑内容，退出预编辑状态(event_t)。
  #
  #
  IM_PREEDIT_CONFIRM = EVT_IM_PREEDIT_CONFIRM();

  #
  # 删除预编辑内容，退出预编辑状态event_t)。
  #
  #
  IM_PREEDIT_ABORT = EVT_IM_PREEDIT_ABORT();

  #
  # 输入法请求显示候选字事件(im_candidates_event_t)。
  #
  #
  IM_SHOW_CANDIDATES = EVT_IM_SHOW_CANDIDATES();

  #
  # 输入法请求显示预候选字事件(im_candidates_event_t)。
  #
  #
  IM_SHOW_PRE_CANDIDATES = EVT_IM_SHOW_PRE_CANDIDATES();

  #
  # 输入法语言改变事件(event_t)。
  #
  #
  IM_LANG_CHANGED = EVT_IM_LANG_CHANGED();

  #
  # 软键盘Action点击事件(event_t)。
  #
  #
  IM_ACTION = EVT_IM_ACTION();

  #
  # 请求更新软键盘上的Action按钮的信息(im_action_button_info_event_t)。
  #
  #
  IM_ACTION_INFO = EVT_IM_ACTION_INFO();

  #
  # 开始拖动(event_t)。
  #
  #
  DRAG_START = EVT_DRAG_START();

  #
  # 拖动(event_t)。
  #
  #
  DRAG = EVT_DRAG();

  #
  # 结束拖动(event_t)。
  #
  #
  DRAG_END = EVT_DRAG_END();

  #
  # Reset(event_t)。
  #
  #
  RESET = EVT_RESET();

  #
  # 在指定的时间内(WITH_SCREEN_SAVER_TIME)，没有用户输入事件，由窗口管理器触发。
  #
  #
  SCREEN_SAVER = EVT_SCREEN_SAVER();

  #
  # 内存不足(event_t)。
  #
  #
  LOW_MEMORY = EVT_LOW_MEMORY();

  #
  # 内存耗尽(event_t)。
  #
  #
  OUT_OF_MEMORY = EVT_OUT_OF_MEMORY();

  #
  # 屏幕即将旋转(event_t)。
  #
  #
  ORIENTATION_WILL_CHANGED = EVT_ORIENTATION_WILL_CHANGED();

  #
  # 屏幕旋转(event_t)。
  #
  #
  ORIENTATION_CHANGED = EVT_ORIENTATION_CHANGED();

  #
  # 控件创建事件(event_t)。
  #
  #
  WIDGET_CREATED = EVT_WIDGET_CREATED();

  #
  # 请求退出应用程序事件。
  #点击原生窗口关闭按钮时，通过窗口管理器触发，注册该事件并返回RET_STOP，可以阻止窗口关闭。
  #
  #
  REQUEST_QUIT_APP = EVT_REQUEST_QUIT_APP();

  #
  # 主题变化(event_t)。
  #
  #
  THEME_CHANGED = EVT_THEME_CHANGED();

  #
  # 控件加载新的子控件(event_t)。
  #
  #
  WIDGET_ADD_CHILD = EVT_WIDGET_ADD_CHILD();

  #
  # 控件移除子控件(event_t)。
  #
  #
  WIDGET_REMOVE_CHILD = EVT_WIDGET_REMOVE_CHILD();

  #
  # scroll view开始滚动(event_t)。
  #
  #
  SCROLL_START = EVT_SCROLL_START();

  #
  # scroll view滚动(event_t)。
  #
  #
  SCROLL = EVT_SCROLL();

  #
  # scroll view结束滚动(event_t)。
  #
  #
  SCROLL_END = EVT_SCROLL_END();

  #
  # 多点触摸手势(multi_gesture_event_t)。
  #
  #
  MULTI_GESTURE = EVT_MULTI_GESTURE();

  #
  # 页面改变了(event_t)。
  #
  #
  PAGE_CHANGED = EVT_PAGE_CHANGED();

  #
  # 资源管理加载某个资源(assets_event_t)。
  #
  #
  ASSET_MANAGER_LOAD_ASSET = EVT_ASSET_MANAGER_LOAD_ASSET();

  #
  # 资源管理卸载某个资源(assets_event_t)。
  #
  #
  ASSET_MANAGER_UNLOAD_ASSET = EVT_ASSET_MANAGER_UNLOAD_ASSET();

  #
  # 资源管理移除同种资源缓存(assets_event_t)。
  #
  #
  ASSET_MANAGER_CLEAR_CACHE = EVT_ASSET_MANAGER_CLEAR_CACHE();

  #
  # 定时器(event_t)。
  #
  #
  TIMER = EVT_TIMER();

  #
  # event queue其它请求编号起始值。
  #
  #
  REQ_START = EVT_REQ_START();

  #
  # 用户定义事件起始值。
  #
  #
  USER_START = EVT_USER_START();

  #
  # 无效事件名称。
  #
  #
  NONE = EVT_NONE();

  #
  # 对象的属性即将改变的事件名(prop_change_event_t)。
  #
  #
  PROP_WILL_CHANGE = EVT_PROP_WILL_CHANGE();

  #
  # 对象的属性改变的事件名(prop_change_event_t)。
  #
  #
  PROP_CHANGED = EVT_PROP_CHANGED();

  #
  # 对象即将执行命令(cmd_exec_event_t)。
  #
  #
  CMD_WILL_EXEC = EVT_CMD_WILL_EXEC();

  #
  # 对象完成执行命令(cmd_exec_event_t)。
  #
  #
  CMD_EXECED = EVT_CMD_EXECED();

  #
  # 对象命令是否能执行指定的命令(cmd_exec_event_t)。
  #
  #
  CMD_CAN_EXEC = EVT_CMD_CAN_EXEC();

  #
  # 即将增加和删除集合中的项目(event_t)。
  #
  #
  ITEMS_WILL_CHANGE = EVT_ITEMS_WILL_CHANGE();

  #
  # 完成增加和删除集合中的项目(event_t)。
  #
  #
  ITEMS_CHANGED = EVT_ITEMS_CHANGED();

  #
  # 对象的属性改变的事件名(props_event_t)。
  #
  #
  PROPS_CHANGED = EVT_PROPS_CHANGED();

  #
  # 进度状态(progress_event_t)。
  #
  #
  PROGRESS = EVT_PROGRESS();

  #
  # 完成(done_event_t)。
  #
  #
  DONE = EVT_DONE();

  #
  # 错误(error_event_t)。
  #
  #
  ERROR = EVT_ERROR();

  #
  # 对象销毁事件名(event_t)。
  #
  #
  DESTROY = EVT_DESTROY();

#
# 字体管理器，负责字体的加载和缓存管理。
#(如果使用nanovg，字体由nanovg内部管理)
#
#
class TFontManager(object):
  def __init__(self, nativeObj):
    self.nativeObj = nativeObj;


  #
  # 卸载指定的字体。
  # 
  # @param name 字体名，为NULL时使用缺省字体。
  # @param size 字体的大小(矢量字体指定为0即可)。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def unload_font(self, name, size): 
    return font_manager_unload_font(awtk_get_native_obj(self), name, size);


  #
  # 清除最久没有被使用的缓冲字模。
  # 
  # @param cache_size 每种字体保留缓存字模的个数。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def shrink_cache(self, cache_size): 
    return font_manager_shrink_cache(awtk_get_native_obj(self), cache_size);


  #
  # 卸载全部字体。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def unload_all(self): 
    return font_manager_unload_all(awtk_get_native_obj(self));


#
# 字模格式常量定义。
#
#
class TGlyphFormat: 

  #
  # 每个像素占用1个字节(缺省)。
  #
  #
  ALPHA = GLYPH_FMT_ALPHA();

  #
  # 每个像素占用1个比特。
  #
  #
  MONO = GLYPH_FMT_MONO();

  #
  # 每个像素占用4个字节。
  #
  #
  RGBA = GLYPH_FMT_RGBA();

#
# idle可以看作是duration为0的定时器。
#
#> idle可以用来实现一些异步处理。
#
#示例：
#
#
#> 在非GUI线程请用idle\_queue。
#
#
class TIdle(object):

  #
  # 增加一个idle。
  # 
  # @param on_idle idle回调函数，回调函数返回RET_REPEAT，则下次继续执行，否则自动移出。
  # @param ctx idle回调函数的上下文。
  #
  # @return 返回idle的ID，0表示失败。
  #
  @classmethod
  def add(cls, on_idle, ctx): 
    return idle_add(on_idle, ctx);


  #
  # 删除指定的idle。
  # 
  # @param idle_id idleID。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  @classmethod
  def remove(cls, idle_id): 
    return idle_remove(idle_id);


  #
  # 根据上下文删除所有对应的idle。
  # 
  # @param ctx idle回调函数的上下文
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  @classmethod
  def remove_all_by_ctx(cls, ctx): 
    return idle_remove_all_by_ctx(ctx);


#
# 图片管理器。负责加载，解码和缓存图片。
#
#
class TImageManager(object):
  def __init__(self, nativeObj):
    self.nativeObj = nativeObj;


  #
  # 获取缺省的图片管理器。
  # 
  #
  # @return 返回图片管理器对象。
  #
  @classmethod
  def instance(cls): 
    return  TImageManager(image_manager());


  #
  # 获取指定的图片。
  #先从缓存查找，如果没找到，再加载并缓存。
  # 
  # @param name 图片名称。
  # @param image 用于返回图片。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def get_bitmap(self, name, image): 
    return image_manager_get_bitmap(awtk_get_native_obj(self), name, awtk_get_native_obj(image));


  #
  # 预加载指定的图片。
  # 
  # @param name 图片名称。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def preload(self, name): 
    return image_manager_preload(awtk_get_native_obj(self), name);


#
# 输入类型常量定义。
#
#
class TInputType: 

  #
  # 文本。字符串属性值：text
  #
  #
  TEXT = INPUT_TEXT();

  #
  # 整数。字符串属性值：int
  #
  #
  INT = INPUT_INT();

  #
  # 非负整数。字符串属性值：uint
  #
  #
  UINT = INPUT_UINT();

  #
  # 16进制整数。字符串属性值：hex
  #
  #
  HEX = INPUT_HEX();

  #
  # 浮点数。字符串属性值：float
  #
  #
  FLOAT = INPUT_FLOAT();

  #
  # 非负浮点数。字符串属性值：ufloat
  #
  #
  UFLOAT = INPUT_UFLOAT();

  #
  # 邮件地址。字符串属性值：email
  #
  #
  EMAIL = INPUT_EMAIL();

  #
  # 密码。字符串属性值：password
  #
  #
  PASSWORD = INPUT_PASSWORD();

  #
  # 电话号码。字符串属性值：phone
  #
  #
  PHONE = INPUT_PHONE();

  #
  # IP Addr V4(如：192.168.1.1)。字符串属性值：ipv4
  #
  #
  IPV4 = INPUT_IPV4();

  #
  # 日期(如：2020/02/20)。字符串属性值：date
  #
  #
  DATE = INPUT_DATE();

  #
  # 时间(时分，如：12:00)。字符串属性值：time
  #
  #
  TIME = INPUT_TIME();

  #
  # 时间(时分秒，如：12:00:00)。字符串属性值：time_full
  #
  #
  TIME_FULL = INPUT_TIME_FULL();

  #
  # 使用自定义的软键盘(如计算器等应用不希望弹出系统软键盘)。字符串属性值：custom
  #
  #
  CUSTOM = INPUT_CUSTOM();

  #
  # 使用自定义的密码软键盘。字符串属性值：custom_password
  #
  #
  CUSTOM_PASSWORD = INPUT_CUSTOM_PASSWORD();

  #
  # 纯英文文本。字符串属性值：ascii
  #
  #
  ASCII = INPUT_ASCII();

#
# 输入法接口。
#
#常见的实现方式有以下几种：
#
#* 空实现。用于不需要输入法的嵌入式平台。
#
#* 缺省实现。用于需要输入法的嵌入式平台。
#
#* 基于SDL实现的平台原生输入法。用于桌面系统和手机系统。
#
#
#
#> 输入类型请参考：[input\_type](input_type_t.md)
#
#
class TInputMethod(object):
  def __init__(self, nativeObj):
    self.nativeObj = nativeObj;


  #
  # 提交输入文本。
  # 
  # @param text 文本。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def commit_text(self, text): 
    return input_method_commit_text(awtk_get_native_obj(self), text);


  #
  # 设置语言。
  #
  #> 有时在同一种语言环境下，也需要输入多种文字，典型的情况是同时输入中文和英文。
  #> 比如T9输入法，可以同时支持中文和英文输入，配合软键盘随时切换输入的语言。
  #> 数字、小写字母、大写字母和符合也可以视为输入的语言。
  #> 主要用于提示输入法引擎选择适当的输入方法。
  # 
  # @param lang 语言。格式为语言+国家/地区码。如：zh_cn和en_us等。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_lang(self, lang): 
    return input_method_set_lang(awtk_get_native_obj(self), lang);


  #
  # 获取语言。
  # 
  #
  # @return 返回语言。
  #
  def get_lang(self): 
    return input_method_get_lang(awtk_get_native_obj(self));


  #
  # 提交按键。
  # 
  # @param key 键值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def dispatch_key(self, key): 
    return input_method_dispatch_key(awtk_get_native_obj(self), key);


  #
  # 提交按键。
  # 
  # @param key 键值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def dispatch_keys(self, key): 
    return input_method_dispatch_keys(awtk_get_native_obj(self), key);


  #
  # 分发进入预编辑状态的事件。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def dispatch_preedit(self): 
    return input_method_dispatch_preedit(awtk_get_native_obj(self));


  #
  # 分发确认预编辑状态的事件(提交预编辑内容，退出预编辑状态)。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def dispatch_preedit_confirm(self): 
    return input_method_dispatch_preedit_confirm(awtk_get_native_obj(self));


  #
  # 分发取消预编辑状态的事件(提交预编辑内容，退出预编辑状态)。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def dispatch_preedit_abort(self): 
    return input_method_dispatch_preedit_abort(awtk_get_native_obj(self));


  #
  # 获取全局输入法对象。
  # 
  #
  # @return 成功返回输入法对象，失败返回NULL。
  #
  @classmethod
  def instance(cls): 
    return  TInputMethod(input_method());


#
# key code。
#
#
class TKeyCode: 

  #
  # TK_KEY_RETURN
  #
  #
  KEY_RETURN = TK_KEY_RETURN();

  #
  # TK_KEY_ESCAPE
  #
  #
  KEY_ESCAPE = TK_KEY_ESCAPE();

  #
  # TK_KEY_BACKSPACE
  #
  #
  KEY_BACKSPACE = TK_KEY_BACKSPACE();

  #
  # TK_KEY_TAB
  #
  #
  KEY_TAB = TK_KEY_TAB();

  #
  # TK_KEY_SPACE
  #
  #
  KEY_SPACE = TK_KEY_SPACE();

  #
  # TK_KEY_EXCLAIM
  #
  #
  KEY_EXCLAIM = TK_KEY_EXCLAIM();

  #
  # TK_KEY_QUOTEDBL
  #
  #
  KEY_QUOTEDBL = TK_KEY_QUOTEDBL();

  #
  # TK_KEY_HASH
  #
  #
  KEY_HASH = TK_KEY_HASH();

  #
  # TK_KEY_PERCENT
  #
  #
  KEY_PERCENT = TK_KEY_PERCENT();

  #
  # TK_KEY_DOLLAR
  #
  #
  KEY_DOLLAR = TK_KEY_DOLLAR();

  #
  # TK_KEY_AMPERSAND
  #
  #
  KEY_AMPERSAND = TK_KEY_AMPERSAND();

  #
  # TK_KEY_QUOTE
  #
  #
  KEY_QUOTE = TK_KEY_QUOTE();

  #
  # TK_KEY_LEFTPAREN
  #
  #
  KEY_LEFTPAREN = TK_KEY_LEFTPAREN();

  #
  # TK_KEY_RIGHTPAREN
  #
  #
  KEY_RIGHTPAREN = TK_KEY_RIGHTPAREN();

  #
  # TK_KEY_ASTERISK
  #
  #
  KEY_ASTERISK = TK_KEY_ASTERISK();

  #
  # TK_KEY_PLUS
  #
  #
  KEY_PLUS = TK_KEY_PLUS();

  #
  # TK_KEY_COMMA
  #
  #
  KEY_COMMA = TK_KEY_COMMA();

  #
  # TK_KEY_MINUS
  #
  #
  KEY_MINUS = TK_KEY_MINUS();

  #
  # TK_KEY_PERIOD
  #
  #
  KEY_PERIOD = TK_KEY_PERIOD();

  #
  # TK_KEY_SLASH
  #
  #
  KEY_SLASH = TK_KEY_SLASH();

  #
  # TK_KEY_0
  #
  #
  KEY_0 = TK_KEY_0();

  #
  # TK_KEY_1
  #
  #
  KEY_1 = TK_KEY_1();

  #
  # TK_KEY_2
  #
  #
  KEY_2 = TK_KEY_2();

  #
  # TK_KEY_3
  #
  #
  KEY_3 = TK_KEY_3();

  #
  # TK_KEY_4
  #
  #
  KEY_4 = TK_KEY_4();

  #
  # TK_KEY_5
  #
  #
  KEY_5 = TK_KEY_5();

  #
  # TK_KEY_6
  #
  #
  KEY_6 = TK_KEY_6();

  #
  # TK_KEY_7
  #
  #
  KEY_7 = TK_KEY_7();

  #
  # TK_KEY_8
  #
  #
  KEY_8 = TK_KEY_8();

  #
  # TK_KEY_9
  #
  #
  KEY_9 = TK_KEY_9();

  #
  # TK_KEY_COLON
  #
  #
  KEY_COLON = TK_KEY_COLON();

  #
  # TK_KEY_SEMICOLON
  #
  #
  KEY_SEMICOLON = TK_KEY_SEMICOLON();

  #
  # TK_KEY_LESS
  #
  #
  KEY_LESS = TK_KEY_LESS();

  #
  # TK_KEY_EQUAL
  #
  #
  KEY_EQUAL = TK_KEY_EQUAL();

  #
  # TK_KEY_GREATER
  #
  #
  KEY_GREATER = TK_KEY_GREATER();

  #
  # TK_KEY_QUESTION
  #
  #
  KEY_QUESTION = TK_KEY_QUESTION();

  #
  # TK_KEY_AT
  #
  #
  KEY_AT = TK_KEY_AT();

  #
  # TK_KEY_LEFTBRACKET
  #
  #
  KEY_LEFTBRACKET = TK_KEY_LEFTBRACKET();

  #
  # TK_KEY_BACKSLASH
  #
  #
  KEY_BACKSLASH = TK_KEY_BACKSLASH();

  #
  # TK_KEY_RIGHTBRACKET
  #
  #
  KEY_RIGHTBRACKET = TK_KEY_RIGHTBRACKET();

  #
  # TK_KEY_CARET
  #
  #
  KEY_CARET = TK_KEY_CARET();

  #
  # TK_KEY_UNDERSCORE
  #
  #
  KEY_UNDERSCORE = TK_KEY_UNDERSCORE();

  #
  # TK_KEY_BACKQUOTE
  #
  #
  KEY_BACKQUOTE = TK_KEY_BACKQUOTE();

  #
  # TK_KEY_a
  #
  #
  KEY_a = TK_KEY_a();

  #
  # TK_KEY_b
  #
  #
  KEY_b = TK_KEY_b();

  #
  # TK_KEY_c
  #
  #
  KEY_c = TK_KEY_c();

  #
  # TK_KEY_d
  #
  #
  KEY_d = TK_KEY_d();

  #
  # TK_KEY_e
  #
  #
  KEY_e = TK_KEY_e();

  #
  # TK_KEY_f
  #
  #
  KEY_f = TK_KEY_f();

  #
  # TK_KEY_g
  #
  #
  KEY_g = TK_KEY_g();

  #
  # TK_KEY_h
  #
  #
  KEY_h = TK_KEY_h();

  #
  # TK_KEY_i
  #
  #
  KEY_i = TK_KEY_i();

  #
  # TK_KEY_j
  #
  #
  KEY_j = TK_KEY_j();

  #
  # TK_KEY_k
  #
  #
  KEY_k = TK_KEY_k();

  #
  # TK_KEY_l
  #
  #
  KEY_l = TK_KEY_l();

  #
  # TK_KEY_m
  #
  #
  KEY_m = TK_KEY_m();

  #
  # TK_KEY_n
  #
  #
  KEY_n = TK_KEY_n();

  #
  # TK_KEY_o
  #
  #
  KEY_o = TK_KEY_o();

  #
  # TK_KEY_p
  #
  #
  KEY_p = TK_KEY_p();

  #
  # TK_KEY_q
  #
  #
  KEY_q = TK_KEY_q();

  #
  # TK_KEY_r
  #
  #
  KEY_r = TK_KEY_r();

  #
  # TK_KEY_s
  #
  #
  KEY_s = TK_KEY_s();

  #
  # TK_KEY_t
  #
  #
  KEY_t = TK_KEY_t();

  #
  # TK_KEY_u
  #
  #
  KEY_u = TK_KEY_u();

  #
  # TK_KEY_v
  #
  #
  KEY_v = TK_KEY_v();

  #
  # TK_KEY_w
  #
  #
  KEY_w = TK_KEY_w();

  #
  # TK_KEY_x
  #
  #
  KEY_x = TK_KEY_x();

  #
  # TK_KEY_y
  #
  #
  KEY_y = TK_KEY_y();

  #
  # TK_KEY_z
  #
  #
  KEY_z = TK_KEY_z();

  #
  # TK_KEY_A
  #
  #
  KEY_A = TK_KEY_A();

  #
  # TK_KEY_B
  #
  #
  KEY_B = TK_KEY_B();

  #
  # TK_KEY_C
  #
  #
  KEY_C = TK_KEY_C();

  #
  # TK_KEY_D
  #
  #
  KEY_D = TK_KEY_D();

  #
  # TK_KEY_E
  #
  #
  KEY_E = TK_KEY_E();

  #
  # TK_KEY_F
  #
  #
  KEY_F = TK_KEY_F();

  #
  # TK_KEY_G
  #
  #
  KEY_G = TK_KEY_G();

  #
  # TK_KEY_H
  #
  #
  KEY_H = TK_KEY_H();

  #
  # TK_KEY_I
  #
  #
  KEY_I = TK_KEY_I();

  #
  # TK_KEY_J
  #
  #
  KEY_J = TK_KEY_J();

  #
  # TK_KEY_K
  #
  #
  KEY_K = TK_KEY_K();

  #
  # TK_KEY_L
  #
  #
  KEY_L = TK_KEY_L();

  #
  # TK_KEY_M
  #
  #
  KEY_M = TK_KEY_M();

  #
  # TK_KEY_N
  #
  #
  KEY_N = TK_KEY_N();

  #
  # TK_KEY_O
  #
  #
  KEY_O = TK_KEY_O();

  #
  # TK_KEY_P
  #
  #
  KEY_P = TK_KEY_P();

  #
  # TK_KEY_Q
  #
  #
  KEY_Q = TK_KEY_Q();

  #
  # TK_KEY_R
  #
  #
  KEY_R = TK_KEY_R();

  #
  # TK_KEY_S
  #
  #
  KEY_S = TK_KEY_S();

  #
  # TK_KEY_T
  #
  #
  KEY_T = TK_KEY_T();

  #
  # TK_KEY_U
  #
  #
  KEY_U = TK_KEY_U();

  #
  # TK_KEY_V
  #
  #
  KEY_V = TK_KEY_V();

  #
  # TK_KEY_W
  #
  #
  KEY_W = TK_KEY_W();

  #
  # TK_KEY_X
  #
  #
  KEY_X = TK_KEY_X();

  #
  # TK_KEY_Y
  #
  #
  KEY_Y = TK_KEY_Y();

  #
  # TK_KEY_Z
  #
  #
  KEY_Z = TK_KEY_Z();

  #
  # TK_KEY_DOT
  #
  #
  KEY_DOT = TK_KEY_DOT();

  #
  # TK_KEY_DELETE
  #
  #
  KEY_DELETE = TK_KEY_DELETE();

  #
  # TK_KEY_LEFTBRACE
  #
  #
  KEY_LEFTBRACE = TK_KEY_LEFTBRACE();

  #
  # TK_KEY_RIGHTBRACE
  #
  #
  KEY_RIGHTBRACE = TK_KEY_RIGHTBRACE();

  #
  # TK_KEY_LSHIFT
  #
  #
  KEY_LSHIFT = TK_KEY_LSHIFT();

  #
  # TK_KEY_RSHIFT
  #
  #
  KEY_RSHIFT = TK_KEY_RSHIFT();

  #
  # TK_KEY_LCTRL
  #
  #
  KEY_LCTRL = TK_KEY_LCTRL();

  #
  # TK_KEY_RCTRL
  #
  #
  KEY_RCTRL = TK_KEY_RCTRL();

  #
  # TK_KEY_LALT
  #
  #
  KEY_LALT = TK_KEY_LALT();

  #
  # TK_KEY_RALT
  #
  #
  KEY_RALT = TK_KEY_RALT();

  #
  # TK_KEY_CAPSLOCK
  #
  #
  KEY_CAPSLOCK = TK_KEY_CAPSLOCK();

  #
  # TK_KEY_HOME
  #
  #
  KEY_HOME = TK_KEY_HOME();

  #
  # TK_KEY_END
  #
  #
  KEY_END = TK_KEY_END();

  #
  # TK_KEY_INSERT
  #
  #
  KEY_INSERT = TK_KEY_INSERT();

  #
  # TK_KEY_UP
  #
  #
  KEY_UP = TK_KEY_UP();

  #
  # TK_KEY_DOWN
  #
  #
  KEY_DOWN = TK_KEY_DOWN();

  #
  # TK_KEY_LEFT
  #
  #
  KEY_LEFT = TK_KEY_LEFT();

  #
  # TK_KEY_RIGHT
  #
  #
  KEY_RIGHT = TK_KEY_RIGHT();

  #
  # TK_KEY_PAGEUP
  #
  #
  KEY_PAGEUP = TK_KEY_PAGEUP();

  #
  # TK_KEY_PAGEDOWN
  #
  #
  KEY_PAGEDOWN = TK_KEY_PAGEDOWN();

  #
  # TK_KEY_F1
  #
  #
  KEY_F1 = TK_KEY_F1();

  #
  # TK_KEY_F2
  #
  #
  KEY_F2 = TK_KEY_F2();

  #
  # TK_KEY_F3
  #
  #
  KEY_F3 = TK_KEY_F3();

  #
  # TK_KEY_F4
  #
  #
  KEY_F4 = TK_KEY_F4();

  #
  # TK_KEY_F5
  #
  #
  KEY_F5 = TK_KEY_F5();

  #
  # TK_KEY_F6
  #
  #
  KEY_F6 = TK_KEY_F6();

  #
  # TK_KEY_F7
  #
  #
  KEY_F7 = TK_KEY_F7();

  #
  # TK_KEY_F8
  #
  #
  KEY_F8 = TK_KEY_F8();

  #
  # TK_KEY_F9
  #
  #
  KEY_F9 = TK_KEY_F9();

  #
  # TK_KEY_F10
  #
  #
  KEY_F10 = TK_KEY_F10();

  #
  # TK_KEY_F11
  #
  #
  KEY_F11 = TK_KEY_F11();

  #
  # TK_KEY_F12
  #
  #
  KEY_F12 = TK_KEY_F12();

  #
  # TK_KEY_MENU
  #
  #
  KEY_MENU = TK_KEY_MENU();

  #
  # TK_KEY_COMMAND
  #
  #
  KEY_COMMAND = TK_KEY_COMMAND();

  #
  # TK_KEY_BACK
  #
  #
  KEY_BACK = TK_KEY_BACK();

  #
  # TK_KEY_CANCEL
  #
  #
  KEY_CANCEL = TK_KEY_CANCEL();

  #
  # TK_KEY_WHEEL
  #
  #
  KEY_WHEEL = TK_KEY_WHEEL();

#
# 本地化信息。提供字符串翻译数据管理，当前语言改变的事件通知等等。
#
#
class TLocaleInfo(object):
  def __init__(self, nativeObj):
    self.nativeObj = nativeObj;


  #
  # 获取缺省locale_info。
  # 
  #
  # @return 返回locale_info对象。
  #
  @classmethod
  def instance(cls): 
    return  TLocaleInfo(locale_info());


  #
  # 翻译字符串。
  # 
  # @param text 待翻译的文本。
  #
  # @return 返回翻译之后的字符串。
  #
  def tr(self, text): 
    return locale_info_tr(awtk_get_native_obj(self), text);


  #
  # 设置当前的国家和语言。
  # 
  # @param language 语言。
  # @param country 国家或地区。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def change(self, language, country): 
    return locale_info_change(awtk_get_native_obj(self), language, country);


  #
  # 注销指定事件的处理函数。
  # 
  # @param id locale_info_on返回的ID。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def off(self, id): 
    return locale_info_off(awtk_get_native_obj(self), id);


#
# style常量定义。
#
#
class TStyleId: 

  #
  # 背景颜色。
  #
  #
  BG_COLOR = STYLE_ID_BG_COLOR();

  #
  # 前景颜色。
  #
  #
  FG_COLOR = STYLE_ID_FG_COLOR();

  #
  # 蒙版颜色。
  #
  #
  MASK_COLOR = STYLE_ID_MASK_COLOR();

  #
  # 字体名称。
  #
  #
  FONT_NAME = STYLE_ID_FONT_NAME();

  #
  # 字体大小。
  #
  #
  FONT_SIZE = STYLE_ID_FONT_SIZE();

  #
  # 字体风格(粗体、斜体等)。
  #
  #
  FONT_STYLE = STYLE_ID_FONT_STYLE();

  #
  # 文本颜色。
  #
  #
  TEXT_COLOR = STYLE_ID_TEXT_COLOR();

  #
  # 高亮文本的字体名称。
  #
  #
  HIGHLIGHT_FONT_NAME = STYLE_ID_HIGHLIGHT_FONT_NAME();

  #
  # 高亮文本的字体大小。
  #
  #
  HIGHLIGHT_FONT_SIZE = STYLE_ID_HIGHLIGHT_FONT_SIZE();

  #
  # 高亮文本的文本颜色。
  #
  #
  HIGHLIGHT_TEXT_COLOR = STYLE_ID_HIGHLIGHT_TEXT_COLOR();

  #
  # 提示文本颜色。
  #
  #
  TIPS_TEXT_COLOR = STYLE_ID_TIPS_TEXT_COLOR();

  #
  # 文本水平对齐的方式。
  #
  #
  TEXT_ALIGN_H = STYLE_ID_TEXT_ALIGN_H();

  #
  # 文本垂直对齐的方式。
  #
  #
  TEXT_ALIGN_V = STYLE_ID_TEXT_ALIGN_V();

  #
  # 边框颜色。
  #
  #
  BORDER_COLOR = STYLE_ID_BORDER_COLOR();

  #
  # 边框线宽。
  #
  #
  BORDER_WIDTH = STYLE_ID_BORDER_WIDTH();

  #
  # 边框类型。
  #
  #
  BORDER = STYLE_ID_BORDER();

  #
  # 图片的名称。
  #
  #
  BG_IMAGE = STYLE_ID_BG_IMAGE();

  #
  # 图片的显示方式。
  #
  #
  BG_IMAGE_DRAW_TYPE = STYLE_ID_BG_IMAGE_DRAW_TYPE();

  #
  # 图标的名称。
  #
  #
  ICON = STYLE_ID_ICON();

  #
  # 图片的名称。
  #
  #
  FG_IMAGE = STYLE_ID_FG_IMAGE();

  #
  # 图片的显示方式。
  #
  #
  FG_IMAGE_DRAW_TYPE = STYLE_ID_FG_IMAGE_DRAW_TYPE();

  #
  # 间距。
  #
  #
  SPACER = STYLE_ID_SPACER();

  #
  # 边距。
  #
  #
  MARGIN = STYLE_ID_MARGIN();

  #
  # 左边距。
  #
  #
  MARGIN_LEFT = STYLE_ID_MARGIN_LEFT();

  #
  # 右边距。
  #
  #
  MARGIN_RIGHT = STYLE_ID_MARGIN_RIGHT();

  #
  # 顶边距。
  #
  #
  MARGIN_TOP = STYLE_ID_MARGIN_TOP();

  #
  # 底边距。
  #
  #
  MARGIN_BOTTOM = STYLE_ID_MARGIN_BOTTOM();

  #
  # 图标的位置。
  #
  #
  ICON_AT = STYLE_ID_ICON_AT();

  #
  # Active图标的名称。
  #
  #
  ACTIVE_ICON = STYLE_ID_ACTIVE_ICON();

  #
  # X方向的偏移，方便实现按下的效果。
  #
  #
  X_OFFSET = STYLE_ID_X_OFFSET();

  #
  # Y方向的偏移，方便实现按下的效果。
  #
  #
  Y_OFFSET = STYLE_ID_Y_OFFSET();

  #
  # 编辑器中选中区域的背景颜色。
  #
  #
  SELECTED_BG_COLOR = STYLE_ID_SELECTED_BG_COLOR();

  #
  # 编辑器中选中区域的前景颜色。
  #
  #
  SELECTED_FG_COLOR = STYLE_ID_SELECTED_FG_COLOR();

  #
  # 编辑器中选中区域的文本颜色。
  #
  #
  SELECTED_TEXT_COLOR = STYLE_ID_SELECTED_TEXT_COLOR();

  #
  # 圆角半径(仅在WITH_VGCANVAS定义时生效)。
  #
  #
  ROUND_RADIUS = STYLE_ID_ROUND_RADIUS();

  #
  # 左上角圆角半径(仅在WITH_VGCANVAS定义时生效)。
  #
  #
  ROUND_RADIUS_TOP_LETF = STYLE_ID_ROUND_RADIUS_TOP_LETF();

  #
  # 右上角圆角半径(仅在WITH_VGCANVAS定义时生效)。
  #
  #
  ROUND_RADIUS_TOP_RIGHT = STYLE_ID_ROUND_RADIUS_TOP_RIGHT();

  #
  # 左下角圆角半径(仅在WITH_VGCANVAS定义时生效)。
  #
  #
  ROUND_RADIUS_BOTTOM_LETF = STYLE_ID_ROUND_RADIUS_BOTTOM_LETF();

  #
  # 右下角圆角半径(仅在WITH_VGCANVAS定义时生效)。
  #
  #
  ROUND_RADIUS_BOTTOM_RIGHT = STYLE_ID_ROUND_RADIUS_BOTTOM_RIGHT();

  #
  # 子控件布局参数。
  #
  #
  CHILDREN_LAYOUT = STYLE_ID_CHILDREN_LAYOUT();

  #
  # 控件布局参数。
  #
  #
  SELF_LAYOUT = STYLE_ID_SELF_LAYOUT();

  #
  # 是否支持焦点停留。
  #
  #
  FOCUSABLE = STYLE_ID_FOCUSABLE();

  #
  # 是否启用按键音、触屏音和震动等反馈。
  #
  #
  FEEDBACK = STYLE_ID_FEEDBACK();

#
# 控件风格。
#
#widget从style对象中，获取诸如字体、颜色和图片相关的参数，根据这些参数来绘制界面。
#
#
#属性名称的请参考[style\_id](style_id_t.md)
#
#
class TStyle(object):
  def __init__(self, nativeObj):
    self.nativeObj = nativeObj;


  #
  # widget状态改变时，通知style更新数据。
  # 
  # @param widget 控件对象。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def notify_widget_state_changed(self, widget): 
    return style_notify_widget_state_changed(awtk_get_native_obj(self), awtk_get_native_obj(widget));


  #
  # 检查style对象是否有效
  # 
  #
  # @return 返回是否有效。
  #
  def is_valid(self): 
    return style_is_valid(awtk_get_native_obj(self));


  #
  # 获取指定name的整数格式的值。
  # 
  # @param name 属性名。
  # @param defval 缺省值。
  #
  # @return 返回整数格式的值。
  #
  def get_int(self, name, defval): 
    return style_get_int(awtk_get_native_obj(self), name, defval);


  #
  # 获取指定name的无符号整数格式的值。
  # 
  # @param name 属性名。
  # @param defval 缺省值。
  #
  # @return 返回无符号整数格式的值。
  #
  def get_uint(self, name, defval): 
    return style_get_uint(awtk_get_native_obj(self), name, defval);


  #
  # 获取指定name的字符串格式的值。
  # 
  # @param name 属性名。
  # @param defval 缺省值。
  #
  # @return 返回字符串格式的值。
  #
  def get_str(self, name, defval): 
    return style_get_str(awtk_get_native_obj(self), name, defval);


  #
  # 设置指定状态的指定属性的值(仅仅对mutable的style有效)。
  # 
  # @param state 状态。
  # @param name 属性名。
  # @param value 值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set(self, state, name, value): 
    return style_set(awtk_get_native_obj(self), state, name, awtk_get_native_obj(value));


  #
  # 更新风格对象的状态以及对应的数据
  #备注：根据 widget_type 和 style_name 以及 widget_state 在 theme 对象中查找对应的数据并且更新到 style 对象中
  # 
  # @param theme theme对象。
  # @param widget_type 控件的类型名。
  # @param style_name style的名称。
  # @param widget_state 控件的状态。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def update_state(self, theme, widget_type, style_name, widget_state): 
    return style_update_state(awtk_get_native_obj(self), awtk_get_native_obj(theme), widget_type, style_name, widget_state);


  #
  # 获取风格对象的风格状态
  # 
  #
  # @return 返回风格状态。
  #
  def get_style_state(self): 
    return style_get_style_state(awtk_get_native_obj(self));


  #
  # 检查style是否是mutable的。
  # 
  #
  # @return 返回TRUE表示是，否则表示不是。
  #
  def is_mutable(self): 
    return style_is_mutable(awtk_get_native_obj(self));


  #
  # 获取 style 的风格类型。
  # 
  #
  # @return 返回风格类型。
  #
  def get_style_type(self): 
    return style_get_style_type(awtk_get_native_obj(self));


#
# 窗体样式。
#
#负责管理缺省的窗体样式数据，方便实现style\_const。
#
#
class TTheme(object):
  def __init__(self, nativeObj):
    self.nativeObj = nativeObj;


  #
  # 获取缺省的窗体样式对象。
  # 
  #
  # @return 返回窗体样式对象。
  #
  @classmethod
  def instance(cls): 
    return  TTheme(theme());


#
# 定时器系统。
#
#> 本定时器精度较低，最高精度为1000/FPS，如果需要高精度的定时器，请用OS提供的定时器。
#
#示例：
#
#> 在非GUI线程请用timer\_queue。
#
#
class TTimer(object):

  #
  # 增加一个timer。
  # 
  # @param on_timer timer回调函数。
  # @param ctx timer回调函数的上下文。
  # @param duration 时间。
  #
  # @return 返回timer的ID，TK_INVALID_ID表示失败。
  #
  @classmethod
  def add(cls, on_timer, ctx, duration): 
    return timer_add(on_timer, ctx, duration);


  #
  # 删除指定的timer。
  # 
  # @param timer_id timerID。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  @classmethod
  def remove(cls, timer_id): 
    return timer_remove(timer_id);


  #
  # 根据上下文删除所有对应的timer。
  # 
  # @param ctx timer回调函数的上下文。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  @classmethod
  def remove_all_by_ctx(cls, ctx): 
    return timer_remove_all_by_ctx(ctx);


  #
  # 重置指定的timer，重置之后定时器重新开始计时。
  # 
  # @param timer_id timerID。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  @classmethod
  def reset(cls, timer_id): 
    return timer_reset(timer_id);


  #
  # 挂起指定的timer，一般用于不断循环触发的计时器。
  # 
  # @param timer_id timerID。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  @classmethod
  def suspend(cls, timer_id): 
    return timer_suspend(timer_id);


  #
  # 唤醒挂起指定的timer，并且重置定时器重新开始计时
  # 
  # @param timer_id timerID。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  @classmethod
  def resume(cls, timer_id): 
    return timer_resume(timer_id);


  #
  # 修改指定的timer的duration，修改之后定时器重新开始计时。
  # 
  # @param timer_id timerID。
  # @param duration 新的时间。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  @classmethod
  def modify(cls, timer_id, duration): 
    return timer_modify(timer_id, duration);


#
# 垂直对齐的常量定义。
#
#
class TAlignV: 

  #
  # 无效对齐方式。
  #
  #
  NONE = ALIGN_V_NONE();

  #
  # 居中对齐。
  #
  #
  MIDDLE = ALIGN_V_MIDDLE();

  #
  # 顶部对齐。
  #
  #
  TOP = ALIGN_V_TOP();

  #
  # 底部对齐。
  #
  #
  BOTTOM = ALIGN_V_BOTTOM();

#
# 水平对齐的常量定义。
#
#
class TAlignH: 

  #
  # 无效对齐方式。
  #
  #
  NONE = ALIGN_H_NONE();

  #
  # 居中对齐。
  #
  #
  CENTER = ALIGN_H_CENTER();

  #
  # 左边对齐。
  #
  #
  LEFT = ALIGN_H_LEFT();

  #
  # 右边对齐。
  #
  #
  RIGHT = ALIGN_H_RIGHT();

#
# 应用程序类型。
#
#
class TAppType: 

  #
  # 嵌入式或移动APP
  #
  #
  MOBILE = APP_MOBILE();

  #
  # 模拟器。
  #
  #
  SIMULATOR = APP_SIMULATOR();

  #
  # 桌面应用程序。
  #
  #
  DESKTOP = APP_DESKTOP();

#
# 位图格式常量定义。
#
#
class TBitmapFormat: 

  #
  # 无效格式。
  #
  #
  NONE = BITMAP_FMT_NONE();

  #
  # 一个像素占用4个字节，RGBA占一个字节，按内存地址递增。
  #
  #
  RGBA8888 = BITMAP_FMT_RGBA8888();

  #
  # 一个像素占用4个字节，ABGR占一个字节，按内存地址递增。
  #
  #
  ABGR8888 = BITMAP_FMT_ABGR8888();

  #
  # 一个像素占用4个字节，BGRA占一个字节，按内存地址递增。
  #
  #
  BGRA8888 = BITMAP_FMT_BGRA8888();

  #
  # 一个像素占用4个字节，ARGB占一个字节，按内存地址递增。
  #
  #
  ARGB8888 = BITMAP_FMT_ARGB8888();

  #
  # 一个像素占用2个字节，RGB分别占用5,6,5位, 按内存地址递增。
  #
  #
  RGB565 = BITMAP_FMT_RGB565();

  #
  # 一个像素占用2个字节，BGR分别占用5,6,5位, 按内存地址递增。
  #
  #
  BGR565 = BITMAP_FMT_BGR565();

  #
  # 一个像素占用3个字节，RGB占一个字节，按内存地址递增。
  #
  #
  RGB888 = BITMAP_FMT_RGB888();

  #
  # 一个像素占用3个字节，RGB占一个字节，按内存地址递增。
  #
  #
  BGR888 = BITMAP_FMT_BGR888();

  #
  # 一个像素占用1个字节。
  #
  #
  GRAY = BITMAP_FMT_GRAY();

  #
  # 一个像素占用1比特。
  #
  #
  MONO = BITMAP_FMT_MONO();

#
# 位图标志常量定义。
#
#
class TBitmapFlag: 

  #
  # 无特殊标志。
  #
  #
  NONE = BITMAP_FLAG_NONE();

  #
  # 不透明图片。
  #
  #
  OPAQUE = BITMAP_FLAG_OPAQUE();

  #
  # 图片内容不会变化。
  #
  #
  IMMUTABLE = BITMAP_FLAG_IMMUTABLE();

  #
  # OpenGL Texture, bitmap的id是有效的texture id。
  #
  #
  TEXTURE = BITMAP_FLAG_TEXTURE();

  #
  # 如果是MUTABLE的图片，更新时需要设置此标志，底层可能会做特殊处理，比如更新图片到GPU。
  #
  #
  CHANGED = BITMAP_FLAG_CHANGED();

  #
  # 预乘alpha。
  #
  #
  PREMULTI_ALPHA = BITMAP_FLAG_PREMULTI_ALPHA();

#
# 矢量图画布抽象基类。
#
#具体实现时可以使用agg，nanovg, cairo和skia等方式。
#
#cairo和skia体积太大，不适合嵌入式平台，但在PC平台也是一种选择。
#
#目前我们只提供了基于nanovg的实现，支持软件渲染和硬件渲染。
#
#我们对nanovg进行了一些改进:
#
#* 可以用agg/agge实现软件渲染(暂时不支持文本绘制)。
#
#* 可以用bgfx使用DirectX(Windows平台)和Metal(iOS)平台硬件加速。
#
#
#
#示例：
#
#
#>请参考：https://www.w3schools.com/tags/ref_canvas.asp
#
#
class TVgcanvas(object):
  def __init__(self, nativeObj):
    self.nativeObj = nativeObj;


  #
  # 转换为vgcanvas对象(供脚本语言使用)。
  # 
  # @param vg vgcanvas对象。
  #
  # @return vgcanvas对象。
  #
  @classmethod
  def cast(cls, vg): 
    return  TVgcanvas(vgcanvas_cast(awtk_get_native_obj(vg)));


  #
  # flush
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def flush(self): 
    return vgcanvas_flush(awtk_get_native_obj(self));


  #
  # 清除之前的路径，并重新开始一条路径。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def begin_path(self): 
    return vgcanvas_begin_path(awtk_get_native_obj(self));


  #
  # 移动当前点到指定点。
  # 
  # @param x x坐标。
  # @param y y坐标。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def move_to(self, x, y): 
    return vgcanvas_move_to(awtk_get_native_obj(self), x, y);


  #
  # 生成一条线段(从当前点到目标点)。
  # 
  # @param x x坐标。
  # @param y y坐标。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def line_to(self, x, y): 
    return vgcanvas_line_to(awtk_get_native_obj(self), x, y);


  #
  # 生成一条二次贝塞尔曲线。
  # 
  # @param cpx 控制点x坐标。
  # @param cpy 控制点y坐标。
  # @param x x坐标。
  # @param y y坐标。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def quad_to(self, cpx, cpy, x, y): 
    return vgcanvas_quad_to(awtk_get_native_obj(self), cpx, cpy, x, y);


  #
  # 生成一条三次贝塞尔曲线。
  # 
  # @param cp1x 控制点1x坐标。
  # @param cp1y 控制点1y坐标。
  # @param cp2x 控制点2x坐标。
  # @param cp2y 控制点3y坐标。
  # @param x x坐标。
  # @param y y坐标。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def bezier_to(self, cp1x, cp1y, cp2x, cp2y, x, y): 
    return vgcanvas_bezier_to(awtk_get_native_obj(self), cp1x, cp1y, cp2x, cp2y, x, y);


  #
  # 生成一条圆弧路径到指定点。
  # 
  # @param x1 起始点x坐标。
  # @param y1 起始点y坐标。
  # @param x2 结束点x坐标。
  # @param y2 结束点y坐标。
  # @param r 半径。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def arc_to(self, x1, y1, x2, y2, r): 
    return vgcanvas_arc_to(awtk_get_native_obj(self), x1, y1, x2, y2, r);


  #
  # 生成一条圆弧。
  # 
  # @param x 原点x坐标。
  # @param y 原点y坐标。
  # @param r 半径。
  # @param start_angle 起始角度。
  # @param end_angle 结束角度。
  # @param ccw 是否逆时针。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def arc(self, x, y, r, start_angle, end_angle, ccw): 
    return vgcanvas_arc(awtk_get_native_obj(self), x, y, r, start_angle, end_angle, ccw);


  #
  # 检查点是否在当前路径中。
  # 
  # @param x x坐标。
  # @param y y坐标。
  #
  # @return 返回TRUE表示在，否则表示不在。
  #
  def is_point_in_path(self, x, y): 
    return vgcanvas_is_point_in_path(awtk_get_native_obj(self), x, y);


  #
  # 生成一个矩形路径。
  # 
  # @param x x坐标。
  # @param y y坐标。
  # @param w 宽度。
  # @param h 高度。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def rect(self, x, y, w, h): 
    return vgcanvas_rect(awtk_get_native_obj(self), x, y, w, h);


  #
  # 生成一个圆角矩形路径。
  # 
  # @param x x坐标。
  # @param y y坐标。
  # @param w 宽度。
  # @param h 高度。
  # @param r 圆角半径。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def rounded_rect(self, x, y, w, h, r): 
    return vgcanvas_rounded_rect(awtk_get_native_obj(self), x, y, w, h, r);


  #
  # 生成一个椭圆路径。
  # 
  # @param x x坐标。
  # @param y y坐标。
  # @param rx 圆角半径。
  # @param ry 圆角半径。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def ellipse(self, x, y, rx, ry): 
    return vgcanvas_ellipse(awtk_get_native_obj(self), x, y, rx, ry);


  #
  # 闭合路径。
  #
  #>闭合路径是指把起点和终点连接起来，形成一个封闭的多边形。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def close_path(self): 
    return vgcanvas_close_path(awtk_get_native_obj(self));


  #
  # 设置路径填充实心与否。
  #
  #>CCW(1)为实心，CW(2)为镂空，设置其他则默认根据非零环绕规则判断(nonzero)。
  # 
  # @param dir 填充方法。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def path_winding(self, dir): 
    return vgcanvas_path_winding(awtk_get_native_obj(self), dir);


  #
  # 旋转。
  # 
  # @param rad 角度
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def rotate(self, rad): 
    return vgcanvas_rotate(awtk_get_native_obj(self), rad);


  #
  # 缩放。
  # 
  # @param x x方向缩放比例。
  # @param y y方向缩放比例。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def scale(self, x, y): 
    return vgcanvas_scale(awtk_get_native_obj(self), x, y);


  #
  # 平移。
  # 
  # @param x x方向偏移。
  # @param y y方向偏移。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def translate(self, x, y): 
    return vgcanvas_translate(awtk_get_native_obj(self), x, y);


  #
  # 变换矩阵。
  # 
  # @param a a
  # @param b b
  # @param c c
  # @param d d
  # @param e e
  # @param f f
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def transform(self, a, b, c, d, e, f): 
    return vgcanvas_transform(awtk_get_native_obj(self), a, b, c, d, e, f);


  #
  # 设置变换矩阵。
  # 
  # @param a a
  # @param b b
  # @param c c
  # @param d d
  # @param e e
  # @param f f
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_transform(self, a, b, c, d, e, f): 
    return vgcanvas_set_transform(awtk_get_native_obj(self), a, b, c, d, e, f);


  #
  # 使用当前的path裁剪。
  #>目前只有部分backend支持(如cairo)。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def clip_path(self): 
    return vgcanvas_clip_path(awtk_get_native_obj(self));


  #
  # 矩形裁剪。
  # 
  # @param x x坐标。
  # @param y y坐标。
  # @param w 宽度。
  # @param h 高度。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def clip_rect(self, x, y, w, h): 
    return vgcanvas_clip_rect(awtk_get_native_obj(self), x, y, w, h);


  #
  # 设置一个与前一个裁剪区做交集的矩形裁剪区。
  #如果下面这种情况，则不能直接调用 rect_intersect 函数来做矩形交集和 vgcanvas_clip_rect 函数设置裁剪区，而采用本函数做交集。
  #由于缩放和旋转以及平移会导致 vg 的坐标系和上一个裁剪区的坐标系不同，
  #导致直接使用做交集的话，裁剪区会出错。
  #
  #```
  #vgcanvas_clip_rect(vg, old_r.x, old_r.y, old_r.w, old_r.h);
  #vgcanvas_save(vg);
  #vgcanvas_scale(vg, scale_x, scale_y);
  #vgcanvas_rotate(vg, TK_D2R(15));
  #vgcanvas_intersect_clip_rect(vg, r.x, r.y, r.w, r.h);
  #..................
  #vgcanvas_restore(vg);
  #```
  # 
  # @param x x坐标。
  # @param y y坐标。
  # @param w 宽度。
  # @param h 高度。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def intersect_clip_rect(self, x, y, w, h): 
    return vgcanvas_intersect_clip_rect(awtk_get_native_obj(self), x, y, w, h);


  #
  # 填充多边形。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def fill(self): 
    return vgcanvas_fill(awtk_get_native_obj(self));


  #
  # 画线。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def stroke(self): 
    return vgcanvas_stroke(awtk_get_native_obj(self));


  #
  # 用图片填充/画多边形(可能存在可移植性问题，除非必要请勿使用)。
  #多边形的顶点必须在图片范围内，可以通过矩阵变化画到不同的位置。
  # 
  # @param stroke TRUE表示画线FALSE表示填充。
  # @param img 图片。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def paint(self, stroke, img): 
    return vgcanvas_paint(awtk_get_native_obj(self), stroke, awtk_get_native_obj(img));


  #
  # 设置字体的名称。
  # 
  # @param font 字体名称。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_font(self, font): 
    return vgcanvas_set_font(awtk_get_native_obj(self), font);


  #
  # 设置字体的大小。
  # 
  # @param font 字体大小。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_font_size(self, font): 
    return vgcanvas_set_font_size(awtk_get_native_obj(self), font);


  #
  # 设置文本水平对齐的方式。
  # 
  # @param value 取值：left|center|right，必须为常量字符串。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_text_align(self, value): 
    return vgcanvas_set_text_align(awtk_get_native_obj(self), value);


  #
  # 设置文本垂直对齐的方式。
  # 
  # @param value 取值：top|middle|bottom，必须为常量字符串。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_text_baseline(self, value): 
    return vgcanvas_set_text_baseline(awtk_get_native_obj(self), value);


  #
  # 绘制文本。
  # 
  # @param text text
  # @param x x坐标。
  # @param y y坐标。
  # @param max_width 最大宽度。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def fill_text(self, text, x, y, max_width): 
    return vgcanvas_fill_text(awtk_get_native_obj(self), text, x, y, max_width);


  #
  # 测量文本的宽度。
  # 
  # @param text text
  #
  # @return 返回text的宽度。
  #
  def measure_text(self, text): 
    return vgcanvas_measure_text(awtk_get_native_obj(self), text);


  #
  # 绘制图片。
  # 
  # @param img 图片。
  # @param sx sx
  # @param sy sy
  # @param sw sw
  # @param sh sh
  # @param dx dx
  # @param dy dy
  # @param dw dw
  # @param dh dh
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def draw_image(self, img, sx, sy, sw, sh, dx, dy, dw, dh): 
    return vgcanvas_draw_image(awtk_get_native_obj(self), awtk_get_native_obj(img), sx, sy, sw, sh, dx, dy, dw, dh);


  #
  # 绘制图标。
  #
  #绘制图标时会根据屏幕密度进行自动缩放，而绘制普通图片时不会。
  # 
  # @param img 图片。
  # @param sx sx
  # @param sy sy
  # @param sw sw
  # @param sh sh
  # @param dx dx
  # @param dy dy
  # @param dw dw
  # @param dh dh
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def draw_icon(self, img, sx, sy, sw, sh, dx, dy, dw, dh): 
    return vgcanvas_draw_icon(awtk_get_native_obj(self), awtk_get_native_obj(img), sx, sy, sw, sh, dx, dy, dw, dh);


  #
  # 设置是否启用反走样。
  # 
  # @param value 是否启用反走样。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_antialias(self, value): 
    return vgcanvas_set_antialias(awtk_get_native_obj(self), value);


  #
  # 设置全局透明度。
  # 
  # @param alpha global alpha。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_global_alpha(self, alpha): 
    return vgcanvas_set_global_alpha(awtk_get_native_obj(self), alpha);


  #
  # 设置线条的宽度。
  # 
  # @param value 线宽。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_line_width(self, value): 
    return vgcanvas_set_line_width(awtk_get_native_obj(self), value);


  #
  # 设置填充颜色。
  # 
  # @param color 颜色。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_fill_color(self, color): 
    return vgcanvas_set_fill_color_str(awtk_get_native_obj(self), color);


  #
  # 设置线条颜色。
  # 
  # @param color 颜色。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_stroke_color(self, color): 
    return vgcanvas_set_stroke_color_str(awtk_get_native_obj(self), color);


  #
  # 设置line cap。
  # 
  # @param value 取值：butt|round|square，必须为常量字符串。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_line_cap(self, value): 
    return vgcanvas_set_line_cap(awtk_get_native_obj(self), value);


  #
  # 设置line join。
  # 
  # @param value 取值：bevel|round|miter，必须为常量字符串。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_line_join(self, value): 
    return vgcanvas_set_line_join(awtk_get_native_obj(self), value);


  #
  # 设置miter limit。
  # 
  # @param value miter limit
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_miter_limit(self, value): 
    return vgcanvas_set_miter_limit(awtk_get_native_obj(self), value);


  #
  # 保存当前的状态。如颜色和矩阵等信息。
  #
  #> save/restore必须配套使用，否则可能导致状态混乱。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def save(self): 
    return vgcanvas_save(awtk_get_native_obj(self));


  #
  # 恢复上次save的状态。
  #
  #> save/restore必须配套使用，否则可能导致状态混乱。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def restore(self): 
    return vgcanvas_restore(awtk_get_native_obj(self));


  #
  # canvas的宽度
  #
  #
  @property
  def w(self):
    return vgcanvas_t_get_prop_w(self.nativeObj);


  #
  # canvas的高度
  #
  #
  @property
  def h(self):
    return vgcanvas_t_get_prop_h(self.nativeObj);


  #
  # 一行占的字节
  #
  #
  @property
  def stride(self):
    return vgcanvas_t_get_prop_stride(self.nativeObj);


  #
  # 显示比例。
  #
  #
  @property
  def ratio(self):
    return vgcanvas_t_get_prop_ratio(self.nativeObj);


  #
  # 是否启用反走样功能。
  #
  #
  @property
  def anti_alias(self):
    return vgcanvas_t_get_prop_anti_alias(self.nativeObj);


  #
  # 线宽。
  #
  #
  @property
  def line_width(self):
    return vgcanvas_t_get_prop_line_width(self.nativeObj);

  @line_width.setter
  def line_width(self, v):
   this.set_line_width(v);


  #
  # 全局alpha。
  #
  #
  @property
  def global_alpha(self):
    return vgcanvas_t_get_prop_global_alpha(self.nativeObj);

  @global_alpha.setter
  def global_alpha(self, v):
   this.set_global_alpha(v);


  #
  # miter\_limit。
  #@see http://www.w3school.com.cn/tags/canvas_miterlimit.asp
  #
  #
  @property
  def miter_limit(self):
    return vgcanvas_t_get_prop_miter_limit(self.nativeObj);

  @miter_limit.setter
  def miter_limit(self, v):
   this.set_miter_limit(v);


  #
  # line\_cap。
  #@see http://www.w3school.com.cn/tags/canvas_linecap.asp
  #
  #
  @property
  def line_cap(self):
    return vgcanvas_t_get_prop_line_cap(self.nativeObj);

  @line_cap.setter
  def line_cap(self, v):
   this.set_line_cap(v);


  #
  # line\_join。
  #@see http://www.w3school.com.cn/tags/canvas_linejoin.asp
  #
  #
  @property
  def line_join(self):
    return vgcanvas_t_get_prop_line_join(self.nativeObj);

  @line_join.setter
  def line_join(self, v):
   this.set_line_join(v);


  #
  # 字体。
  #
  #
  @property
  def font(self):
    return vgcanvas_t_get_prop_font(self.nativeObj);

  @font.setter
  def font(self, v):
   this.set_font(v);


  #
  # 字体大小。
  #
  #
  @property
  def font_size(self):
    return vgcanvas_t_get_prop_font_size(self.nativeObj);

  @font_size.setter
  def font_size(self, v):
   this.set_font_size(v);


  #
  # 文本对齐方式。
  #
  #@see http://www.w3school.com.cn/tags/canvas_textalign.asp
  #
  #
  @property
  def text_align(self):
    return vgcanvas_t_get_prop_text_align(self.nativeObj);

  @text_align.setter
  def text_align(self, v):
   this.set_text_align(v);


  #
  # 文本基线。
  #
  #@see http://www.w3school.com.cn/tags/canvas_textbaseline.asp
  #
  #
  @property
  def text_baseline(self):
    return vgcanvas_t_get_prop_text_baseline(self.nativeObj);

  @text_baseline.setter
  def text_baseline(self, v):
   this.set_text_baseline(v);


#
# 线帽类型。
#
#
class TVgcanvasLineCap: 

  #
  # 圆头。
  #
  #
  ROUND = VGCANVAS_LINE_CAP_ROUND();

  #
  # 方头。
  #
  #
  SQUARE = VGCANVAS_LINE_CAP_SQUARE();

  #
  # 平头。
  #
  #
  BUTT = VGCANVAS_LINE_CAP_BUTT();

#
# 线条连接类型。
#
#
class TVgcanvasLineJoin: 

  #
  # round。
  #
  #
  ROUND = VGCANVAS_LINE_JOIN_ROUND();

  #
  # bevel。
  #
  #
  BEVEL = VGCANVAS_LINE_JOIN_BEVEL();

  #
  # mitter。
  #
  #
  MITTER = VGCANVAS_LINE_JOIN_MITTER();

#
# 控件的属性。
#
#
class TWidgetProp: 

  #
  # 用于执行某些特殊的命令（比如控制动画的启停），主要是方便MVVM通过属性来控制动画。
  #
  #
  EXEC = WIDGET_PROP_EXEC();

  #
  # X坐标。
  #
  #
  X = WIDGET_PROP_X();

  #
  # Y坐标。
  #
  #
  Y = WIDGET_PROP_Y();

  #
  # 宽度。
  #
  #
  W = WIDGET_PROP_W();

  #
  # 高度。
  #
  #
  H = WIDGET_PROP_H();

  #
  # 最大高度。
  #
  #
  MAX_H = WIDGET_PROP_MAX_H();

  #
  # 窗口设计时宽度。
  #
  #
  DESIGN_W = WIDGET_PROP_DESIGN_W();

  #
  # 窗口设计时宽度。
  #
  #
  DESIGN_H = WIDGET_PROP_DESIGN_H();

  #
  # 窗口大小与设计时大小不同时，是否自动调整子控件的x坐标。
  #
  #
  AUTO_SCALE_CHILDREN_X = WIDGET_PROP_AUTO_SCALE_CHILDREN_X();

  #
  # 窗口大小与设计时大小不同时，是否自动调整子控件的y坐标。
  #
  #
  AUTO_SCALE_CHILDREN_Y = WIDGET_PROP_AUTO_SCALE_CHILDREN_Y();

  #
  # 窗口大小与设计时大小不同时，是否自动调整子控件的宽度。
  #
  #
  AUTO_SCALE_CHILDREN_W = WIDGET_PROP_AUTO_SCALE_CHILDREN_W();

  #
  # 窗口大小与设计时大小不同时，是否自动调整子控件的高度。
  #
  #
  AUTO_SCALE_CHILDREN_H = WIDGET_PROP_AUTO_SCALE_CHILDREN_H();

  #
  # inputing。
  #
  #
  INPUTING = WIDGET_PROP_INPUTING();

  #
  # always on top。
  #
  #
  ALWAYS_ON_TOP = WIDGET_PROP_ALWAYS_ON_TOP();

  #
  # caret x。
  #
  #
  CARET_X = WIDGET_PROP_CARET_X();

  #
  # caret y。
  #
  #
  CARET_Y = WIDGET_PROP_CARET_Y();

  #
  # 脏矩形超出控件本身大小的最大范围。
  #
  #
  DIRTY_RECT_TOLERANCE = WIDGET_PROP_DIRTY_RECT_TOLERANCE();

  #
  # bidi type(rtl,ltr,auto,wrtl,wltr,lro,rlo)。
  #
  #
  BIDI = WIDGET_PROP_BIDI();

  #
  # Canvas。
  #
  #
  CANVAS = WIDGET_PROP_CANVAS();

  #
  # Canvas。
  #
  #
  LOCALIZE_OPTIONS = WIDGET_PROP_LOCALIZE_OPTIONS();

  #
  # Native Window。
  #
  #
  NATIVE_WINDOW = WIDGET_PROP_NATIVE_WINDOW();

  #
  # dialog highlight。
  #
  #
  HIGHLIGHT = WIDGET_PROP_HIGHLIGHT();

  #
  # slider中的bar的的宽度或高度。
  #
  #
  BAR_SIZE = WIDGET_PROP_BAR_SIZE();

  #
  # 不透明度。
  #
  #
  OPACITY = WIDGET_PROP_OPACITY();

  #
  # 最小宽度。
  #
  #
  MIN_W = WIDGET_PROP_MIN_W();

  #
  # 最大宽度。
  #
  #
  MAX_W = WIDGET_PROP_MAX_W();

  #
  # 根据子控件和文本自动调整大小。
  #
  #
  AUTO_ADJUST_SIZE = WIDGET_PROP_AUTO_ADJUST_SIZE();

  #
  # 窗口是否保持单例。
  #
  #
  SINGLE_INSTANCE = WIDGET_PROP_SINGLE_INSTANCE();

  #
  # 点击非focusable控件时，是否让当前焦点控件失去焦点。比如点击窗口空白区域，是否让编辑器失去焦点。
  #
  #
  STRONGLY_FOCUS = WIDGET_PROP_STRONGLY_FOCUS();

  #
  # 子控件布局参数。
  #
  #
  CHILDREN_LAYOUT = WIDGET_PROP_CHILDREN_LAYOUT();

  #
  # 子控件布局参数(过时)。
  #
  #
  LAYOUT = WIDGET_PROP_LAYOUT();

  #
  # 控件布局参数。
  #
  #
  SELF_LAYOUT = WIDGET_PROP_SELF_LAYOUT();

  #
  # layout宽度。
  #
  #
  LAYOUT_W = WIDGET_PROP_LAYOUT_W();

  #
  # layout高度。
  #
  #
  LAYOUT_H = WIDGET_PROP_LAYOUT_H();

  #
  # 虚拟宽度。
  #
  #
  VIRTUAL_W = WIDGET_PROP_VIRTUAL_W();

  #
  # 虚拟高度。
  #
  #
  VIRTUAL_H = WIDGET_PROP_VIRTUAL_H();

  #
  # 名称。
  #
  #
  NAME = WIDGET_PROP_NAME();

  #
  # 类型。
  #
  #
  TYPE = WIDGET_PROP_TYPE();

  #
  # 是否可以关闭。
  #
  #
  CLOSABLE = WIDGET_PROP_CLOSABLE();

  #
  # 鼠标指针。
  #
  #
  POINTER_CURSOR = WIDGET_PROP_POINTER_CURSOR();

  #
  # 值。
  #
  #
  VALUE = WIDGET_PROP_VALUE();

  #
  # 进度条反向显示。
  #
  #
  REVERSE = WIDGET_PROP_REVERSE();

  #
  # 长度。
  #
  #
  LENGTH = WIDGET_PROP_LENGTH();

  #
  # 自动换行。
  #
  #
  LINE_WRAP = WIDGET_PROP_LINE_WRAP();

  #
  # 是否允许单词中换行。
  #
  #
  WORD_WRAP = WIDGET_PROP_WORD_WRAP();

  #
  # 文本。
  #
  #
  TEXT = WIDGET_PROP_TEXT();

  #
  # 待翻译文本。
  #
  #
  TR_TEXT = WIDGET_PROP_TR_TEXT();

  #
  # style。
  #
  #
  STYLE = WIDGET_PROP_STYLE();

  #
  # 是否启用。
  #
  #
  ENABLE = WIDGET_PROP_ENABLE();

  #
  # 是否启用按键音等反馈。
  #
  #
  FEEDBACK = WIDGET_PROP_FEEDBACK();

  #
  # 是否启用floating布局。
  #
  #
  FLOATING = WIDGET_PROP_FLOATING();

  #
  # 边距。
  #
  #
  MARGIN = WIDGET_PROP_MARGIN();

  #
  # 间距。
  #
  #
  SPACING = WIDGET_PROP_SPACING();

  #
  # 左边距。
  #
  #
  LEFT_MARGIN = WIDGET_PROP_LEFT_MARGIN();

  #
  # 右边距。
  #
  #
  RIGHT_MARGIN = WIDGET_PROP_RIGHT_MARGIN();

  #
  # 顶边距。
  #
  #
  TOP_MARGIN = WIDGET_PROP_TOP_MARGIN();

  #
  # 底边距。
  #
  #
  BOTTOM_MARGIN = WIDGET_PROP_BOTTOM_MARGIN();

  #
  # 步长。
  #
  #
  STEP = WIDGET_PROP_STEP();

  #
  # 是否可见。
  #
  #
  VISIBLE = WIDGET_PROP_VISIBLE();

  #
  # 是否接受用户事件。
  #
  #
  SENSITIVE = WIDGET_PROP_SENSITIVE();

  #
  # 控件动画。
  #
  #
  ANIMATION = WIDGET_PROP_ANIMATION();

  #
  # 窗口动画。
  #
  #
  ANIM_HINT = WIDGET_PROP_ANIM_HINT();

  #
  # 窗口设置为全部大小。
  #
  #
  FULLSCREEN = WIDGET_PROP_FULLSCREEN();

  #
  # 禁用窗口动画。
  #
  #
  DISABLE_ANIM = WIDGET_PROP_DISABLE_ANIM();

  #
  # 打开窗口时的动画。
  #
  #
  OPEN_ANIM_HINT = WIDGET_PROP_OPEN_ANIM_HINT();

  #
  # 关闭窗口时的动画。
  #
  #
  CLOSE_ANIM_HINT = WIDGET_PROP_CLOSE_ANIM_HINT();

  #
  # 最小值。
  #
  #
  MIN = WIDGET_PROP_MIN();

  #
  # 软键盘上action按钮的文本。
  #
  #
  ACTION_TEXT = WIDGET_PROP_ACTION_TEXT();

  #
  # 提示信息。
  #
  #
  TIPS = WIDGET_PROP_TIPS();

  #
  # 需要翻译的提示信息。
  #
  #
  TR_TIPS = WIDGET_PROP_TR_TIPS();

  #
  # 输入类型。
  #
  #
  INPUT_TYPE = WIDGET_PROP_INPUT_TYPE();

  #
  # 自定义软键盘资源名称。
  #
  #
  KEYBOARD = WIDGET_PROP_KEYBOARD();

  #
  # 缺省获得焦点的子控件(可用控件名或类型)。
  #
  #
  DEFAULT_FOCUSED_CHILD = WIDGET_PROP_DEFAULT_FOCUSED_CHILD();

  #
  # 只读模式。
  #
  #
  READONLY = WIDGET_PROP_READONLY();

  #
  # 是否可取消。
  #
  #
  CANCELABLE = WIDGET_PROP_CANCELABLE();

  #
  # 密码是否可见。
  #
  #
  PASSWORD_VISIBLE = WIDGET_PROP_PASSWORD_VISIBLE();

  #
  # 是否处于active状态。
  #
  #
  ACTIVE = WIDGET_PROP_ACTIVE();

  #
  # 当前页。
  #
  #
  CURR_PAGE = WIDGET_PROP_CURR_PAGE();

  #
  # 页面最大个数。
  #
  #
  PAGE_MAX_NUMBER = WIDGET_PROP_PAGE_MAX_NUMBER();

  #
  # 是否为垂直模式。
  #
  #
  VERTICAL = WIDGET_PROP_VERTICAL();

  #
  # 是否显示文本。
  #
  #
  SHOW_TEXT = WIDGET_PROP_SHOW_TEXT();

  #
  # X方向的偏移。
  #
  #
  XOFFSET = WIDGET_PROP_XOFFSET();

  #
  # Y方向的偏移。
  #
  #
  YOFFSET = WIDGET_PROP_YOFFSET();

  #
  # 垂直对齐模式。
  #
  #
  ALIGN_V = WIDGET_PROP_ALIGN_V();

  #
  # 水平对齐模式。
  #
  #
  ALIGN_H = WIDGET_PROP_ALIGN_H();

  #
  # 是否自动播放或指定播放的时间。
  #
  #
  AUTO_PLAY = WIDGET_PROP_AUTO_PLAY();

  #
  # 是否循环播放或循环播放的次数。
  #
  #
  LOOP = WIDGET_PROP_LOOP();

  #
  # 是否启用自动更正功能。
  #
  #
  AUTO_FIX = WIDGET_PROP_AUTO_FIX();

  #
  # 编辑器在获得焦点时是否不选中文本。
  #
  #
  SELECT_NONE_WHEN_FOCUSED = WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED();

  #
  # 编辑器在获得焦点时是否打开输入法。
  #
  #
  OPEN_IM_WHEN_FOCUSED = WIDGET_PROP_OPEN_IM_WHEN_FOCUSED();

  #
  # 编辑器在失去焦点时是否关闭输入法。
  #
  #
  CLOSE_IM_WHEN_BLURED = WIDGET_PROP_CLOSE_IM_WHEN_BLURED();

  #
  # X最小值。
  #
  #
  X_MIN = WIDGET_PROP_X_MIN();

  #
  # X最大值。
  #
  #
  X_MAX = WIDGET_PROP_X_MAX();

  #
  # Y最小值。
  #
  #
  Y_MIN = WIDGET_PROP_Y_MIN();

  #
  # Y最大值。
  #
  #
  Y_MAX = WIDGET_PROP_Y_MAX();

  #
  # 最大值。
  #
  #
  MAX = WIDGET_PROP_MAX();

  #
  # 让窗口管理器直接把按键发给自己。
  #
  #
  GRAB_KEYS = WIDGET_PROP_GRAB_KEYS();

  #
  # 行数或每行的高度。
  #
  #
  ROW = WIDGET_PROP_ROW();

  #
  # 控件状态。
  #
  #
  STATE_FOR_STYLE = WIDGET_PROP_STATE_FOR_STYLE();

  #
  # 窗体样式名称。
  #
  #
  THEME = WIDGET_PROP_THEME();

  #
  # window stage
  #
  #
  STAGE = WIDGET_PROP_STAGE();

  #
  # 图片管理器。
  #
  #
  IMAGE_MANAGER = WIDGET_PROP_IMAGE_MANAGER();

  #
  # 资源管理器。
  #
  #
  ASSETS_MANAGER = WIDGET_PROP_ASSETS_MANAGER();

  #
  # locale_info。
  #
  #
  LOCALE_INFO = WIDGET_PROP_LOCALE_INFO();

  #
  # 字体管理器。
  #
  #
  FONT_MANAGER = WIDGET_PROP_FONT_MANAGER();

  #
  # 窗口的窗体样式对象。
  #
  #
  THEME_OBJ = WIDGET_PROP_THEME_OBJ();

  #
  # 缺省的窗体样式对象。
  #
  #
  DEFAULT_THEME_OBJ = WIDGET_PROP_DEFAULT_THEME_OBJ();

  #
  # 项的宽度。
  #
  #
  ITEM_WIDTH = WIDGET_PROP_ITEM_WIDTH();

  #
  # 项的高度。
  #
  #
  ITEM_HEIGHT = WIDGET_PROP_ITEM_HEIGHT();

  #
  # 项的缺省高度。
  #
  #
  DEFAULT_ITEM_HEIGHT = WIDGET_PROP_DEFAULT_ITEM_HEIGHT();

  #
  # X方向是否可拖动。
  #
  #
  XSLIDABLE = WIDGET_PROP_XSLIDABLE();

  #
  # Y方向是否可拖动。
  #
  #
  YSLIDABLE = WIDGET_PROP_YSLIDABLE();

  #
  # 重复次数。
  #
  #
  REPEAT = WIDGET_PROP_REPEAT();

  #
  # 触发长按事件的时间(ms)。
  #
  #
  LONG_PRESS_TIME = WIDGET_PROP_LONG_PRESS_TIME();

  #
  # 是否启用长按。
  #
  #
  ENABLE_LONG_PRESS = WIDGET_PROP_ENABLE_LONG_PRESS();

  #
  # 是否启用点击穿透。
  #
  #
  CLICK_THROUGH = WIDGET_PROP_CLICK_THROUGH();

  #
  # 是否启用动画。
  #
  #
  ANIMATABLE = WIDGET_PROP_ANIMATABLE();

  #
  # 是否自动隐藏。
  #
  #
  AUTO_HIDE = WIDGET_PROP_AUTO_HIDE();

  #
  # 是否自动隐藏滚动条。
  #
  #
  AUTO_HIDE_SCROLL_BAR = WIDGET_PROP_AUTO_HIDE_SCROLL_BAR();

  #
  # 图片名称。
  #
  #
  IMAGE = WIDGET_PROP_IMAGE();

  #
  # 显示格式。
  #
  #
  FORMAT = WIDGET_PROP_FORMAT();

  #
  # 图片绘制类型。
  #
  #
  DRAW_TYPE = WIDGET_PROP_DRAW_TYPE();

  #
  # 是否可选择。
  #
  #
  SELECTABLE = WIDGET_PROP_SELECTABLE();

  #
  # 是否可点击。
  #
  #
  CLICKABLE = WIDGET_PROP_CLICKABLE();

  #
  # X方向缩放比例。
  #
  #
  SCALE_X = WIDGET_PROP_SCALE_X();

  #
  # Y方向缩放比例。
  #
  #
  SCALE_Y = WIDGET_PROP_SCALE_Y();

  #
  # x锚点。
  #
  #
  ANCHOR_X = WIDGET_PROP_ANCHOR_X();

  #
  # y锚点。
  #
  #
  ANCHOR_Y = WIDGET_PROP_ANCHOR_Y();

  #
  # 选中角度(幅度)
  #
  #
  ROTATION = WIDGET_PROP_ROTATION();

  #
  # 紧凑模式。
  #
  #
  COMPACT = WIDGET_PROP_COMPACT();

  #
  # 是否支持滚动。
  #
  #
  SCROLLABLE = WIDGET_PROP_SCROLLABLE();

  #
  # 图标名称。
  #
  #
  ICON = WIDGET_PROP_ICON();

  #
  # 选项集合。
  #
  #
  OPTIONS = WIDGET_PROP_OPTIONS();

  #
  # 是否被选中。
  #
  #
  SELECTED = WIDGET_PROP_SELECTED();

  #
  # 是否被勾选。
  #
  #
  CHECKED = WIDGET_PROP_CHECKED();

  #
  # active状态下的图标。
  #
  #
  ACTIVE_ICON = WIDGET_PROP_ACTIVE_ICON();

  #
  # 动态加载UI名字。
  #
  #
  LOAD_UI = WIDGET_PROP_LOAD_UI();

  #
  # 要打开窗口的名称。
  #
  #
  OPEN_WINDOW = WIDGET_PROP_OPEN_WINDOW();

  #
  # 被选中项的索引。
  #
  #
  SELECTED_INDEX = WIDGET_PROP_SELECTED_INDEX();

  #
  # 点击窗口时关闭窗口。
  #
  #
  CLOSE_WHEN_CLICK = WIDGET_PROP_CLOSE_WHEN_CLICK();

  #
  # 点击窗口外部时关闭窗口。
  #
  #
  CLOSE_WHEN_CLICK_OUTSIDE = WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE();

  #
  # 超时后关闭窗口。
  #
  #
  CLOSE_WHEN_TIMEOUT = WIDGET_PROP_CLOSE_WHEN_TIMEOUT();

  #
  # 行间距。
  #
  #
  LINE_GAP = WIDGET_PROP_LINE_GAP();

  #
  # 背景颜色(仅仅使用于color tile)。
  #
  #
  BG_COLOR = WIDGET_PROP_BG_COLOR();

  #
  # 边框颜色(仅仅使用于color tile)。
  #
  #
  BORDER_COLOR = WIDGET_PROP_BORDER_COLOR();

  #
  # 延迟时间(毫秒)
  #
  #
  DELAY = WIDGET_PROP_DELAY();

  #
  # 是否为键盘。
  #
  #
  IS_KEYBOARD = WIDGET_PROP_IS_KEYBOARD();

  #
  # 是否为焦点控件。
  #
  #
  FOCUSED = WIDGET_PROP_FOCUSED();

  #
  # (过时请用focused)。
  #
  #
  FOCUS = WIDGET_PROP_FOCUS();

  #
  # 是否支持焦点停留。
  #
  #
  FOCUSABLE = WIDGET_PROP_FOCUSABLE();

  #
  # 是否支持焦点状态(如果希望style支持焦点状态，但又不希望焦点停留，可用本属性)。
  #
  #
  WITH_FOCUS_STATE = WIDGET_PROP_WITH_FOCUS_STATE();

  #
  # 将焦点移到前一个的键值。
  #
  #
  MOVE_FOCUS_PREV_KEY = WIDGET_PROP_MOVE_FOCUS_PREV_KEY();

  #
  # 将焦点移到后一个的键值。
  #
  #
  MOVE_FOCUS_NEXT_KEY = WIDGET_PROP_MOVE_FOCUS_NEXT_KEY();

  #
  # 将焦点向上移动的键值。
  #
  #
  MOVE_FOCUS_UP_KEY = WIDGET_PROP_MOVE_FOCUS_UP_KEY();

  #
  # 将焦点向下移动的键值。
  #
  #
  MOVE_FOCUS_DOWN_KEY = WIDGET_PROP_MOVE_FOCUS_DOWN_KEY();

  #
  # 将焦点向左移动的键值。
  #
  #
  MOVE_FOCUS_LEFT_KEY = WIDGET_PROP_MOVE_FOCUS_LEFT_KEY();

  #
  # 将焦点向右移动的键值。
  #
  #
  MOVE_FOCUS_RIGHT_KEY = WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY();

#
# 控件的类型。
#
#
class TWidgetType: 

  #
  # 无特殊类型。
  #
  #
  NONE = WIDGET_TYPE_NONE();

  #
  # 窗口管理器。
  #
  #
  WINDOW_MANAGER = WIDGET_TYPE_WINDOW_MANAGER();

  #
  # 普通窗口。
  #
  #
  NORMAL_WINDOW = WIDGET_TYPE_NORMAL_WINDOW();

  #
  # overlay窗口。
  #
  #
  OVERLAY = WIDGET_TYPE_OVERLAY();

  #
  # 工具条。
  #
  #
  TOOL_BAR = WIDGET_TYPE_TOOL_BAR();

  #
  # 对话框。
  #
  #
  DIALOG = WIDGET_TYPE_DIALOG();

  #
  # 弹出窗口。
  #
  #
  POPUP = WIDGET_TYPE_POPUP();

  #
  # system bar window
  #
  #
  SYSTEM_BAR = WIDGET_TYPE_SYSTEM_BAR();

  #
  # system bar window ato bottom
  #
  #
  SYSTEM_BAR_BOTTOM = WIDGET_TYPE_SYSTEM_BAR_BOTTOM();

  #
  # 精灵窗口。
  #
  #
  SPRITE = WIDGET_TYPE_SPRITE();

  #
  # 键盘窗口。
  #
  #
  KEYBOARD = WIDGET_TYPE_KEYBOARD();

  #
  # 拖放状态窗口。
  #
  #
  DND = WIDGET_TYPE_DND();

  #
  # 文本控件。
  #
  #
  LABEL = WIDGET_TYPE_LABEL();

  #
  # 按钮控件。
  #
  #
  BUTTON = WIDGET_TYPE_BUTTON();

  #
  # 图片控件。
  #
  #
  IMAGE = WIDGET_TYPE_IMAGE();

  #
  # 文本编辑控件。
  #
  #
  EDIT = WIDGET_TYPE_EDIT();

  #
  # 进度条控件。
  #
  #
  PROGRESS_BAR = WIDGET_TYPE_PROGRESS_BAR();

  #
  # 分组控件。
  #
  #
  GROUP_BOX = WIDGET_TYPE_GROUP_BOX();

  #
  # 多选按钮控件。
  #
  #
  CHECK_BUTTON = WIDGET_TYPE_CHECK_BUTTON();

  #
  # 单选按钮控件。
  #
  #
  RADIO_BUTTON = WIDGET_TYPE_RADIO_BUTTON();

  #
  # 对话框标题。
  #
  #
  DIALOG_TITLE = WIDGET_TYPE_DIALOG_TITLE();

  #
  # 对话框客户区域。
  #
  #
  DIALOG_CLIENT = WIDGET_TYPE_DIALOG_CLIENT();

  #
  # 滑块控件。
  #
  #
  SLIDER = WIDGET_TYPE_SLIDER();

  #
  # 视图控件。
  #
  #
  VIEW = WIDGET_TYPE_VIEW();

  #
  # 下拉选择框控件。
  #
  #
  COMBO_BOX = WIDGET_TYPE_COMBO_BOX();

  #
  # 下拉选择框的列表项控件。
  #
  #
  COMBO_BOX_ITEM = WIDGET_TYPE_COMBO_BOX_ITEM();

  #
  # 滑动视图控件。
  #
  #
  SLIDE_VIEW = WIDGET_TYPE_SLIDE_VIEW();

  #
  # 滑动视图的指示器控件。
  #
  #
  SLIDE_INDICATOR = WIDGET_TYPE_SLIDE_INDICATOR();

  #
  # 滑动视图的指示器控件（圆弧显示）。
  #
  #
  SLIDE_INDICATOR_ARC = WIDGET_TYPE_SLIDE_INDICATOR_ARC();

  #
  # 多页控件。
  #
  #
  PAGES = WIDGET_TYPE_PAGES();

  #
  # 标签按钮控件。
  #
  #
  TAB_BUTTON = WIDGET_TYPE_TAB_BUTTON();

  #
  # 标签控件。
  #
  #
  TAB_CONTROL = WIDGET_TYPE_TAB_CONTROL();

  #
  # 标签按钮分组控件。
  #
  #
  TAB_BUTTON_GROUP = WIDGET_TYPE_TAB_BUTTON_GROUP();

  #
  # 按钮分组控件。
  #
  #
  BUTTON_GROUP = WIDGET_TYPE_BUTTON_GROUP();

  #
  # 候选字控件。
  #
  #
  CANDIDATES = WIDGET_TYPE_CANDIDATES();

  #
  # 数值编辑控件。
  #
  #
  SPIN_BOX = WIDGET_TYPE_SPIN_BOX();

  #
  # 拖动块控件。
  #
  #
  DRAGGER = WIDGET_TYPE_DRAGGER();

  #
  # 滚动条控件。
  #
  #
  SCROLL_BAR = WIDGET_TYPE_SCROLL_BAR();

  #
  # 桌面版滚动条控件。
  #
  #
  SCROLL_BAR_DESKTOP = WIDGET_TYPE_SCROLL_BAR_DESKTOP();

  #
  # 移动版滚动条控件。
  #
  #
  SCROLL_BAR_MOBILE = WIDGET_TYPE_SCROLL_BAR_MOBILE();

  #
  # 滚动视图控件。
  #
  #
  SCROLL_VIEW = WIDGET_TYPE_SCROLL_VIEW();

  #
  # 列表视图控件。
  #
  #
  LIST_VIEW = WIDGET_TYPE_LIST_VIEW();

  #
  # 水平列表视图控件。
  #
  #
  LIST_VIEW_H = WIDGET_TYPE_LIST_VIEW_H();

  #
  # 列表项控件。
  #
  #
  LIST_ITEM = WIDGET_TYPE_LIST_ITEM();

  #
  # 颜色选择器控件。
  #
  #
  COLOR_PICKER = WIDGET_TYPE_COLOR_PICKER();

  #
  # 颜色选择器组件控件。
  #
  #
  COLOR_COMPONENT = WIDGET_TYPE_COLOR_COMPONENT();

  #
  # 颜色块控件。
  #
  #
  COLOR_TILE = WIDGET_TYPE_COLOR_TILE();

  #
  # 裁剪控件。
  #
  #
  CLIP_VIEW = WIDGET_TYPE_CLIP_VIEW();

  #
  # 富文本控件。
  #
  #
  RICH_TEXT = WIDGET_TYPE_RICH_TEXT();

  #
  # AppBar控件。
  #
  #
  APP_BAR = WIDGET_TYPE_APP_BAR();

  #
  # 网格控件。
  #
  #
  GRID = WIDGET_TYPE_GRID();

  #
  # 网格项目控件。
  #
  #
  GRID_ITEM = WIDGET_TYPE_GRID_ITEM();

  #
  # 行控件。
  #
  #
  ROW = WIDGET_TYPE_ROW();

  #
  # 列控件。
  #
  #
  COLUMN = WIDGET_TYPE_COLUMN();

  #
  # 电阻屏校准窗口。
  #
  #
  CALIBRATION_WIN = WIDGET_TYPE_CALIBRATION_WIN();

#
# 窗口的生命周期常量定义。
#
#
class TWindowStage: 

  #
  # 初始状态。
  #
  #
  NONE = WINDOW_STAGE_NONE();

  #
  # 从UI资源加载完成。
  #
  #
  LOADED = WINDOW_STAGE_LOADED();

  #
  # 创建完成。
  #
  #
  CREATED = WINDOW_STAGE_CREATED();

  #
  # 窗口已经打开(窗口打开动画完成后)
  #
  #
  OPENED = WINDOW_STAGE_OPENED();

  #
  # 窗口已关闭。
  #
  #
  CLOSED = WINDOW_STAGE_CLOSED();

  #
  # 窗口挂起状态。
  #
  #
  SUSPEND = WINDOW_STAGE_SUSPEND();

#
# 窗口的closable常量定义。
#
#
class TWindowClosable: 

  #
  # 窗口可关闭。
  #
  #
  YES = WINDOW_CLOSABLE_YES();

  #
  # 窗口不可关闭。
  #
  #
  NO = WINDOW_CLOSABLE_NO();

  #
  # 窗口需要确认后才能关闭。
  #
  #
  CONFIRM = WINDOW_CLOSABLE_CONFIRM();

#
# 控件状态常量定义。
#
#这里指定常用的状态值，扩展控件可以在自己的头文件中定义私有的状态。
#
#
class TWidgetState: 

  #
  # 无效状态。
  #
  #
  NONE = WIDGET_STATE_NONE();

  #
  # 正常状态。
  #
  #
  NORMAL = WIDGET_STATE_NORMAL();

  #
  # 内容被修改的状态。
  #
  #
  CHANGED = WIDGET_STATE_CHANGED();

  #
  # 指针按下状态。
  #
  #
  PRESSED = WIDGET_STATE_PRESSED();

  #
  # 指针悬浮状态。
  #
  #
  OVER = WIDGET_STATE_OVER();

  #
  # 禁用状态。
  #
  #
  DISABLE = WIDGET_STATE_DISABLE();

  #
  # 聚焦状态。
  #
  #
  FOCUSED = WIDGET_STATE_FOCUSED();

  #
  # 勾选状态。
  #
  #
  CHECKED = WIDGET_STATE_CHECKED();

  #
  # 没勾选状态。
  #
  #
  UNCHECKED = WIDGET_STATE_UNCHECKED();

  #
  # 编辑器无内容状态。
  #
  #
  EMPTY = WIDGET_STATE_EMPTY();

  #
  # 编辑器无内容同时聚焦的状态。
  #
  #
  EMPTY_FOCUS = WIDGET_STATE_EMPTY_FOCUS();

  #
  # 输入错误状态。
  #
  #
  ERROR = WIDGET_STATE_ERROR();

  #
  # 选中状态。
  #
  #
  SELECTED = WIDGET_STATE_SELECTED();

  #
  # 正常状态(选中项)。
  #
  #
  NORMAL_OF_CHECKED = WIDGET_STATE_NORMAL_OF_CHECKED();

  #
  # 指针按下状态(选中项)。
  #
  #
  PRESSED_OF_CHECKED = WIDGET_STATE_PRESSED_OF_CHECKED();

  #
  # 指针悬浮状态(选中项)。
  #
  #
  OVER_OF_CHECKED = WIDGET_STATE_OVER_OF_CHECKED();

  #
  # 禁用状态(选中项)。
  #
  #
  DISABLE_OF_CHECKED = WIDGET_STATE_DISABLE_OF_CHECKED();

  #
  # 焦点状态(选中项)。
  #
  #
  FOCUSED_OF_CHECKED = WIDGET_STATE_FOCUSED_OF_CHECKED();

  #
  # 正常状态(当前项)。
  #
  #
  NORMAL_OF_ACTIVE = WIDGET_STATE_NORMAL_OF_ACTIVE();

  #
  # 指针按下状态(当前项)。
  #
  #
  PRESSED_OF_ACTIVE = WIDGET_STATE_PRESSED_OF_ACTIVE();

  #
  # 指针悬浮状态(当前项)。
  #
  #
  OVER_OF_ACTIVE = WIDGET_STATE_OVER_OF_ACTIVE();

  #
  # 禁用状态(当前项)。
  #
  #
  DISABLE_OF_ACTIVE = WIDGET_STATE_DISABLE_OF_ACTIVE();

  #
  # 焦点状态(当前项)。
  #
  #
  FOCUSED_OF_ACTIVE = WIDGET_STATE_FOCUSED_OF_ACTIVE();

#
# 控件鼠标光标常量定义。
#
#
class TWidgetCursor: 

  #
  # 默认光标。
  #
  #
  CURSOR_DEFAULT = WIDGET_CURSOR_DEFAULT();

  #
  # 文本选择光标。
  #
  #
  CURSOR_EDIT = WIDGET_CURSOR_EDIT();

  #
  # 手指光标。
  #
  #
  CURSOR_HAND = WIDGET_CURSOR_HAND();

  #
  # 等待光标。
  #
  #
  CURSOR_WAIT = WIDGET_CURSOR_WAIT();

  #
  # 叉光标。
  #
  #
  CURSOR_CROSS = WIDGET_CURSOR_CROSS();

  #
  # Slashed circle or crossbones。
  #
  #
  CURSOR_NO = WIDGET_CURSOR_NO();

  #
  # Double arrow pointing northwest and southeast。
  #
  #
  CURSOR_SIZENWSE = WIDGET_CURSOR_SIZENWSE();

  #
  # Double arrow pointing northeast and southwest。
  #
  #
  CURSOR_SIZENESW = WIDGET_CURSOR_SIZENESW();

  #
  # Double arrow pointing west and east。
  #
  #
  CURSOR_SIZEWE = WIDGET_CURSOR_SIZEWE();

  #
  # Double arrow pointing north and south。
  #
  #
  CURSOR_SIZENS = WIDGET_CURSOR_SIZENS();

  #
  # Four pointed arrow pointing north, south, east, and west。
  #
  #
  CURSOR_SIZEALL = WIDGET_CURSOR_SIZEALL();

#
# widget_t* button = button_create(win, 10, 10, 128, 30);
#widget_set_text(button, L"OK");
#widget_on(button, EVT_CLICK, on_click, NULL);
#```
#
#
class TWidget(object):
  def __init__(self, nativeObj):
    self.nativeObj = nativeObj;


  #
  # 获取子控件的个数。
  # 
  #
  # @return 子控件的个数。
  #
  def count_children(self): 
    return widget_count_children(awtk_get_native_obj(self));


  #
  # 获取指定索引的子控件。
  # 
  # @param index 索引。
  #
  # @return 子控件。
  #
  def get_child(self, index): 
    return  TWidget(widget_get_child(awtk_get_native_obj(self), index));


  #
  # 获取当前窗口中的焦点控件。
  # 
  #
  # @return 焦点控件。
  #
  def get_focused_widget(self): 
    return  TWidget(widget_get_focused_widget(awtk_get_native_obj(self)));


  #
  # 获取原生窗口对象。
  # 
  #
  # @return 原生窗口对象。
  #
  def get_native_window(self): 
    return  TNativeWindow(widget_get_native_window(awtk_get_native_obj(self)));


  #
  # 获取控件在父控件中的索引编号。
  # 
  #
  # @return 在父控件中的索引编号。
  #
  def index_of(self): 
    return widget_index_of(awtk_get_native_obj(self));


  #
  # 关闭控件所在的窗口。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def close_window(self): 
    return widget_close_window(awtk_get_native_obj(self));


  #
  # 请求返回到前一个窗口。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def back(self): 
    return widget_back(awtk_get_native_obj(self));


  #
  # 请求返回到home窗口。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def back_to_home(self): 
    return widget_back_to_home(awtk_get_native_obj(self));


  #
  # 移动控件。
  # 
  # @param x x坐标
  # @param y y坐标
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def move(self, x, y): 
    return widget_move(awtk_get_native_obj(self), x, y);


  #
  # 调整控件的大小。
  # 
  # @param w 宽度
  # @param h 高度
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def resize(self, w, h): 
    return widget_resize(awtk_get_native_obj(self), w, h);


  #
  # 移动控件并调整控件的大小。
  # 
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def move_resize(self, x, y, w, h): 
    return widget_move_resize(awtk_get_native_obj(self), x, y, w, h);


  #
  # 设置控件的值。
  #只是对widget\_set\_prop的包装，值的意义由子类控件决定。
  # 
  # @param value 值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_value(self, value): 
    return widget_set_value(awtk_get_native_obj(self), value);


  #
  # 设置控件的值(以动画形式变化到指定的值)。
  #只是对widget\_set\_prop的包装，值的意义由子类控件决定。
  # 
  # @param value 值。
  # @param duration 动画持续时间(毫秒)。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def animate_value_to(self, value, duration): 
    return widget_animate_value_to(awtk_get_native_obj(self), value, duration);


  #
  # 增加控件的值。
  #只是对widget\_set\_prop的包装，值的意义由子类控件决定。
  # 
  # @param delta 增量。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def add_value(self, delta): 
    return widget_add_value(awtk_get_native_obj(self), delta);


  #
  # 查询指定的style是否存在。
  # 
  # @param style_name style的名称（如果为 NULL，则默认为 default）。
  # @param state_name state的名称（如果为 NULL，则默认为 normal）。
  #
  # @return 存在返回 TRUE，不存在返回 FALSE。
  #
  def is_style_exist(self, style_name, state_name): 
    return widget_is_style_exist(awtk_get_native_obj(self), style_name, state_name);


  #
  # 启用指定的style。
  # 
  # @param style style的名称。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def use_style(self, style): 
    return widget_use_style(awtk_get_native_obj(self), style);


  #
  # 设置控件的文本。
  #只是对widget\_set\_prop的包装，文本的意义由子类控件决定。
  # 
  # @param text 文本。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_text(self, text): 
    return widget_set_text_utf8(awtk_get_native_obj(self), text);


  #
  # 设置子控件的文本。
  #只是对widget\_set\_prop的包装，文本的意义由子类控件决定。
  # 
  # @param name 子控件的名称。
  # @param text 文本。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_child_text(self, name, text): 
    return widget_set_child_text_utf8(awtk_get_native_obj(self), name, text);


  #
  # 用一个浮点数去设置子控件的文本。
  #只是对widget\_set\_prop的包装，文本的意义由子类控件决定。
  # 
  # @param name 子控件的名称。
  # @param format 格式字符串(如："%2.2lf")。
  # @param value 浮点数值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_child_text_with_double(self, name, format, value): 
    return widget_set_child_text_with_double(awtk_get_native_obj(self), name, format, value);


  #
  # 用一个整数去设置子控件的文本。
  #只是对widget\_set\_prop的包装，文本的意义由子类控件决定。
  # 
  # @param name 子控件的名称。
  # @param format 格式字符串(如："%d")。
  # @param value 值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_child_text_with_int(self, name, format, value): 
    return widget_set_child_text_with_int(awtk_get_native_obj(self), name, format, value);


  #
  # 获取翻译之后的文本，然后调用widget_set_text。
  # 
  # @param text 文本。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_tr_text(self, text): 
    return widget_set_tr_text(awtk_get_native_obj(self), text);


  #
  # 获取控件的值。只是对widget\_get\_prop的包装，值的意义由子类控件决定。
  # 
  #
  # @return 返回值。
  #
  def get_value(self): 
    return widget_get_value(awtk_get_native_obj(self));


  #
  # 获取控件enable属性值。
  # 
  #
  # @return 返回enable。
  #
  def get_enable(self): 
    return widget_get_enable(awtk_get_native_obj(self));


  #
  # 获取控件floating属性值。
  # 
  #
  # @return 返回floating。
  #
  def get_floating(self): 
    return widget_get_floating(awtk_get_native_obj(self));


  #
  # 获取控件auto_adjust_size属性值。
  # 
  #
  # @return 返回auto_adjust_size。
  #
  def get_auto_adjust_size(self): 
    return widget_get_auto_adjust_size(awtk_get_native_obj(self));


  #
  # 获取控件with_focus_state属性值。
  # 
  #
  # @return 返回with_focus_state。
  #
  def get_with_focus_state(self): 
    return widget_get_with_focus_state(awtk_get_native_obj(self));


  #
  # 获取控件focusable属性值。
  # 
  #
  # @return 返回focusable。
  #
  def get_focusable(self): 
    return widget_get_focusable(awtk_get_native_obj(self));


  #
  # 获取控件sensitive属性值。
  # 
  #
  # @return 返回sensitive。
  #
  def get_sensitive(self): 
    return widget_get_sensitive(awtk_get_native_obj(self));


  #
  # 获取控件visible属性值。
  # 
  #
  # @return 返回visible。
  #
  def get_visible(self): 
    return widget_get_visible(awtk_get_native_obj(self));


  #
  # 获取控件feedback属性值。
  # 
  #
  # @return 返回feedback。
  #
  def get_feedback(self): 
    return widget_get_feedback(awtk_get_native_obj(self));


  #
  # str_t str;
  #str_init(&str, 0);
  #str_from_wstr(&str, widget_get_text(target));
  #log_debug("%s: %s\n", target->name, str.str);
  #str_reset(&str);
  #```
  # 
  #
  # @return 返回文本。
  #
  def get_text(self): 
    return widget_get_text(awtk_get_native_obj(self));


  #
  # 设置控件的名称。
  # 
  # @param name 名称。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_name(self, name): 
    return widget_set_name(awtk_get_native_obj(self), name);


  #
  # 设置theme的名称，用于动态切换主题。名称与当前主题名称相同，则重新加载全部资源。
  #
  #> 目前只支持带有文件系统的平台。
  # 
  # @param name 主题的名称。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_theme(self, name): 
    return widget_set_theme(awtk_get_native_obj(self), name);


  #
  # 设置鼠标指针的图片名。
  # 
  # @param cursor 图片名称(无扩展名)。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_pointer_cursor(self, cursor): 
    return widget_set_pointer_cursor(awtk_get_native_obj(self), cursor);


  #
  # 设置控件的动画参数(仅用于在UI文件使用)。
  #请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)
  # 
  # @param animation 动画参数。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_animation(self, animation): 
    return widget_set_animation(awtk_get_native_obj(self), animation);


  #
  # 创建动画。
  #请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)
  #
  #* 除非指定auto_start=false，动画创建后自动启动。
  #* 除非指定auto_destroy=false，动画播放完成后自动销毁。
  # 
  # @param animation 动画参数。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def create_animator(self, animation): 
    return widget_create_animator(awtk_get_native_obj(self), animation);


  #
  # 播放动画。
  #请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)
  #
  #* 1.widget为NULL时，播放所有名称为name的动画。
  #* 2.name为NULL时，播放所有widget相关的动画。
  #* 3.widget和name均为NULL，播放所有动画。
  # 
  # @param name 动画名称。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def start_animator(self, name): 
    return widget_start_animator(awtk_get_native_obj(self), name);


  #
  # 设置动画的时间倍率，<0: 时间倒退，<1: 时间变慢，>1 时间变快。
  #请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)
  #
  #* 1.widget为NULL时，设置所有名称为name的动画的时间倍率。
  #* 2.name为NULL时，设置所有widget相关的动画的时间倍率。
  #* 3.widget和name均为NULL，设置所有动画的时间倍率。
  # 
  # @param name 动画名称。
  # @param time_scale 时间倍率。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_animator_time_scale(self, name, time_scale): 
    return widget_set_animator_time_scale(awtk_get_native_obj(self), name, time_scale);


  #
  # 暂停动画。
  #请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)
  #
  #* 1.widget为NULL时，暂停所有名称为name的动画。
  #* 2.name为NULL时，暂停所有widget相关的动画。
  #* 3.widget和name均为NULL，暂停所有动画。
  # 
  # @param name 动画名称。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def pause_animator(self, name): 
    return widget_pause_animator(awtk_get_native_obj(self), name);


  #
  # 停止动画(控件的相应属性回归原位)。
  #请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)
  #
  #* 1.widget为NULL时，停止所有名称为name的动画。
  #* 2.name为NULL时，停止所有widget相关的动画。
  #* 3.widget和name均为NULL，停止所有动画。
  # 
  # @param name 动画名称。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def stop_animator(self, name): 
    return widget_stop_animator(awtk_get_native_obj(self), name);


  #
  # 销毁动画。
  #请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)
  #
  #* 1.widget为NULL时，销毁所有名称为name的动画。
  #* 2.name为NULL时，销毁所有widget相关的动画。
  #* 3.widget和name均为NULL，销毁所有动画。
  # 
  # @param name 动画名称。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def destroy_animator(self, name): 
    return widget_destroy_animator(awtk_get_native_obj(self), name);


  #
  # 设置控件的可用性。
  # 
  # @param enable 是否可用性。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_enable(self, enable): 
    return widget_set_enable(awtk_get_native_obj(self), enable);


  #
  # 设置控件是否启用反馈。
  # 
  # @param feedback 是否启用反馈。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_feedback(self, feedback): 
    return widget_set_feedback(awtk_get_native_obj(self), feedback);


  #
  # 设置控件是否根据子控件和文本自动调整控件自身大小。
  # 
  # @param auto_adjust_size 是否根据子控件和文本自动调整控件自身大小。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_auto_adjust_size(self, auto_adjust_size): 
    return widget_set_auto_adjust_size(awtk_get_native_obj(self), auto_adjust_size);


  #
  # 设置控件的floating标志。
  #> floating的控件不受父控件的子控件布局参数的影响。
  # 
  # @param floating 是否启用floating布局。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_floating(self, floating): 
    return widget_set_floating(awtk_get_native_obj(self), floating);


  #
  # 设置控件是否获得焦点。
  # 
  # @param focused 是否获得焦点。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_focused(self, focused): 
    return widget_set_focused(awtk_get_native_obj(self), focused);


  #
  # 设置控件是否可获得焦点。
  # 
  # @param focusable 是否可获得焦点。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_focusable(self, focusable): 
    return widget_set_focusable(awtk_get_native_obj(self), focusable);


  #
  # 设置控件的状态。
  # 
  # @param state 状态(必须为真正的常量字符串，在widget的整个生命周期有效)。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_state(self, state): 
    return widget_set_state(awtk_get_native_obj(self), state);


  #
  # 设置控件的不透明度。
  #
  #>在嵌入式平台，半透明效果会使性能大幅下降，请谨慎使用。
  # 
  # @param opacity 不透明度(取值0-255，0表示完全透明，255表示完全不透明)。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_opacity(self, opacity): 
    return widget_set_opacity(awtk_get_native_obj(self), opacity);


  #
  # 设置控件脏矩形超出控件本身大小的最大范围(一般不用指定)。
  # 
  # @param dirty_rect_tolerance 控件脏脏矩形超出控件本身大小的最大范。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_dirty_rect_tolerance(self, dirty_rect_tolerance): 
    return widget_set_dirty_rect_tolerance(awtk_get_native_obj(self), dirty_rect_tolerance);


  #
  # 销毁全部子控件。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def destroy_children(self): 
    return widget_destroy_children(awtk_get_native_obj(self));


  #
  # 加入一个子控件。
  # 
  # @param child 子控件对象。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def add_child(self, child): 
    return widget_add_child(awtk_get_native_obj(self), awtk_get_native_obj(child));


  #
  # 移出指定的子控件(并不销毁)。
  # 
  # @param child 子控件对象。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def remove_child(self, child): 
    return widget_remove_child(awtk_get_native_obj(self), awtk_get_native_obj(child));


  #
  # 插入子控件到指定的位置。
  # 
  # @param index 位置序数(大于等于总个数，则放到最后)。
  # @param child 子控件对象。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def insert_child(self, index, child): 
    return widget_insert_child(awtk_get_native_obj(self), index, awtk_get_native_obj(child));


  #
  # 调整控件在父控件中的位置序数。
  # 
  # @param index 位置序数(大于等于总个数，则放到最后)。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def restack(self, index): 
    return widget_restack(awtk_get_native_obj(self), index);


  #
  # 查找指定名称的子控件(同widget_lookup(widget, name, FALSE))。
  # 
  # @param name 子控件的名称。
  #
  # @return 子控件或NULL。
  #
  def child(self, name): 
    return  TWidget(widget_child(awtk_get_native_obj(self), name));


  #
  # 查找指定名称的子控件(返回第一个)。
  # 
  # @param name 子控件的名称。
  # @param recursive 是否递归查找全部子控件。
  #
  # @return 子控件或NULL。
  #
  def lookup(self, name, recursive): 
    return  TWidget(widget_lookup(awtk_get_native_obj(self), name, recursive));


  #
  # 查找指定类型的子控件(返回第一个)。
  # 
  # @param type 子控件的名称。
  # @param recursive 是否递归查找全部子控件。
  #
  # @return 子控件或NULL。
  #
  def lookup_by_type(self, type, recursive): 
    return  TWidget(widget_lookup_by_type(awtk_get_native_obj(self), type, recursive));


  #
  # 设置控件的可见性。
  # 
  # @param visible 是否可见。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_visible(self, visible): 
    return widget_set_visible(awtk_get_native_obj(self), visible);


  #
  # 设置控件的可见性(不触发repaint和relayout)。
  # 
  # @param visible 是否可见。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_visible_only(self, visible): 
    return widget_set_visible_only(awtk_get_native_obj(self), visible);


  #
  # 设置控件是否接受用户事件。
  # 
  # @param sensitive 是否接受用户事件。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_sensitive(self, sensitive): 
    return widget_set_sensitive(awtk_get_native_obj(self), sensitive);


  #
  # widget_t* ok = button_create(win, 10, 10, 80, 30);
  #widget_on(ok, EVT_CLICK, on_click, NULL);
  #
  #```
  # 
  # @param type 事件类型。
  # @param on_event 事件处理函数。
  # @param ctx 事件处理函数上下文。
  #
  # @return 返回id，用于widget_off。
  #
  def on(self, type, on_event, ctx): 
    return widget_on(awtk_get_native_obj(self), type, on_event, ctx);


  #
  # 注销指定事件的处理函数。
  # 
  # @param id widget_on返回的ID。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def off(self, id): 
    return widget_off(awtk_get_native_obj(self), id);


  #
  # 请求强制重绘控件。
  # 
  # @param r 矩形对象(widget本地坐标)。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def invalidate_force(self, r): 
    return widget_invalidate_force(awtk_get_native_obj(self), awtk_get_native_obj(r));


  #
  # 设置字符串格式的属性。
  # 
  # @param name 属性的名称。
  # @param v 属性的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_prop_str(self, name, v): 
    return widget_set_prop_str(awtk_get_native_obj(self), name, v);


  #
  # 获取字符串格式的属性。
  # 
  # @param name 属性的名称。
  # @param defval 缺省值。
  #
  # @return 返回属性的值。
  #
  def get_prop_str(self, name, defval): 
    return widget_get_prop_str(awtk_get_native_obj(self), name, defval);


  #
  # 设置指针格式的属性。
  # 
  # @param name 属性的名称。
  # @param v 属性的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_prop_pointer(self, name, v): 
    return widget_set_prop_pointer(awtk_get_native_obj(self), name, v);


  #
  # 获取指针格式的属性。
  # 
  # @param name 属性的名称。
  #
  # @return 返回属性的值。
  #
  def get_prop_pointer(self, name): 
    return widget_get_prop_pointer(awtk_get_native_obj(self), name);


  #
  # 设置整数格式的属性。
  # 
  # @param name 属性的名称。
  # @param v 属性的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_prop_int(self, name, v): 
    return widget_set_prop_int(awtk_get_native_obj(self), name, v);


  #
  # 获取整数格式的属性。
  # 
  # @param name 属性的名称。
  # @param defval 缺省值。
  #
  # @return 返回属性的值。
  #
  def get_prop_int(self, name, defval): 
    return widget_get_prop_int(awtk_get_native_obj(self), name, defval);


  #
  # 设置布尔格式的属性。
  # 
  # @param name 属性的名称。
  # @param v 属性的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_prop_bool(self, name, v): 
    return widget_set_prop_bool(awtk_get_native_obj(self), name, v);


  #
  # 获取布尔格式的属性。
  # 
  # @param name 属性的名称。
  # @param defval 缺省值。
  #
  # @return 返回属性的值。
  #
  def get_prop_bool(self, name, defval): 
    return widget_get_prop_bool(awtk_get_native_obj(self), name, defval);


  #
  # 判断当前控件所在的窗口是否已经打开。
  # 
  #
  # @return 返回当前控件所在的窗口是否已经打开。
  #
  def is_window_opened(self): 
    return widget_is_window_opened(awtk_get_native_obj(self));


  #
  # 判断窗口及子控件创建或加载是否完成。
  # 
  #
  # @return 返回创建或加载是否完成。
  #
  def is_window_created(self): 
    return widget_is_window_created(awtk_get_native_obj(self));


  #
  # 判断当前控件是否是指定控件的父控件(包括非直系)。
  # 
  # @param child 控件对象。
  #
  # @return 返回TRUE表示是，否则表示不是。
  #
  def is_parent_of(self, child): 
    return widget_is_parent_of(awtk_get_native_obj(self), awtk_get_native_obj(child));


  #
  # 判断当前控件是否是指定控件的直系父控件。
  # 
  # @param child 控件对象。
  #
  # @return 返回TRUE表示是，否则表示不是。
  #
  def is_direct_parent_of(self, child): 
    return widget_is_direct_parent_of(awtk_get_native_obj(self), awtk_get_native_obj(child));


  #
  # 判断当前控件是否是窗口。
  # 
  #
  # @return 返回当前控件是否是窗口。
  #
  def is_window(self): 
    return widget_is_window(awtk_get_native_obj(self));


  #
  # 检查控件是否是system bar类型。
  # 
  #
  # @return 返回FALSE表示不是，否则表示是。
  #
  def is_system_bar(self): 
    return widget_is_system_bar(awtk_get_native_obj(self));


  #
  # 检查控件是否是普通窗口类型。
  # 
  #
  # @return 返回FALSE表示不是，否则表示是。
  #
  def is_normal_window(self): 
    return widget_is_normal_window(awtk_get_native_obj(self));


  #
  # 检查控件是否是对话框类型。
  # 
  #
  # @return 返回FALSE表示不是，否则表示是。
  #
  def is_dialog(self): 
    return widget_is_dialog(awtk_get_native_obj(self));


  #
  # 检查控件是否是弹出窗口类型。
  # 
  #
  # @return 返回FALSE表示不是，否则表示是。
  #
  def is_popup(self): 
    return widget_is_popup(awtk_get_native_obj(self));


  #
  # 检查控件是否是overlay窗口类型。
  # 
  #
  # @return 返回FALSE表示不是，否则表示是。
  #
  def is_overlay(self): 
    return widget_is_overlay(awtk_get_native_obj(self));


  #
  # 检查控件弹出对话框控件是否已经打开了（而非挂起状态）。
  # 
  #
  # @return 返回FALSE表示不是，否则表示是。
  #
  def is_opened_dialog(self): 
    return widget_is_opened_dialog(awtk_get_native_obj(self));


  #
  # 检查控件弹出窗口控件是否已经打开了（而非挂起状态）。
  # 
  #
  # @return 返回FALSE表示不是，否则表示是。
  #
  def is_opened_popup(self): 
    return widget_is_opened_popup(awtk_get_native_obj(self));


  #
  # widget_set_prop_bool(group, WIDGET_PROP_IS_KEYBOARD, TRUE);
  #```
  # 
  #
  # @return 返回FALSE表示不是，否则表示是。
  #
  def is_keyboard(self): 
    return widget_is_keyboard(awtk_get_native_obj(self));


  #
  # 判断当前控件是否是设计窗口。
  # 
  #
  # @return 返回当前控件是否是设计窗口。
  #
  def is_designing_window(self): 
    return widget_is_designing_window(awtk_get_native_obj(self));


  #
  # 判断当前控件是否是窗口管理器。
  # 
  #
  # @return 返回当前控件是否是窗口管理器。
  #
  def is_window_manager(self): 
    return widget_is_window_manager(awtk_get_native_obj(self));


  #
  # 遍历当前控件及子控件。
  # 
  # @param visit 遍历的回调函数。
  # @param ctx 回调函数的上下文。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def foreach(self, visit, ctx): 
    return widget_foreach(awtk_get_native_obj(self), visit, ctx);


  #
  # 获取当前控件所在的窗口。
  # 
  #
  # @return 窗口对象。
  #
  def get_window(self): 
    return  TWidget(widget_get_window(awtk_get_native_obj(self)));


  #
  # 获取当前的窗口管理器。
  # 
  #
  # @return 窗口管理器对象。
  #
  def get_window_manager(self): 
    return  TWidget(widget_get_window_manager(awtk_get_native_obj(self)));


  #
  # 获取当前控件的类型名称。
  # 
  #
  # @return 返回类型名。
  #
  def get_type(self): 
    return widget_get_type(awtk_get_native_obj(self));


  #
  # clone。
  # 
  # @param parent clone新控件的parent对象。
  #
  # @return 返回clone的对象。
  #
  def clone(self, parent): 
    return  TWidget(widget_clone(awtk_get_native_obj(self), awtk_get_native_obj(parent)));


  #
  # 判断两个widget是否相同。
  # 
  # @param other 要比较的控件对象。
  #
  # @return 返回TRUE表示相同，否则表示不同。
  #
  def equal(self, other): 
    return widget_equal(awtk_get_native_obj(self), awtk_get_native_obj(other));


  #
  # 转换为widget对象(供脚本语言使用)。
  # 
  # @param widget widget对象。
  #
  # @return widget对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TWidget(widget_cast(awtk_get_native_obj(widget)));


  #
  # 从父控件中移除控件，并调用unref函数销毁控件。
  #
  #> 一般无需直接调用，关闭窗口时，自动销毁相关控件。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def destroy(self): 
    return widget_destroy(awtk_get_native_obj(self));


  #
  # 从父控件中移除控件，并调用unref函数销毁控件。
  #
  #> 一般无需直接调用，关闭窗口时，自动销毁相关控件。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def destroy_async(self): 
    return widget_destroy_async(awtk_get_native_obj(self));


  #
  # 减少控件的引用计数。引用计数为0时销毁控件。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def unref(self): 
    return widget_unref(awtk_get_native_obj(self));


  #
  # 根据控件的style绘制边框矩形。
  # 
  # @param c 画布对象。
  # @param r 矩形区域。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def stroke_border_rect(self, c, r): 
    return widget_stroke_border_rect(awtk_get_native_obj(self), awtk_get_native_obj(c), awtk_get_native_obj(r));


  #
  # 根据控件的style绘制背景矩形。
  # 
  # @param c 画布对象。
  # @param r 矩形区域。
  # @param draw_type 图片缺省绘制方式。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def fill_bg_rect(self, c, r, draw_type): 
    return widget_fill_bg_rect(awtk_get_native_obj(self), awtk_get_native_obj(c), awtk_get_native_obj(r), draw_type);


  #
  # 根据控件的style绘制前景矩形。
  # 
  # @param c 画布对象。
  # @param r 矩形区域。
  # @param draw_type 图片缺省绘制方式。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def fill_fg_rect(self, c, r, draw_type): 
    return widget_fill_fg_rect(awtk_get_native_obj(self), awtk_get_native_obj(c), awtk_get_native_obj(r), draw_type);


  #
  # 递归的分发一个事件到所有target子控件。
  # 
  # @param e 事件。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def dispatch_to_target(self, e): 
    return widget_dispatch_to_target(awtk_get_native_obj(self), awtk_get_native_obj(e));


  #
  # 递归的分发一个事件到所有key_target子控件。
  # 
  # @param e 事件。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def dispatch_to_key_target(self, e): 
    return widget_dispatch_to_key_target(awtk_get_native_obj(self), awtk_get_native_obj(e));


  #
  # 获取 widget 对应风格类型
  # 
  #
  # @return 返回 widget 的对应风格类型。
  #
  def get_style_type(self): 
    return widget_get_style_type(awtk_get_native_obj(self));


  #
  # 让控件根据自己当前状态更新style。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def update_style(self): 
    return widget_update_style(awtk_get_native_obj(self));


  #
  # 让控件及子控件根据自己当前状态更新style。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def update_style_recursive(self): 
    return widget_update_style_recursive(awtk_get_native_obj(self));


  #
  # 递归的把父控件的key_target设置为自己。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_as_key_target(self): 
    return widget_set_as_key_target(awtk_get_native_obj(self));


  #
  # 把焦点移动下一个控件。
  #
  #>widget必须是当前焦点控件。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def focus_next(self): 
    return widget_focus_next(awtk_get_native_obj(self));


  #
  # 把焦点移动前一个控件。
  #
  #>widget必须是当前焦点控件。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def focus_prev(self): 
    return widget_focus_prev(awtk_get_native_obj(self));


  #
  # 把控件的状态转成获取style选要的状态，一般只在子类中使用。
  # 
  # @param active 控件是否为当前项。
  # @param checked 控件是否为选中项。
  #
  # @return 返回状态值。
  #
  def get_state_for_style(self, active, checked): 
    return widget_get_state_for_style(awtk_get_native_obj(self), active, checked);


  #
  # 布局当前控件及子控件。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def layout(self): 
    return widget_layout(awtk_get_native_obj(self));


  #
  # 设置控件自己的布局参数。
  # 
  # @param params 布局参数。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_self_layout(self, params): 
    return widget_set_self_layout(awtk_get_native_obj(self), params);


  #
  # 设置子控件的布局参数。
  # 
  # @param params 布局参数。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_children_layout(self, params): 
    return widget_set_children_layout(awtk_get_native_obj(self), params);


  #
  # 设置控件自己的布局(缺省布局器)参数(过时，请用widget\_set\_self\_layout)。
  # 
  # @param x x参数。
  # @param y y参数。
  # @param w w参数。
  # @param h h参数。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_self_layout_params(self, x, y, w, h): 
    return widget_set_self_layout_params(awtk_get_native_obj(self), x, y, w, h);


  #
  # 设置整数类型的style。
  #
  #> * [state 的取值](https://github.com/zlgopen/awtk/blob/master/docs/manual/widget_state_t.md)
  #> * [name 的取值](https://github.com/zlgopen/awtk/blob/master/docs/theme.md)
  # 
  # @param state_and_name 状态和名字，用英文的冒号分隔。
  # @param value 值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_style_int(self, state_and_name, value): 
    return widget_set_style_int(awtk_get_native_obj(self), state_and_name, value);


  #
  # 设置字符串类型的style。
  #
  #> * [state 的取值](https://github.com/zlgopen/awtk/blob/master/docs/manual/widget_state_t.md)
  #> * [name 的取值](https://github.com/zlgopen/awtk/blob/master/docs/theme.md)
  # 
  # @param state_and_name 状态和名字，用英文的冒号分隔。
  # @param value 值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_style_str(self, state_and_name, value): 
    return widget_set_style_str(awtk_get_native_obj(self), state_and_name, value);


  #
  # widget_set_style_color(label, "normal:bg_color", 0xFF332211);
  #```
  # 
  # @param state_and_name 状态和名字，用英文的冒号分隔。
  # @param value 值。颜色值一般用十六进制表示，每两个数字表示一个颜色通道，从高位到低位，依次是ABGR。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_style_color(self, state_and_name, value): 
    return widget_set_style_color(awtk_get_native_obj(self), state_and_name, value);


  #
  # x坐标(相对于父控件的x坐标)。
  #
  #
  @property
  def x(self):
    return widget_t_get_prop_x(self.nativeObj);


  #
  # y坐标(相对于父控件的y坐标)。
  #
  #
  @property
  def y(self):
    return widget_t_get_prop_y(self.nativeObj);


  #
  # 宽度。
  #
  #
  @property
  def w(self):
    return widget_t_get_prop_w(self.nativeObj);


  #
  # 高度。
  #
  #
  @property
  def h(self):
    return widget_t_get_prop_h(self.nativeObj);


  #
  # 控件名字。
  #
  #
  @property
  def name(self):
    return widget_t_get_prop_name(self.nativeObj);

  @name.setter
  def name(self, v):
   this.set_name(v);


  #
  # 鼠标光标图片名称。
  #
  #
  @property
  def pointer_cursor(self):
    return widget_t_get_prop_pointer_cursor(self.nativeObj);

  @pointer_cursor.setter
  def pointer_cursor(self, v):
   this.set_pointer_cursor(v);


  #
  # 保存用于翻译的字符串。
  #
  #
  @property
  def tr_text(self):
    return widget_t_get_prop_tr_text(self.nativeObj);

  @tr_text.setter
  def tr_text(self, v):
   this.set_tr_text(v);


  #
  # style的名称。
  #
  #
  @property
  def style(self):
    return widget_t_get_prop_style(self.nativeObj);


  #
  # 动画参数。请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)
  #
  #
  @property
  def animation(self):
    return widget_t_get_prop_animation(self.nativeObj);

  @animation.setter
  def animation(self, v):
   this.set_animation(v);


  #
  # 启用/禁用状态。
  #
  #
  @property
  def enable(self):
    return widget_t_get_prop_enable(self.nativeObj);

  @enable.setter
  def enable(self, v):
   this.set_enable(v);


  #
  # 是否启用按键音、触屏音和震动等反馈。
  #
  #
  @property
  def feedback(self):
    return widget_t_get_prop_feedback(self.nativeObj);

  @feedback.setter
  def feedback(self, v):
   this.set_feedback(v);


  #
  # 是否可见。
  #
  #
  @property
  def visible(self):
    return widget_t_get_prop_visible(self.nativeObj);

  @visible.setter
  def visible(self, v):
   this.set_visible(v);


  #
  # 是否接受用户事件。
  #
  #
  @property
  def sensitive(self):
    return widget_t_get_prop_sensitive(self.nativeObj);

  @sensitive.setter
  def sensitive(self, v):
   this.set_sensitive(v);


  #
  # 是否支持焦点停留。
  #
  #
  @property
  def focusable(self):
    return widget_t_get_prop_focusable(self.nativeObj);

  @focusable.setter
  def focusable(self, v):
   this.set_focusable(v);


  #
  # 是否支持焦点状态。
  #> 如果希望style支持焦点状态，但又不希望焦点停留，可用本属性。
  #
  #
  @property
  def with_focus_state(self):
    return widget_t_get_prop_with_focus_state(self.nativeObj);


  #
  # 是否根据子控件和文本自动调整控件自身大小。
  #
  #> 为true时，最好不要使用child_layout，否则可能有冲突。
  #> 注意：只是调整控件的本身的宽高，不会修改控件本身的位置。
  #
  #
  @property
  def auto_adjust_size(self):
    return widget_t_get_prop_auto_adjust_size(self.nativeObj);

  @auto_adjust_size.setter
  def auto_adjust_size(self, v):
   this.set_auto_adjust_size(v);


  #
  # 标识控件是否启用浮动布局，不受父控件的children_layout的控制。
  #
  #
  @property
  def floating(self):
    return widget_t_get_prop_floating(self.nativeObj);

  @floating.setter
  def floating(self, v):
   this.set_floating(v);


  #
  # 脏矩形超出控件本身大小的最大范围(一般不用指定)。
  #
  #> 如果 border 太粗或 offset 太大等原因，导致脏矩形超出控件本身大小太多（大于缺省值）时，才需要指定。
  #
  #
  @property
  def dirty_rect_tolerance(self):
    return widget_t_get_prop_dirty_rect_tolerance(self.nativeObj);

  @dirty_rect_tolerance.setter
  def dirty_rect_tolerance(self, v):
   this.set_dirty_rect_tolerance(v);


  #
  # 父控件
  #
  #
  @property
  def parent(self):
    return TWidget(widget_t_get_prop_parent(self.nativeObj));


#
# #include "conf_io/app_conf.h"
#```
#
#
class TAppConf(object):

  #
  # 持久保存配置。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  @classmethod
  def save(cls): 
    return app_conf_save();


  #
  # 重新加载配置(内存中的配置丢失)。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  @classmethod
  def reload(cls): 
    return app_conf_reload();


  #
  # 释放conf对象。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  @classmethod
  def deinit(cls): 
    return app_conf_deinit();


  #
  # 检查配置项是否存在。
  # 
  # @param key 配置项的名称。
  #
  # @return 返回TRUE表示存在，FALSE表示不存在。
  #
  @classmethod
  def exist(cls, key): 
    return app_conf_exist(key);


  #
  # 设置整数类型配置项的值。
  # 
  # @param key 配置项的名称。
  # @param v 配置项的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  @classmethod
  def set_int(cls, key, v): 
    return app_conf_set_int(key, v);


  #
  # 设置64位整数类型配置项的值。
  # 
  # @param key 配置项的名称。
  # @param v 配置项的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  @classmethod
  def set_int64(cls, key, v): 
    return app_conf_set_int64(key, v);


  #
  # 设置bool类型配置项的值。
  # 
  # @param key 配置项的名称。
  # @param v 配置项的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  @classmethod
  def set_bool(cls, key, v): 
    return app_conf_set_bool(key, v);


  #
  # 设置双精度类型配置项的值。
  # 
  # @param key 配置项的名称。
  # @param v 配置项的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  @classmethod
  def set_double(cls, key, v): 
    return app_conf_set_double(key, v);


  #
  # 设置字符串类型配置项的值。
  # 
  # @param key 配置项的名称。
  # @param v 配置项的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  @classmethod
  def set_str(cls, key, v): 
    return app_conf_set_str(key, v);


  #
  # 获取整数类型配置项的值。
  # 
  # @param key 配置项的名称。
  # @param defval 缺省值。
  #
  # @return 返回配置项的值（如果不存在返回缺省值）。
  #
  @classmethod
  def get_int(cls, key, defval): 
    return app_conf_get_int(key, defval);


  #
  # 获取64位整数类型配置项的值。
  # 
  # @param key 配置项的名称。
  # @param defval 缺省值。
  #
  # @return 返回配置项的值（如果不存在返回缺省值）。
  #
  @classmethod
  def get_int64(cls, key, defval): 
    return app_conf_get_int64(key, defval);


  #
  # 获取bool类型配置项的值。
  # 
  # @param key 配置项的名称。
  # @param defval 缺省值。
  #
  # @return 返回配置项的值（如果不存在返回缺省值）。
  #
  @classmethod
  def get_bool(cls, key, defval): 
    return app_conf_get_bool(key, defval);


  #
  # 获取单精度浮点数类型配置项的值。
  # 
  # @param key 配置项的名称。
  # @param defval 缺省值。
  #
  # @return 返回配置项的值（如果不存在返回缺省值）。
  #
  @classmethod
  def get_double(cls, key, defval): 
    return app_conf_get_double(key, defval);


  #
  # 获取字符串类型配置项的值。
  # 
  # @param key 配置项的名称。
  # @param defval 缺省值。
  #
  # @return 返回配置项的值（如果不存在返回缺省值）。
  #
  @classmethod
  def get_str(cls, key, defval): 
    return app_conf_get_str(key, defval);


  #
  # 删除配置项。
  # 
  # @param key 配置项的名称。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  @classmethod
  def remove(cls, key): 
    return app_conf_remove(key);


#
# 指示器默认绘制的类型。
#
#
class TIndicatorDefaultPaint: 

  #
  # 自动选择。
  #
  #
  AUTO = INDICATOR_DEFAULT_PAINT_AUTO();

  #
  # 实心圆点指示器，当前项填充selected_fg_color，其他填充fg_color。
  #
  #
  FILL_DOT = INDICATOR_DEFAULT_PAINT_FILL_DOT();

  #
  # 镂空圆点指示器，当前项填充selected_fg_color，其他镂空fg_color。
  #
  #
  STROKE_DOT = INDICATOR_DEFAULT_PAINT_STROKE_DOT();

  #
  # 实心矩形指示器，当前项填充selected_fg_color，其他填充fg_color。
  #
  #
  FILL_RECT = INDICATOR_DEFAULT_PAINT_FILL_RECT();

  #
  # 镂空矩形指示器，当前项填充selected_fg_color，其他镂空fg_color。
  #
  #
  STROKE_RECT = INDICATOR_DEFAULT_PAINT_STROKE_RECT();

#
# 虚拟页面的事件。
#
#
class TVpageEvent: 

  #
  # 页面即将打开(动画前)。
  #
  #
  VPAGE_WILL_OPEN = EVT_VPAGE_WILL_OPEN();

  #
  # 页面打开完成(动画后)。
  #
  #
  VPAGE_OPEN = EVT_VPAGE_OPEN();

  #
  # 页面已经关闭(动画后)。
  #
  #
  VPAGE_CLOSE = EVT_VPAGE_CLOSE();

#
# 资源类型常量定义。
#
#
class TAssetType: 

  #
  # 无效资源。
  #
  #
  NONE = ASSET_TYPE_NONE();

  #
  # 字体资源。
  #
  #
  FONT = ASSET_TYPE_FONT();

  #
  # 图片资源。
  #
  #
  IMAGE = ASSET_TYPE_IMAGE();

  #
  # 窗体样式资源。
  #
  #
  STYLE = ASSET_TYPE_STYLE();

  #
  # UI数据资源。
  #
  #
  UI = ASSET_TYPE_UI();

  #
  # XML数据资源。
  #
  #
  XML = ASSET_TYPE_XML();

  #
  # 字符串数据资源。
  #
  #
  STRINGS = ASSET_TYPE_STRINGS();

  #
  # JS等脚本资源。
  #
  #
  SCRIPT = ASSET_TYPE_SCRIPT();

  #
  # 流图资源。
  #
  #
  FLOW = ASSET_TYPE_FLOW();

  #
  # 其它数据资源。
  #
  #
  DATA = ASSET_TYPE_DATA();

#
# 单个资源的描述信息。
#
#
class TAssetInfo(object):
  def __init__(self, nativeObj):
    self.nativeObj = nativeObj;


  #
  # 获取类型。
  # 
  #
  # @return 返回类型。
  #
  def get_type(self): 
    return asset_info_get_type(awtk_get_native_obj(self));


  #
  # 获取名称。
  # 
  #
  # @return 返回名称。
  #
  def get_name(self): 
    return asset_info_get_name(awtk_get_native_obj(self));


  #
  # 类型。
  #
  #
  @property
  def type(self):
    return asset_info_t_get_prop_type(self.nativeObj);


  #
  # 子类型。
  #
  #
  @property
  def subtype(self):
    return asset_info_t_get_prop_subtype(self.nativeObj);


  #
  # 资源是否在ROM中。
  #
  #
  @property
  def is_in_rom(self):
    return asset_info_t_get_prop_is_in_rom(self.nativeObj);


  #
  # 大小。
  #
  #
  @property
  def size(self):
    return asset_info_t_get_prop_size(self.nativeObj);


  #
  # 引用计数。
  #is\_in\_rom == FALSE时才有效。
  #
  #
  @property
  def refcount(self):
    return asset_info_t_get_prop_refcount(self.nativeObj);


  #
  # 名称。
  #
  #
  @property
  def name(self):
    return asset_info_t_get_prop_name(self.nativeObj);


#
# 颜色。
#
#
class TColor(object):
  def __init__(self, nativeObj):
    self.nativeObj = nativeObj;


  #
  # 创建color对象。
  #
  #> 主要供脚本语言使用。
  # 
  # @param r 红色通道。
  # @param b 蓝色通道。
  # @param g 绿色通道。
  # @param a alpha通道。
  #
  # @return color对象。
  #
  @classmethod
  def create(cls, r, b, g, a): 
    return  TColor(color_create(r, b, g, a));


  #
  # 创建color对象。
  #
  #> 主要供脚本语言使用。
  # 
  # @param str css类似的颜色值。
  #
  # @return color对象。
  #
  def from_str(self, str): 
    return  TColor(color_from_str(awtk_get_native_obj(self), str));


  #
  # 获取红色通道的值。
  #
  #> 主要供脚本语言使用。
  # 
  #
  # @return 返回红色通道的值。
  #
  def r(self): 
    return color_r(awtk_get_native_obj(self));


  #
  # 获取绿色通道的值。
  #
  #> 主要供脚本语言使用。
  # 
  #
  # @return 返回绿色通道的值。
  #
  def g(self): 
    return color_g(awtk_get_native_obj(self));


  #
  # 获取蓝色通道的值。
  #
  #> 主要供脚本语言使用。
  # 
  #
  # @return 返回蓝色通道的值。
  #
  def b(self): 
    return color_b(awtk_get_native_obj(self));


  #
  # 获取alpha通道的值。
  #
  #> 主要供脚本语言使用。
  # 
  #
  # @return 返回alpha通道的值。
  #
  def a(self): 
    return color_a(awtk_get_native_obj(self));


  #
  # 获取颜色值。
  #
  #> 主要供脚本语言使用。
  # 
  #
  # @return 返回颜色值。
  #
  def get_color(self): 
    return color_get_color(awtk_get_native_obj(self));


  #
  # 转换为color对象。
  #
  #> 供脚本语言使用。
  # 
  # @param color color对象。
  #
  # @return color对象。
  #
  @classmethod
  def cast(cls, color): 
    return  TColor(color_cast(awtk_get_native_obj(color)));


  #
  # 销毁color对象。
  #> 主要供脚本语言使用。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def destroy(self): 
    return color_destroy(awtk_get_native_obj(self));


  #
  # 颜色的数值。
  #
  #
  @property
  def color(self):
    return color_t_get_prop_color(self.nativeObj);

  @color.setter
  def color(self, v):
    color_t_set_prop_color(self.nativeObj, v);


#
# 日期时间。
#
#> 在嵌入式平台中，在系统初始时，需要调用date\_time\_global\_init设置实际获取/设置系统时间的函数。
#
#
class TDateTime(object):
  def __init__(self, nativeObj):
    self.nativeObj = nativeObj;


  #
  # 创建date_time对象，并初始为当前日期和时间(一般供脚本语言中使用)。
  # 
  #
  # @return 返回date_time对象。
  #
  @classmethod
  def create(cls): 
    return  TDateTime(date_time_create());


  #
  # 设置年。
  # 
  # @param year 年。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_year(self, year): 
    return date_time_set_year(awtk_get_native_obj(self), year);


  #
  # 设置月。
  # 
  # @param month 月。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_month(self, month): 
    return date_time_set_month(awtk_get_native_obj(self), month);


  #
  # 设置日。
  # 
  # @param day 日。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_day(self, day): 
    return date_time_set_day(awtk_get_native_obj(self), day);


  #
  # 设置小时。
  # 
  # @param hour 小时。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_hour(self, hour): 
    return date_time_set_hour(awtk_get_native_obj(self), hour);


  #
  # 设置分钟。
  # 
  # @param minute 分钟。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_minute(self, minute): 
    return date_time_set_minute(awtk_get_native_obj(self), minute);


  #
  # 设置秒。
  # 
  # @param second 秒。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_second(self, second): 
    return date_time_set_second(awtk_get_native_obj(self), second);


  #
  # 设置当前时间。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set(self): 
    return date_time_set(awtk_get_native_obj(self));


  #
  # 从time转换而来。
  # 
  # @param time 时间。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def from_time(self, time): 
    return date_time_from_time(awtk_get_native_obj(self), time);


  #
  # 转换成time。
  # 
  #
  # @return 返回time。
  #
  def to_time(self): 
    return date_time_to_time(awtk_get_native_obj(self));


  #
  # 加上一个偏移量(s)。
  # 
  # @param delta 偏移量(s)。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def add_delta(self, delta): 
    return date_time_add_delta(awtk_get_native_obj(self), delta);


  #
  # 是否是闰年。
  # 
  # @param year 年份。
  #
  # @return 返回TRUE表示是，否则表示否。
  #
  @classmethod
  def is_leap(cls, year): 
    return date_time_is_leap(year);


  #
  # 获取指定年份月份的天数。
  # 
  # @param year 年份。
  # @param montn 月份(1-12)。
  #
  # @return 返回大于0表示天数，否则表示失败。
  #
  @classmethod
  def get_days(cls, year, montn): 
    return date_time_get_days(year, montn);


  #
  # 获取指定日期是周几(0-6, Sunday = 0)。。
  # 
  # @param year 年份。
  # @param montn 月份(1-12)。
  # @param day 日(1-31)。
  #
  # @return 返回大于等于0表示周几(0-6)，否则表示失败。
  #
  @classmethod
  def get_wday(cls, year, montn, day): 
    return date_time_get_wday(year, montn, day);


  #
  # 获取指定月份的英文名称(简写)。
  # 
  # @param montn 月份(1-12)。
  #
  # @return 返回指定月份的英文名称(简写)。
  #
  @classmethod
  def get_month_name(cls, montn): 
    return date_time_get_month_name(montn);


  #
  # 获取周几的英文名称(简写)。
  # 
  # @param wday 星期几(0-6, Sunday = 0)。
  #
  # @return 返回指定周几的英文名称(简写)。
  #
  @classmethod
  def get_wday_name(cls, wday): 
    return date_time_get_wday_name(wday);


  #
  # 销毁date_time对象(一般供脚本语言中使用)。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def destroy(self): 
    return date_time_destroy(awtk_get_native_obj(self));


  #
  # 秒(0 - 59)。
  #
  #
  @property
  def second(self):
    return date_time_t_get_prop_second(self.nativeObj);

  @second.setter
  def second(self, v):
   this.set_second(v);


  #
  # 分(0 - 59)。
  #
  #
  @property
  def minute(self):
    return date_time_t_get_prop_minute(self.nativeObj);

  @minute.setter
  def minute(self, v):
   this.set_minute(v);


  #
  # 时(0 - 23)。
  #
  #
  @property
  def hour(self):
    return date_time_t_get_prop_hour(self.nativeObj);

  @hour.setter
  def hour(self, v):
   this.set_hour(v);


  #
  # 日(1-31)。
  #
  #
  @property
  def day(self):
    return date_time_t_get_prop_day(self.nativeObj);

  @day.setter
  def day(self, v):
   this.set_day(v);


  #
  # 星期几(0-6, Sunday = 0)。
  #
  #
  @property
  def wday(self):
    return date_time_t_get_prop_wday(self.nativeObj);


  #
  # 月(1-12)。
  #
  #
  @property
  def month(self):
    return date_time_t_get_prop_month(self.nativeObj);

  @month.setter
  def month(self, v):
   this.set_month(v);


  #
  # 年。
  #
  #
  @property
  def year(self):
    return date_time_t_get_prop_year(self.nativeObj);

  @year.setter
  def year(self, v):
   this.set_year(v);


#
# 缓动作动画常量定义。
#
#
class TEasingType: 

  #
  # EASING_LINEAR。
  #
  #
  LINEAR = EASING_LINEAR();

  #
  # EASING_QUADRATIC_IN
  #
  #
  QUADRATIC_IN = EASING_QUADRATIC_IN();

  #
  # EASING_QUADRATIC_OUT
  #
  #
  QUADRATIC_OUT = EASING_QUADRATIC_OUT();

  #
  # EASING_QUADRATIC_INOUT
  #
  #
  QUADRATIC_INOUT = EASING_QUADRATIC_INOUT();

  #
  # EASING_CUBIC_IN
  #
  #
  CUBIC_IN = EASING_CUBIC_IN();

  #
  # EASING_CUBIC_OUT
  #
  #
  CUBIC_OUT = EASING_CUBIC_OUT();

  #
  # EASING_SIN_IN
  #
  #
  SIN_IN = EASING_SIN_IN();

  #
  # EASING_SIN_OUT
  #
  #
  SIN_OUT = EASING_SIN_OUT();

  #
  # EASING_SIN_OUT
  #
  #
  SIN_INOUT = EASING_SIN_INOUT();

  #
  # EASING_POW_IN
  #
  #
  POW_IN = EASING_POW_IN();

  #
  # EASING_POW_OUT
  #
  #
  POW_OUT = EASING_POW_OUT();

  #
  # EASING_POW_INOUT
  #
  #
  POW_INOUT = EASING_POW_INOUT();

  #
  # EASING_CIRCULAR_IN
  #
  #
  CIRCULAR_IN = EASING_CIRCULAR_IN();

  #
  # EASING_CIRCULAR_OUT
  #
  #
  CIRCULAR_OUT = EASING_CIRCULAR_OUT();

  #
  # EASING_CIRCULAR_INOUT
  #
  #
  CIRCULAR_INOUT = EASING_CIRCULAR_INOUT();

  #
  # EASING_ELASTIC_IN
  #
  #
  ELASTIC_IN = EASING_ELASTIC_IN();

  #
  # EASING_ELASTIC_OUT
  #
  #
  ELASTIC_OUT = EASING_ELASTIC_OUT();

  #
  # EASING_ELASTIC_INOUT
  #
  #
  ELASTIC_INOUT = EASING_ELASTIC_INOUT();

  #
  # EASING_BACK_IN
  #
  #
  BACK_IN = EASING_BACK_IN();

  #
  # EASING_BACK_OUT
  #
  #
  BACK_OUT = EASING_BACK_OUT();

  #
  # EASING_BACK_INOUT
  #
  #
  BACK_INOUT = EASING_BACK_INOUT();

  #
  # EASING_BOUNCE_IN
  #
  #
  BOUNCE_IN = EASING_BOUNCE_IN();

  #
  # EASING_BOUNCE_OUT
  #
  #
  BOUNCE_OUT = EASING_BOUNCE_OUT();

  #
  # EASING_BOUNCE_INOUT
  #
  #
  BOUNCE_INOUT = EASING_BOUNCE_INOUT();

#
# idle_manager_t管理器。
#
#
class TIdleManager(object):
  def __init__(self, nativeObj):
    self.nativeObj = nativeObj;


#
# MIME_TYPE。
#
#
class TMIME_TYPE: 

  #
  # "application/envoy"。
  #
  #
  APPLICATION_ENVOY = MIME_TYPE_APPLICATION_ENVOY();

  #
  # "application/fractals"。
  #
  #
  APPLICATION_FRACTALS = MIME_TYPE_APPLICATION_FRACTALS();

  #
  # "application/futuresplash"。
  #
  #
  APPLICATION_FUTURESPLASH = MIME_TYPE_APPLICATION_FUTURESPLASH();

  #
  # "application/hta"。
  #
  #
  APPLICATION_HTA = MIME_TYPE_APPLICATION_HTA();

  #
  # "application/json"。
  #
  #
  APPLICATION_JSON = MIME_TYPE_APPLICATION_JSON();

  #
  # "application/ubjson"。
  #
  #
  APPLICATION_UBJSON = MIME_TYPE_APPLICATION_UBJSON();

  #
  # "application/mac-binhex40"。
  #
  #
  APPLICATION_MAC_BINHEX40 = MIME_TYPE_APPLICATION_MAC_BINHEX40();

  #
  # "application/msword"。
  #
  #
  APPLICATION_MSWORD = MIME_TYPE_APPLICATION_MSWORD();

  #
  # "application/octet-stream"。
  #
  #
  APPLICATION_OCTET_STREAM = MIME_TYPE_APPLICATION_OCTET_STREAM();

  #
  # "application/oda"。
  #
  #
  APPLICATION_ODA = MIME_TYPE_APPLICATION_ODA();

  #
  # "application/olescript"。
  #
  #
  APPLICATION_OLESCRIPT = MIME_TYPE_APPLICATION_OLESCRIPT();

  #
  # "application/pdf"。
  #
  #
  APPLICATION_PDF = MIME_TYPE_APPLICATION_PDF();

  #
  # "application/pics-rules"。
  #
  #
  APPLICATION_PICS_RULES = MIME_TYPE_APPLICATION_PICS_RULES();

  #
  # "application/pkcs10"。
  #
  #
  APPLICATION_PKCS10 = MIME_TYPE_APPLICATION_PKCS10();

  #
  # "application/pkix-crl"。
  #
  #
  APPLICATION_PKIX_CRL = MIME_TYPE_APPLICATION_PKIX_CRL();

  #
  # "application/postscript"。
  #
  #
  APPLICATION_POSTSCRIPT = MIME_TYPE_APPLICATION_POSTSCRIPT();

  #
  # "application/rtf"。
  #
  #
  APPLICATION_RTF = MIME_TYPE_APPLICATION_RTF();

  #
  # "application/vnd.ms-excel"。
  #
  #
  APPLICATION_VND_MS_EXCEL = MIME_TYPE_APPLICATION_VND_MS_EXCEL();

  #
  # "application/vnd.ms-outlook"。
  #
  #
  APPLICATION_VND_MS_OUTLOOK = MIME_TYPE_APPLICATION_VND_MS_OUTLOOK();

  #
  # "application/vnd.ms-pkicertstore"。
  #
  #
  APPLICATION_VND_MS_PKICERTSTORE = MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE();

  #
  # "application/vnd.ms-pkiseccat"。
  #
  #
  APPLICATION_VND_MS_PKISECCAT = MIME_TYPE_APPLICATION_VND_MS_PKISECCAT();

  #
  # "application/vnd.ms-pkistl"。
  #
  #
  APPLICATION_VND_MS_PKISTL = MIME_TYPE_APPLICATION_VND_MS_PKISTL();

  #
  # "application/vnd.ms-powerpoint"。
  #
  #
  APPLICATION_VND_MS_POWERPOINT = MIME_TYPE_APPLICATION_VND_MS_POWERPOINT();

  #
  # "application/vnd.ms-project"。
  #
  #
  APPLICATION_VND_MS_PROJECT = MIME_TYPE_APPLICATION_VND_MS_PROJECT();

  #
  # "application/vnd.ms-works"。
  #
  #
  APPLICATION_VND_MS_WORKS = MIME_TYPE_APPLICATION_VND_MS_WORKS();

  #
  # "application/winhlp"。
  #
  #
  APPLICATION_WINHLP = MIME_TYPE_APPLICATION_WINHLP();

  #
  # "application/x-bcpio"。
  #
  #
  APPLICATION_X_BCPIO = MIME_TYPE_APPLICATION_X_BCPIO();

  #
  # "application/x-cdf"。
  #
  #
  APPLICATION_X_CDF = MIME_TYPE_APPLICATION_X_CDF();

  #
  # "application/x-compress"。
  #
  #
  APPLICATION_X_COMPRESS = MIME_TYPE_APPLICATION_X_COMPRESS();

  #
  # "application/x-compressed"。
  #
  #
  APPLICATION_X_COMPRESSED = MIME_TYPE_APPLICATION_X_COMPRESSED();

  #
  # "application/x-cpio"。
  #
  #
  APPLICATION_X_CPIO = MIME_TYPE_APPLICATION_X_CPIO();

  #
  # "application/x-csh"。
  #
  #
  APPLICATION_X_CSH = MIME_TYPE_APPLICATION_X_CSH();

  #
  # "application/x-director"。
  #
  #
  APPLICATION_X_DIRECTOR = MIME_TYPE_APPLICATION_X_DIRECTOR();

  #
  # "application/x-dvi"。
  #
  #
  APPLICATION_X_DVI = MIME_TYPE_APPLICATION_X_DVI();

  #
  # "application/x-gtar"。
  #
  #
  APPLICATION_X_GTAR = MIME_TYPE_APPLICATION_X_GTAR();

  #
  # "application/x-gzip"。
  #
  #
  APPLICATION_X_GZIP = MIME_TYPE_APPLICATION_X_GZIP();

  #
  # "application/x-hdf"。
  #
  #
  APPLICATION_X_HDF = MIME_TYPE_APPLICATION_X_HDF();

  #
  # "application/x-iphone"。
  #
  #
  APPLICATION_X_IPHONE = MIME_TYPE_APPLICATION_X_IPHONE();

  #
  # "application/x-javascript"。
  #
  #
  APPLICATION_X_JAVASCRIPT = MIME_TYPE_APPLICATION_X_JAVASCRIPT();

  #
  # "application/x-latex"。
  #
  #
  APPLICATION_X_LATEX = MIME_TYPE_APPLICATION_X_LATEX();

  #
  # "application/x-msaccess"。
  #
  #
  APPLICATION_X_MSACCESS = MIME_TYPE_APPLICATION_X_MSACCESS();

  #
  # "application/x-mscardfile"。
  #
  #
  APPLICATION_X_MSCARDFILE = MIME_TYPE_APPLICATION_X_MSCARDFILE();

  #
  # "application/x-msclip"。
  #
  #
  APPLICATION_X_MSCLIP = MIME_TYPE_APPLICATION_X_MSCLIP();

  #
  # "application/x-msdownload"。
  #
  #
  APPLICATION_X_MSDOWNLOAD = MIME_TYPE_APPLICATION_X_MSDOWNLOAD();

  #
  # "application/x-msmediaview"。
  #
  #
  APPLICATION_X_MSMEDIAVIEW = MIME_TYPE_APPLICATION_X_MSMEDIAVIEW();

  #
  # "application/x-msmetafile"。
  #
  #
  APPLICATION_X_MSMETAFILE = MIME_TYPE_APPLICATION_X_MSMETAFILE();

  #
  # "application/x-msmoney"。
  #
  #
  APPLICATION_X_MSMONEY = MIME_TYPE_APPLICATION_X_MSMONEY();

  #
  # "application/x-mspublisher"。
  #
  #
  APPLICATION_X_MSPUBLISHER = MIME_TYPE_APPLICATION_X_MSPUBLISHER();

  #
  # "application/x-msschedule"。
  #
  #
  APPLICATION_X_MSSCHEDULE = MIME_TYPE_APPLICATION_X_MSSCHEDULE();

  #
  # "application/x-msterminal"。
  #
  #
  APPLICATION_X_MSTERMINAL = MIME_TYPE_APPLICATION_X_MSTERMINAL();

  #
  # "application/x-mswrite"。
  #
  #
  APPLICATION_X_MSWRITE = MIME_TYPE_APPLICATION_X_MSWRITE();

  #
  # "application/x-netcdf"。
  #
  #
  APPLICATION_X_NETCDF = MIME_TYPE_APPLICATION_X_NETCDF();

  #
  # "application/x-perfmon"。
  #
  #
  APPLICATION_X_PERFMON = MIME_TYPE_APPLICATION_X_PERFMON();

  #
  # "application/x-pkcs12"。
  #
  #
  APPLICATION_X_PKCS12 = MIME_TYPE_APPLICATION_X_PKCS12();

  #
  # "application/x-sh"。
  #
  #
  APPLICATION_X_SH = MIME_TYPE_APPLICATION_X_SH();

  #
  # "application/x-shar"。
  #
  #
  APPLICATION_X_SHAR = MIME_TYPE_APPLICATION_X_SHAR();

  #
  # "application/x-shockwave-flash"。
  #
  #
  APPLICATION_X_SHOCKWAVE_FLASH = MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH();

  #
  # "application/x-stuffit"。
  #
  #
  APPLICATION_X_STUFFIT = MIME_TYPE_APPLICATION_X_STUFFIT();

  #
  # "application/x-sv4cpio"。
  #
  #
  APPLICATION_X_SV4CPIO = MIME_TYPE_APPLICATION_X_SV4CPIO();

  #
  # "application/x-sv4crc"。
  #
  #
  APPLICATION_X_SV4CRC = MIME_TYPE_APPLICATION_X_SV4CRC();

  #
  # "application/x-tar"。
  #
  #
  APPLICATION_X_TAR = MIME_TYPE_APPLICATION_X_TAR();

  #
  # "application/x-tcl"。
  #
  #
  APPLICATION_X_TCL = MIME_TYPE_APPLICATION_X_TCL();

  #
  # "application/x-tex"。
  #
  #
  APPLICATION_X_TEX = MIME_TYPE_APPLICATION_X_TEX();

  #
  # "application/x-texinfo"。
  #
  #
  APPLICATION_X_TEXINFO = MIME_TYPE_APPLICATION_X_TEXINFO();

  #
  # "application/x-troff"。
  #
  #
  APPLICATION_X_TROFF = MIME_TYPE_APPLICATION_X_TROFF();

  #
  # "application/x-ustar"。
  #
  #
  APPLICATION_X_USTAR = MIME_TYPE_APPLICATION_X_USTAR();

  #
  # "application/zip"。
  #
  #
  APPLICATION_ZIP = MIME_TYPE_APPLICATION_ZIP();

  #
  # "audio/basic"。
  #
  #
  AUDIO_BASIC = MIME_TYPE_AUDIO_BASIC();

  #
  # "audio/mid"。
  #
  #
  AUDIO_MID = MIME_TYPE_AUDIO_MID();

  #
  # "audio/mpeg"。
  #
  #
  AUDIO_MPEG = MIME_TYPE_AUDIO_MPEG();

  #
  # "audio/x-aiff"。
  #
  #
  AUDIO_X_AIFF = MIME_TYPE_AUDIO_X_AIFF();

  #
  # "audio/x-mpegurl"。
  #
  #
  AUDIO_X_MPEGURL = MIME_TYPE_AUDIO_X_MPEGURL();

  #
  # "audio/x-wav"。
  #
  #
  AUDIO_X_WAV = MIME_TYPE_AUDIO_X_WAV();

  #
  # "image/bmp"。
  #
  #
  IMAGE_BMP = MIME_TYPE_IMAGE_BMP();

  #
  # "image/cis-cod"。
  #
  #
  IMAGE_CIS_COD = MIME_TYPE_IMAGE_CIS_COD();

  #
  # "image/gif"。
  #
  #
  IMAGE_GIF = MIME_TYPE_IMAGE_GIF();

  #
  # "image/ief"。
  #
  #
  IMAGE_IEF = MIME_TYPE_IMAGE_IEF();

  #
  # "image/jpeg"。
  #
  #
  IMAGE_JPEG = MIME_TYPE_IMAGE_JPEG();

  #
  # "image/pipeg"。
  #
  #
  IMAGE_PIPEG = MIME_TYPE_IMAGE_PIPEG();

  #
  # "image/svg+xml"。
  #
  #
  IMAGE_SVG_XML = MIME_TYPE_IMAGE_SVG_XML();

  #
  # "image/tiff"。
  #
  #
  IMAGE_TIFF = MIME_TYPE_IMAGE_TIFF();

  #
  # "image/x-cmx"。
  #
  #
  IMAGE_X_CMX = MIME_TYPE_IMAGE_X_CMX();

  #
  # "image/x-icon"。
  #
  #
  IMAGE_X_ICON = MIME_TYPE_IMAGE_X_ICON();

  #
  # "image/x-rgb"。
  #
  #
  IMAGE_X_RGB = MIME_TYPE_IMAGE_X_RGB();

  #
  # "image/x-xbitmap"。
  #
  #
  IMAGE_X_XBITMAP = MIME_TYPE_IMAGE_X_XBITMAP();

  #
  # "image/x-xpixmap"。
  #
  #
  IMAGE_X_XPIXMAP = MIME_TYPE_IMAGE_X_XPIXMAP();

  #
  # "image/x-xwindowdump"。
  #
  #
  IMAGE_X_XWINDOWDUMP = MIME_TYPE_IMAGE_X_XWINDOWDUMP();

  #
  # "message/rfc822"。
  #
  #
  MESSAGE_RFC822 = MIME_TYPE_MESSAGE_RFC822();

  #
  # "text/css"。
  #
  #
  TEXT_CSS = MIME_TYPE_TEXT_CSS();

  #
  # "text/h323"。
  #
  #
  TEXT_H323 = MIME_TYPE_TEXT_H323();

  #
  # "text/html"。
  #
  #
  TEXT_HTML = MIME_TYPE_TEXT_HTML();

  #
  # "text/iuls"。
  #
  #
  TEXT_IULS = MIME_TYPE_TEXT_IULS();

  #
  # "text/plain"。
  #
  #
  TEXT_PLAIN = MIME_TYPE_TEXT_PLAIN();

  #
  # "text/richtext"。
  #
  #
  TEXT_RICHTEXT = MIME_TYPE_TEXT_RICHTEXT();

  #
  # "text/scriptlet"。
  #
  #
  TEXT_SCRIPTLET = MIME_TYPE_TEXT_SCRIPTLET();

  #
  # "text/webviewhtml"。
  #
  #
  TEXT_WEBVIEWHTML = MIME_TYPE_TEXT_WEBVIEWHTML();

  #
  # "text/x-component"。
  #
  #
  TEXT_X_COMPONENT = MIME_TYPE_TEXT_X_COMPONENT();

  #
  # "text/x-setext"。
  #
  #
  TEXT_X_SETEXT = MIME_TYPE_TEXT_X_SETEXT();

  #
  # "text/x-vcard"。
  #
  #
  TEXT_X_VCARD = MIME_TYPE_TEXT_X_VCARD();

  #
  # "video/mpeg"。
  #
  #
  VIDEO_MPEG = MIME_TYPE_VIDEO_MPEG();

  #
  # "video/quicktime"。
  #
  #
  VIDEO_QUICKTIME = MIME_TYPE_VIDEO_QUICKTIME();

  #
  # "video/x-msvideo"。
  #
  #
  VIDEO_X_MSVIDEO = MIME_TYPE_VIDEO_X_MSVIDEO();

#
# 命名的值。
#
#
class TNamedValue(object):
  def __init__(self, nativeObj):
    self.nativeObj = nativeObj;


  #
  # 创建named_value对象。
  # 
  #
  # @return 返回named_value对象。
  #
  @classmethod
  def create(cls): 
    return  TNamedValue(named_value_create());


  #
  # 转换为named_value对象(供脚本语言使用)。
  # 
  # @param nv named_value对象。
  #
  # @return 返回named_value对象。
  #
  @classmethod
  def cast(cls, nv): 
    return  TNamedValue(named_value_cast(awtk_get_native_obj(nv)));


  #
  # 设置名称。
  # 
  # @param name 名称。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_name(self, name): 
    return named_value_set_name(awtk_get_native_obj(self), name);


  #
  # 设置值。
  # 
  # @param value 值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_value(self, value): 
    return named_value_set_value(awtk_get_native_obj(self), awtk_get_native_obj(value));


  #
  # 获取值对象(主要给脚本语言使用)。
  # 
  #
  # @return 返回值对象。
  #
  def get_value(self): 
    return  TValue(named_value_get_value(awtk_get_native_obj(self)));


  #
  # 销毁named_value对象。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def destroy(self): 
    return named_value_destroy(awtk_get_native_obj(self));


  #
  # 名称。
  #
  #
  @property
  def name(self):
    return named_value_t_get_prop_name(self.nativeObj);

  @name.setter
  def name(self, v):
   this.set_name(v);


#
# 对象常见命令定义
#
#
class TObjectCmd: 

  #
  # 保存命令
  #
  #
  SAVE = OBJECT_CMD_SAVE();

  #
  # 重新加载命令
  #
  #
  RELOAD = OBJECT_CMD_RELOAD();

  #
  # 和前一个属性交换位置
  #>参数为属性的名称或路径。
  #
  #
  MOVE_UP = OBJECT_CMD_MOVE_UP();

  #
  # 和后一个属性交换位置
  #>参数为属性的名称或路径。
  #
  #
  MOVE_DOWN = OBJECT_CMD_MOVE_DOWN();

  #
  # 删除属性。
  #>参数为属性的名称或路径。
  #
  #
  REMOVE = OBJECT_CMD_REMOVE();

  #
  # 删除勾选的属性。
  #>参数为属性的名称或路径。
  #
  #
  REMOVE_CHECKED = OBJECT_CMD_REMOVE_CHECKED();

  #
  # 清除全部属性。
  #>参数为属性的名称或路径。
  #
  #
  CLEAR = OBJECT_CMD_CLEAR();

  #
  # 增加子项。
  #>参数为属性的名称或路径。
  #
  #
  ADD = OBJECT_CMD_ADD();

  #
  # 显示对象详细信息。
  #>参数为属性的名称或路径。
  #
  #
  DETAIL = OBJECT_CMD_DETAIL();

  #
  # 编辑子项。
  #>参数为属性的名称或路径。
  #
  #
  EDIT = OBJECT_CMD_EDIT();

#
# 对象常见属性定义
#
#
class TObjectProp: 

  #
  # 属性的个数。
  #
  #
  SIZE = OBJECT_PROP_SIZE();

  #
  # 属性是否勾选。
  #
  #
  CHECKED = OBJECT_PROP_CHECKED();

#
# 循环记录日志(支持多线程访问)。
#如果我们把日志写入文件中，随着时间的推移，日志文件会越来越大，最终占满这个磁盘，出现不可预料的错误。
#rlog提供一个循环记录日志的功能，让日志文件始终不会超出指定的大小，达到指定大小后再从头开始写。
#
#> 为了实现简单，我们把日志文件分成0和1两个文件，先写文件0，到达指定最大值的一半时，再写文件1。
#> 文件1到达指定最大值的一半时，删除文件0，并将文件1改名为文件0，重新创建文件1，继续写文件1，重复此过程。
#
#
class TRlog(object):
  def __init__(self, nativeObj):
    self.nativeObj = nativeObj;


  #
  # rlog_t* log = rlog_create("./logs/%d.log", 1020*1024, 256);
  #rlog_write(log, "hello\n");
  #rlog_destroy(log);
  #```
  # 
  # @param filename_pattern 用来确定文件名的路径和文件名。
  # @param max_size log文件占用最大磁盘空间(字节)。
  # @param buff_size 用于指定print时的buff大小。
  #
  # @return 返回rlog对象。
  #
  @classmethod
  def create(cls, filename_pattern, max_size, buff_size): 
    return  TRlog(rlog_create(filename_pattern, max_size, buff_size));


  #
  # 写入一条日志记录。
  # 
  # @param str 日志字符串。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def write(self, str): 
    return rlog_write(awtk_get_native_obj(self), str);


#
# 获取当前时间的函数。
#这里的当前时间是相对的，在嵌入式系统一般相对于开机时间。
#它本身并没有任何意义，一般用来计算时间间隔，如实现定时器和动画等等。
#
#
class TTimeNow(object):

  #
  # 获取当前时间(秒)。
  # 
  #
  # @return 返回当前时间(秒)。
  #
  @classmethod
  def s(cls): 
    return time_now_s();


  #
  # 获取当前时间(毫秒)。
  # 
  #
  # @return 返回当前时间(毫秒)。
  #
  @classmethod
  def ms(cls): 
    return time_now_ms();


  #
  # 获取当前时间(微秒)。
  # 
  #
  # @return 返回当前时间(微秒)。
  #
  @classmethod
  def us(cls): 
    return time_now_us();


#
# 定时器管理器。
#
#
class TTimerManager(object):
  def __init__(self, nativeObj):
    self.nativeObj = nativeObj;


#
# 函数返回值常量定义。
#
#
class TRet: 

  #
  # 成功。
  #
  #
  OK = RET_OK();

  #
  # Out of memory。
  #
  #
  OOM = RET_OOM();

  #
  # 失败。
  #
  #
  FAIL = RET_FAIL();

  #
  # 没有实现/不支持。
  #
  #
  NOT_IMPL = RET_NOT_IMPL();

  #
  # 退出。通常用于主循环。
  #
  #
  QUIT = RET_QUIT();

  #
  # 找到。
  #
  #
  FOUND = RET_FOUND();

  #
  # 对象忙。
  #
  #
  BUSY = RET_BUSY();

  #
  # 移出。通常用于定时器。
  #
  #
  REMOVE = RET_REMOVE();

  #
  # 重复。通常用于定时器。
  #
  #
  REPEAT = RET_REPEAT();

  #
  # 没找到。
  #
  #
  NOT_FOUND = RET_NOT_FOUND();

  #
  # 操作完成。
  #
  #
  DONE = RET_DONE();

  #
  # 停止后续操作。
  #
  #
  STOP = RET_STOP();

  #
  # 跳过当前项。
  #
  #
  SKIP = RET_SKIP();

  #
  # 继续后续操作。
  #
  #
  CONTINUE = RET_CONTINUE();

  #
  # 对象属性变化。
  #
  #
  OBJECT_CHANGED = RET_OBJECT_CHANGED();

  #
  # 集合数目变化。
  #
  #
  ITEMS_CHANGED = RET_ITEMS_CHANGED();

  #
  # 无效参数。
  #
  #
  BAD_PARAMS = RET_BAD_PARAMS();

  #
  # 超时。
  #
  #
  TIMEOUT = RET_TIMEOUT();

  #
  # CRC错误。
  #
  #
  CRC = RET_CRC();

  #
  # IO错误。
  #
  #
  IO = RET_IO();

  #
  # End of Stream
  #
  #
  EOS = RET_EOS();

  #
  # 没有改变。
  #
  #
  NOT_MODIFIED = RET_NOT_MODIFIED();

#
# 类型常量定义。
#
#
class TValueType: 

  #
  # 无效类型。
  #
  #
  INVALID = VALUE_TYPE_INVALID();

  #
  # BOOL类型。
  #
  #
  BOOL = VALUE_TYPE_BOOL();

  #
  # int8_t类型。
  #
  #
  INT8 = VALUE_TYPE_INT8();

  #
  # uint8_t类型。
  #
  #
  UINT8 = VALUE_TYPE_UINT8();

  #
  # int16_t类型。
  #
  #
  INT16 = VALUE_TYPE_INT16();

  #
  # uint16_t类型。
  #
  #
  UINT16 = VALUE_TYPE_UINT16();

  #
  # int32_t类型。
  #
  #
  INT32 = VALUE_TYPE_INT32();

  #
  # uint32_t类型。
  #
  #
  UINT32 = VALUE_TYPE_UINT32();

  #
  # int64_t类型。
  #
  #
  INT64 = VALUE_TYPE_INT64();

  #
  # uint64_t类型。
  #
  #
  UINT64 = VALUE_TYPE_UINT64();

  #
  # void*类型。
  #
  #
  POINTER = VALUE_TYPE_POINTER();

  #
  # float_t类型。
  #
  #
  FLOAT = VALUE_TYPE_FLOAT();

  #
  # float类型。
  #
  #
  FLOAT32 = VALUE_TYPE_FLOAT32();

  #
  # double类型。
  #
  #
  DOUBLE = VALUE_TYPE_DOUBLE();

  #
  # char*类型。
  #
  #
  STRING = VALUE_TYPE_STRING();

  #
  # wchar_t*类型。
  #
  #
  WSTRING = VALUE_TYPE_WSTRING();

  #
  # object_t*类型。
  #
  #
  OBJECT = VALUE_TYPE_OBJECT();

  #
  # 带长度的字符串。
  #
  #
  SIZED_STRING = VALUE_TYPE_SIZED_STRING();

  #
  # 二进制数据。
  #
  #
  BINARY = VALUE_TYPE_BINARY();

  #
  # 二进制数据(UBJSON)。
  #
  #
  UBJSON = VALUE_TYPE_UBJSON();

  #
  # 特殊用途。
  #
  #
  TOKEN = VALUE_TYPE_TOKEN();

#
# 资源管理器。
#这里的资源管理器并非Windows下的文件浏览器，而是负责对各种资源，比如字体、窗体样式、图片、界面数据、字符串和其它数据的进行集中管理的组件。引入资源管理器的目的有以下几个：
#
#* 让上层不需要了解存储的方式。
#在没有文件系统时或者内存紧缺时，把资源转成常量数组直接编译到代码中。在有文件系统而且内存充足时，资源放在文件系统中。在有网络时，资源也可以存放在服务器上(暂未实现)。资源管理器为上层提供统一的接口，让上层而不用关心底层的存储方式。
#
#* 让上层不需要了解资源的具体格式。
#比如一个名为earth的图片，没有文件系统或内存紧缺，图片直接用位图数据格式存在ROM中，而有文件系统时，则用PNG格式存放在文件系统中。资源管理器让上层不需要关心图片的格式，访问时指定图片的名称即可(不用指定扩展名)。
#
#* 让上层不需要了解屏幕的密度。
#不同的屏幕密度下需要加载不同的图片，比如MacPro的Retina屏就需要用双倍解析度的图片，否则就出现界面模糊。AWTK以后会支持PC软件和手机软件的开发，所以资源管理器需要为此提供支持，让上层不需关心屏幕的密度。
#
#* 对资源进行内存缓存。
#不同类型的资源使用方式是不一样的，比如字体和窗体样式加载之后会一直使用，UI文件在生成界面之后就暂时不需要了，PNG文件解码之后就只需要保留解码的位图数据即可。资源管理器配合图片管理器等其它组件实现资源的自动缓存。
#
#当从文件系统加载资源时，目录结构要求如下：
#
#```
#assets/{theme}/raw/
#fonts   字体
#images  图片
#x1   普通密度屏幕的图片。
#x2   2倍密度屏幕的图片。
#x3   3倍密度屏幕的图片。
#xx   密度无关的图片。
#strings 需要翻译的字符串。
#styles  窗体样式数据。
#ui      UI描述数据。
#```
#
#
class TAssetsManager (TEmitter):
  def __init__(self, nativeObj):
    super(TAssetsManager, self).__init__(nativeObj)


  #
  # 获取缺省资源管理器。
  # 
  #
  # @return 返回asset manager对象。
  #
  @classmethod
  def instance(cls): 
    return  TAssetsManager(assets_manager());


  #
  # 设置当前的主题。
  # 
  # @param theme 主题名称。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_theme(self, theme): 
    return assets_manager_set_theme(awtk_get_native_obj(self), theme);


  #
  # 在资源管理器的缓存中查找指定的资源并引用它，如果缓存中不存在，尝试加载该资源。
  # 
  # @param type 资源的类型。
  # @param name 资源的名称。
  #
  # @return 返回资源。
  #
  def ref(self, type, name): 
    return  TAssetInfo(assets_manager_ref(awtk_get_native_obj(self), type, name));


  #
  # 在资源管理器的缓存中查找指定的资源并引用它，如果缓存中不存在，尝试加载该资源。
  # 
  # @param type 资源的类型。
  # @param subtype 资源的子类型。
  # @param name 资源的名称。
  #
  # @return 返回资源。
  #
  def ref_ex(self, type, subtype, name): 
    return  TAssetInfo(assets_manager_ref_ex(awtk_get_native_obj(self), type, subtype, name));


  #
  # 释放指定的资源。
  # 
  # @param info 资源。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def unref(self, info): 
    return assets_manager_unref(awtk_get_native_obj(self), awtk_get_native_obj(info));


#
# 滚轮事件。
#
#
class TWheelEvent (TEvent):
  def __init__(self, nativeObj):
    super(TWheelEvent, self).__init__(nativeObj)


  #
  # 把event对象转wheel_event_t对象，主要给脚本语言使用。
  # 
  # @param event event对象。
  #
  # @return event对象。
  #
  @classmethod
  def cast(cls, event): 
    return  TWheelEvent(wheel_event_cast(awtk_get_native_obj(event)));


  #
  # 滚轮的y值。
  #
  #
  @property
  def dy(self):
    return wheel_event_t_get_prop_dy(self.nativeObj);


  #
  # alt键是否按下。
  #
  #
  @property
  def alt(self):
    return wheel_event_t_get_prop_alt(self.nativeObj);


  #
  # ctrl键是否按下。
  #
  #
  @property
  def ctrl(self):
    return wheel_event_t_get_prop_ctrl(self.nativeObj);


  #
  # shift键是否按下。
  #
  #
  @property
  def shift(self):
    return wheel_event_t_get_prop_shift(self.nativeObj);


#
# 滚轮事件。
#
#
class TOrientationEvent (TEvent):
  def __init__(self, nativeObj):
    super(TOrientationEvent, self).__init__(nativeObj)


  #
  # 把event对象转orientation_event_t对象，主要给脚本语言使用。
  # 
  # @param event event对象。
  #
  # @return event对象。
  #
  @classmethod
  def cast(cls, event): 
    return  TOrientationEvent(orientation_event_cast(awtk_get_native_obj(event)));


  #
  # 屏幕方向。
  #
  #
  @property
  def orientation(self):
    return orientation_event_t_get_prop_orientation(self.nativeObj);


#
# 值变化事件。
#
#
class TValueChangeEvent (TEvent):
  def __init__(self, nativeObj):
    super(TValueChangeEvent, self).__init__(nativeObj)


  #
  # 把event对象转value_change_event_t对象，主要给脚本语言使用。
  # 
  # @param event event对象。
  #
  # @return event对象。
  #
  @classmethod
  def cast(cls, event): 
    return  TValueChangeEvent(value_change_event_cast(awtk_get_native_obj(event)));


#
# 指针事件。
#
#
class TPointerEvent (TEvent):
  def __init__(self, nativeObj):
    super(TPointerEvent, self).__init__(nativeObj)


  #
  # 把event对象转pointer_event_t对象，主要给脚本语言使用。
  # 
  # @param event event对象。
  #
  # @return event对象。
  #
  @classmethod
  def cast(cls, event): 
    return  TPointerEvent(pointer_event_cast(awtk_get_native_obj(event)));


  #
  # x坐标。
  #
  #
  @property
  def x(self):
    return pointer_event_t_get_prop_x(self.nativeObj);


  #
  # y坐标。
  #
  #
  @property
  def y(self):
    return pointer_event_t_get_prop_y(self.nativeObj);


  #
  # button。
  #
  #
  @property
  def button(self):
    return pointer_event_t_get_prop_button(self.nativeObj);


  #
  # 指针是否按下。
  #
  #
  @property
  def pressed(self):
    return pointer_event_t_get_prop_pressed(self.nativeObj);


  #
  # alt键是否按下。
  #
  #
  @property
  def alt(self):
    return pointer_event_t_get_prop_alt(self.nativeObj);


  #
  # ctrl键是否按下。
  #
  #
  @property
  def ctrl(self):
    return pointer_event_t_get_prop_ctrl(self.nativeObj);


  #
  # cmd键是否按下。
  #
  #
  @property
  def cmd(self):
    return pointer_event_t_get_prop_cmd(self.nativeObj);


  #
  # menu键是否按下。
  #
  #
  @property
  def menu(self):
    return pointer_event_t_get_prop_menu(self.nativeObj);


  #
  # shift键是否按下。
  #
  #
  @property
  def shift(self):
    return pointer_event_t_get_prop_shift(self.nativeObj);


#
# 按键事件。
#
#
class TKeyEvent (TEvent):
  def __init__(self, nativeObj):
    super(TKeyEvent, self).__init__(nativeObj)


  #
  # 把event对象转key_event_t对象，主要给脚本语言使用。
  # 
  # @param event event对象。
  #
  # @return event对象。
  #
  @classmethod
  def cast(cls, event): 
    return  TKeyEvent(key_event_cast(awtk_get_native_obj(event)));


  #
  # 键值。
  #
  #
  @property
  def key(self):
    return key_event_t_get_prop_key(self.nativeObj);


  #
  # alt键是否按下。
  #
  #
  @property
  def alt(self):
    return key_event_t_get_prop_alt(self.nativeObj);


  #
  # left alt键是否按下。
  #
  #
  @property
  def lalt(self):
    return key_event_t_get_prop_lalt(self.nativeObj);


  #
  # right alt键是否按下。
  #
  #
  @property
  def ralt(self):
    return key_event_t_get_prop_ralt(self.nativeObj);


  #
  # right alt键是否按下。
  #ctrl键是否按下。
  #
  #
  @property
  def ctrl(self):
    return key_event_t_get_prop_ctrl(self.nativeObj);


  #
  # left ctrl键是否按下。
  #
  #
  @property
  def lctrl(self):
    return key_event_t_get_prop_lctrl(self.nativeObj);


  #
  # right ctrl键是否按下。
  #
  #
  @property
  def rctrl(self):
    return key_event_t_get_prop_rctrl(self.nativeObj);


  #
  # shift键是否按下。
  #
  #
  @property
  def shift(self):
    return key_event_t_get_prop_shift(self.nativeObj);


  #
  # left shift键是否按下。
  #
  #
  @property
  def lshift(self):
    return key_event_t_get_prop_lshift(self.nativeObj);


  #
  # right shift键是否按下。
  #
  #
  @property
  def rshift(self):
    return key_event_t_get_prop_rshift(self.nativeObj);


  #
  # left shift键是否按下。
  #cmd/win键是否按下。
  #
  #
  @property
  def cmd(self):
    return key_event_t_get_prop_cmd(self.nativeObj);


  #
  # menu键是否按下。
  #
  #
  @property
  def menu(self):
    return key_event_t_get_prop_menu(self.nativeObj);


  #
  # capslock键是否按下。
  #
  #
  @property
  def capslock(self):
    return key_event_t_get_prop_capslock(self.nativeObj);


#
# 绘制事件。
#
#
class TPaintEvent (TEvent):
  def __init__(self, nativeObj):
    super(TPaintEvent, self).__init__(nativeObj)


  #
  # 把event对象转paint_event_t对象。主要给脚本语言使用。
  # 
  # @param event event对象。
  #
  # @return event 对象。
  #
  @classmethod
  def cast(cls, event): 
    return  TPaintEvent(paint_event_cast(awtk_get_native_obj(event)));


  #
  # canvas。
  #
  #
  @property
  def c(self):
    return TCanvas(paint_event_t_get_prop_c(self.nativeObj));


#
# 窗口事件，由窗口管理器触发。
#
#
class TWindowEvent (TEvent):
  def __init__(self, nativeObj):
    super(TWindowEvent, self).__init__(nativeObj)


  #
  # 把event对象转window_event_t对象。主要给脚本语言使用。
  # 
  # @param event event对象。
  #
  # @return 对象。
  #
  @classmethod
  def cast(cls, event): 
    return  TWindowEvent(window_event_cast(awtk_get_native_obj(event)));


  #
  # canvas。
  #
  #
  @property
  def window(self):
    return TWidget(window_event_t_get_prop_window(self.nativeObj));


#
# 多点触摸手势事件。
#
#
class TMultiGestureEvent (TEvent):
  def __init__(self, nativeObj):
    super(TMultiGestureEvent, self).__init__(nativeObj)


  #
  # 把event对象转multi_gesture_event_t对象，主要给脚本语言使用。
  # 
  # @param event event对象。
  #
  # @return event对象。
  #
  @classmethod
  def cast(cls, event): 
    return  TMultiGestureEvent(multi_gesture_event_cast(awtk_get_native_obj(event)));


  #
  # 中心点x坐标。
  #
  #
  @property
  def x(self):
    return multi_gesture_event_t_get_prop_x(self.nativeObj);


  #
  # 中心点y坐标。
  #
  #
  @property
  def y(self):
    return multi_gesture_event_t_get_prop_y(self.nativeObj);


  #
  # 旋转角度(幅度)增量。（单位弧度）
  #
  #
  @property
  def rotation(self):
    return multi_gesture_event_t_get_prop_rotation(self.nativeObj);


  #
  # 两点间的距离增量。(-1,0)表示缩小，(0-1)表示增加。
  #
  #
  @property
  def distance(self):
    return multi_gesture_event_t_get_prop_distance(self.nativeObj);


#
# 图片控件基类。
#
#本类把图片相关控件的公共行为进行抽象，放到一起方便重用。目前已知的具体实现如下图：
#
#
#
#> 本类是一个抽象类，不能进行实例化。请在应用程序中使用具体的类，如image\_t。
#
#如果需要显示文件系统中的图片，只需将图片名称换成实际的文件名，并加上"file://"前缀即可。如：
#
#```
#<image draw_type="center" image="file://./design/default/images/xx/flag_CN.png" />
#<gif image="file://./design/default/images/x2/bee.gif" />
#<svg image="file://./design/default/images/svg/china.bsvg" />
#```
#
#
class TImageBase (TWidget):
  def __init__(self, nativeObj):
    super(TImageBase, self).__init__(nativeObj)


  #
  # 设置控件的图片名称。
  #
  #> 如果需要显示文件系统中的图片，只需将图片名称换成实际的文件名，并加上"file://"前缀即可。
  # 
  # @param name 图片名称，该图片必须存在于资源管理器。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_image(self, name): 
    return image_base_set_image(awtk_get_native_obj(self), name);


  #
  # 设置控件的旋转角度(仅在WITH_VGCANVAS定义时生效)。
  # 
  # @param rotation 旋转角度(幅度)。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_rotation(self, rotation): 
    return image_base_set_rotation(awtk_get_native_obj(self), rotation);


  #
  # 设置控件的缩放比例(仅在WITH_VGCANVAS定义时生效)。
  # 
  # @param scale_x X方向缩放比例。
  # @param scale_y Y方向缩放比例。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_scale(self, scale_x, scale_y): 
    return image_base_set_scale(awtk_get_native_obj(self), scale_x, scale_y);


  #
  # 设置控件的锚点(仅在WITH_VGCANVAS定义时生效)。
  # 
  # @param anchor_x 锚点X(0-1)。0在控件左边，0.5在控件中间，1在控件右边。
  # @param anchor_y 锚点Y(0-1)。0在控件顶部，0.5在控件中间，1在控件底部。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_anchor(self, anchor_x, anchor_y): 
    return image_base_set_anchor(awtk_get_native_obj(self), anchor_x, anchor_y);


  #
  # 设置控件的选中状态。
  # 
  # @param selected 是否被选中。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_selected(self, selected): 
    return image_base_set_selected(awtk_get_native_obj(self), selected);


  #
  # 设置控件是否可以被选中。
  # 
  # @param selectable 是否可以被选中。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_selectable(self, selectable): 
    return image_base_set_selectable(awtk_get_native_obj(self), selectable);


  #
  # 设置控件是否可以被点击。
  # 
  # @param clickable 是否可以被点击。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_clickable(self, clickable): 
    return image_base_set_clickable(awtk_get_native_obj(self), clickable);


  #
  # 转换为image_base对象(供脚本语言使用)。
  # 
  # @param widget image_base对象。
  #
  # @return image_base对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TImageBase(image_base_cast(awtk_get_native_obj(widget)));


  #
  # 图片的名称。
  #
  #
  @property
  def image(self):
    return image_base_t_get_prop_image(self.nativeObj);

  @image.setter
  def image(self, v):
   this.set_image(v);


  #
  # 锚点X(0-1)。0在控件左边，0.5在控件中间，1在控件右边。
  #
  #
  @property
  def anchor_x(self):
    return image_base_t_get_prop_anchor_x(self.nativeObj);


  #
  # 锚点Y(0-1)。0在控件顶部，0.5在控件中间，1在控件底部。
  #
  #
  @property
  def anchor_y(self):
    return image_base_t_get_prop_anchor_y(self.nativeObj);


  #
  # 控件在X方向上的缩放比例。
  #
  #
  @property
  def scale_x(self):
    return image_base_t_get_prop_scale_x(self.nativeObj);


  #
  # 控件在Y方向上的缩放比例。
  #
  #
  @property
  def scale_y(self):
    return image_base_t_get_prop_scale_y(self.nativeObj);


  #
  # 控件的旋转角度(幅度)。
  #
  #
  @property
  def rotation(self):
    return image_base_t_get_prop_rotation(self.nativeObj);

  @rotation.setter
  def rotation(self, v):
   this.set_rotation(v);


  #
  # 点击时，是否触发EVT_CLICK事件。
  #
  #
  @property
  def clickable(self):
    return image_base_t_get_prop_clickable(self.nativeObj);

  @clickable.setter
  def clickable(self, v):
   this.set_clickable(v);


  #
  # 是否设置选中状态。
  #
  #
  @property
  def selectable(self):
    return image_base_t_get_prop_selectable(self.nativeObj);

  @selectable.setter
  def selectable(self, v):
   this.set_selectable(v);


  #
  # 当前是否被选中。
  #
  #
  @property
  def selected(self):
    return image_base_t_get_prop_selected(self.nativeObj);

  @selected.setter
  def selected(self, v):
   this.set_selected(v);


#
# 可变的style(可实时修改并生效，主要用于在designer中被编辑的控件，或者一些特殊控件)。
#
#style\_mutable也对style\_const进行了包装，当用户没修改某个值时，便从style\_const中获取。
#
#
class TStyleMutable (TStyle):
  def __init__(self, nativeObj):
    super(TStyleMutable, self).__init__(nativeObj)


  #
  # 设置style的名称。
  # 
  # @param name 名称。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_name(self, name): 
    return style_mutable_set_name(awtk_get_native_obj(self), name);


  #
  # 设置指定名称整数格式的值。
  # 
  # @param state 控件状态。
  # @param name 属性名。
  # @param val 值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_int(self, state, name, val): 
    return style_mutable_set_int(awtk_get_native_obj(self), state, name, val);


  #
  # 转换为style_mutable对象。
  # 
  # @param s style对象。
  #
  # @return style对象。
  #
  @classmethod
  def cast(cls, s): 
    return  TStyleMutable(style_mutable_cast(awtk_get_native_obj(s)));


  #
  # 创建style\_mutable对象。
  #
  #> 除了测试程序外不需要直接调用，widget会通过style\_factory\_create创建。
  # 
  # @param default_style 缺省的style。
  #
  # @return style对象。
  #
  @classmethod
  def create(cls, default_style): 
    return  TStyleMutable(style_mutable_create(awtk_get_native_obj(default_style)));


  #
  # 名称。
  #
  #
  @property
  def name(self):
    return style_mutable_t_get_prop_name(self.nativeObj);

  @name.setter
  def name(self, v):
   this.set_name(v);


#
# 窗口。
#
#本类把窗口相关的公共行为进行抽象，放到一起方便重用。目前已知的具体实现如下图：
#
#
#
#> 本类是一个抽象类，不能进行实例化。请在应用程序中使用具体的类，如window\_t。
#
#
class TWindowBase (TWidget):
  def __init__(self, nativeObj):
    super(TWindowBase, self).__init__(nativeObj)


  #
  # 转换为window_base对象(供脚本语言使用)。
  # 
  # @param widget window_base对象。
  #
  # @return window_base对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TWindowBase(window_base_cast(awtk_get_native_obj(widget)));


  #
  # 窗体样式资源的名称。
  #每个窗口都可以有独立的窗体样式文件，如果没指定，则使用系统缺省的窗体样式文件。
  #窗体样式是一个XML文件，放在assets/raw/styles目录下。
  #请参考[窗体样式](https://github.com/zlgopen/awtk/blob/master/docs/theme.md)
  #
  #
  @property
  def theme(self):
    return window_base_t_get_prop_theme(self.nativeObj);


  #
  # 设计时宽度。
  #
  #
  @property
  def design_w(self):
    return window_base_t_get_prop_design_w(self.nativeObj);


  #
  # 设计时高度。
  #
  #
  @property
  def design_h(self):
    return window_base_t_get_prop_design_h(self.nativeObj);


  #
  # 窗口大小与设计时大小不同时，是否自动调整子控件的x坐标。
  #
  #
  @property
  def auto_scale_children_x(self):
    return window_base_t_get_prop_auto_scale_children_x(self.nativeObj);


  #
  # 窗口大小与设计时大小不同时，是否自动调整子控件的y坐标。
  #
  #
  @property
  def auto_scale_children_y(self):
    return window_base_t_get_prop_auto_scale_children_y(self.nativeObj);


  #
  # 窗口大小与设计时大小不同时，是否自动调整子控件的宽度。
  #
  #
  @property
  def auto_scale_children_w(self):
    return window_base_t_get_prop_auto_scale_children_w(self.nativeObj);


  #
  # 窗口大小与设计时大小不同时，是否自动调整子控件的高度。
  #
  #
  @property
  def auto_scale_children_h(self):
    return window_base_t_get_prop_auto_scale_children_h(self.nativeObj);


  #
  # 禁用窗口动画。
  #
  #
  @property
  def disable_anim(self):
    return window_base_t_get_prop_disable_anim(self.nativeObj);


  #
  # 收到EVT_REQUEST_CLOSE_WINDOW是否自动关闭窗口。
  #
  #如果关闭窗口时，需要用户确认:
  #
  #* 1.将closable设置为WINDOW\_CLOSABLE\_CONFIRM
  #
  #* 2.处理窗口的EVT\_REQUEST\_CLOSE\_WINDOW事件
  #
  #> closable在XML中取值为：yes/no/confirm，缺省为yes。
  #
  #
  @property
  def closable(self):
    return window_base_t_get_prop_closable(self.nativeObj);


  #
  # 打开窗口动画的名称。
  #请参考[窗口动画](https://github.com/zlgopen/awtk/blob/master/docs/window_animator.md)
  #
  #
  @property
  def open_anim_hint(self):
    return window_base_t_get_prop_open_anim_hint(self.nativeObj);


  #
  # 关闭窗口动画的名称。
  #请参考[窗口动画](https://github.com/zlgopen/awtk/blob/master/docs/window_animator.md)
  #
  #
  @property
  def close_anim_hint(self):
    return window_base_t_get_prop_close_anim_hint(self.nativeObj);


  #
  # 向前移动焦点的键值。
  #
  #请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)
  #
  #
  @property
  def move_focus_prev_key(self):
    return window_base_t_get_prop_move_focus_prev_key(self.nativeObj);


  #
  # 向后移动焦点的键值。
  #
  #请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)
  #
  #
  @property
  def move_focus_next_key(self):
    return window_base_t_get_prop_move_focus_next_key(self.nativeObj);


  #
  # 向上移动焦点的键值。
  #
  #请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)
  #
  #
  @property
  def move_focus_up_key(self):
    return window_base_t_get_prop_move_focus_up_key(self.nativeObj);


  #
  # 向下移动焦点的键值。
  #
  #请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)
  #
  #
  @property
  def move_focus_down_key(self):
    return window_base_t_get_prop_move_focus_down_key(self.nativeObj);


  #
  # 向左移动焦点的键值。
  #
  #请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)
  #
  #
  @property
  def move_focus_left_key(self):
    return window_base_t_get_prop_move_focus_left_key(self.nativeObj);


  #
  # 向右移动焦点的键值。
  #
  #请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)
  #
  #
  @property
  def move_focus_right_key(self):
    return window_base_t_get_prop_move_focus_right_key(self.nativeObj);


  #
  # 单例。如果窗口存在，先关闭再打开。
  #
  #
  @property
  def single_instance(self):
    return window_base_t_get_prop_single_instance(self.nativeObj);


  #
  # 点击非focusable控件时，是否让当前焦点控件失去焦点。比如点击窗口空白区域，是否让编辑器失去焦点。
  #
  #
  @property
  def strongly_focus(self):
    return window_base_t_get_prop_strongly_focus(self.nativeObj);


#
# 窗口管理器。
#
#
class TWindowManager (TWidget):
  def __init__(self, nativeObj):
    super(TWindowManager, self).__init__(nativeObj)


  #
  # 获取全局window_manager对象
  # 
  #
  # @return 对象。
  #
  @classmethod
  def instance(cls): 
    return  TWindowManager(window_manager());


  #
  # 转换为window_manager对象(供脚本语言使用)。
  # 
  # @param widget window_manager对象。
  #
  # @return window_manager对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TWindowManager(window_manager_cast(awtk_get_native_obj(widget)));


  #
  # 获取最上面的主窗口。
  # 
  #
  # @return 返回窗口对象。
  #
  def get_top_main_window(self): 
    return  TWidget(window_manager_get_top_main_window(awtk_get_native_obj(self)));


  #
  # 获取最上面的窗口。
  # 
  #
  # @return 返回窗口对象。
  #
  def get_top_window(self): 
    return  TWidget(window_manager_get_top_window(awtk_get_native_obj(self)));


  #
  # 获取前一个的窗口。
  # 
  #
  # @return 返回窗口对象。
  #
  def get_prev_window(self): 
    return  TWidget(window_manager_get_prev_window(awtk_get_native_obj(self)));


  #
  # 获取指针当前的X坐标。
  # 
  #
  # @return 返回指针当前的X坐标。
  #
  def get_pointer_x(self): 
    return window_manager_get_pointer_x(awtk_get_native_obj(self));


  #
  # 获取指针当前的Y坐标。
  # 
  #
  # @return 返回指针当前的X坐标。
  #
  def get_pointer_y(self): 
    return window_manager_get_pointer_y(awtk_get_native_obj(self));


  #
  # 获取指针当前是否按下。
  # 
  #
  # @return 返回指针当前是否按下。
  #
  def get_pointer_pressed(self): 
    return window_manager_get_pointer_pressed(awtk_get_native_obj(self));


  #
  # 获取当前窗口动画是否正在播放。
  # 
  #
  # @return 返回TRUE表示正在播放，FALSE表示没有播放。
  #
  def is_animating(self): 
    return window_manager_is_animating(awtk_get_native_obj(self));


  #
  # 设置是否显示FPS。
  # 
  # @param show_fps 是否显示FPS。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_show_fps(self, show_fps): 
    return window_manager_set_show_fps(awtk_get_native_obj(self), show_fps);


  #
  # 限制最大帧率。
  #
  #> TK\_MAX\_LOOP\_FPS/max\_fps最好是整数，比如TK\_MAX\_LOOP\_FPS为120，max\_fps可取60/30/20/10等。
  # 
  # @param max_fps 最大帧率。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_max_fps(self, max_fps): 
    return window_manager_set_max_fps(awtk_get_native_obj(self), max_fps);


  #
  # 设置是否忽略用户输入事件。
  # 
  # @param ignore_input_events 是否忽略用户输入事件。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_ignore_input_events(self, ignore_input_events): 
    return window_manager_set_ignore_input_events(awtk_get_native_obj(self), ignore_input_events);


  #
  # 设置屏保时间。
  # 
  # @param screen_saver_time 屏保时间(单位毫秒), 为0关闭屏保。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_screen_saver_time(self, screen_saver_time): 
    return window_manager_set_screen_saver_time(awtk_get_native_obj(self), screen_saver_time);


  #
  # 设置鼠标指针。
  # 
  # @param cursor 图片名称(从图片管理器中加载)。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_cursor(self, cursor): 
    return window_manager_set_cursor(awtk_get_native_obj(self), cursor);


  #
  # 请求关闭顶层窗口。
  #
  #> 如果顶层窗口时模态对话框，用DIALOG\_QUIT\_NONE调用dialog\_quit。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def back(self): 
    return window_manager_back(awtk_get_native_obj(self));


  #
  # 回到主窗口，关闭之上的全部窗口。
  #
  #> 如果顶层窗口时模态对话框，用DIALOG\_QUIT\_NONE调用dialog\_quit。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def back_to_home(self): 
    return window_manager_back_to_home(awtk_get_native_obj(self));


  #
  # 回到指定的窗口，关闭之上的全部窗口。
  #
  #> 如果顶层窗口时模态对话框，用DIALOG\_QUIT\_NONE调用dialog\_quit。
  # 
  # @param target 目标窗口的名称。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def back_to(self, target): 
    return window_manager_back_to(awtk_get_native_obj(self), target);


  #
  # 调整原生窗口的大小。
  # 
  # @param w 宽度
  # @param h 高度
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def resize(self, w, h): 
    return window_manager_resize(awtk_get_native_obj(self), w, h);


  #
  # 关闭全部窗口。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def close_all(self): 
    return window_manager_close_all(awtk_get_native_obj(self));


#
# 画布控件。
#
#画布控件让开发者可以自己在控件上绘制需要的内容。
#
#canvas\_widget\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于canvas\_widget\_t控件。
#
#在xml中使用"canvas"标签创建画布控件。如：
#
#```xml
#<canvas name="paint_vgcanvas" x="0" y="0" w="100%" h="100%" />
#```
#
#> 更多用法请参考：
#[canvas_widget.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/vgcanvas.xml)
#
#在c代码中使用函数canvas\_widget\_create创建画布控件。如：
#
#
#> 创建之后，需要用widget\_on注册EVT\_PAINT事件，并在EVT\_PAINT事件处理函数中绘制。
#
#
#绘制时，可以通过canvas接口去绘制，也可以通过vgcanvas接口去绘制。
#先从evt获取canvas对象，再通过canvas\_get\_vgcanvas从canvas中获取vgcanvas对象。
#
#
#> 完整示例请参考：
#[canvas demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/canvas.c)
#
#参考：
#
#* [canvas接口描述](canvas_t.md)
#* [vgcanvas接口描述](vgcanvas_t.md)
#
#
class TCanvasWidget (TWidget):
  def __init__(self, nativeObj):
    super(TCanvasWidget, self).__init__(nativeObj)


  #
  # 创建canvas_widget对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TCanvasWidget(canvas_widget_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为canvas_widget对象(供脚本语言使用)。
  # 
  # @param widget canvas_widget对象。
  #
  # @return canvas_widget对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TCanvasWidget(canvas_widget_cast(awtk_get_native_obj(widget)));


#
# 颜色选择器的颜色分量。
#控件的名称有严格规定：
#COLOR_PICKER_CHILD_SV: 水平为Value/Brightness(递增)，垂直为Saturation(递减)。
#COLOR_PICKER_CHILD_H: 水平为同色，垂直为Hue(递减)。
#
#
class TColorComponent (TWidget):
  def __init__(self, nativeObj):
    super(TColorComponent, self).__init__(nativeObj)


  #
  # 转换为color_component对象(供脚本语言使用)。
  # 
  # @param widget color_component对象。
  #
  # @return color_component对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TColorComponent(color_component_cast(awtk_get_native_obj(widget)));


#
# 颜色选择器。
#
#color\_picker\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于color\_picker\_t控件。
#
#在xml中使用"color\_picker"标签创建颜色选择器控件。如：
#
#```xml
#<color_picker x="0" y="0" w="100%" h="100%" value="orange">
#<color_component x="0" y="0" w="200" h="200" name="sv"/>
#<color_component x="210" y="0" w="20" h="200" name="h"/>
#<color_tile x="0" y="210" w="50%" h="20" name="new" bg_color="green"/>
#<color_tile x="right" y="210" w="50%" h="20" name="old" bg_color="blue"/>
#</color_picker>
#```
#
#> 更多用法请参考：
#[color\_picker](https://github.com/zlgopen/awtk/blob/master/design/default/ui/color_picker.xml)
#
#其中的子控件必须按下列规则命名：
#
#* r 红色分量。可以是spin_box、edit和slider。
#* g 绿色分量。可以是spin_box、edit和slider。
#* b 蓝色分量。可以是spin_box、edit和slider。
#* h Hue分量。可以是spin_box、edit、slider和color_component。
#* s Saturation分量。可以是spin_box、edit和slider。
#* v Value/Brightness分量。可以是spin_box、edit和slider。
#* sv Saturation和Value/Brightness分量。可以是color_component。
#* old 旧的值。可以是spin_box、edit和color_tile。
#* new 新的值。可以是spin_box、edit和color_tile。
#
#
class TColorPicker (TWidget):
  def __init__(self, nativeObj):
    super(TColorPicker, self).__init__(nativeObj)


  #
  # 创建color_picker对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TColorPicker(color_picker_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 设置颜色。
  # 
  # @param color 颜色。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_color(self, color): 
    return color_picker_set_color(awtk_get_native_obj(self), color);


  #
  # 转换为color_picker对象(供脚本语言使用)。
  # 
  # @param widget color_picker对象。
  #
  # @return color_picker对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TColorPicker(color_picker_cast(awtk_get_native_obj(widget)));


  #
  # 颜色。
  #
  #
  @property
  def value(self):
    return color_picker_t_get_prop_value(self.nativeObj);


#
# 将draggable放入目标控件，即可让目标控件或当前窗口可以被拖动。
#
#draggable\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于draggable\_t控件。
#
#在xml中使用"draggable"标签创建draggable控件。如：
#
#```xml
#<button text="Drag Me" w="80" h="40" x="10" y="10">
#<draggable />
#</button>
#```
#
#拖动对话框标题时移动对话框：
#
#```xml
#<dialog_title x="0" y="0" w="100%" h="30" text="Hello AWTK"
#<draggable drag_window="true"/>
#</dialog_title>
#```
#
#> 更多用法请参考：
#[draggable.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/draggable.xml)
#
#在c代码中使用函数draggable\_create创建按钮控件。如：
#
#
#> draggable本身不可见，故无需style。
#
#
class TDraggable (TWidget):
  def __init__(self, nativeObj):
    super(TDraggable, self).__init__(nativeObj)


  #
  # 创建draggable对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TDraggable(draggable_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为draggable对象(供脚本语言使用)。
  # 
  # @param widget draggable对象。
  #
  # @return draggable对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TDraggable(draggable_cast(awtk_get_native_obj(widget)));


  #
  # 设置top。
  # 
  # @param top 拖动范围的顶部限制。缺省为父控件的顶部。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_top(self, top): 
    return draggable_set_top(awtk_get_native_obj(self), top);


  #
  # 设置bottom。
  # 
  # @param bottom 拖动范围的底部限制。缺省为父控件的底部。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_bottom(self, bottom): 
    return draggable_set_bottom(awtk_get_native_obj(self), bottom);


  #
  # 设置left。
  # 
  # @param left 拖动范围的左边限制。缺省为父控件的左边。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_left(self, left): 
    return draggable_set_left(awtk_get_native_obj(self), left);


  #
  # 设置right。
  # 
  # @param right 拖动范围的右边限制。缺省为父控件的右边边。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_right(self, right): 
    return draggable_set_right(awtk_get_native_obj(self), right);


  #
  # 设置vertical_only。
  # 
  # @param vertical_only 只允许垂直拖动。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_vertical_only(self, vertical_only): 
    return draggable_set_vertical_only(awtk_get_native_obj(self), vertical_only);


  #
  # 设置horizontal_only。
  # 
  # @param horizontal_only 只允许水平拖动。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_horizontal_only(self, horizontal_only): 
    return draggable_set_horizontal_only(awtk_get_native_obj(self), horizontal_only);


  #
  # 设置drag_window。
  #拖动窗口而不是父控件。比如放在对话框的titlebar上，拖动titlebar其实是希望拖动对话框。
  # 
  # @param drag_window drag_window
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_drag_window(self, drag_window): 
    return draggable_set_drag_window(awtk_get_native_obj(self), drag_window);


  #
  # 拖动范围的顶部限制。缺省为父控件的顶部。
  #
  #
  @property
  def top(self):
    return draggable_t_get_prop_top(self.nativeObj);

  @top.setter
  def top(self, v):
   this.set_top(v);


  #
  # 拖动范围的底部限制。缺省为父控件的底部。
  #
  #
  @property
  def bottom(self):
    return draggable_t_get_prop_bottom(self.nativeObj);

  @bottom.setter
  def bottom(self, v):
   this.set_bottom(v);


  #
  # 拖动范围的左边限制。缺省为父控件的左边。
  #
  #
  @property
  def left(self):
    return draggable_t_get_prop_left(self.nativeObj);

  @left.setter
  def left(self, v):
   this.set_left(v);


  #
  # 拖动范围的右边限制。缺省为父控件的右边边。
  #
  #
  @property
  def right(self):
    return draggable_t_get_prop_right(self.nativeObj);

  @right.setter
  def right(self, v):
   this.set_right(v);


  #
  # 只允许垂直拖动。
  #
  #
  @property
  def vertical_only(self):
    return draggable_t_get_prop_vertical_only(self.nativeObj);

  @vertical_only.setter
  def vertical_only(self, v):
   this.set_vertical_only(v);


  #
  # 只允许水平拖动。
  #
  #
  @property
  def horizontal_only(self):
    return draggable_t_get_prop_horizontal_only(self.nativeObj);

  @horizontal_only.setter
  def horizontal_only(self, v):
   this.set_horizontal_only(v);


  #
  # 拖动窗口而不是父控件。比如放在对话框的titlebar上，拖动titlebar其实是希望拖动对话框。
  #
  #
  @property
  def drag_window(self):
    return draggable_t_get_prop_drag_window(self.nativeObj);

  @drag_window.setter
  def drag_window(self, v):
   this.set_drag_window(v);


#
# 文件管理/浏览/选择控件。
#
#file\_browser\_view\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于file\_browser\_view\_t控件。
#
#考虑到文件浏览器界面呈现的多样性，界面呈现工作完全有子控件来完成。
#
#file\_browser\_view\_t负责关联文件/文件夹数据到子控件上，子控件需要特定的规范命名。
#
#* 名为 "cwd" 的子控件用于显示当前路径。
#
#* 名为 "selected_file" 的子控件用于显示当前选择的文件。
#
#* 名为 "file" 的子控件用于显示文件项的模板控件。
#
#* 名为 "folder" 的子控件用于显示文件夹项的模板控件。
#
#* 名为 "return_up" 的子控件用于返回上一级文件夹的模板控件。
#
#* 名为 "container" 的子控件为容器控件，通常是scrollview。
#
#* 名为 "name" 的子控件用于显示文件和文件夹的名称(放在列表项目内)。
#
#* 名为 "size" 的子控件用于显示文件和文件夹的大小(放在列表项目内)。
#
#* 名为 "mtime" 的子控件用于显示文件和文件夹的修改时间(放在列表项目内)。
#
#* 名为 "ctime" 的子控件用于显示文件和文件夹的创建时间(放在列表项目内)。
#
#* 名为 "icon" 的子控件用于显示文件和文件夹的图标(放在列表项目内)。
#
#* 类型为 "check_button" 的子控件用于选择(放在列表项目内)。
#
#完整示例请参考：
#
#https://github.com/zlgopen/awtk/blob/master/design/default/ui/file_chooser_for_open.xml
#
#
class TFileBrowserView (TWidget):
  def __init__(self, nativeObj):
    super(TFileBrowserView, self).__init__(nativeObj)


  #
  # 创建file_browser_view对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TFileBrowserView(file_browser_view_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为file_browser_view对象(供脚本语言使用)。
  # 
  # @param widget file_browser_view对象。
  #
  # @return file_browser_view对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TFileBrowserView(file_browser_view_cast(awtk_get_native_obj(widget)));


  #
  # 设置 初始文件夹。
  # 
  # @param init_dir 初始文件夹。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_init_dir(self, init_dir): 
    return file_browser_view_set_init_dir(awtk_get_native_obj(self), init_dir);


  #
  # 设置 顶层文件夹。
  # 
  # @param top_dir 初始文件夹。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_top_dir(self, top_dir): 
    return file_browser_view_set_top_dir(awtk_get_native_obj(self), top_dir);


  #
  # 设置 过滤规则。
  #> files_only 表示只列出文件，dir_only 表示只列出目录，其它表示只列出满足扩展名文件集合(如：.jpg.png.gif)。
  # 
  # @param filter 过滤规则。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_filter(self, filter): 
    return file_browser_view_set_filter(awtk_get_native_obj(self), filter);


  #
  # 重新加载。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def reload(self): 
    return file_browser_view_reload(awtk_get_native_obj(self));


  #
  # 设置 忽略隐藏文件。
  # 
  # @param ignore_hidden_files 忽略隐藏文件。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_ignore_hidden_files(self, ignore_hidden_files): 
    return file_browser_view_set_ignore_hidden_files(awtk_get_native_obj(self), ignore_hidden_files);


  #
  # 设置 是否为升序排序。
  # 
  # @param sort_ascending 是否为升序排序。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_sort_ascending(self, sort_ascending): 
    return file_browser_view_set_sort_ascending(awtk_get_native_obj(self), sort_ascending);


  #
  # 设置 是否显示checkbutton。
  # 
  # @param show_check_button 是否显示checkbutton。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_show_check_button(self, show_check_button): 
    return file_browser_view_set_show_check_button(awtk_get_native_obj(self), show_check_button);


  #
  # 设置 排序方式。可选值(name, size, mtime, type)。
  # 
  # @param sort_by 排序方式。可选值(name, size, mtime, type)。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_sort_by(self, sort_by): 
    return file_browser_view_set_sort_by(awtk_get_native_obj(self), sort_by);


  #
  # 获取当前路径。
  # 
  #
  # @return 返回当前路径。
  #
  def get_cwd(self): 
    return file_browser_view_get_cwd(awtk_get_native_obj(self));


  #
  # 在当前文件夹创建子文件夹。
  # 
  # @param name 子文件夹名。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def create_dir(self, name): 
    return file_browser_view_create_dir(awtk_get_native_obj(self), name);


  #
  # 在当前文件夹创建文件。
  # 
  # @param name 文件名。
  # @param data 数据。
  # @param size 数据长度。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def create_file(self, name, data, size): 
    return file_browser_view_create_file(awtk_get_native_obj(self), name, data, size);


  #
  # 初始文件夹。
  #
  #
  @property
  def init_dir(self):
    return file_browser_view_t_get_prop_init_dir(self.nativeObj);

  @init_dir.setter
  def init_dir(self, v):
   this.set_init_dir(v);


  #
  # 最顶层目录。到达本目录后，不允许往上。
  #
  #
  @property
  def top_dir(self):
    return file_browser_view_t_get_prop_top_dir(self.nativeObj);

  @top_dir.setter
  def top_dir(self, v):
   this.set_top_dir(v);


  #
  # 过滤规则。
  #
  #
  @property
  def filter(self):
    return file_browser_view_t_get_prop_filter(self.nativeObj);

  @filter.setter
  def filter(self, v):
   this.set_filter(v);


  #
  # 是否忽略隐藏文件。
  #
  #
  @property
  def ignore_hidden_files(self):
    return file_browser_view_t_get_prop_ignore_hidden_files(self.nativeObj);

  @ignore_hidden_files.setter
  def ignore_hidden_files(self, v):
   this.set_ignore_hidden_files(v);


  #
  # 是否为升序排序。
  #
  #
  @property
  def sort_ascending(self):
    return file_browser_view_t_get_prop_sort_ascending(self.nativeObj);

  @sort_ascending.setter
  def sort_ascending(self, v):
   this.set_sort_ascending(v);


  #
  # 是否显示checkbutton。
  #
  #
  @property
  def show_check_button(self):
    return file_browser_view_t_get_prop_show_check_button(self.nativeObj);

  @show_check_button.setter
  def show_check_button(self, v):
   this.set_show_check_button(v);


  #
  # 排序方式。可选值(name, size, mtime, type)。
  #
  #
  @property
  def sort_by(self):
    return file_browser_view_t_get_prop_sort_by(self.nativeObj);

  @sort_by.setter
  def sort_by(self, v):
   this.set_sort_by(v);


#
# 文件/目录选择器
#
#
class TFileChooser (TEmitter):
  def __init__(self, nativeObj):
    super(TFileChooser, self).__init__(nativeObj)


  #
  # 创建file_chooser对象
  # 
  #
  # @return 对象。
  #
  @classmethod
  def create(cls): 
    return  TFileChooser(file_chooser_create());


  #
  # 设置初始目录。
  # 
  # @param init_dir 初始目录
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_init_dir(self, init_dir): 
    return file_chooser_set_init_dir(awtk_get_native_obj(self), init_dir);


  #
  # 设置初始目录。
  # 
  # @param top_dir 初始目录
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_top_dir(self, top_dir): 
    return file_chooser_set_top_dir(awtk_get_native_obj(self), top_dir);


  #
  # 设置过滤规则。
  #> files_only 表示只列出文件，dir_only 表示只列出目录，其它表示只列出满足扩展名文件集合(如：.jpg.png.gif)。
  # 
  # @param filter 过滤规则。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_filter(self, filter): 
    return file_chooser_set_filter(awtk_get_native_obj(self), filter);


  #
  # 转换为file_chooser对象(供脚本语言使用)。
  # 
  # @param chooser file_chooser对象。
  #
  # @return 对象。
  #
  @classmethod
  def cast(cls, chooser): 
    return  TFileChooser(file_chooser_cast(awtk_get_native_obj(chooser)));


  #
  # 为了保存而选择文件。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def choose_file_for_save(self): 
    return file_chooser_choose_file_for_save(awtk_get_native_obj(self));


  #
  # 为了打开而选择文件。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def choose_file_for_open(self): 
    return file_chooser_choose_file_for_open(awtk_get_native_obj(self));


  #
  # 选择目录。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def choose_folder(self): 
    return file_chooser_choose_folder(awtk_get_native_obj(self));


  #
  # 获取目录。
  # 
  #
  # @return 返回选择的目录。
  #
  def get_dir(self): 
    return file_chooser_get_dir(awtk_get_native_obj(self));


  #
  # 获取文件名。
  # 
  #
  # @return 返回选择的文件名。
  #
  def get_filename(self): 
    return file_chooser_get_filename(awtk_get_native_obj(self));


  #
  # 用户是否取消了选择。
  # 
  #
  # @return 返回用户是否取消了选择。
  #
  def is_aborted(self): 
    return file_chooser_is_aborted(awtk_get_native_obj(self));


#
# 仪表指针控件。
#
#仪表指针就是一张旋转的图片，图片可以是普通图片也可以是SVG图片。
#
#在嵌入式平台上，对于旋转的图片，SVG图片的效率比位图高数倍，所以推荐使用SVG图片。
#
#gauge\_pointer\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于gauge\_pointer\_t控件。
#
#在xml中使用"gauge\_pointer"标签创建仪表指针控件。如：
#
#```xml
#<gauge_pointer x="c" y="50" w="24" h="140" value="-128" image="gauge_pointer" />
#```
#
#> 更多用法请参考：
#[gauge.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/gauge.xml)
#
#在c代码中使用函数gauge\_pointer\_create创建仪表指针控件。如：
#
#
#> 创建之后，需要用gauge\_pointer\_set\_image设置仪表指针图片。
#
#
class TGaugePointer (TWidget):
  def __init__(self, nativeObj):
    super(TGaugePointer, self).__init__(nativeObj)


  #
  # 创建gauge_pointer对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TGaugePointer(gauge_pointer_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为gauge_pointer对象(供脚本语言使用)。
  # 
  # @param widget gauge_pointer对象。
  #
  # @return gauge_pointer对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TGaugePointer(gauge_pointer_cast(awtk_get_native_obj(widget)));


  #
  # 设置指针角度。12点钟方向为0度，顺时钟方向为正，单位为度。
  # 
  # @param angle 指针角度。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_angle(self, angle): 
    return gauge_pointer_set_angle(awtk_get_native_obj(self), angle);


  #
  # 设置指针的图片。
  # 
  # @param image 指针的图片。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_image(self, image): 
    return gauge_pointer_set_image(awtk_get_native_obj(self), image);


  #
  # 设置指针的旋转锚点。
  # 
  # @param anchor_x 指针的锚点坐标x。(后面加上px为像素点，不加px为相对百分比坐标)
  # @param anchor_y 指针的锚点坐标y。(后面加上px为像素点，不加px为相对百分比坐标)
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_anchor(self, anchor_x, anchor_y): 
    return gauge_pointer_set_anchor(awtk_get_native_obj(self), anchor_x, anchor_y);


  #
  # 指针角度。12点钟方向为0度，顺时钟方向为正，单位为度。
  #
  #
  @property
  def angle(self):
    return gauge_pointer_t_get_prop_angle(self.nativeObj);

  @angle.setter
  def angle(self, v):
   this.set_angle(v);


  #
  # 指针图片。
  #
  #图片须垂直向上，图片的中心点为旋转方向。
  #
  #
  @property
  def image(self):
    return gauge_pointer_t_get_prop_image(self.nativeObj);

  @image.setter
  def image(self, v):
   this.set_image(v);


  #
  # 图片旋转锚点x坐标。(后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f)
  #
  #
  @property
  def anchor_x(self):
    return gauge_pointer_t_get_prop_anchor_x(self.nativeObj);


  #
  # 图片旋转锚点x坐标。(后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f)
  #
  #
  @property
  def anchor_y(self):
    return gauge_pointer_t_get_prop_anchor_y(self.nativeObj);


#
# 表盘控件。
#
#表盘控件就是一张图片。
#
#gauge\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于gauge\_t控件。
#
#在xml中使用"gauge"标签创建表盘控件。如：
#
#```xml
#<gauge x="c" y="10" w="240" h="240" image="gauge_bg"
#```
#
#> 更多用法请参考：
#[gauge.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/gauge.xml)
#
#在c代码中使用函数gauge\_create创建表盘控件。如：
#
#
#可用通过style来设置控件的显示风格，如背景和边框等。如：
#
#```xml
#<gauge>
#<style name="border">
#<normal border_color="#000000" bg_color="#e0e0e0" text_color="black"/>
#</style>
#</gauge>
#```
#
#> 更多用法请参考：
#[theme
#default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml)
#
#
class TGauge (TWidget):
  def __init__(self, nativeObj):
    super(TGauge, self).__init__(nativeObj)


  #
  # 创建gauge对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TGauge(gauge_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为gauge对象(供脚本语言使用)。
  # 
  # @param widget gauge对象。
  #
  # @return gauge对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TGauge(gauge_cast(awtk_get_native_obj(widget)));


  #
  # 设置背景图片的名称。
  # 
  # @param name 图片名称，该图片必须存在于资源管理器。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_image(self, name): 
    return gauge_set_image(awtk_get_native_obj(self), name);


  #
  # 设置图片的显示方式。
  #
  #> 绘制方式的属性值和枚举值:
  #[image\_draw\_type\_name\_value](https://github.com/zlgopen/awtk/blob/master/src/base/enums.c#L98)
  # 
  # @param draw_type 显示方式。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_draw_type(self, draw_type): 
    return gauge_set_draw_type(awtk_get_native_obj(self), draw_type);


  #
  # 背景图片。
  #
  #
  @property
  def image(self):
    return gauge_t_get_prop_image(self.nativeObj);

  @image.setter
  def image(self, v):
   this.set_image(v);


  #
  # 图片的绘制方式。
  #
  #
  @property
  def draw_type(self):
    return gauge_t_get_prop_draw_type(self.nativeObj);

  @draw_type.setter
  def draw_type(self, v):
   this.set_draw_type(v);


#
# 图片动画控件，指定一个图片前缀，依次显示指定序列的图片，从而形成动画效果。
#
#图片序列可以用sequence指定，也可以用start\_index和end\_index指定一个范围。
#
#image\_animation\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于image\_animation\_t控件。
#
#在xml中使用"image\_animation"标签创建图片动画控件。如：
#
#```xml
#<image_animation image="ani" start_index="1" end_index="9" auto_play="true" interval="50"
#delay="100"/>
#```
#
#> 更多用法请参考：
#[image_animation.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/image_animation.xml)
#
#在c代码中使用函数image\_animation\_create创建图片动画控件。如：
#
#
#> 完整示例请参考：
#[image_animation
#demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/image_animation.c)
#
#可用通过style来设置控件的显示风格，如背景颜色和边框等等，不过一般情况并不需要。
#
#
class TImageAnimation (TWidget):
  def __init__(self, nativeObj):
    super(TImageAnimation, self).__init__(nativeObj)


  #
  # 创建image_animation对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TImageAnimation(image_animation_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 设置是否循环播放。
  # 
  # @param loop 是否循环播放。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_loop(self, loop): 
    return image_animation_set_loop(awtk_get_native_obj(self), loop);


  #
  # 设置图片前缀。
  # 
  # @param image 图片前缀。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_image(self, image): 
    return image_animation_set_image(awtk_get_native_obj(self), image);


  #
  # 设置播放间隔时间。
  # 
  # @param interval 间隔时间(毫秒)。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_interval(self, interval): 
    return image_animation_set_interval(awtk_get_native_obj(self), interval);


  #
  # 设置延迟播放时间(仅适用于自动播放)。
  # 
  # @param delay 延迟播放时间(毫秒)。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_delay(self, delay): 
    return image_animation_set_delay(awtk_get_native_obj(self), delay);


  #
  # 设置是否自动播放。
  # 
  # @param auto_play 是否自动播放。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_auto_play(self, auto_play): 
    return image_animation_set_auto_play(awtk_get_native_obj(self), auto_play);


  #
  # 设置播放序列。比如image为"fire"，sequence为"12223", 将依次播放"fire1", "fire2", "fire2", "fire2",
  #"fire3"。
  # 
  # @param sequence 播放序列。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_sequence(self, sequence): 
    return image_animation_set_sequence(awtk_get_native_obj(self), sequence);


  #
  # 设置播放序列。比如image为"fire"，start_index为0, end_index为99, 将依次播放"fire0", ...,
  #"fire99"。
  #
  #若指定的图片不存在，则重复上一张图片。
  # 
  # @param start_index 图片起始序数。
  # @param end_index 图片结束序数。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_range_sequence(self, start_index, end_index): 
    return image_animation_set_range_sequence(awtk_get_native_obj(self), start_index, end_index);


  #
  # 播放。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def play(self): 
    return image_animation_play(awtk_get_native_obj(self));


  #
  # 停止(并重置index为-1)。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def stop(self): 
    return image_animation_stop(awtk_get_native_obj(self));


  #
  # 暂停。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def pause(self): 
    return image_animation_pause(awtk_get_native_obj(self));


  #
  # 手动切换到下一张图片。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def next(self): 
    return image_animation_next(awtk_get_native_obj(self));


  #
  # 设置生成图片名的格式。
  #
  #XXX:生成图片名时，第一个参数是图片名前缀，第二个是序数，只能在此前提下设置格式。
  #
  #```
  #const char* format = image_animation->format ? image_animation->format : "%s%d";
  #tk_snprintf(name, TK_NAME_LEN, format, image_animation->image, image_animation->index);
  #```
  # 
  # @param format 格式。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_format(self, format): 
    return image_animation_set_format(awtk_get_native_obj(self), format);


  #
  # 设置绘制完成后unload图片，以释放内存空间。
  # 
  # @param unload_after_paint 是否绘制完成后unload图片。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_unload_after_paint(self, unload_after_paint): 
    return image_animation_set_unload_after_paint(awtk_get_native_obj(self), unload_after_paint);


  #
  # 设置是否倒序播放。
  # 
  # @param reverse 是否倒序播放。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_reverse(self, reverse): 
    return image_animation_set_reverse(awtk_get_native_obj(self), reverse);


  #
  # 设置结束播放后是否保持显示最后一帧。
  # 
  # @param show_when_done 是否继续显示最后一帧。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_show_when_done(self, show_when_done): 
    return image_animation_set_show_when_done(awtk_get_native_obj(self), show_when_done);


  #
  # 转换为image_animation对象(供脚本语言使用)。
  # 
  # @param widget image_animation对象。
  #
  # @return image_animation对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TImageAnimation(image_animation_cast(awtk_get_native_obj(widget)));


  #
  # 判断是否在播放。
  # 
  #
  # @return 返回TRUE表示是，否则表示否。
  #
  def is_playing(self): 
    return image_animation_is_playing(awtk_get_native_obj(self));


  #
  # 图片名称的前缀。
  #
  #
  @property
  def image(self):
    return image_animation_t_get_prop_image(self.nativeObj);

  @image.setter
  def image(self, v):
   this.set_image(v);


  #
  # 播放的序列，字符可选值为数字和英文大小写字母，字符可以重复。如：0123456789或者123123abcd。
  #
  #
  @property
  def sequence(self):
    return image_animation_t_get_prop_sequence(self.nativeObj);

  @sequence.setter
  def sequence(self, v):
   this.set_sequence(v);


  #
  # 图片起始序数。
  #
  #
  @property
  def start_index(self):
    return image_animation_t_get_prop_start_index(self.nativeObj);


  #
  # 图片结束序数。
  #
  #
  @property
  def end_index(self):
    return image_animation_t_get_prop_end_index(self.nativeObj);


  #
  # 是否倒序播放。
  #
  #
  @property
  def reverse(self):
    return image_animation_t_get_prop_reverse(self.nativeObj);

  @reverse.setter
  def reverse(self, v):
   this.set_reverse(v);


  #
  # 是否循环播放。
  #
  #
  @property
  def loop(self):
    return image_animation_t_get_prop_loop(self.nativeObj);

  @loop.setter
  def loop(self, v):
   this.set_loop(v);


  #
  # 是否自动播放。
  #
  #
  @property
  def auto_play(self):
    return image_animation_t_get_prop_auto_play(self.nativeObj);

  @auto_play.setter
  def auto_play(self, v):
   this.set_auto_play(v);


  #
  # 绘制完成后unload图片，以释放内存空间。
  #
  #
  @property
  def unload_after_paint(self):
    return image_animation_t_get_prop_unload_after_paint(self.nativeObj);

  @unload_after_paint.setter
  def unload_after_paint(self, v):
   this.set_unload_after_paint(v);


  #
  # 索引到图片名转换时的格式，缺省为"%s%d"。
  #
  #
  @property
  def format(self):
    return image_animation_t_get_prop_format(self.nativeObj);

  @format.setter
  def format(self, v):
   this.set_format(v);


  #
  # 每张图片播放的时间(毫秒)。
  #
  #
  @property
  def interval(self):
    return image_animation_t_get_prop_interval(self.nativeObj);

  @interval.setter
  def interval(self, v):
   this.set_interval(v);


  #
  # 自动播放时延迟播放的时间(毫秒)。
  #
  #
  @property
  def delay(self):
    return image_animation_t_get_prop_delay(self.nativeObj);

  @delay.setter
  def delay(self, v):
   this.set_delay(v);


  #
  # 结束后是否继续显示最后一帧。
  #
  #
  @property
  def show_when_done(self):
    return image_animation_t_get_prop_show_when_done(self.nativeObj);

  @show_when_done.setter
  def show_when_done(self, v):
   this.set_show_when_done(v);


#
# 图片值控件。
#
#可以用图片来表示如电池电量、WIFI信号强度和其它各种数值的值。
#
#其原理如下：
#
#* 1.把value以format为格式转换成字符串。
#* 2.把每个字符与image(图片文件名前缀)映射成一个图片名。
#* 3.最后把这些图片显示出来。
#
#如果设置click\_add\_delta为非0，那么点击时自动增加指定的增量，值超过最大值时回到最小值,
#或者值超过最小值时回到最大值。
#
#image\_value\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于image\_value\_t控件。
#
#在xml中使用"image\_value"标签创建图片值控件。如：
#
#```xml
#<image_value  value="0" image="num_" />
#```
#
#> 更多用法请参考：
#[image\_value](https://github.com/zlgopen/awtk/blob/master/design/default/ui/image_value.xml)
#
#在c代码中使用函数image\_value\_create创建图片值控件。如：
#
#
#> 完整示例请参考：
#[image_value demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/image_value.c)
#
#可用通过style来设置控件的显示风格，如背景颜色和边框等等，不过一般情况并不需要。
#
#
class TImageValue (TWidget):
  def __init__(self, nativeObj):
    super(TImageValue, self).__init__(nativeObj)


  #
  # 创建image_value对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TImageValue(image_value_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 设置图片前缀。
  # 
  # @param image 图片前缀。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_image(self, image): 
    return image_value_set_image(awtk_get_native_obj(self), image);


  #
  # 设置格式。
  # 
  # @param format 格式。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_format(self, format): 
    return image_value_set_format(awtk_get_native_obj(self), format);


  #
  # 设置点击时加上的增量。
  # 
  # @param delta 增量。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_click_add_delta(self, delta): 
    return image_value_set_click_add_delta(awtk_get_native_obj(self), delta);


  #
  # 设置值。
  # 
  # @param value 值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_value(self, value): 
    return image_value_set_value(awtk_get_native_obj(self), value);


  #
  # 设置最小值。
  # 
  # @param min 最小值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_min(self, min): 
    return image_value_set_min(awtk_get_native_obj(self), min);


  #
  # 设置最大值。
  # 
  # @param max 最大值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_max(self, max): 
    return image_value_set_max(awtk_get_native_obj(self), max);


  #
  # 转换为image_value对象(供脚本语言使用)。
  # 
  # @param widget image_value对象。
  #
  # @return image_value对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TImageValue(image_value_cast(awtk_get_native_obj(widget)));


  #
  # 图片名称的前缀。
  #
  #
  @property
  def image(self):
    return image_value_t_get_prop_image(self.nativeObj);

  @image.setter
  def image(self, v):
   this.set_image(v);


  #
  # 数值到字符串转换时的格式，缺省为"%d"。
  #
  #
  @property
  def format(self):
    return image_value_t_get_prop_format(self.nativeObj);

  @format.setter
  def format(self, v):
   this.set_format(v);


  #
  # 点击时加上一个增量。
  #
  #
  @property
  def click_add_delta(self):
    return image_value_t_get_prop_click_add_delta(self.nativeObj);

  @click_add_delta.setter
  def click_add_delta(self, v):
   this.set_click_add_delta(v);


  #
  # 值。
  #
  #
  @property
  def value(self):
    return image_value_t_get_prop_value(self.nativeObj);

  @value.setter
  def value(self, v):
   this.set_value(v);


  #
  # 最小值(如果设置了click\_add\_delta，到达最小值后回到最大值)。
  #
  #
  @property
  def min(self):
    return image_value_t_get_prop_min(self.nativeObj);

  @min.setter
  def min(self, v):
   this.set_min(v);


  #
  # 最大值(如果设置了click\_add\_delta，到达最大值后回到最小值)。
  #
  #
  @property
  def max(self):
    return image_value_t_get_prop_max(self.nativeObj);

  @max.setter
  def max(self, v):
   this.set_max(v);


#
# 输入法候选字词控件。
#
#如果希望启用用数字选择对应的候选字，请设置属性grab_keys="true"。如：
#
#```xml
#<candidates x="0" y="0" w="100%" h="30" grab_keys="true"/>
#```
#
#>相关文件： assets/default/raw/ui/kb_default.xml
#
#如果希望通过左右键切换不同的候选字，除了设置属性grab_keys="true"，还需要设置按钮的focused状态的style。
#
#```xml
#<style name="candidates" text_color="black">
#<normal  />
#<pressed    bg_color="#c0c0c0" border_color="#a0a0a0"/>
#<over       bg_color="#e0e0e0" border_color="#a0a0a0"/>
#<focused    border_color="#a0a0a0"/>
#</style>
#```
#
#>相关文件：assets/default/raw/styles/keyboard.xml
#
#
class TCandidates (TWidget):
  def __init__(self, nativeObj):
    super(TCandidates, self).__init__(nativeObj)


  #
  # 转换为candidates对象(供脚本语言使用)。
  # 
  # @param widget candidates对象。
  #
  # @return candidates对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TCandidates(candidates_cast(awtk_get_native_obj(widget)));


  #
  # 设置是否为预候选字列表。
  #
  #> 为预候选字列表则注册EVT\_IM\_SHOW\_PRE\_CANDIDATES，否则注册EVT\_IM\_SHOW\_CANDIDATES事件。
  # 
  # @param pre 是否为预候选字列表。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_pre(self, pre): 
    return candidates_set_pre(awtk_get_native_obj(self), pre);


  #
  # 设置是否启用用数字选择候选字。
  # 
  # @param select_by_num 是否启用用数字选择候选字。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_select_by_num(self, select_by_num): 
    return candidates_set_select_by_num(awtk_get_native_obj(self), select_by_num);


  #
  # 设置是否自动隐藏。
  # 
  # @param auto_hide 是否自动隐藏。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_auto_hide(self, auto_hide): 
    return candidates_set_auto_hide(awtk_get_native_obj(self), auto_hide);


  #
  # 设置按钮的style名称。
  # 
  # @param button_style 按钮的style名称。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_button_style(self, button_style): 
    return candidates_set_button_style(awtk_get_native_obj(self), button_style);


  #
  # 是否为预候选字。
  #
  #> 预候选字: 在有的输入法中，比如T9硬键盘输入时，按下12两个键时，预候选字会显示可用的拼音列表。
  #> 从预候选字列表中选择拼音，再查询拼音对应的候选字列表。
  #
  #
  @property
  def pre(self):
    return candidates_t_get_prop_pre(self.nativeObj);

  @pre.setter
  def pre(self, v):
   this.set_pre(v);


  #
  # 是否启用用数字选择候选字。比如按下1选择第1个候选字，按下2选择第2个候选字。
  #
  #
  @property
  def select_by_num(self):
    return candidates_t_get_prop_select_by_num(self.nativeObj);

  @select_by_num.setter
  def select_by_num(self, v):
   this.set_select_by_num(v);


  #
  # 没有候选字时，是否自动隐藏控件。
  #
  #
  @property
  def auto_hide(self):
    return candidates_t_get_prop_auto_hide(self.nativeObj);

  @auto_hide.setter
  def auto_hide(self, v):
   this.set_auto_hide(v);


  #
  # 按钮的style名称。
  #
  #
  @property
  def button_style(self):
    return candidates_t_get_prop_button_style(self.nativeObj);

  @button_style.setter
  def button_style(self, v):
   this.set_button_style(v);


#
# 输入法语言指示器。
#
#用于显示输入法的输入语言或类型，主要用于T9输入法。
#
#lang_indicator\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于lang_indicator\_t控件。
#
#在xml中使用"lang_indicator"标签创建lang_indicator。如：
#
#```xml
#<lang_indicator x="0" y="0" w="100%" h="100%" children_layout="default(c=2,r=2,m=5,s=5)">
#</lang_indicator>
#```
#
#可用通过style来设置控件的显示风格，如背景颜色等。如：
#
#```xml
#<style name="default" border_color="#a0a0a0">
#<normal     bg_color="#f0f0f0" />
#</style>
#```
#
#
class TLangIndicator (TWidget):
  def __init__(self, nativeObj):
    super(TLangIndicator, self).__init__(nativeObj)


  #
  # 创建lang_indicator对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TLangIndicator(lang_indicator_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 设置缺省获得焦点的子控件(可用控件名或类型)。
  # 
  # @param image 缺省获得焦点的子控件(可用控件名或类型)。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_image(self, image): 
    return lang_indicator_set_image(awtk_get_native_obj(self), image);


  #
  # 转换为lang_indicator对象(供脚本语言使用)。
  # 
  # @param widget lang_indicator对象。
  #
  # @return lang_indicator对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TLangIndicator(lang_indicator_cast(awtk_get_native_obj(widget)));


  #
  # 如果希望用图片格式显示，本属性用于指定图片的前缀。
  #
  #
  @property
  def image(self):
    return lang_indicator_t_get_prop_image(self.nativeObj);

  @image.setter
  def image(self, v):
   this.set_image(v);


#
# 行号。多行编辑器的行号。
#
#line\_number\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于line\_number\_t控件。
#
#在xml中使用"lin\e_number"标签创建行号控件，一般配合mledit使用。如：
#
#```xml
#<mledit x="c" y="10" h="40%" w="90%" focus="true" left_margin="36" right_margin="16"
#wrap_word="true">
#<line_number x="0" y="0" w="32" h="100%" value="0"/>
#<scroll_bar_d x="right" y="0" w="14" h="100%" value="0"/>
#</mledit>
#```
#
#> 更多用法请参考：[mledit.xml](
#https://github.com/zlgopen/awtk/blob/master/design/default/ui/mledit.xml)
#
#可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
#
#```xml
#<line_number>
#<style name="default">
#<normal text_color="black" bg_color="#d0d0d0" text_align_h="right"/>
#</style>
#</line_number>
#```
#
#> 更多用法请参考：
#[theme default](
#https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L556)
#
#
class TLineNumber (TWidget):
  def __init__(self, nativeObj):
    super(TLineNumber, self).__init__(nativeObj)


  #
  # 创建line_number对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TLineNumber(line_number_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 设置顶部边距。
  # 
  # @param top_margin 顶部边距。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_top_margin(self, top_margin): 
    return line_number_set_top_margin(awtk_get_native_obj(self), top_margin);


  #
  # 设置顶部边距。
  # 
  # @param bottom_margin 顶部边距。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_bottom_margin(self, bottom_margin): 
    return line_number_set_bottom_margin(awtk_get_native_obj(self), bottom_margin);


  #
  # 设置行高。
  # 
  # @param line_height 行高。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_line_height(self, line_height): 
    return line_number_set_line_height(awtk_get_native_obj(self), line_height);


  #
  # 设置y偏移。
  # 
  # @param yoffset 行高。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_yoffset(self, yoffset): 
    return line_number_set_yoffset(awtk_get_native_obj(self), yoffset);


  #
  # 转换为line_number对象(供脚本语言使用)。
  # 
  # @param widget line_number对象。
  #
  # @return line_number对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TLineNumber(line_number_cast(awtk_get_native_obj(widget)));


#
# 多行编辑器控件。
#
#mledit\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于mledit\_t控件。
#
#在xml中使用"mledit"标签创建多行编辑器控件。如：
#
#```xml
#<mledit x="c" y="m" w="300" h="300" />
#```
#
#> 更多用法请参考：[mledit.xml](
#https://github.com/zlgopen/awtk/blob/master/design/default/ui/mledit.xml)
#
#在c代码中使用函数mledit\_create创建多行编辑器控件。如：
#
#
#> 完整示例请参考：[mledit demo](
#https://github.com/zlgopen/awtk-c-demos/blob/master/demos/mledit.c)
#
#time\_clock一般不需要设置style。
#
#
class TMledit (TWidget):
  def __init__(self, nativeObj):
    super(TMledit, self).__init__(nativeObj)


  #
  # 创建mledit对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TMledit(mledit_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 设置编辑器是否为只读。
  # 
  # @param readonly 只读。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_readonly(self, readonly): 
    return mledit_set_readonly(awtk_get_native_obj(self), readonly);


  #
  # 设置编辑器是否为可撤销修改。
  # 
  # @param cancelable 是否为可撤销修。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_cancelable(self, cancelable): 
    return mledit_set_cancelable(awtk_get_native_obj(self), cancelable);


  #
  # 设置为焦点。
  # 
  # @param focus 是否为焦点。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_focus(self, focus): 
    return mledit_set_focus(awtk_get_native_obj(self), focus);


  #
  # 设置编辑器是否自动折行。
  # 
  # @param wrap_word 是否自动折行。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_wrap_word(self, wrap_word): 
    return mledit_set_wrap_word(awtk_get_native_obj(self), wrap_word);


  #
  # 设置编辑器的最大行数。
  # 
  # @param max_lines 最大行数。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_max_lines(self, max_lines): 
    return mledit_set_max_lines(awtk_get_native_obj(self), max_lines);


  #
  # 设置编辑器的最大字符数（0 为不限制字符数）。
  # 
  # @param max_chars 最大字符数。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_max_chars(self, max_chars): 
    return mledit_set_max_chars(awtk_get_native_obj(self), max_chars);


  #
  # 设置编辑器的输入提示。
  # 
  # @param tips 输入提示。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_tips(self, tips): 
    return mledit_set_tips(awtk_get_native_obj(self), tips);


  #
  # 获取翻译之后的文本，然后调用mledit_set_tips。
  # 
  # @param tr_tips 提示信息。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_tr_tips(self, tr_tips): 
    return mledit_set_tr_tips(awtk_get_native_obj(self), tr_tips);


  #
  # 设置自定义软键盘名称。
  # 
  # @param keyboard 键盘名称(相应UI资源必须存在)。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_keyboard(self, keyboard): 
    return mledit_set_keyboard(awtk_get_native_obj(self), keyboard);


  #
  # 设置编辑器光标位置。
  # 
  # @param cursor 光标位置。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_cursor(self, cursor): 
    return mledit_set_cursor(awtk_get_native_obj(self), cursor);


  #
  # 获取编辑器光标位置。
  # 
  #
  # @return 返回光标位置。
  #
  def get_cursor(self): 
    return mledit_get_cursor(awtk_get_native_obj(self));


  #
  # 设置编辑器滚动速度。
  # 
  # @param scroll_line 滚动行数。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_scroll_line(self, scroll_line): 
    return mledit_set_scroll_line(awtk_get_native_obj(self), scroll_line);


  #
  # 设置编辑器滚动到指定偏移位置。
  # 
  # @param offset 偏移位置。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def scroll_to_offset(self, offset): 
    return mledit_scroll_to_offset(awtk_get_native_obj(self), offset);


  #
  # 设置编辑器是否在获得焦点时打开输入法。
  #
  #> * 设置默认焦点时，打开窗口时不弹出软键盘。
  #> * 用键盘切换焦点时，编辑器获得焦点时不弹出软键盘。
  # 
  # @param open_im_when_focused 是否在获得焦点时打开输入法。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_open_im_when_focused(self, open_im_when_focused): 
    return mledit_set_open_im_when_focused(awtk_get_native_obj(self), open_im_when_focused);


  #
  # 设置编辑器是否在失去焦点时关闭输入法。
  # 
  # @param close_im_when_blured 是否是否在失去焦点时关闭输入法。在失去焦点时关闭输入法。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_close_im_when_blured(self, close_im_when_blured): 
    return mledit_set_close_im_when_blured(awtk_get_native_obj(self), close_im_when_blured);


  #
  # 选择编辑器中指定范围的文本。
  # 
  # @param start 起始偏移。
  # @param end 结束偏移。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_select(self, start, end): 
    return mledit_set_select(awtk_get_native_obj(self), start, end);


  #
  # 获取选中的文本。
  #使用完后需调用 TKMEM_FREE() 进行释放文本占有内存。
  # 
  #
  # @return 返回选中文本。
  #
  def get_selected_text(self): 
    return mledit_get_selected_text(awtk_get_native_obj(self));


  #
  # 转换为mledit对象(供脚本语言使用)。
  # 
  # @param widget mledit对象。
  #
  # @return mledit对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TMledit(mledit_cast(awtk_get_native_obj(widget)));


  #
  # 输入提示。
  #
  #
  @property
  def tips(self):
    return mledit_t_get_prop_tips(self.nativeObj);

  @tips.setter
  def tips(self, v):
   this.set_tips(v);


  #
  # 保存用于翻译的提示信息。
  #
  #
  @property
  def tr_tips(self):
    return mledit_t_get_prop_tr_tips(self.nativeObj);

  @tr_tips.setter
  def tr_tips(self, v):
   this.set_tr_tips(v);


  #
  # 自定义软键盘名称。
  #
  #
  @property
  def keyboard(self):
    return mledit_t_get_prop_keyboard(self.nativeObj);

  @keyboard.setter
  def keyboard(self, v):
   this.set_keyboard(v);


  #
  # 最大行数。
  #
  #
  @property
  def max_lines(self):
    return mledit_t_get_prop_max_lines(self.nativeObj);

  @max_lines.setter
  def max_lines(self, v):
   this.set_max_lines(v);


  #
  # 最大字符数。
  #
  #
  @property
  def max_chars(self):
    return mledit_t_get_prop_max_chars(self.nativeObj);

  @max_chars.setter
  def max_chars(self, v):
   this.set_max_chars(v);


  #
  # 是否自动折行。
  #
  #
  @property
  def wrap_word(self):
    return mledit_t_get_prop_wrap_word(self.nativeObj);

  @wrap_word.setter
  def wrap_word(self, v):
   this.set_wrap_word(v);


  #
  # 鼠标一次滚动行数。
  #
  #
  @property
  def scroll_line(self):
    return mledit_t_get_prop_scroll_line(self.nativeObj);

  @scroll_line.setter
  def scroll_line(self, v):
   this.set_scroll_line(v);


  #
  # 编辑器是否为只读。
  #
  #
  @property
  def readonly(self):
    return mledit_t_get_prop_readonly(self.nativeObj);

  @readonly.setter
  def readonly(self, v):
   this.set_readonly(v);


  #
  # 是否支持撤销编辑。如果为TRUE，在失去焦点之前可以撤销所有修改(恢复获得焦点之前的内容)。
  #
  #> * 1.一般配合keyboard的"cancel"按钮使用。
  #> * 2.为TRUE时，如果内容有变化，会设置编辑器的状态为changed，所以此时编辑器需要支持changed状态的style。
  #
  #
  @property
  def cancelable(self):
    return mledit_t_get_prop_cancelable(self.nativeObj);

  @cancelable.setter
  def cancelable(self, v):
   this.set_cancelable(v);


  #
  # 获得焦点时打开输入法。
  #
  #> 主要用于没有指针设备的情况，否则每次切换焦点时都打开输入法。
  #
  #
  @property
  def open_im_when_focused(self):
    return mledit_t_get_prop_open_im_when_focused(self.nativeObj);

  @open_im_when_focused.setter
  def open_im_when_focused(self, v):
   this.set_open_im_when_focused(v);


  #
  # 是否在失去焦点时关闭输入法(默认是)。
  #
  #
  @property
  def close_im_when_blured(self):
    return mledit_t_get_prop_close_im_when_blured(self.nativeObj);

  @close_im_when_blured.setter
  def close_im_when_blured(self, v):
   this.set_close_im_when_blured(v);


#
# 进度圆环控件。
#
#progress\_circle\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于progress\_circle\_t控件。
#
#在xml中使用"progress\_circle"标签创建进度圆环控件。如：
#
#```xml
#<progress_circle max="360" show_text="true" start_angle="90" />
#```
#
#> 更多用法请参考：
#[progress_circle.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/progress_circle.xml)
#
#在c代码中使用函数progress\_circle\_create创建进度圆环控件。如：
#
#
#> 完整示例请参考：
#[progress_circle
#demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/progress_circle.c)
#
#可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
#
#```xml
#<style name="default">
#<normal text_color="green" fg_color="black" />
#</style>
#```
#
#> 更多用法请参考：
#[theme
#default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L467)
#
#
class TProgressCircle (TWidget):
  def __init__(self, nativeObj):
    super(TProgressCircle, self).__init__(nativeObj)


  #
  # 创建progress_circle对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TProgressCircle(progress_circle_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为progress_circle对象(供脚本语言使用)。
  # 
  # @param widget progress_circle对象。
  #
  # @return progress_circle对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TProgressCircle(progress_circle_cast(awtk_get_native_obj(widget)));


  #
  # 设置值。
  # 
  # @param value 值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_value(self, value): 
    return progress_circle_set_value(awtk_get_native_obj(self), value);


  #
  # 设置最大值。
  # 
  # @param max 最大值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_max(self, max): 
    return progress_circle_set_max(awtk_get_native_obj(self), max);


  #
  # 设置格式。
  # 
  # @param format 格式。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_format(self, format): 
    return progress_circle_set_format(awtk_get_native_obj(self), format);


  #
  # 设置环线的厚度。
  # 
  # @param line_width 环线的厚度。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_line_width(self, line_width): 
    return progress_circle_set_line_width(awtk_get_native_obj(self), line_width);


  #
  # 设置起始角度。
  # 
  # @param start_angle 起始角度。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_start_angle(self, start_angle): 
    return progress_circle_set_start_angle(awtk_get_native_obj(self), start_angle);


  #
  # 设置线帽类型。
  # 
  # @param line_cap 线帽类型(round:圆头，square:方头)。。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_line_cap(self, line_cap): 
    return progress_circle_set_line_cap(awtk_get_native_obj(self), line_cap);


  #
  # 设置是否显示文本。
  # 
  # @param show_text 是否显示文本。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_show_text(self, show_text): 
    return progress_circle_set_show_text(awtk_get_native_obj(self), show_text);


  #
  # 设置是否为逆时针方向。
  # 
  # @param counter_clock_wise 是否为逆时针方向。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_counter_clock_wise(self, counter_clock_wise): 
    return progress_circle_set_counter_clock_wise(awtk_get_native_obj(self), counter_clock_wise);


  #
  # 值(缺省为0)。
  #
  #
  @property
  def value(self):
    return progress_circle_t_get_prop_value(self.nativeObj);

  @value.setter
  def value(self, v):
   this.set_value(v);


  #
  # 最大值(缺省为100)。
  #
  #
  @property
  def max(self):
    return progress_circle_t_get_prop_max(self.nativeObj);

  @max.setter
  def max(self, v):
   this.set_max(v);


  #
  # 数值到字符串转换时的格式，缺省为"%d"。
  #
  #
  @property
  def format(self):
    return progress_circle_t_get_prop_format(self.nativeObj);

  @format.setter
  def format(self, v):
   this.set_format(v);


  #
  # 起始角度(单位为度，缺省-90)。
  #
  #
  @property
  def start_angle(self):
    return progress_circle_t_get_prop_start_angle(self.nativeObj);

  @start_angle.setter
  def start_angle(self, v):
   this.set_start_angle(v);


  #
  # 环线的厚度(缺省为8)。
  #
  #
  @property
  def line_width(self):
    return progress_circle_t_get_prop_line_width(self.nativeObj);

  @line_width.setter
  def line_width(self, v):
   this.set_line_width(v);


  #
  # 线帽类型(round:圆头，square:方头)。
  #
  #
  @property
  def line_cap(self):
    return progress_circle_t_get_prop_line_cap(self.nativeObj);

  @line_cap.setter
  def line_cap(self, v):
   this.set_line_cap(v);


  #
  # 是否为逆时针方向(缺省为FALSE)。
  #
  #
  @property
  def counter_clock_wise(self):
    return progress_circle_t_get_prop_counter_clock_wise(self.nativeObj);

  @counter_clock_wise.setter
  def counter_clock_wise(self, v):
   this.set_counter_clock_wise(v);


  #
  # 是否显示文本(缺省为TRUE)。
  #
  #
  @property
  def show_text(self):
    return progress_circle_t_get_prop_show_text(self.nativeObj);

  @show_text.setter
  def show_text(self, v):
   this.set_show_text(v);


#
# rich_text_view是一个专用容器，用来放rich text和 scroll bar，并在两者之间建立联系。
#
#rich_text_view\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于rich_text_view\_t控件。
#
#在xml中使用"rich_text_view"标签创建rich_text_view。如：
#
#```xml
#<rich_text_view x="0" y="10" w="100%" h="300">
#<rich_text line_gap="5" x="0" y="10" w="-12" h="100%" margin="10">
#...
#</rich_text>
#<scroll_bar_d name="bar" x="right" y="0" w="12" h="100%" value="0"/>
#</rich_text_view>
#```
#
#可用通过style来设置控件的显示风格，如背景颜色等。如：
#
#```xml
#<style name="default" border_color="#a0a0a0">
#<normal     bg_color="#f0f0f0" />
#</style>
#```
#
#
class TRichTextView (TWidget):
  def __init__(self, nativeObj):
    super(TRichTextView, self).__init__(nativeObj)


  #
  # 创建rich_text_view对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TRichTextView(rich_text_view_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为rich_text_view对象(供脚本语言使用)。
  # 
  # @param widget rich_text_view对象。
  #
  # @return rich_text_view对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TRichTextView(rich_text_view_cast(awtk_get_native_obj(widget)));


#
# 图文混排控件，实现简单的图文混排。
#
#rich\_text\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于rich\_text\_t控件。
#
#在xml中使用"rich\_text"标签创建图文混排控件。如：
#
#```xml
#<rich_text x="0" y="0" w="100%" h="60"
#text="<image name=&quota;bricks&quota;/><font align_v=&quota;middle&quota;>hello awtk!</font>" />
#```
#>
#
#> 更多用法请参考：
#[rich_text.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/rich_text.xml)
#
#在c代码中使用函数rich\_text\_create创建图文混排控件。如：
#
#
#> 完整示例请参考：
#[rich_text demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/rich_text.c)
#
#可用通过style来设置控件的显示风格，如背景颜色等等。而字体的大小和颜色则由文本内部的属性决定。
#
#目前支持image和font两个tag：
#
#* image 支持的属性有：
#* name 图片的名称。
#* w 图片的宽度。
#* h 图片的高度。
#
#* font 支持的属性有：
#* color 颜色。
#* size 大小。
#* align_v 垂直方向对齐的方式(top|middle|bottom)。
#* bold 粗体(暂不支持)
#* italic 斜体(暂不支持)
#* underline 下划线(暂不支持)
#
#
class TRichText (TWidget):
  def __init__(self, nativeObj):
    super(TRichText, self).__init__(nativeObj)


  #
  # 创建rich_text对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TRichText(rich_text_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 设置文本。
  # 
  # @param text 文本。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_text(self, text): 
    return rich_text_set_text(awtk_get_native_obj(self), text);


  #
  # 设置是否允许y方向滑动。
  # 
  # @param yslidable 是否允许滑动。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_yslidable(self, yslidable): 
    return rich_text_set_yslidable(awtk_get_native_obj(self), yslidable);


  #
  # 转换为rich_text对象(供脚本语言使用)。
  # 
  # @param widget rich_text对象。
  #
  # @return rich_text对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TRichText(rich_text_cast(awtk_get_native_obj(widget)));


  #
  # 行间距。
  #
  #
  @property
  def line_gap(self):
    return rich_text_t_get_prop_line_gap(self.nativeObj);


  #
  # 标识控件是否允许上下拖动。
  #
  #
  @property
  def yslidable(self):
    return rich_text_t_get_prop_yslidable(self.nativeObj);

  @yslidable.setter
  def yslidable(self, v):
   this.set_yslidable(v);


#
# 可水平滚动的文本控件，方便实现长文本滚动。
#
#
#hscroll\_label\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于hscroll\_label\_t控件。
#
#在xml中使用"hscroll\_label"标签创建行号控件，一般配合mledit使用。如：
#
#```xml
#```
#
#> 更多用法请参考：[mledit.xml](
#https://github.com/zlgopen/awtk/blob/master/design/default/ui/mledit.xml)
#
#可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
#
#```xml
#<style name="default" text_color="black">
#<normal   />
#<focused  />
#</style>
#```
#
#> 更多用法请参考：
#[theme default](
#https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml)
#
#
class THscrollLabel (TWidget):
  def __init__(self, nativeObj):
    super(THscrollLabel, self).__init__(nativeObj)


  #
  # 创建hscroll_label对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  THscrollLabel(hscroll_label_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 设置lull。
  # 
  # @param lull 间歇时间(ms)。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_lull(self, lull): 
    return hscroll_label_set_lull(awtk_get_native_obj(self), lull);


  #
  # 设置duration。
  # 
  # @param duration 滚动时间(ms)。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_duration(self, duration): 
    return hscroll_label_set_duration(awtk_get_native_obj(self), duration);


  #
  # 设置only_focus。
  # 
  # @param only_focus 是否只有处于focus时才滚动。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_only_focus(self, only_focus): 
    return hscroll_label_set_only_focus(awtk_get_native_obj(self), only_focus);


  #
  # 设置only_parent_focus。
  # 
  # @param only_parent_focus 是否只有处于focus时才滚动。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_only_parent_focus(self, only_parent_focus): 
    return hscroll_label_set_only_parent_focus(awtk_get_native_obj(self), only_parent_focus);


  #
  # 设置loop。
  # 
  # @param loop 是否循环滚动。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_loop(self, loop): 
    return hscroll_label_set_loop(awtk_get_native_obj(self), loop);


  #
  # 设置yoyo。
  # 
  # @param yoyo 是否往返滚动。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_yoyo(self, yoyo): 
    return hscroll_label_set_yoyo(awtk_get_native_obj(self), yoyo);


  #
  # 设置ellipses。
  # 
  # @param ellipses 是否在文本超长时在行尾显示"..."。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_ellipses(self, ellipses): 
    return hscroll_label_set_ellipses(awtk_get_native_obj(self), ellipses);


  #
  # 设置x偏移(一般无需用户调用)。。
  # 
  # @param xoffset x偏移。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_xoffset(self, xoffset): 
    return hscroll_label_set_xoffset(awtk_get_native_obj(self), xoffset);


  #
  # 启动(一般无需用户调用)。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def start(self): 
    return hscroll_label_start(awtk_get_native_obj(self));


  #
  # 停止(一般无需用户调用)。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def stop(self): 
    return hscroll_label_stop(awtk_get_native_obj(self));


  #
  # 转换为hscroll_label对象(供脚本语言使用)。
  # 
  # @param widget hscroll_label对象。
  #
  # @return hscroll_label对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  THscrollLabel(hscroll_label_cast(awtk_get_native_obj(widget)));


  #
  # 只有处于focus时才滚动(缺省否)。
  #
  #
  @property
  def only_focus(self):
    return hscroll_label_t_get_prop_only_focus(self.nativeObj);

  @only_focus.setter
  def only_focus(self, v):
   this.set_only_focus(v);


  #
  # 只有父控件处于focus时才滚动(缺省否)。
  #
  #
  @property
  def only_parent_focus(self):
    return hscroll_label_t_get_prop_only_parent_focus(self.nativeObj);

  @only_parent_focus.setter
  def only_parent_focus(self, v):
   this.set_only_parent_focus(v);


  #
  # loop是否循环滚动(缺省FALSE)。
  #
  #
  @property
  def loop(self):
    return hscroll_label_t_get_prop_loop(self.nativeObj);

  @loop.setter
  def loop(self, v):
   this.set_loop(v);


  #
  # 是否往返滚动(缺省FALSE)。
  #
  #
  @property
  def yoyo(self):
    return hscroll_label_t_get_prop_yoyo(self.nativeObj);

  @yoyo.setter
  def yoyo(self, v):
   this.set_yoyo(v);


  #
  # 文本显示不下时，在行尾显示省略号(缺省FALSE)。
  #
  #
  @property
  def ellipses(self):
    return hscroll_label_t_get_prop_ellipses(self.nativeObj);

  @ellipses.setter
  def ellipses(self, v):
   this.set_ellipses(v);


  #
  # 滚动之间的间歇时间(ms)，缺省3000ms。
  #
  #
  @property
  def lull(self):
    return hscroll_label_t_get_prop_lull(self.nativeObj);

  @lull.setter
  def lull(self, v):
   this.set_lull(v);


  #
  # 完整的滚动一次需要的时间(ms)，缺省5000ms。
  #
  #
  @property
  def duration(self):
    return hscroll_label_t_get_prop_duration(self.nativeObj);

  @duration.setter
  def duration(self, v):
   this.set_duration(v);


  #
  # 偏移量。
  #
  #
  @property
  def xoffset(self):
    return hscroll_label_t_get_prop_xoffset(self.nativeObj);

  @xoffset.setter
  def xoffset(self, v):
   this.set_xoffset(v);


  #
  # 文本的宽度。
  #
  #
  @property
  def text_w(self):
    return hscroll_label_t_get_prop_text_w(self.nativeObj);


#
# 列表项控件。
#
#列表项控件是一个简单的容器控件，一般作为列表视图中滚动视图的子控件。
#
#list\_item\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于list\_item\_t控件。
#
#在xml中使用"list\_item"标签创建列表项控件。如：
#
#```xml
#<list_view x="0"  y="30" w="100%" h="-80" item_height="60">
#<scroll_view name="view" x="0"  y="0" w="100%" h="100%">
#<list_item style="odd" children_layout="default(rows=1,cols=0)">
#<image draw_type="icon" w="30" image="earth"/>
#<label w="-30" text="1.Hello AWTK !">
#<switch x="r:10" y="m" w="60" h="20"/>
#</label>
#</list_item>
#...
#</scroll_view>
#</list_view>
#```
#
#> 更多用法请参考：[list\_view\_m.xml](
#https://github.com/zlgopen/awtk/blob/master/design/default/ui/list_view_m.xml)
#
#在c代码中使用函数list\_item\_create创建列表项控件。如：
#
#
#> 列表项控件大小一般由列表控制，不需指定xywh参数。
#
#可以用style来实现可点击或不可点击的效果。如：
#
#```xml
#<style name="odd_clickable" border_color="#a0a0a0"  border="bottom" text_color="black">
#<normal     bg_color="#f5f5f5" />
#<pressed    bg_color="#c0c0c0" />
#<over       bg_color="#f5f5f5" />
#</style>
#```
#
#> 更多用法请参考：[theme default](
#https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L372)
#
#
class TListItem (TWidget):
  def __init__(self, nativeObj):
    super(TListItem, self).__init__(nativeObj)


  #
  # 创建list_item对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TListItem(list_item_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为list_item对象(供脚本语言使用)。
  # 
  # @param widget list_item对象。
  #
  # @return list_item对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TListItem(list_item_cast(awtk_get_native_obj(widget)));


#
# 水平列表视图控件。
#
#list\_view\_h\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于list\_view\_h\_t控件。
#
#在xml中使用"list\_view\_h"标签创建水平列表视图控件。如：
#
#```xml
#<list_view_h x="center"  y="10" w="90%" h="100" item_width="200" spacing="5">
#<scroll_view name="view" w="100%" h="100%">
#<image style="border" draw_type="auto" image="1" text="1"/>
#...
#</scroll_view>
#</list_view_h>
#```
#
#> 注意：列表项不是作为列表视图控件的直接子控件，而是作为滚动视图的子控件。
#
#
#> 更多用法请参考：[list\_view\_h.xml](
#https://github.com/zlgopen/awtk/blob/master/design/default/ui/list_view_h.xml)
#
#在c代码中使用函数list\_view\_h\_create创建水平列表视图控件。如：
#
#
#用代码构造列表视图是比较繁琐的事情，最好用XML来构造。
#如果需要动态修改，可以使用widget\_clone来增加列表项，使用widget\_remove\_child来移出列表项。
#
#可用通过style来设置控件的显示风格，如背景颜色和边框颜色等(一般情况不需要)。
#
#
class TListViewH (TWidget):
  def __init__(self, nativeObj):
    super(TListViewH, self).__init__(nativeObj)


  #
  # 创建list_view_h对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TListViewH(list_view_h_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 设置列表项的宽度。
  # 
  # @param item_width 列表项的宽度。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_item_width(self, item_width): 
    return list_view_h_set_item_width(awtk_get_native_obj(self), item_width);


  #
  # 设置列表项的间距。
  # 
  # @param spacing 列表项的间距。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_spacing(self, spacing): 
    return list_view_h_set_spacing(awtk_get_native_obj(self), spacing);


  #
  # 转换为list_view_h对象(供脚本语言使用)。
  # 
  # @param widget list_view_h对象。
  #
  # @return list_view_h对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TListViewH(list_view_h_cast(awtk_get_native_obj(widget)));


  #
  # 列表项的宽度。
  #
  #
  @property
  def item_width(self):
    return list_view_h_t_get_prop_item_width(self.nativeObj);

  @item_width.setter
  def item_width(self, v):
   this.set_item_width(v);


  #
  # 间距。
  #
  #
  @property
  def spacing(self):
    return list_view_h_t_get_prop_spacing(self.nativeObj);

  @spacing.setter
  def spacing(self, v):
   this.set_spacing(v);


#
# 列表视图控件。
#
#列表视图控件是一个可以垂直滚动的列表控件。
#
#如果不需要滚动，可以用view控件配置适当的layout参数作为列表控件。
#
#列表视图中的列表项可以固定高度，也可以使用不同高度。请参考[变高列表项](
#https://github.com/zlgopen/awtk/blob/master/design/default/ui/list_view_vh.xml)
#
#列表视图控件的中可以有滚动条，也可以没有滚动条。
#可以使用移动设备风格的滚动条，也可以使用桌面风格的滚动条。
#
#list\_view\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于list\_view\_t控件。
#
#在xml中使用"list\_view"标签创建列表视图控件。如：
#
#```xml
#<list_view x="0"  y="30" w="100%" h="-80" item_height="60">
#<scroll_view name="view" x="0"  y="0" w="100%" h="100%">
#<list_item style="odd" children_layout="default(rows=1,cols=0)">
#<image draw_type="icon" w="30" image="earth"/>
#<label w="-30" text="1.Hello AWTK !">
#<switch x="r:10" y="m" w="60" h="20"/>
#</label>
#</list_item>
#...
#</scroll_view>
#</list_view>
#```
#
#> 注意：列表项不是作为列表视图控件的直接子控件，而是作为滚动视图的子控件。
#
#
#> 更多用法请参考：[list\_view\_m.xml](
#https://github.com/zlgopen/awtk/blob/master/design/default/ui/list_view_m.xml)
#
#在c代码中使用函数list\_view\_create创建列表视图控件。如：
#
#
#用代码构造列表视图是比较繁琐的事情，最好用XML来构造。
#如果需要动态修改，可以使用widget\_clone来增加列表项，使用widget\_remove\_child来移出列表项。
#
#可用通过style来设置控件的显示风格，如背景颜色和边框颜色等(一般情况不需要)。
#
#备注：list_view 下的 scroll_view 控件不支持遍历所有子控件的效果。
#
#下面是针对 scroll_bar_d （桌面版）有效果，scroll_bar_m（移动版）没有效果。
#如果 floating_scroll_bar 属性为 TRUE 和 auto_hide_scroll_bar 属性为 TRUE，scroll_view 宽默认为 list_view 的 100% 宽，鼠标在 list_view 上滚动条才显示，不在的就自动隐藏，如果 scroll_view 的高比虚拟高要大的话，滚动条变成不可见，scroll_view 宽不会变。
#如果 floating_scroll_bar 属性为 TRUE 和 auto_hide_scroll_bar 属性为 FALSE ，scroll_view 宽默认为 list_view 的 100% 宽，滚动条不隐藏，如果 scroll_view 的高比虚拟高要大的话，滚动条变成不可见，scroll_view 宽不会变。
#如果 floating_scroll_bar 属性为 FALSE 和 auto_hide_scroll_bar 属性为 FALSE，如果 scroll_view 的高比虚拟高要大的话，滚动条变成不可用，scroll_view 宽不会变。
#如果 floating_scroll_bar 属性为 FALSE 和 auto_hide_scroll_bar 属性为 TRUE，如果 scroll_view 的高比虚拟高要大的话，滚动条变成不可见，scroll_view 宽会合并原来滚动条的宽。
#
#
class TListView (TWidget):
  def __init__(self, nativeObj):
    super(TListView, self).__init__(nativeObj)


  #
  # 创建list_view对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TListView(list_view_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 设置列表项的高度。
  # 
  # @param item_height 列表项的高度。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_item_height(self, item_height): 
    return list_view_set_item_height(awtk_get_native_obj(self), item_height);


  #
  # 设置列表项的缺省高度。
  # 
  # @param default_item_height 列表项的高度。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_default_item_height(self, default_item_height): 
    return list_view_set_default_item_height(awtk_get_native_obj(self), default_item_height);


  #
  # 设置是否自动隐藏滚动条。
  # 
  # @param auto_hide_scroll_bar 是否自动隐藏滚动条。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_auto_hide_scroll_bar(self, auto_hide_scroll_bar): 
    return list_view_set_auto_hide_scroll_bar(awtk_get_native_obj(self), auto_hide_scroll_bar);


  #
  # 设置滚动条是否悬浮在 scroll_view 上面。
  # 
  # @param floating_scroll_bar 滚动条是否悬浮在 scroll_view 上面。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_floating_scroll_bar(self, floating_scroll_bar): 
    return list_view_set_floating_scroll_bar(awtk_get_native_obj(self), floating_scroll_bar);


  #
  # 转换为list_view对象(供脚本语言使用)。
  # 
  # @param widget list_view对象。
  #
  # @return list_view对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TListView(list_view_cast(awtk_get_native_obj(widget)));


  #
  # list_view重新初始化。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def reinit(self): 
    return list_view_reinit(awtk_get_native_obj(self));


  #
  # 列表项的高度。如果 item_height 0，所有列表项使用固定高度，否则使用列表项自身的高度。
  #
  #
  @property
  def item_height(self):
    return list_view_t_get_prop_item_height(self.nativeObj);

  @item_height.setter
  def item_height(self, v):
   this.set_item_height(v);


  #
  # 列表项的缺省高度。如果item_height <= 0 而且列表项自身的高度 <= 0，则使用缺省高度。
  #
  #
  @property
  def default_item_height(self):
    return list_view_t_get_prop_default_item_height(self.nativeObj);

  @default_item_height.setter
  def default_item_height(self, v):
   this.set_default_item_height(v);


  #
  # 如果不需要滚动条时，自动隐藏滚动条。
  #
  #
  @property
  def auto_hide_scroll_bar(self):
    return list_view_t_get_prop_auto_hide_scroll_bar(self.nativeObj);

  @auto_hide_scroll_bar.setter
  def auto_hide_scroll_bar(self, v):
   this.set_auto_hide_scroll_bar(v);


  #
  # 滚动条是否悬浮在 scroll_view 上面
  #
  #
  @property
  def floating_scroll_bar(self):
    return list_view_t_get_prop_floating_scroll_bar(self.nativeObj);

  @floating_scroll_bar.setter
  def floating_scroll_bar(self, v):
   this.set_floating_scroll_bar(v);


#
# 滚动条控件。
#
#> 目前只支持垂直滚动。
#
#scroll\_bar\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于scroll\_bar\_t控件。
#
#在xml中使用"scroll\_bar"或"scroll\_bar\_d"或"scroll\_bar\_m"标签创建滚动条控件。如：
#
#```xml
#<list_view x="0"  y="30" w="100%" h="-80" item_height="60">
#<scroll_view name="view" x="0"  y="0" w="100%" h="100%">
#...
#</scroll_view>
#<scroll_bar_m name="bar" x="right" y="0" w="6" h="100%" value="0"/>
#</list_view>
#```
#
#> 更多用法请参考：[list\_view\_m.xml](
#https://github.com/zlgopen/awtk/blob/master/design/default/ui/list_view_m.xml)
#
#在c代码中使用函数scroll\_bar\_create创建列表项控件。如：
#
#
#```xml
#<style name="default">
#<normal bg_color="#c0c0c0" fg_color="#808080"/>
#<over bg_color="#c0c0c0" fg_color="#808080"/>
#<pressed bg_color="#c0c0c0" fg_color="#808080"/>
#</style>
#```
#
#> 更多用法请参考：[theme default](
#https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L350)
#
#
class TScrollBar (TWidget):
  def __init__(self, nativeObj):
    super(TScrollBar, self).__init__(nativeObj)


  #
  # 创建scroll_bar对象
  #
  #> 根据宏WITH_DESKTOP_STYLE决定创建desktop风格还是mobile风格的滚动条
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TScrollBar(scroll_bar_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为scroll_bar对象(供脚本语言使用)。
  # 
  # @param widget scroll_bar对象。
  #
  # @return scroll_bar对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TScrollBar(scroll_bar_cast(awtk_get_native_obj(widget)));


  #
  # 创建mobile风格的scroll_bar对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create_mobile(cls, parent, x, y, w, h): 
    return  TScrollBar(scroll_bar_create_mobile(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 创建desktop风格的scroll_bar对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create_desktop(cls, parent, x, y, w, h): 
    return  TScrollBar(scroll_bar_create_desktop(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 设置参数。
  # 
  # @param virtual_size 虚拟高度。
  # @param row 每一行的高度。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_params(self, virtual_size, row): 
    return scroll_bar_set_params(awtk_get_native_obj(self), virtual_size, row);


  #
  # 滚动到指定的值。
  # 
  # @param value 值。
  # @param duration 动画持续时间。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def scroll_to(self, value, duration): 
    return scroll_bar_scroll_to(awtk_get_native_obj(self), value, duration);


  #
  # 设置值，并触发EVT_VALUE_CHANGED事件。
  # 
  # @param value 值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_value(self, value): 
    return scroll_bar_set_value(awtk_get_native_obj(self), value);


  #
  # 在当前的值上增加一个值，并触发EVT_VALUE_CHANGED事件。
  # 
  # @param delta 值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def add_delta(self, delta): 
    return scroll_bar_add_delta(awtk_get_native_obj(self), delta);


  #
  # 在当前的值上增加一个值，并滚动到新的值，并触发EVT_VALUE_CHANGED事件。
  # 
  # @param delta 值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def scroll_delta(self, delta): 
    return scroll_bar_scroll_delta(awtk_get_native_obj(self), delta);


  #
  # 设置值，但不触发EVT_VALUE_CHANGED事件。
  # 
  # @param value 值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_value_only(self, value): 
    return scroll_bar_set_value_only(awtk_get_native_obj(self), value);


  #
  # 设置auto_hide属性。
  #
  #>仅对mobile风格的滚动条有效
  # 
  # @param auto_hide 值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_auto_hide(self, auto_hide): 
    return scroll_bar_set_auto_hide(awtk_get_native_obj(self), auto_hide);


  #
  # 判断是否是mobile风格的滚动条。
  # 
  #
  # @return 返回TRUE表示是mobile风格的，否则表示不是mobile风格的。
  #
  def is_mobile(self): 
    return scroll_bar_is_mobile(awtk_get_native_obj(self));


  #
  # 虚拟宽度或高度。
  #
  #
  @property
  def virtual_size(self):
    return scroll_bar_t_get_prop_virtual_size(self.nativeObj);


  #
  # 当前的值。
  #
  #
  @property
  def value(self):
    return scroll_bar_t_get_prop_value(self.nativeObj);

  @value.setter
  def value(self, v):
   this.set_value(v);


  #
  # 行的高度。
  #
  #
  @property
  def row(self):
    return scroll_bar_t_get_prop_row(self.nativeObj);


  #
  # 滚动时是否启用动画。
  #
  #
  @property
  def animatable(self):
    return scroll_bar_t_get_prop_animatable(self.nativeObj);


  #
  # 是否自动隐藏(仅对mobile风格的滚动条有效)。
  #
  #
  @property
  def auto_hide(self):
    return scroll_bar_t_get_prop_auto_hide(self.nativeObj);

  @auto_hide.setter
  def auto_hide(self, v):
   this.set_auto_hide(v);


#
# 滚动视图。
#
#scroll\_view\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于scroll\_view\_t控件。
#
#在xml中使用"scroll\_view"标签创建滚动视图控件。如：
#
#```xml
#<list_view x="0"  y="30" w="100%" h="-80" item_height="60">
#<scroll_view name="view" x="0"  y="0" w="100%" h="100%">
#<list_item style="odd" children_layout="default(rows=1,cols=0)">
#<image draw_type="icon" w="30" image="earth"/>
#<label w="-30" text="1.Hello AWTK !">
#<switch x="r:10" y="m" w="60" h="20"/>
#</label>
#</list_item>
#...
#</scroll_view>
#</list_view>
#```
#
#> 滚动视图一般作为列表视图的子控件使用。
#
#> 更多用法请参考：[list\_view\_m.xml](
#https://github.com/zlgopen/awtk/blob/master/design/default/ui/list_view_m.xml)
#
#在c代码中使用函数scroll\_view\_create创建列表视图控件。如：
#
#
#可用通过style来设置控件的显示风格，如背景颜色和边框颜色等(一般情况不需要)。
#
#
class TScrollView (TWidget):
  def __init__(self, nativeObj):
    super(TScrollView, self).__init__(nativeObj)


  #
  # 创建scroll_view对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TScrollView(scroll_view_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为scroll_view对象(供脚本语言使用)。
  # 
  # @param widget scroll_view对象。
  #
  # @return scroll_view对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TScrollView(scroll_view_cast(awtk_get_native_obj(widget)));


  #
  # 设置虚拟宽度。
  # 
  # @param w 虚拟宽度。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_virtual_w(self, w): 
    return scroll_view_set_virtual_w(awtk_get_native_obj(self), w);


  #
  # 设置虚拟高度。
  # 
  # @param h 虚拟高度。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_virtual_h(self, h): 
    return scroll_view_set_virtual_h(awtk_get_native_obj(self), h);


  #
  # 设置是否允许x方向滑动。
  # 
  # @param xslidable 是否允许滑动。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_xslidable(self, xslidable): 
    return scroll_view_set_xslidable(awtk_get_native_obj(self), xslidable);


  #
  # 设置是否允许y方向滑动。
  # 
  # @param yslidable 是否允许滑动。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_yslidable(self, yslidable): 
    return scroll_view_set_yslidable(awtk_get_native_obj(self), yslidable);


  #
  # 设置滚动时offset是否按页面对齐。
  # 
  # @param snap_to_page 是否按页面对齐。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_snap_to_page(self, snap_to_page): 
    return scroll_view_set_snap_to_page(awtk_get_native_obj(self), snap_to_page);


  #
  # 设置滚动时是否每次翻一页
  #备注：当 snap_to_page 为ture 的时候才有效果，主要用于区分一次翻一页还是一次翻多页。
  # 
  # @param move_to_page 是否每次翻一页。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_move_to_page(self, move_to_page): 
    return scroll_view_set_move_to_page(awtk_get_native_obj(self), move_to_page);


  #
  # 设置是否递归查找全部子控件。
  # 
  # @param recursive 是否递归查找全部子控件。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_recursive(self, recursive): 
    return scroll_view_set_recursive(awtk_get_native_obj(self), recursive);


  #
  # 设置是否递归查找全部子控件。(不触发repaint和relayout)。
  # 
  # @param recursive 是否递归查找全部子控件。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_recursive_only(self, recursive): 
    return scroll_view_set_recursive_only(awtk_get_native_obj(self), recursive);


  #
  # 设置偏移量。
  # 
  # @param xoffset x偏移量。
  # @param yoffset y偏移量。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_offset(self, xoffset, yoffset): 
    return scroll_view_set_offset(awtk_get_native_obj(self), xoffset, yoffset);


  #
  # 设置偏移速度比例。
  # 
  # @param xspeed_scale x偏移速度比例。
  # @param yspeed_scale y偏移速度比例。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_speed_scale(self, xspeed_scale, yspeed_scale): 
    return scroll_view_set_speed_scale(awtk_get_native_obj(self), xspeed_scale, yspeed_scale);


  #
  # 滚动到指定的偏移量。
  # 
  # @param xoffset_end x偏移量。
  # @param yoffset_end y偏移量。
  # @param duration 时间。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def scroll_to(self, xoffset_end, yoffset_end, duration): 
    return scroll_view_scroll_to(awtk_get_native_obj(self), xoffset_end, yoffset_end, duration);


  #
  # 滚动到指定的偏移量。
  # 
  # @param xoffset_delta x偏移量。
  # @param yoffset_delta y偏移量。
  # @param duration 时间。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def scroll_delta_to(self, xoffset_delta, yoffset_delta, duration): 
    return scroll_view_scroll_delta_to(awtk_get_native_obj(self), xoffset_delta, yoffset_delta, duration);


  #
  # 虚拟宽度。
  #
  #
  @property
  def virtual_w(self):
    return scroll_view_t_get_prop_virtual_w(self.nativeObj);

  @virtual_w.setter
  def virtual_w(self, v):
   this.set_virtual_w(v);


  #
  # 虚拟高度。
  #
  #
  @property
  def virtual_h(self):
    return scroll_view_t_get_prop_virtual_h(self.nativeObj);

  @virtual_h.setter
  def virtual_h(self, v):
   this.set_virtual_h(v);


  #
  # x偏移量。
  #
  #
  @property
  def xoffset(self):
    return scroll_view_t_get_prop_xoffset(self.nativeObj);


  #
  # y偏移量。
  #
  #
  @property
  def yoffset(self):
    return scroll_view_t_get_prop_yoffset(self.nativeObj);


  #
  # x偏移速度比例。
  #
  #
  @property
  def xspeed_scale(self):
    return scroll_view_t_get_prop_xspeed_scale(self.nativeObj);


  #
  # y偏移速度比例。
  #
  #
  @property
  def yspeed_scale(self):
    return scroll_view_t_get_prop_yspeed_scale(self.nativeObj);


  #
  # 是否允许x方向滑动。
  #
  #
  @property
  def xslidable(self):
    return scroll_view_t_get_prop_xslidable(self.nativeObj);

  @xslidable.setter
  def xslidable(self, v):
   this.set_xslidable(v);


  #
  # 是否允许y方向滑动。
  #
  #
  @property
  def yslidable(self):
    return scroll_view_t_get_prop_yslidable(self.nativeObj);

  @yslidable.setter
  def yslidable(self, v):
   this.set_yslidable(v);


  #
  # 滚动时offset是否按页面对齐。
  #
  #
  @property
  def snap_to_page(self):
    return scroll_view_t_get_prop_snap_to_page(self.nativeObj);

  @snap_to_page.setter
  def snap_to_page(self, v):
   this.set_snap_to_page(v);


  #
  # 是否每次翻一页（当 move_to_page 为ture 的时候才有效果，主要用于区分一次翻一页还是一次翻多页）。
  #
  #
  @property
  def move_to_page(self):
    return scroll_view_t_get_prop_move_to_page(self.nativeObj);

  @move_to_page.setter
  def move_to_page(self, v):
   this.set_move_to_page(v);


  #
  # 是否递归查找全部子控件。
  #
  #
  @property
  def recursive(self):
    return scroll_view_t_get_prop_recursive(self.nativeObj);

  @recursive.setter
  def recursive(self, v):
   this.set_recursive(v);


#
# 左右滑动菜单控件。
#
#一般用一组按钮作为子控件，通过左右滑动改变当前的项。除了当菜单使用外，也可以用来切换页面。
#
#slide\_menu\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于slide\_menu\_t控件。
#
#在xml中使用"slide\_menu"标签创建左右滑动菜单控件。如：
#
#```xml
#<slide_menu style="mask" align_v="top">
#<button style="slide_button" text="0"/>
#<button style="slide_button" text="1"/>
#<button style="slide_button" text="2"/>
#<button style="slide_button" text="3"/>
#<button style="slide_button" text="4"/>
#</slide_menu>
#```
#
#> 更多用法请参考：[slide_menu.xml](
#https://github.com/zlgopen/awtk/blob/master/design/default/ui/slide_menu.xml)
#
#在c代码中使用函数slide\_menu\_create创建左右滑动菜单控件。如：
#
#
#可按下面的方法关注当前项改变的事件：
#
#
#可按下面的方法关注当前按钮被点击的事件：
#
#
#> 完整示例请参考：[slide_menu demo](
#https://github.com/zlgopen/awtk-c-demos/blob/master/demos/slide_menu.c)
#
#可用通过style来设置控件的显示风格，如背景颜色和蒙版颜色等等。如：
#
#```xml
#<style name="mask">
#<normal     bg_color="#f0f0f0" mask_color="#f0f0f0"/>
#</style>
#```
#
#> 更多用法请参考：[theme default](
#https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L493)
#
#
class TSlideMenu (TWidget):
  def __init__(self, nativeObj):
    super(TSlideMenu, self).__init__(nativeObj)


  #
  # 创建slide_menu对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TSlideMenu(slide_menu_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换slide_menu对象(供脚本语言使用)。
  # 
  # @param widget slide_menu对象。
  #
  # @return slide_menu对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TSlideMenu(slide_menu_cast(awtk_get_native_obj(widget)));


  #
  # 设置当前项。
  # 
  # @param value 当前项的索引。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_value(self, value): 
    return slide_menu_set_value(awtk_get_native_obj(self), value);


  #
  # 设置垂直对齐方式。
  # 
  # @param align_v 对齐方式。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_align_v(self, align_v): 
    return slide_menu_set_align_v(awtk_get_native_obj(self), align_v);


  #
  # 设置最小缩放比例。
  # 
  # @param min_scale 最小缩放比例，范围[0.5-1]。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_min_scale(self, min_scale): 
    return slide_menu_set_min_scale(awtk_get_native_obj(self), min_scale);


  #
  # 值。代表当前选中项的索引。
  #
  #
  @property
  def value(self):
    return slide_menu_t_get_prop_value(self.nativeObj);

  @value.setter
  def value(self, v):
   this.set_value(v);


  #
  # 垂直对齐方式。
  #
  #
  @property
  def align_v(self):
    return slide_menu_t_get_prop_align_v(self.nativeObj);

  @align_v.setter
  def align_v(self, v):
   this.set_align_v(v);


  #
  # 最小缩放比例。
  #
  #
  @property
  def min_scale(self):
    return slide_menu_t_get_prop_min_scale(self.nativeObj);

  @min_scale.setter
  def min_scale(self, v):
   this.set_min_scale(v);


#
# slide_view的指示器控件。
#
#> 支持直线、弧线排布，默认有4种绘制样式，若设置了icon/active_icon，则优先使用icon/active_icon
#
#slide\_indicator\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于slide\_indicator\_t控件。
#
#在xml中使用"slide\_indicator"或"slide\_indicator\_arc"标签创建指示器控件。如：
#
#```xml
#<slide_view name="view" x="0"  y="0" w="100%" h="100%">
#...
#</slide_view>
#<slide_indicator name="indicator" x="right" y="0" w="6" h="100%"/>
#```
#
#> 更多用法请参考：[slide\_view.xml](
#https://github.com/zlgopen/awtk/blob/master/design/default/ui/slide_view.xml)
#
#在c代码中使用函数slide\_indicator\_create创建指示器控件。如：
#
#
#```xml
#<style name="default">
#<normal fg_color="#FFFFFF80" selected_fg_color="#FFFFFF"/>
#</style>
#```
#
#> 更多用法请参考：[theme default](
#https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L350)
#
#
class TSlideIndicator (TWidget):
  def __init__(self, nativeObj):
    super(TSlideIndicator, self).__init__(nativeObj)


  #
  # 创建slide_indicator对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TSlideIndicator(slide_indicator_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 创建slide_indicator对象（线性显示）
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create_linear(cls, parent, x, y, w, h): 
    return  TSlideIndicator(slide_indicator_create_linear(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 创建slide_indicator对象（圆弧显示）
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create_arc(cls, parent, x, y, w, h): 
    return  TSlideIndicator(slide_indicator_create_arc(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为slide_indicator对象(供脚本语言使用)。
  # 
  # @param widget slide_indicator对象。
  #
  # @return slide_indicator对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TSlideIndicator(slide_indicator_cast(awtk_get_native_obj(widget)));


  #
  # 设置当前页的序号。
  # 
  # @param value 当前项的序号。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_value(self, value): 
    return slide_indicator_set_value(awtk_get_native_obj(self), value);


  #
  # 设置指示器的数量。
  # 
  # @param max 数量。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_max(self, max): 
    return slide_indicator_set_max(awtk_get_native_obj(self), max);


  #
  # 设置指示器的默认绘制类型。
  # 
  # @param default_paint 默认绘制类型。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_default_paint(self, default_paint): 
    return slide_indicator_set_default_paint(awtk_get_native_obj(self), default_paint);


  #
  # 设置指示器是否自动隐藏。
  # 
  # @param auto_hide 0表示禁止，非0表示无操作后延迟多久隐藏。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_auto_hide(self, auto_hide): 
    return slide_indicator_set_auto_hide(awtk_get_native_obj(self), auto_hide);


  #
  # 设置指示器的边距(默认为10像素)。
  # 
  # @param margin 指示器的边距。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_margin(self, margin): 
    return slide_indicator_set_margin(awtk_get_native_obj(self), margin);


  #
  # 设置指示器的间距(指示器有弧度时为角度值，否则为直线间距)。
  # 
  # @param spacing 指示器的间距。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_spacing(self, spacing): 
    return slide_indicator_set_spacing(awtk_get_native_obj(self), spacing);


  #
  # 设置指示器的大小(默认为8)。
  # 
  # @param size 指示器的大小。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_size(self, size): 
    return slide_indicator_set_size(awtk_get_native_obj(self), size);


  #
  # 设置旋转锚点。
  # 
  # @param anchor_x 锚点坐标x。(后面加上px为像素点，不加px为相对百分比坐标)
  # @param anchor_y 锚点坐标y。(后面加上px为像素点，不加px为相对百分比坐标)
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_anchor(self, anchor_x, anchor_y): 
    return slide_indicator_set_anchor(awtk_get_native_obj(self), anchor_x, anchor_y);


  #
  # 设置指示器指示的目标。
  # 
  # @param target_name 指示器指示的目标控件的名称
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_indicated_target(self, target_name): 
    return slide_indicator_set_indicated_target(awtk_get_native_obj(self), target_name);


  #
  # 值(缺省为0)。
  #
  #
  @property
  def value(self):
    return slide_indicator_t_get_prop_value(self.nativeObj);

  @value.setter
  def value(self, v):
   this.set_value(v);


  #
  # 最大值(缺省为100)。
  #
  #
  @property
  def max(self):
    return slide_indicator_t_get_prop_max(self.nativeObj);

  @max.setter
  def max(self, v):
   this.set_max(v);


  #
  # 指示器的类型。
  #
  #
  @property
  def default_paint(self):
    return slide_indicator_t_get_prop_default_paint(self.nativeObj);

  @default_paint.setter
  def default_paint(self, v):
   this.set_default_paint(v);


  #
  # 自动隐藏。0表示禁止，非0表示无操作后延迟多久隐藏。
  #
  #
  @property
  def auto_hide(self):
    return slide_indicator_t_get_prop_auto_hide(self.nativeObj);

  @auto_hide.setter
  def auto_hide(self, v):
   this.set_auto_hide(v);


  #
  # 指示器与边缘的边距。
  #
  #
  @property
  def margin(self):
    return slide_indicator_t_get_prop_margin(self.nativeObj);

  @margin.setter
  def margin(self, v):
   this.set_margin(v);


  #
  # 指示器的中心之间的间距（圆弧显示时，间距的单位为弧度，否则为像素）。
  #
  #
  @property
  def spacing(self):
    return slide_indicator_t_get_prop_spacing(self.nativeObj);

  @spacing.setter
  def spacing(self, v):
   this.set_spacing(v);


  #
  # 指示器的大小。
  #
  #
  @property
  def size(self):
    return slide_indicator_t_get_prop_size(self.nativeObj);

  @size.setter
  def size(self, v):
   this.set_size(v);


  #
  # 锚点x坐标。
  #
  #
  @property
  def anchor_x(self):
    return slide_indicator_t_get_prop_anchor_x(self.nativeObj);


  #
  # 锚点y坐标。
  #
  #
  @property
  def anchor_y(self):
    return slide_indicator_t_get_prop_anchor_y(self.nativeObj);


  #
  # 指示器指示的目标控件的名称。
  #
  #
  @property
  def indicated_target(self):
    return slide_indicator_t_get_prop_indicated_target(self.nativeObj);

  @indicated_target.setter
  def indicated_target(self, v):
   this.set_indicated_target(v);


#
# 滑动视图。
#
#滑动视图可以管理多个页面，并通过滑动来切换当前页面。也可以管理多张图片，让它们自动切换。
#
#slide\_view\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于slide\_view\_t控件。
#
#在xml中使用"slide\_view"标签创建滑动视图控件。如：
#
#```xml
#<slide_view x="0" y="0" w="100%" h="100%" style="dot">
#<view x="0" y="0" w="100%" h="100%" children_layout="default(w=60,h=60,m=5,s=10)">
#...
#</view>
#<view x="0" y="0" w="100%" h="100%" children_layout="default(w=60,h=60,m=5,s=10)">
#...
#</view>
#</slide_view>
#```
#
#> 更多用法请参考：[slide_view.xml](
#https://github.com/zlgopen/awtk/blob/master/design/default/ui/slide_view.xml)
#
#在c代码中使用函数slide\_view\_create创建滑动视图控件。如：
#
#
#> 完整示例请参考：
#[slide_view demo](
#https://github.com/zlgopen/awtk-c-demos/blob/master/demos/slide_view.c)
#
#可用通过style来设置控件的显示风格，如背景颜色和指示器的图标等等。如：
#
#```xml
#<style name="dot">
#<normal  icon="dot" active_icon="active_dot"/>
#</style>
#```
#
#> 如果希望背景图片跟随滚动，请将背景图片设置到页面上，否则设置到slide\_view上。
#
#> 更多用法请参考：[theme default](
#https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L458)
#
#
class TSlideView (TWidget):
  def __init__(self, nativeObj):
    super(TSlideView, self).__init__(nativeObj)


  #
  # 创建slide_view对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TSlideView(slide_view_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为slide_view对象(供脚本语言使用)。
  # 
  # @param widget slide_view对象。
  #
  # @return slide_view对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TSlideView(slide_view_cast(awtk_get_native_obj(widget)));


  #
  # 设置为自动播放模式。
  # 
  # @param auto_play 0表示禁止自动播放，非0表示自动播放时每一页播放的时间。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_auto_play(self, auto_play): 
    return slide_view_set_auto_play(awtk_get_native_obj(self), auto_play);


  #
  # 设置当前页的序号(默认启用动画)。
  # 
  # @param index 当前页的序号。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_active(self, index): 
    return slide_view_set_active(awtk_get_native_obj(self), index);


  #
  # 设置当前页的序号。
  # 
  # @param index 当前页的序号。
  # @param animate 是否启用动画。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_active_ex(self, index, animate): 
    return slide_view_set_active_ex(awtk_get_native_obj(self), index, animate);


  #
  # 设置为上下滑动(缺省为左右滑动)。
  # 
  # @param vertical TRUE表示上下滑动，FALSE表示左右滑动。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_vertical(self, vertical): 
    return slide_view_set_vertical(awtk_get_native_obj(self), vertical);


  #
  # 设置页面切换动画。
  #
  #anim_hint取值如下：
  #
  #* "translate"：平移。
  #* "overlap"：覆盖。
  #* "overlap\_with\_alpha"：覆盖并改变透明度。
  #
  #> 使用"overlap"或"overlap\_with\_alpha"动画时，背景图片最好指定到page上。
  #>
  #> 使用"overlap\_with\_alpha"动画时，slideview的背景设置为黑色，
  #> 或slideview的背景设置为透明，窗口的背景设置为黑色，以获得更好的视觉效果和性能。
  # 
  # @param anim_hint 页面切换动画。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_anim_hint(self, anim_hint): 
    return slide_view_set_anim_hint(awtk_get_native_obj(self), anim_hint);


  #
  # 设置循环切换模式。
  # 
  # @param loop 是否启用循环切换模式。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_loop(self, loop): 
    return slide_view_set_loop(awtk_get_native_obj(self), loop);


  #
  # 删除指定序号页面。
  # 
  # @param index 删除页面的序号。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def remove_index(self, index): 
    return slide_view_remove_index(awtk_get_native_obj(self), index);


  #
  # 是否为上下滑动模式。
  #
  #
  @property
  def vertical(self):
    return slide_view_t_get_prop_vertical(self.nativeObj);

  @vertical.setter
  def vertical(self, v):
   this.set_vertical(v);


  #
  # 自动播放。0表示禁止自动播放，非0表示自动播放时每一页播放的时间。
  #
  #
  @property
  def auto_play(self):
    return slide_view_t_get_prop_auto_play(self.nativeObj);

  @auto_play.setter
  def auto_play(self, v):
   this.set_auto_play(v);


  #
  # 循环切换模式。
  #
  #向后切换：切换到最后一页时，再往后切换就到第一页。
  #向前切换：切换到第一页时，再往前切换就到最后一页。
  #
  #
  @property
  def loop(self):
    return slide_view_t_get_prop_loop(self.nativeObj);

  @loop.setter
  def loop(self, v):
   this.set_loop(v);


  #
  # 页面切换效果。
  #
  #
  @property
  def anim_hint(self):
    return slide_view_t_get_prop_anim_hint(self.nativeObj);

  @anim_hint.setter
  def anim_hint(self, v):
   this.set_anim_hint(v);


#
# 开关控件。
#
#switch\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于switch\_t控件。
#
#在xml中使用"switch"标签创建开关控件。如：
#
#```xml
#<switch x="10" y="60" w="60" h="22" />
#```
#
#> 更多用法请参考：[switch.xml](
#https://github.com/zlgopen/awtk/blob/master/design/default/ui/switch.xml)
#
#在c代码中使用函数switch\_create创建开关控件。如：
#
#
#> 完整示例请参考：[switch demo](
#https://github.com/zlgopen/awtk-c-demos/blob/master/demos/switch.c)
#
#可用通过style来设置控件的显示风格，如背景图片等。如：
#
#```xml
#<style name="default">
#<normal  bg_image="switch" />
#</style>
#```
#
#> 更多用法请参考：[theme default](
#https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L452)
#
#
class TSwitch (TWidget):
  def __init__(self, nativeObj):
    super(TSwitch, self).__init__(nativeObj)


  #
  # 创建switch对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TSwitch(switch_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 设置控件的值。
  # 
  # @param value 值
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_value(self, value): 
    return switch_set_value(awtk_get_native_obj(self), value);


  #
  # 转换switch对象(供脚本语言使用)。
  # 
  # @param widget switch对象。
  #
  # @return switch对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TSwitch(switch_cast(awtk_get_native_obj(widget)));


  #
  # 值。
  #
  #
  @property
  def value(self):
    return switch_t_get_prop_value(self.nativeObj);

  @value.setter
  def value(self, v):
   this.set_value(v);


  #
  # 当开关处于关闭时，图片偏移相对于图片宽度的比例(缺省为1/3)。
  #
  #
  @property
  def max_xoffset_ratio(self):
    return switch_t_get_prop_max_xoffset_ratio(self.nativeObj);


#
# 文本选择器控件，通常用于选择日期和时间等。
#
#> XXX: 目前需要先设置options和visible_nr，再设置其它参数(在XML中也需要按此顺序)。
#
#text\_selector\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于text\_selector\_t控件。
#
#在xml中使用"text\_selector"标签创建文本选择器控件。如：
#
#```xml
#<text_selector options="red;green;blue;gold;orange" visible_nr="3" text="red"/>
#```
#
#> 更多用法请参考：[text\_selector.xml](
#https://github.com/zlgopen/awtk/blob/master/design/default/ui/text_selector.xml)
#
#在c代码中使用函数text\_selector\_create创建文本选择器控件。如：
#
#
#> 完整示例请参考：[text\_selector demo](
#https://github.com/zlgopen/awtk-c-demos/blob/master/demos/text_selector.c)
#
#可用通过style来设置控件的显示风格，如字体和背景颜色等。如：
#
#```xml
#<style name="dark" fg_color="#a0a0a0"  text_color="black" text_align_h="center">
#<normal     bg_color="#ffffff" mask_color="#404040" border_color="#404040"/>
#</style>
#```
#
#> 更多用法请参考：[theme default](
#https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L443)
#
#
class TTextSelector (TWidget):
  def __init__(self, nativeObj):
    super(TTextSelector, self).__init__(nativeObj)


  #
  # 创建text_selector对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TTextSelector(text_selector_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换text_selector对象(供脚本语言使用)。
  # 
  # @param widget text_selector对象。
  #
  # @return text_selector对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TTextSelector(text_selector_cast(awtk_get_native_obj(widget)));


  #
  # 重置所有选项。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def reset_options(self): 
    return text_selector_reset_options(awtk_get_native_obj(self));


  #
  # 获取选项个数。
  # 
  #
  # @return 返回选项个数。
  #
  def count_options(self): 
    return text_selector_count_options(awtk_get_native_obj(self));


  #
  # 追加一个选项。
  # 
  # @param value 值。
  # @param text 文本。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def append_option(self, value, text): 
    return text_selector_append_option(awtk_get_native_obj(self), value, text);


  #
  # 设置选项。
  # 
  # @param options 选项。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_options(self, options): 
    return text_selector_set_options(awtk_get_native_obj(self), options);


  #
  # 设置一系列的整数选项。
  # 
  # @param start 起始值。
  # @param nr 个数。
  # @param step 步长。
  # @param format 选项的格式化。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_range_options_ex(self, start, nr, step, format): 
    return text_selector_set_range_options_ex(awtk_get_native_obj(self), start, nr, step, format);


  #
  # 设置一系列的整数选项。
  # 
  # @param start 起始值。
  # @param nr 个数。
  # @param step 步长。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_range_options(self, start, nr, step): 
    return text_selector_set_range_options(awtk_get_native_obj(self), start, nr, step);


  #
  # 获取text_selector的值。
  # 
  #
  # @return 返回值。
  #
  def get_value(self): 
    return text_selector_get_value(awtk_get_native_obj(self));


  #
  # 设置text_selector的值。
  # 
  # @param value 值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_value(self, value): 
    return text_selector_set_value(awtk_get_native_obj(self), value);


  #
  # 获取text_selector的文本。
  # 
  #
  # @return 返回文本。
  #
  def get_text_value(self): 
    return text_selector_get_text(awtk_get_native_obj(self));


  #
  # 设置text_selector的文本。
  # 
  # @param text 文本。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_text(self, text): 
    return text_selector_set_text(awtk_get_native_obj(self), text);


  #
  # 设置第index个选项为当前选中的选项。
  # 
  # @param index 选项的索引。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_selected_index(self, index): 
    return text_selector_set_selected_index(awtk_get_native_obj(self), index);


  #
  # 设置可见的选项数。
  # 
  # @param visible_nr 选项数。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_visible_nr(self, visible_nr): 
    return text_selector_set_visible_nr(awtk_get_native_obj(self), visible_nr);


  #
  # 设置是否本地化(翻译)选项。
  # 
  # @param localize_options 是否本地化(翻译)选项。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_localize_options(self, localize_options): 
    return text_selector_set_localize_options(awtk_get_native_obj(self), localize_options);


  #
  # 设置是否循环选项。
  # 
  # @param loop_options 是否循环选项。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_loop_options(self, loop_options): 
    return text_selector_set_loop_options(awtk_get_native_obj(self), loop_options);


  #
  # 设置Y轴偏移速度比例。
  # 
  # @param yspeed_scale y偏移速度比例。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_yspeed_scale(self, yspeed_scale): 
    return text_selector_set_yspeed_scale(awtk_get_native_obj(self), yspeed_scale);


  #
  # 设置滚动动画播放时间。
  # 
  # @param animating_time 滚动动画播放时间。(单位毫秒)
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_animating_time(self, animating_time): 
    return text_selector_set_animating_time(awtk_get_native_obj(self), animating_time);


  #
  # 可见的选项数量(只能是1或者3或者5，缺省为5)。
  #
  #
  @property
  def visible_nr(self):
    return text_selector_t_get_prop_visible_nr(self.nativeObj);

  @visible_nr.setter
  def visible_nr(self, v):
   this.set_visible_nr(v);


  #
  # 当前选中的选项。
  #
  #
  @property
  def selected_index(self):
    return text_selector_t_get_prop_selected_index(self.nativeObj);

  @selected_index.setter
  def selected_index(self, v):
   this.set_selected_index(v);


  #
  # 设置可选项(冒号分隔值和文本，分号分隔选项，如:1:red;2:green;3:blue)。
  #对于数值选项，也可以指定一个范围，用『-』分隔起始值、结束值和格式。
  #如："1-7-%02d"表示1到7，格式为『02d』，格式为可选，缺省为『%d』。
  #
  #
  @property
  def options(self):
    return text_selector_t_get_prop_options(self.nativeObj);

  @options.setter
  def options(self, v):
   this.set_options(v);


  #
  # y偏移速度比例。
  #
  #
  @property
  def yspeed_scale(self):
    return text_selector_t_get_prop_yspeed_scale(self.nativeObj);

  @yspeed_scale.setter
  def yspeed_scale(self, v):
   this.set_yspeed_scale(v);


  #
  # 滚动动画播放时间。(单位毫秒)
  #
  #
  @property
  def animating_time(self):
    return text_selector_t_get_prop_animating_time(self.nativeObj);

  @animating_time.setter
  def animating_time(self, v):
   this.set_animating_time(v);


  #
  # 是否本地化(翻译)选项(缺省为FALSE)。
  #
  #
  @property
  def localize_options(self):
    return text_selector_t_get_prop_localize_options(self.nativeObj);

  @localize_options.setter
  def localize_options(self, v):
   this.set_localize_options(v);


  #
  # 是否循环选项(缺省为FALSE)。
  #
  #
  @property
  def loop_options(self):
    return text_selector_t_get_prop_loop_options(self.nativeObj);

  @loop_options.setter
  def loop_options(self, v):
   this.set_loop_options(v);


#
# 模拟时钟控件。
#
#time\_clock\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于time\_clock\_t控件。
#
#在xml中使用"time\_clock"标签创建模拟时钟控件。如：
#
#```xml
#<time_clock x="c" y="m" w="300" h="300" bg_image="clock_bg" image="clock"
#hour_image="clock_hour" minute_image="clock_minute" second_image="clock_second"/>
#```
#
#> 更多用法请参考：[time\_clock.xml](
#https://github.com/zlgopen/awtk/blob/master/design/default/ui/time_clock.xml)
#
#在c代码中使用函数time\_clock\_create创建模拟时钟控件。如：
#
#
#> 完整示例请参考：[time_clock demo](
#https://github.com/zlgopen/awtk-c-demos/blob/master/demos/time_clock.c)
#
#time\_clock一般不需要设置style。
#
#
class TTimeClock (TWidget):
  def __init__(self, nativeObj):
    super(TTimeClock, self).__init__(nativeObj)


  #
  # 创建time_clock对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TTimeClock(time_clock_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为time_clock对象(供脚本语言使用)。
  # 
  # @param widget time_clock对象。
  #
  # @return time_clock对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TTimeClock(time_clock_cast(awtk_get_native_obj(widget)));


  #
  # 设置小时的值。
  # 
  # @param hour 小时的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_hour(self, hour): 
    return time_clock_set_hour(awtk_get_native_obj(self), hour);


  #
  # 设置分钟的值。
  # 
  # @param minute 分钟的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_minute(self, minute): 
    return time_clock_set_minute(awtk_get_native_obj(self), minute);


  #
  # 设置秒的值。
  # 
  # @param second 秒的值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_second(self, second): 
    return time_clock_set_second(awtk_get_native_obj(self), second);


  #
  # 设置小时的图片。
  # 
  # @param hour 小时的图片。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_hour_image(self, hour): 
    return time_clock_set_hour_image(awtk_get_native_obj(self), hour);


  #
  # 设置分钟的图片。
  # 
  # @param minute_image 分钟的图片。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_minute_image(self, minute_image): 
    return time_clock_set_minute_image(awtk_get_native_obj(self), minute_image);


  #
  # 设置秒的图片。
  # 
  # @param second_image 秒的图片。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_second_image(self, second_image): 
    return time_clock_set_second_image(awtk_get_native_obj(self), second_image);


  #
  # 设置背景图片。
  # 
  # @param bg_image 背景图片。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_bg_image(self, bg_image): 
    return time_clock_set_bg_image(awtk_get_native_obj(self), bg_image);


  #
  # 设置中心图片。
  # 
  # @param image 图片。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_image(self, image): 
    return time_clock_set_image(awtk_get_native_obj(self), image);


  #
  # 设置小时指针的旋转锚点。
  #> 后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f
  # 
  # @param anchor_x 指针的锚点坐标x。
  # @param anchor_y 指针的锚点坐标y。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_hour_anchor(self, anchor_x, anchor_y): 
    return time_clock_set_hour_anchor(awtk_get_native_obj(self), anchor_x, anchor_y);


  #
  # 设置分钟指针的旋转锚点。
  #> 后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f
  # 
  # @param anchor_x 指针的锚点坐标x。
  # @param anchor_y 指针的锚点坐标y。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_minute_anchor(self, anchor_x, anchor_y): 
    return time_clock_set_minute_anchor(awtk_get_native_obj(self), anchor_x, anchor_y);


  #
  # 设置秒钟指针的旋转锚点。
  #> 后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f
  # 
  # @param anchor_x 指针的锚点坐标x。
  # @param anchor_y 指针的锚点坐标y。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_second_anchor(self, anchor_x, anchor_y): 
    return time_clock_set_second_anchor(awtk_get_native_obj(self), anchor_x, anchor_y);


  #
  # 小时。
  #
  #
  @property
  def hour(self):
    return time_clock_t_get_prop_hour(self.nativeObj);

  @hour.setter
  def hour(self, v):
   this.set_hour(v);


  #
  # 分钟。
  #
  #
  @property
  def minute(self):
    return time_clock_t_get_prop_minute(self.nativeObj);

  @minute.setter
  def minute(self, v):
   this.set_minute(v);


  #
  # 秒。
  #
  #
  @property
  def second(self):
    return time_clock_t_get_prop_second(self.nativeObj);

  @second.setter
  def second(self, v):
   this.set_second(v);


  #
  # 中心图片。
  #
  #
  @property
  def image(self):
    return time_clock_t_get_prop_image(self.nativeObj);

  @image.setter
  def image(self, v):
   this.set_image(v);


  #
  # 背景图片。
  #
  #
  @property
  def bg_image(self):
    return time_clock_t_get_prop_bg_image(self.nativeObj);

  @bg_image.setter
  def bg_image(self, v):
   this.set_bg_image(v);


  #
  # 时针图片。
  #
  #
  @property
  def hour_image(self):
    return time_clock_t_get_prop_hour_image(self.nativeObj);

  @hour_image.setter
  def hour_image(self, v):
   this.set_hour_image(v);


  #
  # 分针图片。
  #
  #
  @property
  def minute_image(self):
    return time_clock_t_get_prop_minute_image(self.nativeObj);

  @minute_image.setter
  def minute_image(self, v):
   this.set_minute_image(v);


  #
  # 秒针图片。
  #
  #
  @property
  def second_image(self):
    return time_clock_t_get_prop_second_image(self.nativeObj);

  @second_image.setter
  def second_image(self, v):
   this.set_second_image(v);


  #
  # 时针图片旋转锚点x坐标。(后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f)
  #
  #
  @property
  def hour_anchor_x(self):
    return time_clock_t_get_prop_hour_anchor_x(self.nativeObj);


  #
  # 时针图片旋转锚点y坐标。(后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f)
  #
  #
  @property
  def hour_anchor_y(self):
    return time_clock_t_get_prop_hour_anchor_y(self.nativeObj);


  #
  # 分针图片旋转锚点x坐标。(后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f)
  #
  #
  @property
  def minute_anchor_x(self):
    return time_clock_t_get_prop_minute_anchor_x(self.nativeObj);


  #
  # 分针图片旋转锚点y坐标。(后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f)
  #
  #
  @property
  def minute_anchor_y(self):
    return time_clock_t_get_prop_minute_anchor_y(self.nativeObj);


  #
  # 秒针图片旋转锚点x坐标。(后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f)
  #
  #
  @property
  def second_anchor_x(self):
    return time_clock_t_get_prop_second_anchor_x(self.nativeObj);


  #
  # 秒针图片旋转锚点y坐标。(后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f)
  #
  #
  @property
  def second_anchor_y(self):
    return time_clock_t_get_prop_second_anchor_y(self.nativeObj);


#
# 虚拟页面(根据情况自动加载/卸载页面，并提供入场/出场动画)。
#
#> 虚拟页面只能作为pages的直接子控件使用。
#
#如果指定了ui_asset:
#
#* 当页面切换到后台时自动卸载，并触发EVT\_VPAGE\_CLOSE消息。
#* 当页面切换到前台时自动加载，在动画前出发EVT\_VPAGE\_WILL\_OPEN消息，在动画完成时触发 EVT\_VPAGE\_CLOSE消息。
#
#vpage\_t也可以当作普通view嵌入到pages中，让tab控件在切换时具有动画效果。
#
#在xml中使用"vpage"标签创建控件。如：
#
#```xml
#<!-- ui -->
#<vpage x="c" y="50" w="100" h="100" ui_asset="mypage"/>
#```
#
#可用通过style来设置控件的显示风格，如字体的大小和颜色等等(一般无需指定)。如：
#
#```xml
#<!-- style -->
#<vpage>
#<style name="default">
#<normal />
#</style>
#</vpage>
#```
#
#
class TVpage (TWidget):
  def __init__(self, nativeObj):
    super(TVpage, self).__init__(nativeObj)


  #
  # 创建vpage对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return vpage对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TVpage(vpage_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为vpage对象(供脚本语言使用)。
  # 
  # @param widget vpage对象。
  #
  # @return vpage对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TVpage(vpage_cast(awtk_get_native_obj(widget)));


  #
  # 设置 UI资源名称。
  # 
  # @param ui_asset UI资源名称。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_ui_asset(self, ui_asset): 
    return vpage_set_ui_asset(awtk_get_native_obj(self), ui_asset);


  #
  # 设置动画类型(vtranslate: 垂直平移，htranslate: 水平平移)。
  # 
  # @param anim_hint 动画类型。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_anim_hint(self, anim_hint): 
    return vpage_set_anim_hint(awtk_get_native_obj(self), anim_hint);


  #
  # UI资源名称。
  #
  #
  @property
  def ui_asset(self):
    return vpage_t_get_prop_ui_asset(self.nativeObj);

  @ui_asset.setter
  def ui_asset(self, v):
   this.set_ui_asset(v);


  #
  # 动画类型(目前支持：vtranslate: 垂直平移，htranslate: 水平平移)。
  #
  #
  @property
  def anim_hint(self):
    return vpage_t_get_prop_anim_hint(self.nativeObj);

  @anim_hint.setter
  def anim_hint(self, v):
   this.set_anim_hint(v);


#
# 对象属性变化事件。
#
#
class TPropChangeEvent (TEvent):
  def __init__(self, nativeObj):
    super(TPropChangeEvent, self).__init__(nativeObj)


  #
  # 把event对象转prop_change_event_t对象，主要给脚本语言使用。
  # 
  # @param event event对象。
  #
  # @return 返回event对象。
  #
  @classmethod
  def cast(cls, event): 
    return  TPropChangeEvent(prop_change_event_cast(awtk_get_native_obj(event)));


  #
  # 属性的名称。
  #
  #
  @property
  def name(self):
    return prop_change_event_t_get_prop_name(self.nativeObj);


  #
  # 属性的值。
  #
  #
  @property
  def value(self):
    return TValue(prop_change_event_t_get_prop_value(self.nativeObj));


#
# 进度变化事件。
#
#
class TProgressEvent (TEvent):
  def __init__(self, nativeObj):
    super(TProgressEvent, self).__init__(nativeObj)


  #
  # 把event对象转progress_event_t对象，主要给脚本语言使用。
  # 
  # @param event event对象。
  #
  # @return 返回event对象。
  #
  @classmethod
  def cast(cls, event): 
    return  TProgressEvent(progress_event_cast(awtk_get_native_obj(event)));


  #
  # 进度百分比。
  #
  #
  @property
  def percent(self):
    return progress_event_t_get_prop_percent(self.nativeObj);


#
# 执行完成事件。
#
#
class TDoneEvent (TEvent):
  def __init__(self, nativeObj):
    super(TDoneEvent, self).__init__(nativeObj)


  #
  # 把event对象转done_event_t对象，主要给脚本语言使用。
  # 
  # @param event event对象。
  #
  # @return 返回event对象。
  #
  @classmethod
  def cast(cls, event): 
    return  TDoneEvent(done_event_cast(awtk_get_native_obj(event)));


  #
  # 执行结果。
  #
  #
  @property
  def result(self):
    return done_event_t_get_prop_result(self.nativeObj);


#
# 执行完成事件。
#
#
class TErrorEvent (TEvent):
  def __init__(self, nativeObj):
    super(TErrorEvent, self).__init__(nativeObj)


  #
  # 把event对象转error_event_t对象，主要给脚本语言使用。
  # 
  # @param event event对象。
  #
  # @return 返回event对象。
  #
  @classmethod
  def cast(cls, event): 
    return  TErrorEvent(error_event_cast(awtk_get_native_obj(event)));


  #
  # 错误码。
  #
  #
  @property
  def code(self):
    return error_event_t_get_prop_code(self.nativeObj);


  #
  # 错误信息。
  #
  #
  @property
  def message(self):
    return error_event_t_get_prop_message(self.nativeObj);


#
# 对象执行命令的事件。
#
#
class TCmdExecEvent (TEvent):
  def __init__(self, nativeObj):
    super(TCmdExecEvent, self).__init__(nativeObj)


  #
  # 把event对象转cmd_exec_event_t对象，主要给脚本语言使用。
  # 
  # @param event event对象。
  #
  # @return 返回event对象。
  #
  @classmethod
  def cast(cls, event): 
    return  TCmdExecEvent(cmd_exec_event_cast(awtk_get_native_obj(event)));


  #
  # 命令的名称。
  #
  #
  @property
  def name(self):
    return cmd_exec_event_t_get_prop_name(self.nativeObj);


  #
  # 命令的参数。
  #
  #
  @property
  def args(self):
    return cmd_exec_event_t_get_prop_args(self.nativeObj);


  #
  # 执行结果(适用于EXECED)。
  #
  #
  @property
  def result(self):
    return cmd_exec_event_t_get_prop_result(self.nativeObj);


  #
  # 标识命令是否可以执行(适用于CAN_EXEC)。
  #
  #
  @property
  def can_exec(self):
    return cmd_exec_event_t_get_prop_can_exec(self.nativeObj);


#
# app_bar控件。
#
#一个简单的容器控件，一般在窗口的顶部，用于显示本窗口的状态和信息。
#
#它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
#子控件的布局可用layout\_children属性指定。
#请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
#
#app\_bar\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于app\_bar\_t控件。
#
#在xml中使用"app\_bar"标签创建app\_bar。如：
#
#```xml
#<app_bar x="0" y="0" w="100%" h="30"
#<label x="0" y="0" w="100%" h="100%" text="Basic Controls" />
#</app_bar>
#```
#
#在c代码中使用函数app\_bar\_create创建app\_bar。如：
#
#
#可用通过style来设置控件的显示风格，如背景颜色等。如：
#
#```xml
#<style name="default" border_color="#a0a0a0">
#<normal     bg_color="#f0f0f0" />
#</style>
#```
#
#
class TAppBar (TWidget):
  def __init__(self, nativeObj):
    super(TAppBar, self).__init__(nativeObj)


  #
  # 创建app_bar对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TAppBar(app_bar_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为app_bar对象(供脚本语言使用)。
  # 
  # @param widget app_bar对象。
  #
  # @return app_bar对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TAppBar(app_bar_cast(awtk_get_native_obj(widget)));


#
# Button Group控件。一个简单的容器控件，用于容纳一组按钮控件。
#
#它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
#子控件的布局可用layout\_children属性指定。
#请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
#
#button\_group\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于button\_group\_t控件。
#
#在xml中使用"button\_group"标签创建button\_group。如：
#
#```xml
#<button_group x="0" y="m" w="100%" h="40" children_layout="default(c=4,r=1,s=5,m=5)">
#<button name="open:basic" text="Basic"/>
#<button name="open:button" text="Buttons"/>
#<button name="open:edit" text="Edits"/>
#<button name="open:keyboard" text="KeyBoard"/>
#</button_group>
#```
#
#可用通过style来设置控件的显示风格，如背景颜色等。如：
#
#```xml
#<style name="default" border_color="#a0a0a0">
#<normal     bg_color="#f0f0f0" />
#</style>
#```
#
#
class TButtonGroup (TWidget):
  def __init__(self, nativeObj):
    super(TButtonGroup, self).__init__(nativeObj)


  #
  # 创建button_group对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TButtonGroup(button_group_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为button_group对象(供脚本语言使用)。
  # 
  # @param widget button_group对象。
  #
  # @return button_group对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TButtonGroup(button_group_cast(awtk_get_native_obj(widget)));


#
# 按钮控件。
#
#点击按钮之后会触发EVT\_CLICK事件，注册EVT\_CLICK事件以执行特定操作。
#
#按钮控件也可以作为容器使用，使用图片和文本作为其子控件，可以实现很多有趣的效果。
#
#button\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于button\_t控件。
#
#在xml中使用"button"标签创建按钮控件。如：
#
#```xml
#<button x="c" y="m" w="80" h="30" text="OK"/>
#```
#
#> 更多用法请参考：
#[button.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/button.xml)
#
#在c代码中使用函数button\_create创建按钮控件。如：
#
#
#> 创建之后，需要用widget\_set\_text或widget\_set\_text\_utf8设置文本内容。
#
#> 完整示例请参考：
#[button demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/button.c)
#
#可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
#
#```xml
#<style name="default" border_color="#a0a0a0"  text_color="black">
#<normal     bg_color="#f0f0f0" />
#<pressed    bg_color="#c0c0c0" x_offset="1" y_offset="1"/>
#<over       bg_color="#e0e0e0" />
#<disable    bg_color="gray" text_color="#d0d0d0" />
#</style>
#```
#
#> 更多用法请参考：
#[theme
#default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L31)
#
#
class TButton (TWidget):
  def __init__(self, nativeObj):
    super(TButton, self).__init__(nativeObj)


  #
  # 创建button对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TButton(button_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为button对象(供脚本语言使用)。
  # 
  # @param widget button对象。
  #
  # @return button对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TButton(button_cast(awtk_get_native_obj(widget)));


  #
  # 设置触发EVT\_CLICK事件的时间间隔。为0则不重复触发EVT\_CLICK事件。
  # 
  # @param repeat 触发EVT_CLICK事件的时间间隔(毫秒)。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_repeat(self, repeat): 
    return button_set_repeat(awtk_get_native_obj(self), repeat);


  #
  # 设置触发长按事件的时间。
  # 
  # @param long_press_time 触发长按事件的时间(毫秒)。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_long_press_time(self, long_press_time): 
    return button_set_long_press_time(awtk_get_native_obj(self), long_press_time);


  #
  # 设置是否启用长按事件。
  # 
  # @param enable_long_press 是否启用长按事件。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_enable_long_press(self, enable_long_press): 
    return button_set_enable_long_press(awtk_get_native_obj(self), enable_long_press);


  #
  # 重复触发EVT\_CLICK事件的时间间隔。
  #
  #为0则不重复触发EVT\_CLICK事件。
  #
  #
  @property
  def repeat(self):
    return button_t_get_prop_repeat(self.nativeObj);

  @repeat.setter
  def repeat(self, v):
   this.set_repeat(v);


  #
  # 是否启用长按事件，为true时才触发长按事件。
  #
  #触发长按事件后不再触发点击事件。
  #缺省不启用。
  #
  #
  @property
  def enable_long_press(self):
    return button_t_get_prop_enable_long_press(self.nativeObj);

  @enable_long_press.setter
  def enable_long_press(self, v):
   this.set_enable_long_press(v);


  #
  # 触发长按事件的时间(ms)
  #
  #
  @property
  def long_press_time(self):
    return button_t_get_prop_long_press_time(self.nativeObj);

  @long_press_time.setter
  def long_press_time(self, v):
   this.set_long_press_time(v);


#
# 勾选按钮控件(单选/多选)。
#
#check\_button\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于check\_button\_t控件。
#
#在xml中使用"check_button"标签创建多选按钮控件。如：
#
#```xml
#<check_button name="c1" text="Book"/>
#```
#
#在xml中使用"radio_button"标签创建单选按钮控件。如：
#
#```xml
#<radio_button name="r1" text="Book"/>
#```
#
#> 更多用法请参考：
#[button.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/basic.xml)
#
#在c代码中使用函数check\_button\_create创建多选按钮控件。如：
#
#
#在c代码中使用函数check\_button\_create\_radio创建单选按钮控件。如：
#
#
#> 完整示例请参考：
#[button demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/check_button.c)
#
#可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
#
#```xml
#<style name="default" icon_at="left">
#<normal  icon="unchecked" />
#<pressed icon="unchecked" />
#<over    icon="unchecked" text_color="green"/>
#<normal_of_checked icon="checked" text_color="blue"/>
#<pressed_of_checked icon="checked" text_color="blue"/>
#<over_of_checked icon="checked" text_color="green"/>
#</style>
#```
#
#> 更多用法请参考：
#[theme
#default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L227)
#
#
class TCheckButton (TWidget):
  def __init__(self, nativeObj):
    super(TCheckButton, self).__init__(nativeObj)


  #
  # 创建多选按钮对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return widget对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TCheckButton(check_button_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 创建单选按钮对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return widget对象。
  #
  @classmethod
  def create_radio(cls, parent, x, y, w, h): 
    return  TCheckButton(check_button_create_radio(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 设置控件的值。
  # 
  # @param value 值(勾选为TRUE，非勾选为FALSE)。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_value(self, value): 
    return check_button_set_value(awtk_get_native_obj(self), value);


  #
  # 转换check_button对象(供脚本语言使用)。
  # 
  # @param widget check_button对象。
  #
  # @return check_button对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TCheckButton(check_button_cast(awtk_get_native_obj(widget)));


  #
  # 值(勾选为TRUE，非勾选为FALSE)。
  #
  #
  @property
  def value(self):
    return check_button_t_get_prop_value(self.nativeObj);

  @value.setter
  def value(self, v):
   this.set_value(v);


#
# 一个裁剪子控件的容器控件。
#
#它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
#子控件的布局可用layout\_children属性指定。
#请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
#
#clip\_view\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于clip\_view\_t控件。
#
#在xml中使用"clip_view"标签创建clip_view，在clip_view控件下的所有子控件都会被裁剪。如下button控件会被裁剪，无法画出clip_view控件 ：
#
#```xml
#<clip_view x="0" y="0" w="100" h="100">
#<button x="50" y="10" w="100" h="50" />
#</clip_view>
#```
#
#备注：在clip_view控件下的所有子控件都会被裁剪，如果子控件本身会设置裁剪区的话，在子控件中计算裁剪区的交集，具体请参考scroll_view控件的scroll_view_on_paint_children函数。
#
#可用通过style来设置控件的显示风格，如背景颜色等。如：
#
#```xml
#<style name="default" border_color="#a0a0a0">
#<normal     bg_color="#f0f0f0" />
#</style>
#```
#
#
class TClipView (TWidget):
  def __init__(self, nativeObj):
    super(TClipView, self).__init__(nativeObj)


  #
  # 创建clip_view对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TClipView(clip_view_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为clip_view对象(供脚本语言使用)。
  # 
  # @param widget clip_view对象。
  #
  # @return clip_view对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TClipView(clip_view_cast(awtk_get_native_obj(widget)));


#
# 色块控件。
#
#用来显示一个颜色块，它通过属性而不是窗体样式来设置颜色，方便在运行时动态改变颜色。
#
#可以使用value属性访问背景颜色的颜色值。
#
#color\_tile\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于color\_tile\_t控件。
#
#在xml中使用"color_tile"标签创建色块控件。如：
#
#```xml
#<color_tile x="c" y="m" w="80" h="30" bg_color="green" />
#```
#
#> 更多用法请参考：
#[color_tile](https://github.com/zlgopen/awtk/blob/master/design/default/ui/color_picker_rgb.xml)
#
#在c代码中使用函数color_tile\_create创建色块控件。如：
#
#> 创建之后，用color\_tile\_set\_bg\_color设置背景颜色。
#
#
class TColorTile (TWidget):
  def __init__(self, nativeObj):
    super(TColorTile, self).__init__(nativeObj)


  #
  # 创建color_tile对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TColorTile(color_tile_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为color_tile对象(供脚本语言使用)。
  # 
  # @param widget color_tile对象。
  #
  # @return color_tile对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TColorTile(color_tile_cast(awtk_get_native_obj(widget)));


  #
  # 设置背景颜色。
  # 
  # @param color 背景颜色。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_bg_color(self, color): 
    return color_tile_set_bg_color(awtk_get_native_obj(self), color);


  #
  # 获取背景颜色。
  # 
  #
  # @return 返回背景颜色。
  #
  def get_bg_color(self): 
    return color_tile_get_bg_color(awtk_get_native_obj(self));


  #
  # 获取边框颜色。
  # 
  #
  # @return 返回边框颜色。
  #
  def get_border_color(self): 
    return color_tile_get_border_color(awtk_get_native_obj(self));


  #
  # 背景颜色。
  #
  #
  @property
  def bg_color(self):
    return color_tile_t_get_prop_bg_color(self.nativeObj);

  @bg_color.setter
  def bg_color(self, v):
   this.set_bg_color(v);


  #
  # 边框颜色。
  #
  #
  @property
  def border_color(self):
    return color_tile_t_get_prop_border_color(self.nativeObj);


#
# column。一个简单的容器控件，垂直排列其子控件。
#
#它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
#子控件的布局可用layout\_children属性指定。
#请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
#
#column\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于column\_t控件。
#
#在xml中使用"column"标签创建column。如：
#
#```xml
#<column x="0" y="0" w="100%" h="100%" children_layout="default(c=1,r=0)">
#<button name="open:basic" text="Basic"/>
#<button name="open:button" text="Buttons"/>
#<button name="open:edit" text="Edits"/>
#<button name="open:keyboard" text="KeyBoard"/>
#</column>
#```
#
#可用通过style来设置控件的显示风格，如背景颜色等。如：
#
#```xml
#<style name="default" border_color="#a0a0a0">
#<normal     bg_color="#f0f0f0" />
#</style>
#```
#
#
class TColumn (TWidget):
  def __init__(self, nativeObj):
    super(TColumn, self).__init__(nativeObj)


  #
  # 创建column对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TColumn(column_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为column对象(供脚本语言使用)。
  # 
  # @param widget column对象。
  #
  # @return column对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TColumn(column_cast(awtk_get_native_obj(widget)));


#
# ComboBox Item控件。
#
#本类仅供combo\_box控件内部使用。
#
#
class TComboBoxItem (TWidget):
  def __init__(self, nativeObj):
    super(TComboBoxItem, self).__init__(nativeObj)


  #
  # 创建combo_box_item对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TComboBoxItem(combo_box_item_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换combo_box_item对象(供脚本语言使用)。
  # 
  # @param widget combo_box_item对象。
  #
  # @return combo_box_item对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TComboBoxItem(combo_box_item_cast(awtk_get_native_obj(widget)));


  #
  # 设置控件是否被选中。
  # 
  # @param checked 是否被选中。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_checked(self, checked): 
    return combo_box_item_set_checked(awtk_get_native_obj(self), checked);


  #
  # 设置控件的值。
  # 
  # @param value 值
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_value(self, value): 
    return combo_box_item_set_value(awtk_get_native_obj(self), value);


  #
  # 值。
  #
  #
  @property
  def value(self):
    return combo_box_item_t_get_prop_value(self.nativeObj);

  @value.setter
  def value(self, v):
   this.set_value(v);


  #
  # 是否被选中。
  #
  #
  @property
  def checked(self):
    return combo_box_item_t_get_prop_checked(self.nativeObj);

  @checked.setter
  def checked(self, v):
   this.set_checked(v);


#
# 对话框客户区控件。
#
#它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
#子控件的布局可用layout\_children属性指定。
#请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
#
#dialog\_client\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于dialog\_client\_t控件。
#
#在xml中使用"dialog\_client"标签创建dialog\_client。如：
#
#```xml
#<dialog anim_hint="center_scale(duration=300)" x="c" y="m" w="80%" h="160" text="Dialog">
#<dialog_title x="0" y="0" w="100%" h="30" text="Hello AWTK" />
#<dialog_client x="0" y="bottom" w="100%" h="-30">
#<label name="" x="center" y="middle:-20" w="200" h="30" text="Are you ready?"/>
#<button name="quit" x="10" y="bottom:10" w="40%" h="30" text="确定"/>
#<button name="quit" x="right:10" y="bottom:10" w="40%" h="30" text="取消"/>
#</dialog_client>
#</dialog>
#```
#
#在c代码中，用dialog\_create\_simple创建对话框时，自动创建dialog客户区对象。
#
#
class TDialogClient (TWidget):
  def __init__(self, nativeObj):
    super(TDialogClient, self).__init__(nativeObj)


  #
  # 创建dialog客户区对象。
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return dialog对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TDialogClient(dialog_client_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为dialog_client对象(供脚本语言使用)。
  # 
  # @param widget dialog_client对象。
  #
  # @return dialog_client对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TDialogClient(dialog_client_cast(awtk_get_native_obj(widget)));


#
# 对话框标题控件。
#
#它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
#子控件的布局可用layout\_children属性指定。
#请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
#
#dialog\_title\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于dialog\_title\_t控件。
#
#在xml中使用"dialog\_title"标签创建dialog\_title。如：
#
#```xml
#<dialog anim_hint="center_scale(duration=300)" x="c" y="m" w="80%" h="160" text="Dialog">
#<dialog_title x="0" y="0" w="100%" h="30" text="Hello AWTK" />
#<dialog_client x="0" y="bottom" w="100%" h="-30">
#<label name="" x="center" y="middle:-20" w="200" h="30" text="Are you ready?"/>
#<button name="quit" x="10" y="bottom:10" w="40%" h="30" text="确定"/>
#<button name="quit" x="right:10" y="bottom:10" w="40%" h="30" text="取消"/>
#</dialog_client>
#</dialog>
#```
#
#在c代码中，用dialog\_create\_simple创建对话框时，自动创建dialog标题对象。
#
#
class TDialogTitle (TWidget):
  def __init__(self, nativeObj):
    super(TDialogTitle, self).__init__(nativeObj)


  #
  # 创建dialog对象。
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return dialog对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TDialogTitle(dialog_title_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为dialog_title对象(供脚本语言使用)。
  # 
  # @param widget dialog_title对象。
  #
  # @return dialog_title对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TDialogTitle(dialog_title_cast(awtk_get_native_obj(widget)));


#
# 数字时钟控件。
#
#digit\_clock\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于digit\_clock\_t控件。
#
#在xml中使用"digit\_clock"标签创建数字时钟控件。如：
#
#```xml
#<digit_clock format="YY/MM/DD h:mm:ss"/>
#```
#
#> 更多用法请参考：[digit\_clock.xml](
#https://github.com/zlgopen/awtk/blob/master/design/default/ui/digit_clock.xml)
#
#在c代码中使用函数digit\_clock\_create创建数字时钟控件。如：
#
#
#> 完整示例请参考：[digit\_clock demo](
#https://github.com/zlgopen/awtk-c-demos/blob/master/demos/digit_clock.c)
#
#可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
#
#```xml
#<style name="default">
#<normal text_color="black" />
#</style>
#```
#
#> 更多用法请参考：[theme default](
#https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L138)
#
#
class TDigitClock (TWidget):
  def __init__(self, nativeObj):
    super(TDigitClock, self).__init__(nativeObj)


  #
  # 创建digit_clock对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TDigitClock(digit_clock_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为digit_clock对象(供脚本语言使用)。
  # 
  # @param widget digit_clock对象。
  #
  # @return digit_clock对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TDigitClock(digit_clock_cast(awtk_get_native_obj(widget)));


  #
  # 设置显示格式。
  # 
  # @param format 格式。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_format(self, format): 
    return digit_clock_set_format(awtk_get_native_obj(self), format);


  #
  # 显示格式。
  #
  #* Y 代表年(完整显示)
  #* M 代表月(1-12)
  #* D 代表日(1-31)
  #* h 代表时(0-23)
  #* m 代表分(0-59)
  #* s 代表秒(0-59)
  #* w 代表星期(0-6)
  #* W 代表星期的英文缩写(支持翻译)
  #* YY 代表年(只显示末两位)
  #* MM 代表月(01-12)
  #* DD 代表日(01-31)
  #* hh 代表时(00-23)
  #* mm 代表分(00-59)
  #* ss 代表秒(00-59)
  #* MMM 代表月的英文缩写(支持翻译)
  #
  #如 日期时间为：2018/11/12 9:10:20
  #* "Y/M/D"显示为"2018/11/12"
  #* "Y-M-D"显示为"2018-11-12"
  #* "Y-M-D h:m:s"显示为"2018-11-12 9:10:20"
  #* "Y-M-D hh:mm:ss"显示为"2018-11-12 09:10:20"
  #
  #
  @property
  def format(self):
    return digit_clock_t_get_prop_format(self.nativeObj);

  @format.setter
  def format(self, v):
   this.set_format(v);


#
# dragger控件。
#
#目前主要用于scrollbar里的滑块。
#
#
class TDragger (TWidget):
  def __init__(self, nativeObj):
    super(TDragger, self).__init__(nativeObj)


  #
  # 创建dragger对象。
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TDragger(dragger_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为dragger对象(供脚本语言使用)。
  # 
  # @param widget dragger对象。
  #
  # @return dragger对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TDragger(dragger_cast(awtk_get_native_obj(widget)));


  #
  # 设置拖动的范围。
  # 
  # @param x_min x坐标最小值。
  # @param y_min y坐标最小值。
  # @param x_max x坐标最大值。
  # @param y_max y坐标最大值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_range(self, x_min, y_min, x_max, y_max): 
    return dragger_set_range(awtk_get_native_obj(self), x_min, y_min, x_max, y_max);


  #
  # x坐标的最小值。
  #
  #
  @property
  def x_min(self):
    return dragger_t_get_prop_x_min(self.nativeObj);


  #
  # y坐标的最小值。
  #
  #
  @property
  def y_min(self):
    return dragger_t_get_prop_y_min(self.nativeObj);


  #
  # x坐标的最大值。
  #
  #
  @property
  def x_max(self):
    return dragger_t_get_prop_x_max(self.nativeObj);


  #
  # y坐标的最大值。
  #
  #
  @property
  def y_max(self):
    return dragger_t_get_prop_y_max(self.nativeObj);


#
# 单行编辑器控件。
#
#在基于SDL的平台，单行编辑器控件使用平台原生的输入法，对于嵌入式平台使用内置的输入法。
#
#在使用内置的输入法时，软键盘由输入类型决定，开发者可以自定义软键盘的界面。
#
#edit\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于edit\_t控件。
#
#edit\_t本身可以做为容器，放入按钮等控件。有几个特殊的子控件：
#
#* 名为"clear"的按钮。点击时清除编辑器中的内容。
#* 名为"inc"的按钮。点击时增加编辑器的值，用于实现类似于spinbox的功能。
#* 名为"dec"的按钮。点击时减少编辑器的值，用于实现类似于spinbox的功能。
#* 名为"visible"的复选框。勾选时显示密码，反之不显示密码。
#
#在xml中使用"edit"标签创建编辑器控件。如：
#
#```xml
#<edit x="c" y="m" w="80" h="30"
#tips="age" input_type="uint" min="0" max="150" step="1" auto_fix="true" style="number" />
#```
#
#> XXX：需要在min/max/step之前设置input\_type。
#
#>更多用法请参考：
#[edit.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/edit.xml)
#
#在c代码中使用函数edit\_create创建编辑器控件。如：
#
#
#> 创建之后，可以用widget\_set\_text或widget\_set\_text\_utf8设置文本内容。
#
#> 完整示例请参考：
#[edit demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/edit.c)
#
#可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
#
#```xml
#<style name="default" border_color="#a0a0a0"  text_color="black" text_align_h="left">
#<normal     bg_color="#f0f0f0" />
#<focused    bg_color="#f0f0f0" border_color="black"/>
#<disable    bg_color="gray" text_color="#d0d0d0" />
#<error      bg_color="#f0f0f0" text_color="red" />
#<empty      bg_color="#f0f0f0" text_color="#a0a0a0" />
#</style>
#```
#
#> 更多用法请参考：
#[theme
#default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L104)
#
#
class TEdit (TWidget):
  def __init__(self, nativeObj):
    super(TEdit, self).__init__(nativeObj)


  #
  # 创建edit对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TEdit(edit_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为edit对象(供脚本语言使用)。
  # 
  # @param widget edit对象。
  #
  # @return edit对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TEdit(edit_cast(awtk_get_native_obj(widget)));


  #
  # 获取int类型的值。
  # 
  #
  # @return 返回int的值。
  #
  def get_int(self): 
    return edit_get_int(awtk_get_native_obj(self));


  #
  # 获取double类型的值。
  # 
  #
  # @return 返回double的值。
  #
  def get_double(self): 
    return edit_get_double(awtk_get_native_obj(self));


  #
  # 设置int类型的值。
  # 
  # @param value 值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_int(self, value): 
    return edit_set_int(awtk_get_native_obj(self), value);


  #
  # 设置double类型的值。
  # 
  # @param value 值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_double(self, value): 
    return edit_set_double(awtk_get_native_obj(self), value);


  #
  # 设置为文本输入及其长度限制，不允许输入超过max个字符，少于min个字符时进入error状态。
  # 
  # @param min 最小长度。
  # @param max 最大长度。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_text_limit(self, min, max): 
    return edit_set_text_limit(awtk_get_native_obj(self), min, max);


  #
  # 设置为整数输入及取值范围。
  # 
  # @param min 最小值。
  # @param max 最大值。
  # @param step 步长。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_int_limit(self, min, max, step): 
    return edit_set_int_limit(awtk_get_native_obj(self), min, max, step);


  #
  # 设置为浮点数输入及取值范围。
  # 
  # @param min 最小值。
  # @param max 最大值。
  # @param step 步长。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_float_limit(self, min, max, step): 
    return edit_set_float_limit(awtk_get_native_obj(self), min, max, step);


  #
  # 设置编辑器是否为只读。
  # 
  # @param readonly 只读。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_readonly(self, readonly): 
    return edit_set_readonly(awtk_get_native_obj(self), readonly);


  #
  # 设置编辑器是否为可撤销修改。
  # 
  # @param cancelable 是否为可撤销修。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_cancelable(self, cancelable): 
    return edit_set_cancelable(awtk_get_native_obj(self), cancelable);


  #
  # 设置编辑器是否为自动改正。
  # 
  # @param auto_fix 自动改正。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_auto_fix(self, auto_fix): 
    return edit_set_auto_fix(awtk_get_native_obj(self), auto_fix);


  #
  # 设置编辑器是否在获得焦点时不选中文本。
  # 
  # @param select_none_when_focused 是否在获得焦点时不选中文本。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_select_none_when_focused(self, select_none_when_focused): 
    return edit_set_select_none_when_focused(awtk_get_native_obj(self), select_none_when_focused);


  #
  # 设置编辑器是否在获得焦点时打开输入法。
  #
  #> * 设置默认焦点时，打开窗口时不弹出软键盘。
  #> * 用键盘切换焦点时，编辑器获得焦点时不弹出软键盘。
  # 
  # @param open_im_when_focused 是否在获得焦点时打开输入法。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_open_im_when_focused(self, open_im_when_focused): 
    return edit_set_open_im_when_focused(awtk_get_native_obj(self), open_im_when_focused);


  #
  # 设置编辑器是否在失去焦点时关闭输入法。
  # 
  # @param close_im_when_blured 是否是否在失去焦点时关闭输入法。在失去焦点时关闭输入法。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_close_im_when_blured(self, close_im_when_blured): 
    return edit_set_close_im_when_blured(awtk_get_native_obj(self), close_im_when_blured);


  #
  # 设置编辑器的输入类型。
  # 
  # @param type 输入类型。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_input_type(self, type): 
    return edit_set_input_type(awtk_get_native_obj(self), type);


  #
  # 设置软键盘上action按钮的文本。
  # 
  # @param action_text 软键盘上action按钮的文本。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_action_text(self, action_text): 
    return edit_set_action_text(awtk_get_native_obj(self), action_text);


  #
  # 设置编辑器的输入提示。
  # 
  # @param tips 输入提示。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_tips(self, tips): 
    return edit_set_tips(awtk_get_native_obj(self), tips);


  #
  # 获取翻译之后的文本，然后调用edit_set_tips。
  # 
  # @param tr_tips 提示信息。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_tr_tips(self, tr_tips): 
    return edit_set_tr_tips(awtk_get_native_obj(self), tr_tips);


  #
  # 设置自定义软键盘名称。
  # 
  # @param keyboard 键盘名称(相应UI资源必须存在)。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_keyboard(self, keyboard): 
    return edit_set_keyboard(awtk_get_native_obj(self), keyboard);


  #
  # 当编辑器输入类型为密码时，设置密码是否可见。
  # 
  # @param password_visible 密码是否可见。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_password_visible(self, password_visible): 
    return edit_set_password_visible(awtk_get_native_obj(self), password_visible);


  #
  # 设置为焦点。
  # 
  # @param focus 是否为焦点。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_focus(self, focus): 
    return edit_set_focus(awtk_get_native_obj(self), focus);


  #
  # 设置输入框的光标位置。
  # 
  # @param cursor 光标位置。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_cursor(self, cursor): 
    return edit_set_cursor(awtk_get_native_obj(self), cursor);


  #
  # 获取输入框的光标位置。
  # 
  #
  # @return 返回光标位置。
  #
  def get_cursor(self): 
    return edit_get_cursor(awtk_get_native_obj(self));


  #
  # 选择指定范围的文本。
  # 
  # @param start 起始偏移。
  # @param end 结束偏移。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_select(self, start, end): 
    return edit_set_select(awtk_get_native_obj(self), start, end);


  #
  # 获取选中的文本。
  #使用完后需调用 TKMEM_FREE() 进行释放文本占有内存。
  # 
  #
  # @return 返回选中文本。
  #
  def get_selected_text(self): 
    return edit_get_selected_text(awtk_get_native_obj(self));


  #
  # 输入提示。
  #
  #
  @property
  def tips(self):
    return edit_t_get_prop_tips(self.nativeObj);

  @tips.setter
  def tips(self, v):
   this.set_tips(v);


  #
  # 保存用于翻译的提示信息。
  #
  #
  @property
  def tr_tips(self):
    return edit_t_get_prop_tr_tips(self.nativeObj);

  @tr_tips.setter
  def tr_tips(self, v):
   this.set_tr_tips(v);


  #
  # 软键盘上action按钮的文本。内置取值有：
  #
  #* next 将焦点切换到下一个控件。
  #* done 完成，关闭软键盘。
  #
  #也可以使用其它文本，比如send表示发送。这个需要自己实现相应的功能，处理EVT\_IM\_ACTION事件即可。
  #
  #
  @property
  def action_text(self):
    return edit_t_get_prop_action_text(self.nativeObj);

  @action_text.setter
  def action_text(self, v):
   this.set_action_text(v);


  #
  # 自定义软键盘名称。AWTK优先查找keyboard属性设置的键盘文件名（该键盘的XML文件需要在default\raw\ui目录下存在），如果keyboard为空就找input_type设置的键盘类型
  #
  #
  @property
  def keyboard(self):
    return edit_t_get_prop_keyboard(self.nativeObj);

  @keyboard.setter
  def keyboard(self, v):
   this.set_keyboard(v);


  #
  # 最小值或最小长度。
  #
  #
  @property
  def min(self):
    return edit_t_get_prop_min(self.nativeObj);


  #
  # 最大值或最大长度。
  #
  #
  @property
  def max(self):
    return edit_t_get_prop_max(self.nativeObj);


  #
  # 步长。
  #作为数值型编辑器时，一次增加和减少时的数值。
  #
  #
  @property
  def step(self):
    return edit_t_get_prop_step(self.nativeObj);


  #
  # 输入类型。
  #
  #
  @property
  def input_type(self):
    return edit_t_get_prop_input_type(self.nativeObj);

  @input_type.setter
  def input_type(self, v):
   this.set_input_type(v);


  #
  # 编辑器是否为只读。
  #
  #
  @property
  def readonly(self):
    return edit_t_get_prop_readonly(self.nativeObj);

  @readonly.setter
  def readonly(self, v):
   this.set_readonly(v);


  #
  # 密码是否可见。
  #
  #
  @property
  def password_visible(self):
    return edit_t_get_prop_password_visible(self.nativeObj);

  @password_visible.setter
  def password_visible(self, v):
   this.set_password_visible(v);


  #
  # 输入无效时，是否自动改正。
  #
  #
  @property
  def auto_fix(self):
    return edit_t_get_prop_auto_fix(self.nativeObj);

  @auto_fix.setter
  def auto_fix(self, v):
   this.set_auto_fix(v);


  #
  # 获得焦点时不选中文本。
  #
  #> 主要用于没有指针设备的情况，否则软键盘无法取消选中文本。
  #
  #
  @property
  def select_none_when_focused(self):
    return edit_t_get_prop_select_none_when_focused(self.nativeObj);

  @select_none_when_focused.setter
  def select_none_when_focused(self, v):
   this.set_select_none_when_focused(v);


  #
  # 获得焦点时打开输入法。
  #
  #> 主要用于没有指针设备的情况，否则每次切换焦点时都打开输入法。
  #
  #
  @property
  def open_im_when_focused(self):
    return edit_t_get_prop_open_im_when_focused(self.nativeObj);

  @open_im_when_focused.setter
  def open_im_when_focused(self, v):
   this.set_open_im_when_focused(v);


  #
  # 是否在失去焦点时关闭输入法(默认是)。
  #
  #
  @property
  def close_im_when_blured(self):
    return edit_t_get_prop_close_im_when_blured(self.nativeObj);

  @close_im_when_blured.setter
  def close_im_when_blured(self, v):
   this.set_close_im_when_blured(v);


  #
  # 是否支持撤销编辑。如果为TRUE，在失去焦点之前可以撤销所有修改(恢复获得焦点之前的内容)。
  #
  #> * 1.一般配合keyboard的"cancel"按钮使用。
  #> * 2.为TRUE时，如果内容有变化，会设置编辑器的状态为changed，所以此时编辑器需要支持changed状态的style。
  #
  #
  @property
  def cancelable(self):
    return edit_t_get_prop_cancelable(self.nativeObj);

  @cancelable.setter
  def cancelable(self, v):
   this.set_cancelable(v);


#
# grid_item。一个简单的容器控件，一般作为grid的子控件。
#
#它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
#子控件的布局可用layout\_children属性指定。
#请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
#
#grid\_item\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于grid\_item\_t控件。
#
#在xml中使用"grid\_item"标签创建grid\_item。如：
#
#```xml
#<grid x="0" y="0" w="100%" h="100%" children_layout="default(c=2,r=2,m=5,s=5)">
#<grid_item>
#<button x="c" y="m" w="80%" h="30" name="0" text="0"/>
#</grid_item>
#<grid_item>
#<button x="c" y="m" w="80%" h="30" name="1" text="1"/>
#</grid_item>
#<grid_item>
#<button x="c" y="m" w="80%" h="30" name="2" text="2"/>
#</grid_item>
#<grid_item>
#<button x="c" y="m" w="80%" h="30" name="3" text="3"/>
#</grid_item>
#</grid>
#
#```
#
#可用通过style来设置控件的显示风格，如背景颜色等。如：
#
#```xml
#<style name="default" border_color="#a0a0a0">
#<normal     bg_color="#f0f0f0" />
#</style>
#```
#
#
class TGridItem (TWidget):
  def __init__(self, nativeObj):
    super(TGridItem, self).__init__(nativeObj)


  #
  # 创建grid_item对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TGridItem(grid_item_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为grid_item对象(供脚本语言使用)。
  # 
  # @param widget grid_item对象。
  #
  # @return grid_item对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TGridItem(grid_item_cast(awtk_get_native_obj(widget)));


#
# grid控件。一个简单的容器控件，用于网格排列一组控件。
#
#它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
#子控件的布局可用layout\_children属性指定。
#请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
#
#grid\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于grid\_t控件。
#
#在xml中使用"grid"标签创建grid。如：
#
#```xml
#<grid x="0" y="0" w="100%" h="100%" children_layout="default(c=2,r=2,m=5,s=5)">
#<button name="open:basic" text="Basic"/>
#<button name="open:button" text="Buttons"/>
#<button name="open:edit" text="Edits"/>
#<button name="open:keyboard" text="KeyBoard"/>
#</grid>
#```
#
#可用通过style来设置控件的显示风格，如背景颜色等。如：
#
#```xml
#<style name="default" border_color="#a0a0a0">
#<normal     bg_color="#f0f0f0" />
#</style>
#```
#
#
class TGrid (TWidget):
  def __init__(self, nativeObj):
    super(TGrid, self).__init__(nativeObj)


  #
  # 创建grid对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TGrid(grid_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为grid对象(供脚本语言使用)。
  # 
  # @param widget grid对象。
  #
  # @return grid对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TGrid(grid_cast(awtk_get_native_obj(widget)));


#
# 分组控件。
#
#单选按钮在同一个父控件中是互斥的，所以通常将相关的单选按钮放在一个group\_box中。
#
#它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
#子控件的布局可用layout\_children属性指定。
#请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
#
#group\_box\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于group\_box\_t控件。
#
#在xml中使用"group\_box"标签创建group\_box。如：
#
#```xml
#<group_box x="20" y="230" w="50%" h="90" children_layout="default(r=3,c=1,ym=2,s=10)"
#<radio_button name="r1" text="Book"/>
#<radio_button name="r2" text="Food"/>
#<radio_button name="r3" text="Pencil" value="true"/>
#</group_box>
#```
#
#可用通过style来设置控件的显示风格，如背景颜色等。如：
#
#```xml
#<style name="default" border_color="#a0a0a0">
#<normal     bg_color="#f0f0f0" />
#</style>
#```
#
#
class TGroupBox (TWidget):
  def __init__(self, nativeObj):
    super(TGroupBox, self).__init__(nativeObj)


  #
  # 创建group_box对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TGroupBox(group_box_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为group_box对象(供脚本语言使用)。
  # 
  # @param widget group_box对象。
  #
  # @return group_box对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TGroupBox(group_box_cast(awtk_get_native_obj(widget)));


#
# 文本控件。用于显示一行或多行文本。
#
#文本控件不会根据文本的长度自动换行，只有文本内容包含换行符时才会换行。
#
#如需自动换行请使用[rich\_text\_t](rich_text_t.md)控件。
#
#label\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于label\_t控件。
#
#在xml中使用"label"标签创建文本控件。如：
#
#```xml
#<label style="center" text="center"/>
#```
#
#> 更多用法请参考：[label.xml](
#https://github.com/zlgopen/awtk/blob/master/design/default/ui/label.xml)
#
#在c代码中使用函数label\_create创建文本控件。如：
#
#
#> 创建之后，需要用widget\_set\_text或widget\_set\_text\_utf8设置文本内容。
#
#> 完整示例请参考：[label demo](
#https://github.com/zlgopen/awtk-c-demos/blob/master/demos/label.c)
#
#可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
#
#```xml
#<style name="left">
#<normal text_color="red" text_align_h="left" border_color="#a0a0a0" margin="4" />
#</style>
#```
#
#> 更多用法请参考：
#[theme default](
#https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L144)
#
#
class TLabel (TWidget):
  def __init__(self, nativeObj):
    super(TLabel, self).__init__(nativeObj)


  #
  # 创建label对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TLabel(label_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 设置显示字符的个数(小余0时全部显示)。
  # 
  # @param length 最大可显示字符个数。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_length(self, length): 
    return label_set_length(awtk_get_native_obj(self), length);


  #
  # 设置max_w。
  # 
  # @param max_w 最大宽度。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_max_w(self, max_w): 
    return label_set_max_w(awtk_get_native_obj(self), max_w);


  #
  # 设置是否自动换行。
  # 
  # @param line_wrap 是否自动换行。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_line_wrap(self, line_wrap): 
    return label_set_line_wrap(awtk_get_native_obj(self), line_wrap);


  #
  # 设置是否允许整个单词换行。(需要开启自动换行才有效果)
  # 
  # @param word_wrap 是否允许整个单词换行。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_word_wrap(self, word_wrap): 
    return label_set_word_wrap(awtk_get_native_obj(self), word_wrap);


  #
  # 根据文本内容调节控件大小。
  # 
  # @param min_w 最小宽度。
  # @param max_w 最大宽度。
  # @param min_h 最小高度。
  # @param max_h 最大高度。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def resize_to_content(self, min_w, max_w, min_h, max_h): 
    return label_resize_to_content(awtk_get_native_obj(self), min_w, max_w, min_h, max_h);


  #
  # 转换为label对象(供脚本语言使用)。
  # 
  # @param widget label对象。
  #
  # @return label对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TLabel(label_cast(awtk_get_native_obj(widget)));


  #
  # 显示字符的个数(小余0时全部显示)。
  #主要用于动态改变显示字符的个数，来实现类似[拨号中...]的动画效果。
  #
  #
  @property
  def length(self):
    return label_t_get_prop_length(self.nativeObj);

  @length.setter
  def length(self, v):
   this.set_length(v);


  #
  # 是否自动换行(默认FALSE)。
  #
  #
  @property
  def line_wrap(self):
    return label_t_get_prop_line_wrap(self.nativeObj);

  @line_wrap.setter
  def line_wrap(self, v):
   this.set_line_wrap(v);


  #
  # 是否允许整个单词换行(默认FALSE)。
  #> 需要开启自动换行才有效果
  #
  #
  @property
  def word_wrap(self):
    return label_t_get_prop_word_wrap(self.nativeObj);

  @word_wrap.setter
  def word_wrap(self, v):
   this.set_word_wrap(v);


  #
  # 当auto_adjust_size为TRUE时，用于控制控件的最大宽度，超出该宽度后才自动换行。
  #>为0表示忽略该参数。小于0时取父控件宽度加上max_w。
  #
  #
  @property
  def max_w(self):
    return label_t_get_prop_max_w(self.nativeObj);

  @max_w.setter
  def max_w(self, v):
   this.set_max_w(v);


#
# 页面管理控件。
#
#只有一个Page处于active状态，处于active状态的Page才能显示并接收事件。
#常用于实现标签控件中的页面管理。
#
#pages\_t是[widget\_t](widget_t.md)的子类控件，
#widget\_t的函数均适用于pages\_t控件。
#
#在xml中使用"pages"标签创建页面管理控件。如：
#
#```xml
#<tab_control x="0" y="0" w="100%" h="100%"
#<pages x="c" y="20" w="90%" h="-60" value="1">
#...
#</pages>
#<tab_button_group>
#...
#</tab_button_group>
#</tab_control>
#```
#
#> 更多用法请参考：
#[tab control](https://github.com/zlgopen/awtk/blob/master/design/default/ui/)
#
#
class TPages (TWidget):
  def __init__(self, nativeObj):
    super(TPages, self).__init__(nativeObj)


  #
  # 创建pages对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TPages(pages_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为pages对象(供脚本语言使用)。
  # 
  # @param widget pages对象。
  #
  # @return pages对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TPages(pages_cast(awtk_get_native_obj(widget)));


  #
  # 设置当前的Page。
  # 
  # @param index 当前Page的序号。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_active(self, index): 
    return pages_set_active(awtk_get_native_obj(self), index);


  #
  # 通过页面的名字设置当前的Page。
  # 
  # @param name 当前Page的名字。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_active_by_name(self, name): 
    return pages_set_active_by_name(awtk_get_native_obj(self), name);


  #
  # 当前活跃的page。
  #
  #
  @property
  def active(self):
    return pages_t_get_prop_active(self.nativeObj);

  @active.setter
  def active(self, v):
   this.set_active(v);


#
# 进度条控件。
#
#进度条控件可以水平显示也可以垂直显示，由vertical属性决定。
#
#progress\_bar\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于progress\_bar\_t控件。
#
#在xml中使用"progress\_bar"标签创建进度条控件。如：
#
#```xml
#<progress_bar name="bar1" x="10" y="128" w="240" h="30" value="40"/>
#<progress_bar name="bar2" x="280" y="128" w="30" h="118" value="20" vertical="true"/>
#```
#
#> 更多用法请参考：
#[basic demo](https://github.com/zlgopen/awtk/blob/master/design/default/ui/basic.xml)
#
#在c代码中使用函数progress\_bar\_create创建进度条控件。如：
#
#
#> 完整示例请参考：
#[progress_bar demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/progress_bar.c)
#
#可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
#
#```xml
#<style>
#<normal bg_color="#f0f0f0" text_color="gold" fg_color="#c0c0c0" border_color="#a0a0a0" />
#</style>
#```
#
#> 更多用法请参考：
#[theme
#default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L183)
#
#
class TProgressBar (TWidget):
  def __init__(self, nativeObj):
    super(TProgressBar, self).__init__(nativeObj)


  #
  # 创建progress_bar对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TProgressBar(progress_bar_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为progress_bar对象(供脚本语言使用)。
  # 
  # @param widget progress_bar对象。
  #
  # @return progress_bar对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TProgressBar(progress_bar_cast(awtk_get_native_obj(widget)));


  #
  # 设置进度条的进度。
  # 
  # @param value 进度
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_value(self, value): 
    return progress_bar_set_value(awtk_get_native_obj(self), value);


  #
  # 设置最大值。
  # 
  # @param max 最大值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_max(self, max): 
    return progress_bar_set_max(awtk_get_native_obj(self), max);


  #
  # 设置格式。
  # 
  # @param format 格式。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_format(self, format): 
    return progress_bar_set_format(awtk_get_native_obj(self), format);


  #
  # 设置进度条的方向。
  # 
  # @param vertical 是否为垂直方向。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_vertical(self, vertical): 
    return progress_bar_set_vertical(awtk_get_native_obj(self), vertical);


  #
  # 设置进度条的是否显示文本。
  # 
  # @param show_text 是否显示文本。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_show_text(self, show_text): 
    return progress_bar_set_show_text(awtk_get_native_obj(self), show_text);


  #
  # 设置进度条是否反向。
  # 
  # @param reverse 是否反向。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_reverse(self, reverse): 
    return progress_bar_set_reverse(awtk_get_native_obj(self), reverse);


  #
  # 获取进度百分比。
  #
  #> 当max为100时，percent和value取整后一致。
  # 
  #
  # @return 返回百分比。
  #
  def get_percent(self): 
    return progress_bar_get_percent(awtk_get_native_obj(self));


  #
  # 进度条的值[0-max]。
  #
  #
  @property
  def value(self):
    return progress_bar_t_get_prop_value(self.nativeObj);

  @value.setter
  def value(self, v):
   this.set_value(v);


  #
  # 最大值(缺省为100)。
  #
  #
  @property
  def max(self):
    return progress_bar_t_get_prop_max(self.nativeObj);

  @max.setter
  def max(self, v):
   this.set_max(v);


  #
  # 数值到字符串转换时的格式，缺省为"%d"。
  #
  #
  @property
  def format(self):
    return progress_bar_t_get_prop_format(self.nativeObj);

  @format.setter
  def format(self, v):
   this.set_format(v);


  #
  # 进度条的是否为垂直方向。
  #
  #
  @property
  def vertical(self):
    return progress_bar_t_get_prop_vertical(self.nativeObj);

  @vertical.setter
  def vertical(self, v):
   this.set_vertical(v);


  #
  # 是否显示文本。
  #
  #
  @property
  def show_text(self):
    return progress_bar_t_get_prop_show_text(self.nativeObj);

  @show_text.setter
  def show_text(self, v):
   this.set_show_text(v);


  #
  # 是否反向显示。如果为TRUE，水平方向从右向左表示增加，垂直方向从上到下表示增加。
  #
  #
  @property
  def reverse(self):
    return progress_bar_t_get_prop_reverse(self.nativeObj);

  @reverse.setter
  def reverse(self, v):
   this.set_reverse(v);


#
# row。一个简单的容器控件，用于水平排列其子控件。
#
#它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
#子控件的布局可用layout\_children属性指定。
#请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
#
#row\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于row\_t控件。
#
#在xml中使用"row"标签创建row。如：
#
#```xml
#<row x="0" y="0" w="100%" h="100%" children_layout="default(c=0,r=1)">
#<button name="open:basic" text="Basic"/>
#<button name="open:button" text="Buttons"/>
#<button name="open:edit" text="Edits"/>
#<button name="open:keyboard" text="KeyBoard"/>
#</row>
#```
#
#可用通过style来设置控件的显示风格，如背景颜色等。如：
#
#```xml
#<style name="default" border_color="#a0a0a0">
#<normal     bg_color="#f0f0f0" />
#</style>
#```
#
#
class TRow (TWidget):
  def __init__(self, nativeObj):
    super(TRow, self).__init__(nativeObj)


  #
  # 创建row对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TRow(row_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为row对象(供脚本语言使用)。
  # 
  # @param widget row对象。
  #
  # @return row对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TRow(row_cast(awtk_get_native_obj(widget)));


#
# 滑块控件。
#
#slider\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于slider\_t控件。
#
#在xml中使用"slider"标签创建滑块控件。如：
#
#```xml
#<slider x="center" y="10" w="80%" h="20" value="10"/>
#<slider style="img" x="center" y="50" w="80%" h="30" value="20" />
#<slider style="img" x="center" y="90" w="80%" h="30" value="30" min="5" max="50" step="5"/>
#```
#
#> 更多用法请参考：
#[basic](https://github.com/zlgopen/awtk/blob/master/design/default/ui/basic.xml)
#
#在c代码中使用函数slider\_create创建滑块控件。如：
#
#
#> 完整示例请参考：
#[slider demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/slider.c)
#
#可用通过style来设置控件的显示风格，如图片和颜色等等。如：
#
#```xml
#<style name="img" bg_image="slider_bg" fg_image="slider_fg">
#<normal icon="slider_drag"/>
#<pressed icon="slider_drag_p"/>
#<over icon="slider_drag_o"/>
#</style>
#```
#
#> 更多用法请参考：
#[theme
#default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L179)
#
#
class TSlider (TWidget):
  def __init__(self, nativeObj):
    super(TSlider, self).__init__(nativeObj)


  #
  # 创建slider对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TSlider(slider_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为slider对象(供脚本语言使用)。
  # 
  # @param widget slider对象。
  #
  # @return slider对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TSlider(slider_cast(awtk_get_native_obj(widget)));


  #
  # 设置滑块的值。
  # 
  # @param value 值
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_value(self, value): 
    return slider_set_value(awtk_get_native_obj(self), value);


  #
  # 设置滑块的最小值。
  # 
  # @param min 最小值
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_min(self, min): 
    return slider_set_min(awtk_get_native_obj(self), min);


  #
  # 设置滑块的最大值。
  # 
  # @param max 最大值
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_max(self, max): 
    return slider_set_max(awtk_get_native_obj(self), max);


  #
  # 设置滑块的拖动的最小单位。
  # 
  # @param step 拖动的最小单位。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_step(self, step): 
    return slider_set_step(awtk_get_native_obj(self), step);


  #
  # 设置bar的宽度或高度。
  # 
  # @param bar_size bar的宽度或高度。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_bar_size(self, bar_size): 
    return slider_set_bar_size(awtk_get_native_obj(self), bar_size);


  #
  # 设置滑块的方向。
  # 
  # @param vertical 是否为垂直方向。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_vertical(self, vertical): 
    return slider_set_vertical(awtk_get_native_obj(self), vertical);


  #
  # 值。
  #
  #
  @property
  def value(self):
    return slider_t_get_prop_value(self.nativeObj);

  @value.setter
  def value(self, v):
   this.set_value(v);


  #
  # 最小值。
  #
  #
  @property
  def min(self):
    return slider_t_get_prop_min(self.nativeObj);

  @min.setter
  def min(self, v):
   this.set_min(v);


  #
  # 最大值。
  #
  #
  @property
  def max(self):
    return slider_t_get_prop_max(self.nativeObj);

  @max.setter
  def max(self, v):
   this.set_max(v);


  #
  # 拖动的最小单位。
  #
  #
  @property
  def step(self):
    return slider_t_get_prop_step(self.nativeObj);

  @step.setter
  def step(self, v):
   this.set_step(v);


  #
  # 滑块的是否为垂直方向。
  #
  #
  @property
  def vertical(self):
    return slider_t_get_prop_vertical(self.nativeObj);

  @vertical.setter
  def vertical(self, v):
   this.set_vertical(v);


  #
  # 轴的宽度或高度（单位：像素），为0表示为控件的宽度或高度的一半，缺省为0。
  #
  #
  @property
  def bar_size(self):
    return slider_t_get_prop_bar_size(self.nativeObj);

  @bar_size.setter
  def bar_size(self, v):
   this.set_bar_size(v);


  #
  # 滑块的宽度或高度（单位：像素），缺省为10。
  #
  #
  @property
  def dragger_size(self):
    return slider_t_get_prop_dragger_size(self.nativeObj);


  #
  # 滑块的宽度或高度是否与icon适应，缺省为true。
  #
  #
  @property
  def dragger_adapt_to_icon(self):
    return slider_t_get_prop_dragger_adapt_to_icon(self.nativeObj);


  #
  # 是否允许在轴上滑动来改变滑块位置，缺省为FALSE。
  #
  #
  @property
  def slide_with_bar(self):
    return slider_t_get_prop_slide_with_bar(self.nativeObj);


#
# 标签按钮分组控件。
#
#一个简单的容器，主要用于对标签按钮进行布局和管理。
#
#tab\_button\_group\_t是[widget\_t](widget_t.md)的子类控件，
#widget\_t的函数均适用于tab\_button\_group\_t控件。
#
#在xml中使用"tab\_button\_group"标签创建标签按钮分组控件。如：
#
#```xml
#<tab_button_group x="c" y="bottom:10" w="90%" h="30" compact="true"
#<tab_button text="General"/>
#<tab_button text="Network" value="true" />
#<tab_button text="Security"/>
#</tab_button_group>
#```
#
#> 更多用法请参考：
#[tab control](https://github.com/zlgopen/awtk/blob/master/design/default/ui/)
#
#可用通过style来设置控件的显示风格，如颜色等等。如：
#
#```xml
#<tab_button_group>
#<style name="default">
#<normal/>
#</style>
#</tab_button_group>
#```
#
#
class TTabButtonGroup (TWidget):
  def __init__(self, nativeObj):
    super(TTabButtonGroup, self).__init__(nativeObj)


  #
  # 创建tab_button_group对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TTabButtonGroup(tab_button_group_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 设置compact。
  # 
  # @param compact 是否使用紧凑布局(缺省FALSE)。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_compact(self, compact): 
    return tab_button_group_set_compact(awtk_get_native_obj(self), compact);


  #
  # 设置scrollable。
  # 
  # @param scrollable 是否允许滚动(缺省FALSE)。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_scrollable(self, scrollable): 
    return tab_button_group_set_scrollable(awtk_get_native_obj(self), scrollable);


  #
  # 转换tab_button_group对象(供脚本语言使用)。
  # 
  # @param widget tab_button_group对象。
  #
  # @return tab_button_group对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TTabButtonGroup(tab_button_group_cast(awtk_get_native_obj(widget)));


  #
  # 紧凑型排版子控件(缺省FALSE)。
  #
  #
  @property
  def compact(self):
    return tab_button_group_t_get_prop_compact(self.nativeObj);

  @compact.setter
  def compact(self, v):
   this.set_compact(v);


  #
  # 是否支持滚动(缺省FALSE)。
  #
  #> 紧凑型排版子控件时才支持滚动。
  #
  #
  @property
  def scrollable(self):
    return tab_button_group_t_get_prop_scrollable(self.nativeObj);

  @scrollable.setter
  def scrollable(self, v):
   this.set_scrollable(v);


#
# 标签按钮控件。
#
#标签按钮有点类似单选按钮，但点击标签按钮之后会自动切换当前的标签页。
#
#tab\_button\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于tab\_button\_t控件。
#
#在xml中使用"tab\_button"标签创建标签按钮控件。如：
#
#```xml
#<!-- tab_button_view_page1.xml -->
#<view w="100%" h="100%">
#<label x="c" y="m" w="100%" h="60" text="page1" />
#<button name="close" x="c" y="bottom:100" w="80" h="40" text="Close" />
#</view>
#```
#
#```xml
#<!-- tab_button dynamic load UI -->
#<pages name="pages" x="right" y="0" w="70%" h="100%">
#</pages>
#<list_view x="0" y="0" w="30%" h="100%" item_height="40" auto_hide_scroll_bar="true">
#<scroll_view name="view" x="0"  y="0" w="-12" h="100%">
#<tab_button text="page1" load_ui="tab_button_view_page1" value="true"/>
#<tab_button text="page2" load_ui="tab_button_view_page2" />
#<tab_button text="page3" load_ui="tab_button_view_page3" />
#<scroll_view />
#<scroll_bar_d name="bar" x="right" y="0" w="12" h="100%" value="0"/>
#</list_view>
#```
#
#```xml
#<!-- tab_button static load UI -->
#<tab_button_group x="c" y="bottom:10" w="90%" h="30" compact="true"
#<tab_button text="General"/>
#<tab_button text="Network" value="true" />
#<tab_button text="Security"/>
#</tab_button_group>
#```
#
#标签按钮一般放在标签按钮分组中，布局由标签按钮分组控件决定，不需要指定自己的布局参数和坐标。
#
#> 更多用法请参考：
#[tab control](https://github.com/zlgopen/awtk/blob/master/design/default/ui/)
#
#可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
#
#```xml
#<tab_button>
#<style name="default" border_color="#a0a0a0"  text_color="black">
#<normal     bg_color="#d0d0d0" />
#<pressed    bg_color="#f0f0f0" />
#<over       bg_color="#e0e0e0" />
#<normal_of_active     bg_color="#f0f0f0" />
#<pressed_of_active    bg_color="#f0f0f0" />
#<over_of_active       bg_color="#f0f0f0" />
#</style>
#</tab_button>
#```
#
#
class TTabButton (TWidget):
  def __init__(self, nativeObj):
    super(TTabButton, self).__init__(nativeObj)


  #
  # 创建tab_button对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TTabButton(tab_button_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换tab_button对象(供脚本语言使用)。
  # 
  # @param widget tab_button对象。
  #
  # @return tab_button对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TTabButton(tab_button_cast(awtk_get_native_obj(widget)));


  #
  # 设置为当前标签。
  # 
  # @param value 是否为当前标签。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_value(self, value): 
    return tab_button_set_value(awtk_get_native_obj(self), value);


  #
  # 设置控件的图标。
  # 
  # @param name 当前项的图标。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_icon(self, name): 
    return tab_button_set_icon(awtk_get_native_obj(self), name);


  #
  # 设置控件的active图标。
  # 
  # @param name 当前项的图标。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_active_icon(self, name): 
    return tab_button_set_active_icon(awtk_get_native_obj(self), name);


  #
  # 设置控件动态加载显示UI。
  # 
  # @param name 动态加载UI的资源名称。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_load_ui(self, name): 
    return tab_button_set_load_ui(awtk_get_native_obj(self), name);


  #
  # 值。
  #
  #
  @property
  def value(self):
    return tab_button_t_get_prop_value(self.nativeObj);

  @value.setter
  def value(self, v):
   this.set_value(v);


  #
  # 激活后加载的UI名字。
  #
  #
  @property
  def load_ui(self):
    return tab_button_t_get_prop_load_ui(self.nativeObj);

  @load_ui.setter
  def load_ui(self, v):
   this.set_load_ui(v);


  #
  # 当前项的图标的名称。
  #
  #
  @property
  def active_icon(self):
    return tab_button_t_get_prop_active_icon(self.nativeObj);

  @active_icon.setter
  def active_icon(self, v):
   this.set_active_icon(v);


  #
  # 非当前项的图标的名称。
  #
  #
  @property
  def icon(self):
    return tab_button_t_get_prop_icon(self.nativeObj);

  @icon.setter
  def icon(self, v):
   this.set_icon(v);


#
# 标签控件。
#
#它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
#
#标签控件通常会包含一个pages控件和一个tab\_button\_group控件。
#
#
#
#tab\_control\_t是[widget\_t](widget_t.md)的子类控件，
#widget\_t的函数均适用于tab\_control\_t控件。
#
#在xml中使用"tab\_control"标签创建标签控件。如：
#
#```xml
#<tab_control x="0" y="0" w="100%" h="100%"
#<pages x="c" y="20" w="90%" h="-60" value="1">
#...
#</pages>
#<tab_button_group>
#...
#</tab_button_group>
#</tab_control>
#```
#
#> 更多用法请参考：
#[tab control](https://github.com/zlgopen/awtk/blob/master/design/default/ui/)
#
#
class TTabControl (TWidget):
  def __init__(self, nativeObj):
    super(TTabControl, self).__init__(nativeObj)


  #
  # 创建tab_control对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TTabControl(tab_control_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换tab_control对象(供脚本语言使用)。
  # 
  # @param widget tab_control对象。
  #
  # @return tab_control对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TTabControl(tab_control_cast(awtk_get_native_obj(widget)));


#
# 一个通用的容器控件。
#
#它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
#子控件的布局可用layout\_children属性指定。
#请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
#
#view\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于view\_t控件。
#
#在xml中使用"view"标签创建view。如：
#
#```xml
#<view x="0" y="0" w="100%" h="100%" children_layout="default(c=2,r=2,m=5,s=5)">
#</view>
#```
#
#可用通过style来设置控件的显示风格，如背景颜色等。如：
#
#```xml
#<style name="default" border_color="#a0a0a0">
#<normal     bg_color="#f0f0f0" />
#</style>
#```
#
#
class TView (TWidget):
  def __init__(self, nativeObj):
    super(TView, self).__init__(nativeObj)


  #
  # 创建view对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TView(view_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 设置缺省获得焦点的子控件(可用控件名或类型)。
  # 
  # @param default_focused_child 缺省获得焦点的子控件(可用控件名或类型)。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_default_focused_child(self, default_focused_child): 
    return view_set_default_focused_child(awtk_get_native_obj(self), default_focused_child);


  #
  # 转换为view对象(供脚本语言使用)。
  # 
  # @param widget view对象。
  #
  # @return view对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TView(view_cast(awtk_get_native_obj(widget)));


  #
  # 缺省获得焦点的子控件(可用控件名或类型)。
  #
  #> view作为pages/slideview的直接子控件才需要设置。
  #> 正常情况下，一个窗口只能指定一个初始焦点。
  #> 但是对于pages/slideview来说，可能希望每一个页面都有一个初始焦点，此时可用default\_focused\_child来指定。
  #
  #
  @property
  def default_focused_child(self):
    return view_t_get_prop_default_focused_child(self.nativeObj);

  @default_focused_child.setter
  def default_focused_child(self, v):
   this.set_default_focused_child(v);


#
# 对话框。 对话框是一种特殊的窗口，大小和位置可以自由设置。
#
#AWTK中的对话框可以是模态的，也可以是非模态的。
#
#如果dialog有透明或半透效果则不支持窗口动画。
#
#> 由于浏览器中无法实现主循环嵌套，因此无法实现模态对话框。
#如果希望自己写的AWTK应用程序可以在浏览器(包括各种小程序)中运行或演示，
#请避免使用模态对话框。
#
#对话框通常由对话框标题和对话框客户区两部分组成：
#
#
#
#dialog\_t是[window\_base\_t](window_base_t.md)的子类控件，window\_base\_t的函数均适用于dialog\_t控件。
#
#在xml中使用"dialog"标签创建对话框。如：
#
#```xml
#<dialog anim_hint="center_scale(duration=300)" x="c" y="m" w="80%" h="160" text="Dialog">
#<dialog_title x="0" y="0" w="100%" h="30" text="Hello AWTK" />
#<dialog_client x="0" y="bottom" w="100%" h="-30">
#<label name="" x="center" y="middle:-20" w="200" h="30" text="Are you ready?"/>
#<button name="quit" x="10" y="bottom:10" w="40%" h="30" text="确定"/>
#<button name="quit" x="right:10" y="bottom:10" w="40%" h="30" text="取消"/>
#</dialog_client>
#</dialog>
#```
#
#如果你不需要对话框的标题，可以这样写：
#
#```xml
#<dialog anim_hint="center_scale(duration=300)" x="c" y="m" w="80%" h="160" text="Dialog">
#<label name="" x="center" y="middle:-20" w="200" h="30" text="Are you ready?"/>
#<button name="quit" x="10" y="bottom:10" w="40%" h="30" text="确定"/>
#<button name="quit" x="right:10" y="bottom:10" w="40%" h="30" text="取消"/>
#</dialog>
#```
#
#打开非模态对话框时，其用法与普通窗口一样。打开非模态对话框时，还需要调用dialog\_modal。
#
#
#关闭模态对话框用dialog\_quit
#
#
#关闭非模态对话框用window\_close。
#
#
#> 更多用法请参考：
#[dialog.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/)
#
#> 完整C代码示例请参考：
#
#* [非模态对话框](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/dialog.c)
#
#* [模态对话框](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/dialog_modal.c)
#
#可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
#
#```xml
#<style name="default">
#<normal border_color="#606060" />
#</style>
#```
#
#> 更多用法请参考：
#[theme default]
#(https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L324)
#
#
class TDialog (TWindowBase):
  def __init__(self, nativeObj):
    super(TDialog, self).__init__(nativeObj)


  #
  # 创建dialog对象。
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return dialog对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TDialog(dialog_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 创建dialog对象，同时创建title/client。
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return dialog对象。
  #
  @classmethod
  def create_simple(cls, parent, x, y, w, h): 
    return  TDialog(dialog_create_simple(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换dialog对象(供脚本语言使用)。
  # 
  # @param widget dialog对象。
  #
  # @return dialog对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TDialog(dialog_cast(awtk_get_native_obj(widget)));


  #
  # 获取title控件。
  # 
  #
  # @return title对象。
  #
  def get_title(self): 
    return  TWidget(dialog_get_title(awtk_get_native_obj(self)));


  #
  # 获取client控件。
  # 
  #
  # @return client对象。
  #
  def get_client(self): 
    return  TWidget(dialog_get_client(awtk_get_native_obj(self)));


  #
  # 从资源文件中加载并创建Dialog对象。
  #
  #本函数在ui\_loader/ui\_builder_default里实现。
  # 
  # @param name dialog的名称。
  #
  # @return 对象。
  #
  @classmethod
  def open(cls, name): 
    return  TDialog(dialog_open(name));


  #
  # 设置对话框的标题文本。
  # 
  # @param title 标题。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_title(self, title): 
    return dialog_set_title(awtk_get_native_obj(self), title);


  #
  # 模态显示对话框。
  #dialog_modal返回后，dialog对象将在下一个idle函数中回收。
  #也就是在dialog_modal调用完成后仍然可以访问dialog中控件，直到本次事件结束。
  # 
  #
  # @return 返回退出码。
  #
  def modal(self): 
    return dialog_modal(awtk_get_native_obj(self));


  #
  # 退出模态显示，关闭对话框。
  #
  #> 比如，在对话框中关闭按钮的事件处理函数中，调用本函数关闭对话框。
  # 
  # @param code 退出码，作为dialog_modal的返回值(参考：[dialog_quit_code_t](dialog_quit_code_t.md))。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def quit(self, code): 
    return dialog_quit(awtk_get_native_obj(self), code);


  #
  # 检查对话框是否已经退出模态。
  # 
  #
  # @return 返回TRUE表示已经退出，否则表示没有。
  #
  def is_quited(self): 
    return dialog_is_quited(awtk_get_native_obj(self));


  #
  # 检查对话框是否为模态对话框。
  # 
  #
  # @return 返回TRUE表示是模态对话框，否则表示不是。
  #
  def is_modal(self): 
    return dialog_is_modal(awtk_get_native_obj(self));


  #
  # 显示『短暂提示信息』对话框。
  #
  #窗体样式由dialog_toast.xml文件决定。
  # 
  # @param text 文本内容。
  # @param duration 显示时间(单位为毫秒)。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  @classmethod
  def toast(cls, text, duration): 
    return dialog_toast(text, duration);


  #
  # 显示『提示信息』对话框。
  #
  #窗体样式由dialog_info.xml文件决定。
  # 
  # @param title 标题。
  # @param text 文本内容。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  @classmethod
  def info(cls, title, text): 
    return dialog_info(title, text);


  #
  # 显示『警告』对话框。
  #
  #窗体样式由dialog_warn.xml文件决定。
  # 
  # @param title 标题。
  # @param text 文本内容。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  @classmethod
  def warn(cls, title, text): 
    return dialog_warn(title, text);


  #
  # 显示『确认』对话框。
  #
  #窗体样式由dialog_confirm.xml文件决定。
  # 
  # @param title 标题。
  # @param text 文本内容。
  #
  # @return 返回RET_OK表示确认，否则表示取消。
  #
  @classmethod
  def confirm(cls, title, text): 
    return dialog_confirm(title, text);


  #
  # 对话框高亮策略。
  #
  #> 请参考 [对话框高亮策略](https://github.com/zlgopen/awtk/blob/master/docs/dialog_highlight.md)
  #
  #
  @property
  def highlight(self):
    return dialog_t_get_prop_highlight(self.nativeObj);


#
# 原生窗口。
#
#
class TNativeWindow (TObject):
  def __init__(self, nativeObj):
    super(TNativeWindow, self).__init__(nativeObj)


  #
  # 移动窗口。
  # 
  # @param x x坐标。
  # @param y y坐标。
  # @param force 无论是否shared都move。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def move(self, x, y, force): 
    return native_window_move(awtk_get_native_obj(self), x, y, force);


  #
  # 调整窗口大小。
  # 
  # @param w 宽。
  # @param h 高。
  # @param force 无论是否shared都resize。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def resize(self, w, h, force): 
    return native_window_resize(awtk_get_native_obj(self), w, h, force);


  #
  # 最小化窗口。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def minimize(self): 
    return native_window_minimize(awtk_get_native_obj(self));


  #
  # 最大化窗口。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def maximize(self): 
    return native_window_maximize(awtk_get_native_obj(self));


  #
  # 恢复窗口大小。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def restore(self): 
    return native_window_restore(awtk_get_native_obj(self));


  #
  # 窗口居中。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def center(self): 
    return native_window_center(awtk_get_native_obj(self));


  #
  # 是否显示边框。
  # 
  # @param show 是否显示。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def show_border(self, show): 
    return native_window_show_border(awtk_get_native_obj(self), show);


  #
  # 是否全屏。
  # 
  # @param fullscreen 是否全屏。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_fullscreen(self, fullscreen): 
    return native_window_set_fullscreen(awtk_get_native_obj(self), fullscreen);


  #
  # 设置鼠标光标。
  # 
  # @param name 鼠标光标的名称。
  # @param img 鼠标光标的图片。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_cursor(self, name, img): 
    return native_window_set_cursor(awtk_get_native_obj(self), name, awtk_get_native_obj(img));


#
# 窗口。
#
#缺省的应用程序窗口，占用除system\_bar\_t之外的整个区域，请不要修改它的位置和大小(除非你清楚后果)。
#
#window\_t是[window\_base\_t](window_base_t.md)的子类控件，window\_base\_t的函数均适用于window\_t控件。
#
#在xml中使用"window"标签创建窗口。无需指定坐标和大小，可以指定窗体样式和动画名称。如：
#
#```xml
#<window theme="basic" anim_hint="htranslate">
#...
#</window>
#```
#
#>
#更多用法请参考：[window.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/)
#
#在c代码中使用函数window\_create创建窗口。如：
#
#
#> 无需指定父控件、坐标和大小，使用0即可。
#
#> 完整示例请参考：[window
#demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/)
#
#可用通过style来设置窗口的风格，如背景颜色或图片等。如：
#
#```xml
#<style name="bricks">
#<normal bg_image="bricks"  bg_image_draw_type="repeat"/>
#</style>
#```
#
#> 更多用法请参考：[theme
#default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L0)
#
#
class TWindow (TWindowBase):
  def __init__(self, nativeObj):
    super(TWindow, self).__init__(nativeObj)


  #
  # 创建window对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TWindow(window_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 以缺省的方式创建window对象。
  # 
  #
  # @return 对象。
  #
  @classmethod
  def create_default(cls): 
    return  TWindow(window_create_default());


  #
  # 设置为全屏窗口。
  #
  #>如果app_type是SIMULATOR，全屏是指与LCD相同大小，而非让SDL窗口全屏。
  # 
  # @param fullscreen 是否全屏。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_fullscreen(self, fullscreen): 
    return window_set_fullscreen(awtk_get_native_obj(self), fullscreen);


  #
  # 当设计分辨率和实际分辨率不一致时，自动调整子控件的位置和大小。
  #
  #> 当子控件有self_layout参数或者子控件的父控件有children_layout参数时，不会自动调整。
  # 
  # @param design_w 设计时宽度。
  # @param design_h 设计时高度。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_auto_scale_children(self, design_w, design_h): 
    return window_set_auto_scale_children(awtk_get_native_obj(self), design_w, design_h);


  #
  # 从资源文件中加载并创建window_base对象。本函数在ui_loader/ui_builder_default里实现。
  # 
  # @param name window的名称。
  #
  # @return 对象。
  #
  @classmethod
  def open(cls, name): 
    return  TWindow(window_open(name));


  #
  # 从资源文件中加载并创建window对象。本函数在ui_loader/ui_builder_default里实现。
  # 
  # @param name window的名称。
  # @param to_close 关闭该窗口。
  #
  # @return 对象。
  #
  @classmethod
  def open_and_close(cls, name, to_close): 
    return  TWindow(window_open_and_close(name, awtk_get_native_obj(to_close)));


  #
  # 关闭窗口。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def close(self): 
    return window_close(awtk_get_native_obj(self));


  #
  # 立即无条件关闭窗口(无动画)。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def close_force(self): 
    return window_close_force(awtk_get_native_obj(self));


  #
  # 转换为window对象(供脚本语言使用)。
  # 
  # @param widget window对象。
  #
  # @return window对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TWindow(window_cast(awtk_get_native_obj(widget)));


  #
  # 是否全屏。
  #
  #>对于模拟器，全屏是让窗口和LCD具有相同大小，而非让SDL窗口全屏。
  #
  #
  @property
  def fullscreen(self):
    return window_t_get_prop_fullscreen(self.nativeObj);

  @fullscreen.setter
  def fullscreen(self, v):
   this.set_fullscreen(v);


#
# GIF图片控件。
#
#> 注意：GIF图片的尺寸大于控件大小时会自动缩小图片，但一般的嵌入式系统的硬件加速都不支持图片缩放，
#所以缩放图片会导致性能明显下降。如果性能不满意时，请确认一下GIF图片的尺寸是否小余控件大小。
#
#gif\_image\_t是[image\_base\_t](image_base_t.md)的子类控件，image\_base\_t的函数均适用于gif\_image\_t控件。
#
#在xml中使用"gif"标签创建GIF图片控件。如：
#
#```xml
#<gif image="bee"/>
#```
#
#>更多用法请参考：
#[gif
#image](https://github.com/zlgopen/awtk/blob/master/design/default/ui/gif_image.xml)
#
#在c代码中使用函数gif\_image\_create创建GIF图片控件。如：
#
#
#> 创建之后:
#>
#> 需要用widget\_set\_image设置图片名称。
#
#> 完整示例请参考：[gif image demo](
#https://github.com/zlgopen/awtk-c-demos/blob/master/demos/gif_image.c)
#
#可用通过style来设置控件的显示风格，如背景和边框等。如：
#
#```xml
#<gif>
#<style name="border">
#<normal border_color="#000000" bg_color="#e0e0e0" text_color="black"/>
#</style>
#</gif>
#```
#
#> 更多用法请参考：[theme default](
#https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml)
#
#
class TGifImage (TImageBase):
  def __init__(self, nativeObj):
    super(TGifImage, self).__init__(nativeObj)


  #
  # 创建gif_image对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TGifImage(gif_image_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 播放。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def play(self): 
    return gif_image_play(awtk_get_native_obj(self));


  #
  # 停止(并重置index为-1)。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def stop(self): 
    return gif_image_stop(awtk_get_native_obj(self));


  #
  # 暂停。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def pause(self): 
    return gif_image_pause(awtk_get_native_obj(self));


  #
  # 转换为gif_image对象(供脚本语言使用)。
  # 
  # @param widget gif_image对象。
  #
  # @return gif_image对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TGifImage(gif_image_cast(awtk_get_native_obj(widget)));


#
# 软键盘。
#
#软键盘是一个特殊的窗口，由编辑器通过输入法自动打开和关闭。
#
#这里介绍一下定制软键盘的方法：
#
#编辑器输入类型和软键盘UI资源文件的对应关系:
#
#| 输入类型       | 软键盘UI资源文件|
#|----------------|:---------------:|
#| INPUT\_PHONE    | kb\_phone.xml    |
#| INPUT\_INT      | kb\_int.xml      |
#| INPUT\_FLOAT    | kb\_float.xml    |
#| INPUT\_UINT     | kb\_uint.xml     |
#| INPUT\_UFLOAT   | kb\_ufloat.xml   |
#| INPUT\_HEX      | kb\_hex.xml      |
#| INPUT\_EMAIL    | kb\_ascii.xml    |
#| INPUT\_PASSWORD | kb\_ascii.xml    |
#| INPUT\_ASCII    | kb\_ascii.xml    |
#| INPUT\_CUSTOM   | 使用自定义的键盘 |
#| 其它            | kb\_default.xml  |
#
#keyboard中按钮子控件的名称有些特殊要求：
#
#|  名称          | 功能            |
#|----------------|:---------------:|
#| return         | 回车键          |
#| action         | 定制按钮        |
#| backspace      | 删除键          |
#| tab            | tab键           |
#| space          | 空格键          |
#| close          | 关闭软键盘       |
#| clear          | 清除编辑器的内容 |
#| cancel         | 恢复编辑器的内容 |
#| back           | 关闭当前窗口     |
#| back_to_home   | 返回home窗口    |
#| 前缀key:        | 键值           |
#| 前缀hard_key:   | 模拟物理键盘    |
#| 前缀page:       | 切换到页面      |
#| 前缀opt:        | 多个字符选择一个，点击切换到下一个，超时提交字符(用于实现九宫格输入) |
#
#示例：
#
#* 按键"a"，提交输入法处理。
#
#```xml
#<button repeat="300" name="key:a" text="a"/>
#```
#
#* 字符"a"，直接提交到编辑器。
#
#```xml
#<button repeat="300" name="a" text="a"/>
#```
#
#* 模拟物理键盘数字"1"，触发key down/up事件（可以用来选择候选字）。
#
#```xml
#<button repeat="300" name="hard_key:1" text="1"/>
#```
#
#* 九宫格输入
#
#```xml
#<button repeat="300" name="opt:._@/#" text="._@/#"/>
#<button repeat="300" name="opt:abc" text="abc"/>
#<button repeat="300" name="opt:def" text="def"/>
#```
#
#
#* 输入语言切换
#
#有的输入法，同时支持输入多种语言。
#比如T9，可以同时支持中文和英文输入，配合软键盘随时切换输入的语言。
#
#可以在pages的页面里指定lang属性，切换到该页面时会设置输入法的语言。如：
#
#```xml
#<pages x="0" y="bottom" w="100%" h="-28" active="2">
#<view name="lower" lang="en_us"
#x="0" y="0" w="100%" h="100%" children_layout="default(r=4,c=4,s=2,m=2)">
#...
#</view>
#<view name="chinese" lang="zh_cn"
#x="0" y="0" w="100%" h="100%" children_layout="default(r=4,c=4,s=2,m=2)">
#...
#</view>
#</pages>
#```
#
#> 更多用法请参考：
#[kb_default](https://github.com/zlgopen/awtk/blob/master/design/default/ui/kb_default.xml)
#
#
class TKeyboard (TWindowBase):
  def __init__(self, nativeObj):
    super(TKeyboard, self).__init__(nativeObj)


  #
  # 创建keyboard对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TKeyboard(keyboard_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为keyboard对象(供脚本语言使用)。
  # 
  # @param widget keyboard对象。
  #
  # @return keyboard对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TKeyboard(keyboard_cast(awtk_get_native_obj(widget)));


#
# mutable图片控件。
#
#像摄像头和视频的图像是变化的，每一帧都不同，我们把这类图片称为mutable image。
#
#本控件辅助实现摄像头和视频的显示功能。
#
#mutable\_image\_t是[image\_base\_t](image_base_t.md)的子类控件，image\_base\_t的函数均适用于mutable\_image\_t控件。
#
#在xml中使用"mutable\_image"标签创建mutable图片控件。如：
#
#```xml
#<mutable_image w="100%" h="100%"/>
#```
#
#>更多用法请参考：
#[mutable
#image](https://github.com/zlgopen/awtk/blob/master/design/default/ui/mutable_image.xml)
#
#在c代码中使用函数mutable\_image\_create创建mutable图片控件。如：
#
#
#> 创建之后:
#>
#> 需要用mutable\_image\_set\_create\_image设置创建图片的回调函数。
#> 需要用mutable\_image\_set\_prepare\_image设置准备图片的回调函数。
#
#> 完整示例请参考：[mutable image demo](
#https://github.com/zlgopen/awtk-c-demos/blob/master/demos/mutable_image.c)
#
#一般不需通过style来设置控件的显示风格，如果在特殊情况下需要，可以参考其它控件。
#
#
class TMutableImage (TImageBase):
  def __init__(self, nativeObj):
    super(TMutableImage, self).__init__(nativeObj)


#
# SVG图片控件。
#
#svg\_image\_t是[image\_base\_t](image_base_t.md)的子类控件，image\_base\_t的函数均适用于svg\_image\_t控件。
#
#在xml中使用"svg"标签创建SVG图片控件。如：
#
#```xml
#<svg image="girl"/>
#```
#
#>更多用法请参考：[svg image](
#https://github.com/zlgopen/awtk/blob/master/design/default/ui/svg_image.xml)
#
#在c代码中使用函数svg\_image\_create创建SVG图片控件。如：
#
#
#> 创建之后: 需要用widget\_set\_image设置图片名称。
#
#> 完整示例请参考：[svg image demo](
#https://github.com/zlgopen/awtk-c-demos/blob/master/demos/svg_image.c)
#
#可用通过style来设置控件的显示风格，如背景和边框等。如：
#
#```xml
#<svg>
#<style name="default">
#<normal border_color="green" fg_color="red" />
#</style>
#</svg>
#```
#
#> 更多用法请参考：[theme default](
#https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml)
#
#
class TSvgImage (TImageBase):
  def __init__(self, nativeObj):
    super(TSvgImage, self).__init__(nativeObj)


  #
  # 创建svg_image对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TSvgImage(svg_image_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 设置控件的图片名称。
  #
  #> 如果需要显示文件系统中的图片，只需将图片名称换成实际的文件名，并加上"file://"前缀即可。
  # 
  # @param name 图片名称，该图片必须存在于资源管理器。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_image(self, name): 
    return svg_image_set_image(awtk_get_native_obj(self), name);


  #
  # 转换为svg_image对象(供脚本语言使用)。
  # 
  # @param widget svg_image对象。
  #
  # @return svg_image对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TSvgImage(svg_image_cast(awtk_get_native_obj(widget)));


#
# 单个idle的信息。
#
#
class TIdleInfo (TObject):
  def __init__(self, nativeObj):
    super(TIdleInfo, self).__init__(nativeObj)


  #
  # 转换为idle_info对象(供脚本语言使用)。
  # 
  # @param idle idle_info对象。
  #
  # @return idle_info对象。
  #
  @classmethod
  def cast(cls, idle): 
    return  TIdleInfo(idle_info_cast(awtk_get_native_obj(idle)));


  #
  # idle回调函数上下文。
  #
  #
  @property
  def ctx(self):
    return idle_info_t_get_prop_ctx(self.nativeObj);


  #
  # idle回调函数上下文。
  #
  #
  @property
  def extra_ctx(self):
    return idle_info_t_get_prop_extra_ctx(self.nativeObj);


  #
  # idle的ID
  #
  #> 为TK\_INVALID\_ID时表示无效idle。
  #
  #
  @property
  def id(self):
    return idle_info_t_get_prop_id(self.nativeObj);


#
# 简单的动态数组，内部存放value对象。
#
#访问时属性名称为：
#
#* "size"/"length" 用于获取数组的长度。
#* index 用于访问属性，-1可以用来追加新元素。
#
#
class TObjectArray (TObject):
  def __init__(self, nativeObj):
    super(TObjectArray, self).__init__(nativeObj)


  #
  # 创建对象。
  # 
  #
  # @return 返回object对象。
  #
  @classmethod
  def create(cls): 
    return  TObjectArray(object_array_create());


  #
  # for script gc
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def unref(self): 
    return object_array_unref(awtk_get_native_obj(self));


  #
  # 清除全部属性。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def clear_props(self): 
    return object_array_clear_props(awtk_get_native_obj(self));


  #
  # 在指定位置插入一个元素。
  # 
  # @param index 位置。
  # @param v 值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def insert(self, index, v): 
    return object_array_insert(awtk_get_native_obj(self), index, awtk_get_native_obj(v));


  #
  # 追加一个元素。
  # 
  # @param v 值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def push(self, v): 
    return object_array_push(awtk_get_native_obj(self), awtk_get_native_obj(v));


  #
  # 查找元素出现的第一个位置。
  # 
  # @param v 值。
  #
  # @return 如果找到返回其位置，否则返回-1。
  #
  def index_of(self, v): 
    return object_array_index_of(awtk_get_native_obj(self), awtk_get_native_obj(v));


  #
  # 查找元素出现的最后一个位置。
  # 
  # @param v 值。
  #
  # @return 如果找到返回其位置，否则返回-1。
  #
  def last_index_of(self, v): 
    return object_array_last_index_of(awtk_get_native_obj(self), awtk_get_native_obj(v));


  #
  # 在指定位置删除一个元素。
  # 
  # @param index 位置。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def remove(self, index): 
    return object_array_remove(awtk_get_native_obj(self), index);


  #
  # 在指定位置删除一个元素，并返回它。
  # 
  # @param index 位置。
  # @param v 用于返回值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def get_and_remove(self, index, v): 
    return object_array_get_and_remove(awtk_get_native_obj(self), index, awtk_get_native_obj(v));


  #
  # 属性个数。
  #
  #
  @property
  def size(self):
    return object_array_t_get_prop_size(self.nativeObj);


#
# 对象接口的缺省实现。
#
#内部使用有序数组保存所有属性，可以快速查找指定名称的属性。
#
#
class TObjectDefault (TObject):
  def __init__(self, nativeObj):
    super(TObjectDefault, self).__init__(nativeObj)


  #
  # 创建对象。
  # 
  #
  # @return 返回object对象。
  #
  @classmethod
  def create(cls): 
    return  TObjectDefault(object_default_create());


  #
  # for script gc
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def unref(self): 
    return object_default_unref(awtk_get_native_obj(self));


  #
  # 清除全部属性。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def clear_props(self): 
    return object_default_clear_props(awtk_get_native_obj(self));


  #
  # 属性个数。
  #
  #
  @property
  def props_size(self):
    return object_default_t_get_prop_props_size(self.nativeObj);


#
# 单个定时器的信息。
#
#
class TTimerInfo (TObject):
  def __init__(self, nativeObj):
    super(TTimerInfo, self).__init__(nativeObj)


  #
  # 转换为timer_info对象(供脚本语言使用)。
  # 
  # @param timer timer_info对象。
  #
  # @return timer_info对象。
  #
  @classmethod
  def cast(cls, timer): 
    return  TTimerInfo(timer_info_cast(awtk_get_native_obj(timer)));


  #
  # 定时器回调函数的上下文
  #
  #
  @property
  def ctx(self):
    return timer_info_t_get_prop_ctx(self.nativeObj);


  #
  # 定时器回调函数的上下文
  #
  #
  @property
  def extra_ctx(self):
    return timer_info_t_get_prop_extra_ctx(self.nativeObj);


  #
  # 定时器的ID
  #
  #> 为TK\_INVALID\_ID时表示无效定时器。
  #
  #
  @property
  def id(self):
    return timer_info_t_get_prop_id(self.nativeObj);


  #
  # 当前时间(相对时间，单位为毫秒)。
  #
  #
  @property
  def now(self):
    return timer_info_t_get_prop_now(self.nativeObj);


#
# 电阻屏校准窗口。
#
#calibration\_win\_t是[window\_base\_t](window_base_t.md)的子类控件，
#window\_base\_t的函数均适用于calibration\_win\_t控件。
#
#在xml中使用"calibration\_win"标签创建电阻屏校准窗口。如：
#
#```xml
#<calibration_win name="cali" w="100%" h="100%" text="Please click the center of cross">
#</calibration_win>
#```
#
#> 更多用法请参考：
#[window.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/calibration_win.xml)
#
#在c代码中使用函数calibration\_win\_create创建窗口。如：
#
#
#通过calibration\_win\_set\_on\_done注册回调函数，用于保存校准数据。
#
#
class TCalibrationWin (TWindowBase):
  def __init__(self, nativeObj):
    super(TCalibrationWin, self).__init__(nativeObj)


  #
  # 转换为calibration_win对象(供脚本语言使用)。
  # 
  # @param widget calibration_win对象。
  #
  # @return calibration_win对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TCalibrationWin(calibration_win_cast(awtk_get_native_obj(widget)));


#
# 下拉列表控件。
#
#点击右边的按钮，可弹出一个下拉列表，从中选择一项作为当前的值。
#
#combo\_box\_t是[edit\_t](edit_t.md)的子类控件，edit\_t的函数均适用于combo\_box\_t控件。
#
#在xml中使用"combo_box"标签创建下拉列表控件。
#
#列表选项可以直接写在"options"属性中。如：
#
#```xml
#<combo_box readonly="true" x="10" y="bottom:5" w="200" h="30" tr_text="ok"
#options="1:ok;2:cancel;"/>
#```
#
#列表选项也可以放在独立的窗口中，用属性"open_window"指定窗口的名称。如：
#
#```xml
#<combo_box open_window="language" readonly="true" x="10" y="bottom:50" w="200" h="30"
#tr_text="english"/>
#```
#
#language.xml:
#
#```xml
#<popup close_when_click_outside="true" h="80"
#<list_view x="0"  y="0" w="100%" h="100%" item_height="30">
#<scroll_view name="view" x="0"  y="0" w="-12" h="100%">
#<combo_box_item tr_text="english"/>
#<combo_box_item tr_text="chinese" />
#</scroll_view>
#<scroll_bar_d name="bar" x="right" y="0" w="12" h="100%" value="0"/>
#</list_view>
#</popup>
#```
#
#> 更多用法请参考：[combo_box.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/combo_box.xml)
#
#
#
#如果在文本比较长时，希望在获得焦点时文本自动滚动，可以放入一个hscroll_label为子控件，并命名为"value"。如：
#
#```xml
#<combo_box left_margin="6" readonly="true" x="10" y="50" w="80" h="30" options="leftttttttttt;centerrrrrrrrrrrrrrrr;rightttttttttt;"
#selected_index="1">
#<hscroll_label x="0" y="0" w="-30" h="100%"
#name="value"
#lull="1000"
#loop="true"
#yoyo="true"
#ellipses="true"
#only_parent_focus="true"/>
#<button style="combobox_down" x="right:5" y="middle" w="20" h="20"/>
#</combo_box>
#```
#
#在c代码中使用函数combo\_box\_create创建下拉列表控件。如：
#
#
#创建之后：
#
#* 用combo\_box\_set\_options设置可选项目。
#* 用combo\_box\_set\_selected\_index设置缺省项。
#
#> 完整示例请参考：[combo_box
#demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/combo_box.c)
#
#可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
#
#```xml
#<combo_box>
#<style name="default" border_color="#a0a0a0"  text_color="black" text_align_h="left">
#<normal     bg_color="#f0f0f0" />
#<focused    bg_color="#f0f0f0" border_color="black"/>
#<empty      bg_color="#f0f0f0" text_color="#a0a0a0" />
#</style>
#</combo_box>
#```
#
#* 1.combobox的下拉按钮的style名称为combobox_down，可以在窗体样式文件中设置。
#
#```xml
#<button>
#<style name="combobox_down" border_color="#a0a0a0">
#<normal     bg_color="#f0f0f0" icon="arrow_down_n"/>
#<pressed    bg_color="#c0c0c0" icon="arrow_down_p"/>
#<over       bg_color="#e0e0e0" icon="arrow_down_o"/>
#</style>
#</button>
#```
#
#* 2.combobox的弹出popup窗口的style名称为combobox_popup，可以在窗体样式文件中设置。
#
#```xml
#<popup>
#<style name="combobox_popup" border_color="red">
#<normal bg_color="#808080"/>
#</style>
#</popup>
#```
#
#> 更多用法请参考：[theme
#default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L422)
#
#
class TComboBox (TEdit):
  def __init__(self, nativeObj):
    super(TComboBox, self).__init__(nativeObj)


  #
  # 创建combo_box对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TComboBox(combo_box_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换combo_box对象(供脚本语言使用)。
  # 
  # @param widget combo_box对象。
  #
  # @return combo_box对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TComboBox(combo_box_cast(awtk_get_native_obj(widget)));


  #
  # 点击按钮时可以打开popup窗口，本函数可设置窗口的名称。
  # 
  # @param open_window 弹出窗口的名称。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_open_window(self, open_window): 
    return combo_box_set_open_window(awtk_get_native_obj(self), open_window);


  #
  # 重置所有选项。
  # 
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def reset_options(self): 
    return combo_box_reset_options(awtk_get_native_obj(self));


  #
  # 获取选项个数。
  # 
  #
  # @return 返回选项个数。
  #
  def count_options(self): 
    return combo_box_count_options(awtk_get_native_obj(self));


  #
  # 设置第index个选项为当前选中的选项。
  # 
  # @param index 选项的索引。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_selected_index(self, index): 
    return combo_box_set_selected_index(awtk_get_native_obj(self), index);


  #
  # 设置是否本地化(翻译)选项。
  # 
  # @param localize_options 是否本地化(翻译)选项。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_localize_options(self, localize_options): 
    return combo_box_set_localize_options(awtk_get_native_obj(self), localize_options);


  #
  # 设置值。
  # 
  # @param value 值。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_value(self, value): 
    return combo_box_set_value(awtk_get_native_obj(self), value);


  #
  # 设置item高度。
  # 
  # @param item_height item的高度。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_item_height(self, item_height): 
    return combo_box_set_item_height(awtk_get_native_obj(self), item_height);


  #
  # 追加一个选项。
  # 
  # @param value 值。
  # @param text 文本。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def append_option(self, value, text): 
    return combo_box_append_option(awtk_get_native_obj(self), value, text);


  #
  # 设置选项。
  # 
  # @param options 选项。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_options(self, options): 
    return combo_box_set_options(awtk_get_native_obj(self), options);


  #
  # 获取combo_box的值。
  # 
  #
  # @return 返回值。
  #
  def get_value(self): 
    return combo_box_get_value(awtk_get_native_obj(self));


  #
  # 获取combo_box的文本。
  # 
  #
  # @return 返回文本。
  #
  def get_text_value(self): 
    return combo_box_get_text(awtk_get_native_obj(self));


  #
  # 为点击按钮时，要打开窗口的名称。
  #
  #
  @property
  def open_window(self):
    return combo_box_t_get_prop_open_window(self.nativeObj);

  @open_window.setter
  def open_window(self, v):
   this.set_open_window(v);


  #
  # 当前选中的选项。
  #
  #
  @property
  def selected_index(self):
    return combo_box_t_get_prop_selected_index(self.nativeObj);

  @selected_index.setter
  def selected_index(self, v):
   this.set_selected_index(v);


  #
  # 值。
  #
  #
  @property
  def value(self):
    return combo_box_t_get_prop_value(self.nativeObj);

  @value.setter
  def value(self, v):
   this.set_value(v);


  #
  # 是否本地化(翻译)选项(缺省为TRUE)。
  #
  #
  @property
  def localize_options(self):
    return combo_box_t_get_prop_localize_options(self.nativeObj);

  @localize_options.setter
  def localize_options(self, v):
   this.set_localize_options(v);


  #
  # 设置可选项(冒号分隔值和文本，分号分隔选项，如:1:red;2:green;3:blue)。
  #
  #
  @property
  def options(self):
    return combo_box_t_get_prop_options(self.nativeObj);

  @options.setter
  def options(self, v):
   this.set_options(v);


  #
  # 下拉选项的高度。如果open_window为空，则使用缺省高度。
  #
  #
  @property
  def item_height(self):
    return combo_box_t_get_prop_item_height(self.nativeObj);

  @item_height.setter
  def item_height(self, v):
   this.set_item_height(v);


#
# 图片控件。
#
#用来显示一张静态图片，目前支持bmp/png/jpg等格式。
#
#如果要显示gif文件，请用[gif\_image](gif_image_t.md)。
#
#如果要显示svg文件，请用[svg\_image](svg_image_t.md)。
#
#如果需要支持勾选效果，请设置**selectable**属性。
#
#如果需要支持点击效果，请设置**clickable**属性。
#
#image\_t是[image\_base\_t](image_base_t.md)的子类控件，image\_base\_t的函数均适用于image\_t控件。
#
#在xml中使用"image"标签创建图片控件。如：
#
#```xml
#<image style="border" image="earth" draw_type="icon" />
#```
#
#> 更多用法请参考：
#[image.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/images.xml)
#
#在c代码中使用函数image\_create创建图片控件。如：
#
#
#> 创建之后:
#>
#> 需要用widget\_set\_image设置图片名称。
#>
#> 可以用image\_set\_draw\_type设置图片的绘制方式。
#
#> 绘制方式请参考[image\_draw\_type\_t](image_draw_type_t.md)
#
#> 绘制方式的属性值和枚举值:
#[image\_draw\_type\_name\_value](https://github.com/zlgopen/awtk/blob/master/src/base/enums.c#L98)
#
#> 完整示例请参考：
#[image demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/image.c)
#
#可用通过style来设置控件的显示风格，如背景和边框等。如：
#
#```xml
#<image>
#<style name="border">
#<normal border_color="#000000" bg_color="#e0e0e0" text_color="black"/>
#</style>
#</image>
#```
#
#> 更多用法请参考：
#[theme
#default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L313)
#
#
class TImage (TImageBase):
  def __init__(self, nativeObj):
    super(TImage, self).__init__(nativeObj)


  #
  # 创建image对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TImage(image_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 设置图片的绘制方式。
  # 
  # @param draw_type 绘制方式(仅在没有旋转和缩放时生效)。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_draw_type(self, draw_type): 
    return image_set_draw_type(awtk_get_native_obj(self), draw_type);


  #
  # 转换为image对象(供脚本语言使用)。
  # 
  # @param widget image对象。
  #
  # @return image对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TImage(image_cast(awtk_get_native_obj(widget)));


  #
  # 图片的绘制方式(仅在没有旋转和缩放时生效)。
  #
  #
  @property
  def draw_type(self):
    return image_t_get_prop_draw_type(self.nativeObj);

  @draw_type.setter
  def draw_type(self, v):
   this.set_draw_type(v);


#
# overlay窗口。
#
#overlay窗口有点类似于非模态的dialog，但是它位置和大小是完全自由的，窗口管理器不会对它做任何限制。
#
#如果overlay窗口有透明或半透效果，则不支持窗口动画，但可以通过移动窗口位置来实现类似动画的效果。
#
#overlay\_t是[window\_base\_t](window_base_t.md)的子类控件，window\_base\_t的函数均适用于overlay\_t控件。
#
#在xml中使用"overlay"标签创建窗口。需要指定坐标和大小，可以指定窗体样式和动画名称。如：
#
#```xml
#<overlay theme="basic" x="100" y="100" w="200" h="300">
#...
#</overlay>
#```
#
#>
#更多用法请参考：[overlay.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/)
#
#在c代码中使用函数overlay\_create创建窗口。如：
#
#
#> 完整示例请参考：[overlay
#demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/)
#
#可用通过style来设置窗口的风格，如背景颜色或图片等。如：
#
#```xml
#<style name="bricks">
#<normal bg_image="bricks"  bg_image_draw_type="repeat"/>
#</style>
#```
#
#> 更多用法请参考：[theme
#default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L0)
#
#
class TOverlay (TWindowBase):
  def __init__(self, nativeObj):
    super(TOverlay, self).__init__(nativeObj)


  #
  # 创建overlay对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TOverlay(overlay_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 设置是否启用点击穿透。
  # 
  # @param click_through 是否启用点击穿透。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_click_through(self, click_through): 
    return overlay_set_click_through(awtk_get_native_obj(self), click_through);


  #
  # 设置是否总是在最上面。
  # 
  # @param always_on_top 是否总是在最上面。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_always_on_top(self, always_on_top): 
    return overlay_set_always_on_top(awtk_get_native_obj(self), always_on_top);


  #
  # 转换为overlay对象(供脚本语言使用)。
  # 
  # @param widget overlay对象。
  #
  # @return overlay对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TOverlay(overlay_cast(awtk_get_native_obj(widget)));


  #
  # 点击穿透。点击没有子控件的位置，是否穿透到底层窗口。
  #
  #缺省不启用。
  #
  #
  @property
  def click_through(self):
    return overlay_t_get_prop_click_through(self.nativeObj);

  @click_through.setter
  def click_through(self, v):
   this.set_click_through(v);


  #
  # 是否总在最上面。
  #
  #缺省不启用。
  #
  #
  @property
  def always_on_top(self):
    return overlay_t_get_prop_always_on_top(self.nativeObj);

  @always_on_top.setter
  def always_on_top(self, v):
   this.set_always_on_top(v);


#
# 弹出窗口。
#
#弹出窗口是一种特殊的窗口，大小和位置可以自由设置，主要用来实现右键菜单和combo\_box的下列列表等功能。
#
#popup\_t是[window\_base\_t](window_base_t.md)的子类控件，window\_base\_t的函数均适用于popup\_t控件。
#
#在xml中使用"popup"标签创建弹出窗口。如：
#
#```xml
#<popup close_when_click_outside="true" x="c" y="m" w="80%" h="80"
#<list_view x="0"  y="0" w="100%" h="100%" item_height="30">
#<scroll_view name="view" x="0"  y="0" w="-12" h="100%">
#<combo_box_item tr_text="english"/>
#<combo_box_item tr_text="chinese" />
#</scroll_view>
#<scroll_bar_d name="bar" x="right" y="0" w="12" h="100%" value="0"/>
#</list_view>
#</popup>
#```
#
#>
#更多用法请参考：[popup](https://github.com/zlgopen/awtk/blob/master/design/default/ui/)
#
#在c代码中使用函数popup\_create创建弹出窗口。如：
#
#
#> 创建之后，和使用普通窗口是一样的。
#
#> 完整示例请参考：[combo_box.c](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/combo_box.c)
#
#可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
#
#```xml
#<popup>
#<style name="default" border_color="#a0a0a0">
#<normal bg_color="#f0f0f0"/>
#</style>
#</popup>
#```
#
#> 更多用法请参考：[theme
#default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L324)
#
#
class TPopup (TWindowBase):
  def __init__(self, nativeObj):
    super(TPopup, self).__init__(nativeObj)


  #
  # 创建popup对象。
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return popup对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TPopup(popup_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为popup对象(供脚本语言使用)。
  # 
  # @param widget popup对象。
  #
  # @return popup对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TPopup(popup_cast(awtk_get_native_obj(widget)));


  #
  # 设置点击时是否关闭窗口。
  # 
  # @param close_when_click 点击时是否关闭窗口。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_close_when_click(self, close_when_click): 
    return popup_set_close_when_click(awtk_get_native_obj(self), close_when_click);


  #
  # 设置点击窗口外部时是否关闭窗口。
  # 
  # @param close_when_click_outside 点击窗口外部时是否关闭窗口。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_close_when_click_outside(self, close_when_click_outside): 
    return popup_set_close_when_click_outside(awtk_get_native_obj(self), close_when_click_outside);


  #
  # 设置超时关闭时间(ms)。
  # 
  # @param close_when_timeout 大于0时，为定时器时间(ms)，超时关闭窗口。
  #
  # @return 返回RET_OK表示成功，否则表示失败。
  #
  def set_close_when_timeout(self, close_when_timeout): 
    return popup_set_close_when_timeout(awtk_get_native_obj(self), close_when_timeout);


  #
  # 点击时是否关闭窗口。
  #
  #
  @property
  def close_when_click(self):
    return popup_t_get_prop_close_when_click(self.nativeObj);

  @close_when_click.setter
  def close_when_click(self, v):
   this.set_close_when_click(v);


  #
  # 点击到窗口外时是否关闭窗口。
  #
  #
  @property
  def close_when_click_outside(self):
    return popup_t_get_prop_close_when_click_outside(self.nativeObj);

  @close_when_click_outside.setter
  def close_when_click_outside(self, v):
   this.set_close_when_click_outside(v);


  #
  # 超时后自动关闭窗口(ms)。
  #
  #
  @property
  def close_when_timeout(self):
    return popup_t_get_prop_close_when_timeout(self.nativeObj);

  @close_when_timeout.setter
  def close_when_timeout(self, v):
   this.set_close_when_timeout(v);


#
# spinbox控件。
#
#一个特殊的数值编辑器，将edit\_t和button\_t进行组合，方便编辑数值。
#
#点击向上的按钮将数值增加一个step，点击向下的按钮将数值减小一个step。
#step的值可以通过step属性进行设置。
#
#spin_box\_t是[edit\_t](edit_t.md)的子类控件，edit\_t的函数均适用于spin\_box\_t控件。
#
#在xml中使用"spin_box"标签创建spinbox控件。如：
#
#```xml
#<spin_box w="70%" input_type="int" min="-100" max="100" step="5">
#```
#
#>
#更多用法请参考：[spin_box.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/spinbox.xml)
#
#在c代码中使用函数spin_box\_create创建spinbox控件。如：
#
#
#> 创建之后:
#>
#> 可以用edit相关函数去设置它的各种属性。
#
#> 完整示例请参考：[spin_box
#demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/spin_box.c)
#
#可用通过style来设置控件的显示风格，如背景和边框等。如：
#
#```xml
#<spin_box>
#<style name="default" border_color="#a0a0a0"  text_color="black" text_align_h="left">
#<normal     bg_color="#f0f0f0" />
#<focused    bg_color="#f0f0f0" border_color="black"/>
#<disable    bg_color="gray" text_color="#d0d0d0" />
#<error      bg_color="#f0f0f0" text_color="red" />
#<empty      bg_color="#f0f0f0" text_color="#a0a0a0" />
#</style>
#</spin_box>
#```
#
#> 更多用法请参考：[theme
#default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L128)
#
#
class TSpinBox (TEdit):
  def __init__(self, nativeObj):
    super(TSpinBox, self).__init__(nativeObj)


  #
  # 创建spin_box对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TSpinBox(spin_box_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为spin_box对象(供脚本语言使用)。
  # 
  # @param widget spin_box对象。
  #
  # @return spin_box对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TSpinBox(spin_box_cast(awtk_get_native_obj(widget)));


#
# system\_bar窗口。
#
#system\_bar窗口是一种特殊的窗口，独占LCD顶部区域，用来显示当前窗口的标题和关闭按钮等内容。
#
#> system\_bar窗口需要在打开第一个应用程序窗口之前打开。
#
#system_bar对两个子控件会做特殊处理：
#
#* 1.名为"title"的label控件，自动显示当前主窗口的name或text。
#* 2.名为"close"的button控件，点击之后向当前主窗口发送EVT\_REQUEST\_CLOSE\_WINDOW消息。
#
#system\_bar\_t是[window\_base\_t](window_base_t.md)的子类控件，
#window\_base\_t的函数均适用于system\_bar\_t控件。
#
#在xml中使用"system\_bar"标签创建system\_bar窗口。如：
#
#```xml
#<system_bar h="30">
#<column x="0" y="0" w="-40" h="100%">
#<label style="title" x="10" y="m" w="55%" h="100%" name="title"/>
#<digit_clock style="time" x="r" y="m" w="40%" h="100%" format="hh:mm"/>
#</column>
#<button style="close" x="r:5" y="m" w="26" h="26" name="close" text="x"/>
#</system_bar>
#```
#
#> 更多用法请参考：
#[system_bar](https://github.com/zlgopen/awtk/blob/master/design/default/ui/system_bar.xml)
#
#在c代码中使用函数system\_bar\_create创建system\_bar窗口。如：
#
#
#> 创建之后，和使用普通窗口是一样的。
#
#可用通过style来设置控件的显示风格，如背景颜色等等。如：
#
#```xml
#<system_bar>
#<style name="default">
#<normal bg_color="#a0a0a0"/>
#</style>
#</system_bar>
#```
#
#> 更多用法请参考：
#[system_bar.xml](https://github.com/zlgopen/awtk/blob/master/design/default/styles/system_bar.xml)
#
#
class TSystemBar (TWindowBase):
  def __init__(self, nativeObj):
    super(TSystemBar, self).__init__(nativeObj)


  #
  # 创建system_bar对象。
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return system_bar对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TSystemBar(system_bar_create(awtk_get_native_obj(parent), x, y, w, h));


  #
  # 转换为system_bar对象(供脚本语言使用)。
  # 
  # @param widget system_bar对象。
  #
  # @return system_bar对象。
  #
  @classmethod
  def cast(cls, widget): 
    return  TSystemBar(system_bar_cast(awtk_get_native_obj(widget)));


#
# 可滚动的combo_box控件。
#
#
class TComboBoxEx (TComboBox):
  def __init__(self, nativeObj):
    super(TComboBoxEx, self).__init__(nativeObj)


  #
  # 创建combo_box_ex对象
  # 
  # @param parent 父控件
  # @param x x坐标
  # @param y y坐标
  # @param w 宽度
  # @param h 高度
  #
  # @return 对象。
  #
  @classmethod
  def create(cls, parent, x, y, w, h): 
    return  TComboBoxEx(combo_box_ex_create(awtk_get_native_obj(parent), x, y, w, h));

