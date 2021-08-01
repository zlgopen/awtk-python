import os
import sys

sys.path.insert(0, os.path.normpath(os.path.join(os.getcwd(), 'src/python')))

from awtk import *

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
    win.lookup("inc_value", True).on(TEventType.CLICK, on_inc_clicked, win);
    win.lookup("dec_value", True).on(TEventType.CLICK, on_dec_clicked, win);

    win.layout();

setup(application_init, "demo", 320, 480, TAppType.DESKTOP)
