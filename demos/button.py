import os
import sys

sys.path.insert(0, os.path.normpath(os.path.join(os.getcwd(), 'src/python')))

from awtk import *

def on_clicked(win, e):
    evt = TEvent.cast(e);
    btn = TWidget.cast(evt.target);
    p = TPointerEvent.cast(e);

    print('click at x=' + str(p.x) + " y=" + str(p.y));
    print('click:' + btn.get_text() + ' in ' + win.name);
    TGlobal.quit()

    return TRet.OK;

def application_init():
    win = TWindow.create_default()
    btn = TButton.create(win, 0, 0, 0, 0);

    win.set_name("main");
    btn.set_name("close");
    btn.set_text("Close");
    btn.set_self_layout_params("center", "middle", "50%", "30");
    btn.on(TEventType.CLICK, on_clicked, win);

    print(win.lookup("close", 100).name)
    win.layout();
    
    TLog.set_log_level(TTkLogLevel.ERROR);
    print(TLog.get_log_level())

setup(application_init, "demo", 320, 480, TAppType.DESKTOP)

