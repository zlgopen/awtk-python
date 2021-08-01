import os
import sys
import subprocess

sys.path.insert(0, os.path.normpath(os.path.join(os.getcwd(), 'src/python')))

from awtk import *

s_preload_nr = 0
s_preload_res = ["earth", "dialog_title", "rgb", "rgba"]


def on_clicked(win, e):
    evt = TEvent.cast(e)
    btn = TWidget.cast(evt.target)
    p = TPointerEvent.cast(e)
    subprocess.call()
    print('click at x=' + str(p.x) + " y=" + str(p.y))
    print('click:' + btn.get_text() + ' in ' + win.name)
    TGlobal.quit()

    return TRet.OK


def on_window_to_background(win, e):
    evt = TEvent.cast(e)
    win = TWidget.cast(evt.target)
    print('%s, to_background' % win.name)

    return TRet.OK


def on_window_to_foreground(win, e):
    evt = TEvent.cast(e)
    win = TWidget.cast(evt.target)
    print('%s, to_foreground' % win.name)

    return TRet.OK


def update_title_on_timer(win, e):
    evt = TTimerInfo.cast(e)
    print("id = " + str(evt.id))
    import random

    widget = TWidget.cast(win)
    text = 'change title:%d' % (random.randrange(1, 100, 2))
    widget.set_text(text)
    return TRet.REPEAT


def windows_open(name, to_close):
    if to_close is None:
        win = TWindow.open(name)
    else:
        win = TWindow.open_and_close(name, to_close)
    win.on(TEventType.WINDOW_TO_BACKGROUND, on_window_to_background, win)
    win.on(TEventType.WINDOW_TO_FOREGROUND, on_window_to_foreground, win)
    install_click_hander(win)

    if name == "tab_scrollable":

        pass
    elif name == "list_view":
        TTimer.add(update_title_on_timer, win, 1000);
    elif win.get_type() == TWidgetType.DIALOG:
        win.modal()

        if win.name == "back_to_home":
            vm = TWindowManager.instance()
            vm.back_to_home()

    return TRet.OK


def on_context_menu(ctx, e):
    windows_open(ctx, None);
    return TRet.OK


def on_open_window(ctx, e):
    print(ctx)
    windows_open(ctx, None);
    return TRet.OK


def on_inc(ctx, e):
    evt = TEvent.cast(e)
    win = TWidget.cast(ctx)
    bar1 = TProgressBar.cast(win.lookup("bar1", True))
    value = (bar1.value + 10.0) % 100
    # bar1.animate_value_to(int(value), 500)
    bar1.set_value(value)
    bar2 = TProgressBar.cast(win.lookup("bar2", True))
    value = (bar2.value + 10.0) % 100
    bar2.set_value(value)
    return TRet.OK


def on_dec(ctx, e):
    evt = TEvent.cast(e)
    win = TWidget.cast(ctx)
    bar1 = TProgressBar.cast(win.lookup("bar1", True))
    value = (bar1.value + 90.0) % 100
    bar1.set_value(value)
    bar2 = TProgressBar.cast(win.lookup("bar2", True))
    value = (bar2.value + 90.0) % 100
    bar2.set_value(value)
    return TRet.OK


def on_change_locale(ctx, e):
    evt = TEvent.cast(e)
    s = str(ctx)
    print(s)
    language = s[0:2]
    country = s[3:5]
    print(language)
    print(country)
    tl = TLocaleInfo.instance()
    tl.change(language, country)
    return TRet.OK


def on_show_fps(ctx, e):
    evt = TEvent.cast(e)
    button = TButton.cast(evt.target)
    vm = TWindowManager.instance()
    if button.get_text() == "Show FPS":
        vm.set_show_fps(True)
        button.set_text("Hide FPS")
    elif button.get_text() == "Hide FPS":
        vm.set_show_fps(False)
        button.set_text("Show FPS")
    return TRet.OK


def on_fullscreen(ctx, e):
    evt = TEvent.cast(e)
    widget = TWidget.cast(evt.target)

    return TRet.OK


def on_start(ctx, e):
    evt = TEvent.cast(e)
    widget = TWidget.cast(evt.target)
    widget.start_animator(None)
    return TRet.OK


def on_pause(ctx, e):
    evt = TEvent.cast(e)
    widget = TWidget.cast(evt.target)
    widget.pause_animator(None)
    return TRet.OK


