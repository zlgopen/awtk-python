from awtk import *

def on_clicked(ctx, e):
    evt = TEvent.cast(e);
    btn = TWidget.cast(evt.target);
    p = TPointerEvent.cast(e);

    print('click at x=' + str(p.x) + " y=" + str(p.y));
    print('click:' + btn.get_text() + ' in ' + ctx.name);
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

application_init()
