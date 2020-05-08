from awtk import *
sys.path.insert(0, './demos')

import foobar
print(foobar.add(100, 200))

def on_close_clicked(ctx, e):
    TGlobal.quit()

    return TRet.OK;

def on_inc_clicked(win, e):
    bar1 = win.lookup("bar1", True);
    if bar1.get_value() < 100:
        bar1.add_value(10);

    return TRet.OK;

def on_dec_clicked(win, e):
    bar1 = win.lookup("bar1", True);
    if bar1.get_value() > 0:
        bar1.add_value(-10);

    return TRet.OK;

def application_init():
    win = TWindow.open("basic");
    win.lookup("close", True).on(TEventType.CLICK, on_close_clicked, win);
    win.lookup("inc_value", True).on(TEventType.CLICK, on_inc_clicked, win);
    win.lookup("dec_value", True).on(TEventType.CLICK, on_dec_clicked, win);

    win.layout();

application_init()
