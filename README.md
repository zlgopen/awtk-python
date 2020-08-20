# awtk-python

ZLG 开源 GUI 引擎 [awtk](https://github.com/zlgopen/awtk) 针对 Python [Python](https://python.org) 的绑定。

>推荐：本项目目前不支持调试器，需要调试器的朋友请使用 [CUITzhaoqi/awtk-python](https://github.com/CUITzhaoqi/awtk-python)

## 准备

> 请先安装 Python [Python](https://python.org)

1. 获取 awtk 并编译

```
git clone https://github.com/zlgopen/awtk.git
cd awtk; scons; cd -
```

> AWTK 的编译环境请参考 AWTK 的文档。

2. 获取 awtk-python 并编译

```
git clone https://github.com/zlgopen/awtk-python.git
cd awtk-python
```

* 生成资源

```
python ./scripts/update_res.py all
```

> 或者通过 designer 生成资源


* 编译PC版本

```
scons
```

* 编译LINUX FB版本

```
scons LINUX_FB=true
```

> 完整编译选项请参考[编译选项](https://github.com/zlgopen/awtk-widget-generator/blob/master/docs/build_options.md)


## 运行

```
./bin/awtkRun demos/button.py
```

> 请把 xxxx.py 换成具体的 py 文件。

```
./bin/awtkRun demos/button.py
```

## 更新绑定（由本项目的维护人员完成）

```
./sync.sh
```

> 在非 bash 终端（如 Windows 平台的 cmd.exe)，需要根据 sync.sh 的内容手工执行相应的命令。

## 文档

* [AWTK 脚本绑定原理](https://github.com/zlgopen/awtk/blob/master/docs/script_binding.md)

> 本文以 Linux/MacOS 为例，Windows 可能会微妙差异，请酌情处理。

## 注意事项

* 编译 PC 版本，请把 src/c/main.c 中的 APP\_SIMULATOR 改成 APP\_DESKTOP，并重新编译。

## sample

```python
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

    win.layout();

application_init()
```
