from awtk import *

def on_clicked(win, e):
    TGlobal.quit();
    return TRet.OK;

def on_edit_changed(win, e):
    evt = TEvent.cast(e);
    edit = TWidget.cast(evt.target);
    print("text changed:" + edit.get_text());

    return TRet.OK;

def application_init():
    win = TWindow.create_default()
    btn = TButton.create(win, 0, 0, 0, 0);
    edit = TEdit.create(win, 0, 0, 0, 0);
    mledit = TMledit.create(win, 0, 0, 0, 0);

    edit.set_input_tips("title");
    edit.set_self_layout_params("10", "10", "50%", "30");
    edit.on(TEventType.VALUE_CHANGED, on_edit_changed, win);

    mledit.set_input_tips("content");
    mledit.set_self_layout_params("10", "50", "-20", "-120");
    mledit.on(TEventType.VALUE_CHANGED, on_edit_changed, win);

    btn.set_name("close");
    btn.set_text("Close");
    btn.set_self_layout_params("center", "bottom:20", "50%", "30");
    btn.on(TEventType.CLICK, on_clicked, win);

    win.layout();

application_init()