def on_stop(ctx, e):
    evt = TEvent.cast(e)
    widget = TWidget.cast(evt.target)
    widget.stop_animator(None)
    return TRet.OK


def on_send_key(ctx, e):
    evt = TEvent.cast(e)
    win = TWidget.cast(evt.target)

    print(win.get_text())

    return TRet.OK


def on_backspace(ctx, e):
    input = TInputMethod.instance()
    input.dispatch_key(TKeyCode.KEY_BACKSPACE)

    return TRet.OK


def on_quit(ctx, e):
    widget = TDialog.cast(ctx)

    widget.quit()
    return TRet.OK


def on_quit_app(ctx, e):
    TGlobal.quit()
    return TRet.OK


def on_close(ctx, e):
    evt = TEvent.cast(e)
    win = TWidget.cast(evt.target)
    win.close_window()
    return TRet.OK


def on_paint_vgcanvas(ctx, e):
    evt = TPaintEvent.cast(e)
    c = evt.c
    vg = c.get_vgcanvas()

    vg.save()
    vg.translate(c.ox, c.oy)
    vg.set_line_width(1)
    print(vg.set_stroke_color("#AABBCC"))
    print(vg.set_fill_color("#AABBCC"))
    vg.translate(5, 5)
    # vg.rounded_rect(0, 0, 200, 200, 5)
    vg.rect(0, 0, 200, 200)
    vg.fill()
    vg.restore()

    vg.set_font_size(20)
    vg.set_font("")
    w = vg.measure_text("Hello AWTK")
    vg.save()
    vg.translate(0, 50)
    vg.translate(w / 2, 10)
    vg.rotate(3.14 / 4)
    vg.translate(-w / 2, -10)
    vg.fill_text("Hello AWTK", 10, 10, 100)
    vg.restore()

    vg.save()
    img = TBitmap.create()
    TImageManager.get_bitmap(TImageManager.instance(), "bricks", img)
    vg.translate((vg.w - img.w) / 2, 50)
    vg.rotate(3.14 / 4)
    vg.scale(1.5, 1.5)
    vg.draw_image(img, 0, 0, img.w, img.h, 0, 0, img.w, img.h)
    vg.restore()

    return TRet.OK


def install_one(win, iter):
    print(win.name)
    widget = TWidget.cast(iter)
    name = str(widget.name)
    print(name)
    index = name.find("open:")
    if index >= 0:
        print(name[5:len(name)])
        widget.on(TEventType.CLICK, on_open_window, name[5:len(name)])
        widget.on(TEventType.LONG_PRESS, on_open_window, name[5:len(name)])
        if name == "open:menu_point":
            widget.on(TEventType.CONTEXT_MENU, on_context_menu, widget)
    else:
        if name == "paint_linear_gradient":
            pass
        elif name == "paint_radial_gradient":
            pass
        elif name == "paint_stroke_gradient":
            pass
        elif name == "paint_vgcanvas":
            widget.on(TEventType.PAINT, on_paint_vgcanvas, widget)
            pass
        elif name == "snapshot":
            pass
        elif name == "memtest":
            pass
        elif name == "reload_theme":
            pass
        elif name == "show_fps":
            widget.on(TEventType.CLICK, on_show_fps, "zh_CN")
            pass
        elif name == "clone_self":
            pass
        elif name == "clone_tab":
            pass
        elif name == "remove_self":
            pass
        elif name == "chinese":
            widget.on(TEventType.CLICK, on_change_locale, "zh_CN")
        elif name == "english":
            widget.on(TEventType.CLICK, on_change_locale, "en_US")
        elif name == "font_small" or name == "font_normal" or name == "font_big":
            pass
        elif name == "inc_value":
            win = widget.get_window()
            widget.on(TEventType.CLICK, on_inc, win)
        elif name == "dec_value":
            win = widget.get_window()
            widget.on(TEventType.CLICK, on_dec, win)
        elif name == "close":
            widget.on(TEventType.CLICK, on_close, widget)
        elif name == "fullscreen":
            widget.on(TEventType.CLICK, on_fullscreen, widget)
        elif name == "start":
            widget.on(TEventType.CLICK, on_start, widget)
        elif name == "pause":
            widget.on(TEventType.CLICK, on_pause, widget)
        elif name == "stop":
            widget.on(TEventType.CLICK, on_stop, widget)
        elif name == "key":
            widget.on(TEventType.CLICK, on_send_key, widget)
        elif name == "backspace":
            widget.on(TEventType.CLICK, on_backspace, widget)
        elif name == "quit":
            win = widget.get_window()
            if win is not None:
                widget.on(TEventType.CLICK, on_quit, win)
        elif name == "back_to_home":
            win = widget.get_window()
            if win is not None:
                widget.on(TEventType.CLICK, on_quit, win)
        elif name == "exit":
            win = widget.get_window()
            if win is not None:
                widget.on(TEventType.CLICK, on_quit_app, win)
        elif name == "pages":
            pass
        elif name == "combo_box":
            pass
        pass
    return TRet.OK


