from awtk import *

def on_clicked(ctx, e):
    evt = TEvent.cast(e);
    btn = TWidget.cast(evt.target);
    print('click:' + btn.name + ' in ' + ctx.name);
    TGlobal.quit()

    return TRet.OK;

def application_init():
    win = TWindow.create_default()
    btn = TButton.create(win, 10, 10, 128, 30);

    win.set_name("main");
    btn.set_name("close");
    btn.set_text("Close");
    btn.set_self_layout_params("center", "middle", "50%", "30");
    btn.on(TEventType.CLICK, on_clicked, win);

    win.layout();

application_init()
