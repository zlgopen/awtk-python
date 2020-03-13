from awtk import *

def on_clicked(ctx, e):
    print("click:");

    return TRet.OK;

def application_init():
    win = TWindow.create_default()
    btn = TButton.create(win, 10, 10, 128, 30);

    win.set_name("main");
    btn.set_text("OK");
    btn.set_self_layout_params("center", "middle", "50%", "30");
    btn.on(TEventType.CLICK, on_clicked, win);

    win.layout();

application_init()