def install_click_hander(win):
    win.foreach(install_one, win)
    return TRet.OK


def on_timer(win, e):
    evt = TTimerInfo.cast(e)
    print("id = " + str(evt.id))
    print(str(evt.now))
    print(str(evt.ctx))
    bar = win.lookup("bar", True)
    status = win.lookup("status", True)

    global s_preload_nr
    if s_preload_nr == len(s_preload_res) - 1:
        TWindow.open("system_bar")
        windows_open("main", win)
        print("main")
        return TRet.OK
    else:
        print(s_preload_res[s_preload_nr])
        TImageManager.preload(TImageManager.instance(), s_preload_res[s_preload_nr])
        s_preload_nr = s_preload_nr + 1
        value = (s_preload_nr * 100) / len(s_preload_res)
        text = 'Load, %s(%u/%u)' % (s_preload_res[s_preload_nr], s_preload_nr, len(s_preload_res))
        bar.set_value(int(value))
        status.set_text(text)

    return TRet.REPEAT


def close_window_on_event(ctx, e):
    widget = TWidget.cast(ctx)
    widget.close_window()
    return TRet.OK


def on_screen_saver(ctx, e):
    vm = TWindowManager.instance()
    wg = vm.lookup("image_animation", True)

    if wg.nativeObj == 0:
        win = TWindow.open("image_animation")
        win.on(TEventType.POINTER_UP, close_window_on_event, win)
        win.on(TEventType.POINTER_MOVE, close_window_on_event, win)
        win.on(TEventType.KEY_UP, close_window_on_event, win)
        pass
    else:
        print("screen saver exist.")

    return TRet.OK


def on_key_back_or_back_to_home(ctx, e):
    evt = TKeyEvent.cast(e)
    if evt.key == TKeyCode.KEY_F2:
        print("KEY_F2")
        vm = TWindowManager.instance()
        vm.back()
    if evt.key == TKeyCode.KEY_F3:
        print("KEY_F3")
        vm = TWindowManager.instance()
        vm.back_to_home()
    if evt.key == TKeyCode.KEY_F4:
        vm = TWindowManager.instance()
        vm.back_to("main")
        print("KEY_F4")

    return TRet.OK


def wm_on_before_paint(ctx, e):
    return TRet.OK


def wm_on_after_paint(ctx, e):
    return TRet.OK


def wm_on_low_memory(ctx, e):
    return TRet.OK


def wm_on_out_of_memory(ctx, e):
    return TRet.OK


def wm_on_request_quit(ctx, e):
    print("wm_on_request_quit")
    return TRet.OK


def application_init():
    vm = TWindowManager.instance()
    vm.set_screen_saver_time(1000 * 1000)
    vm.on(TEventType.SCREEN_SAVER, on_screen_saver, None)
    vm.on(TEventType.KEY_DOWN, on_key_back_or_back_to_home, vm)
    vm.on(TEventType.BEFORE_PAINT, wm_on_before_paint, vm)
    vm.on(TEventType.AFTER_PAINT, wm_on_after_paint, vm)
    vm.on(TEventType.LOW_MEMORY, wm_on_low_memory, vm)
    vm.on(TEventType.OUT_OF_MEMORY, wm_on_out_of_memory, vm)
    vm.on(TEventType.REQUEST_QUIT_APP, wm_on_request_quit, vm)

    win = TWindow.open("preload")
    id = TTimer.add(on_timer, win, 100);
    print("id = " + str(id))
    win.layout();


setup(application_init, "demo", 320, 480, TAppType.DESKTOP)
