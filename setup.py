import sys
import platform
from distutils.core import setup, Extension

##adapted from https://github.com/CUITzhaoqi/awtk-python/blob/master/setup.py

sys.path.insert(0, '../awtk/')
sys.path.insert(0, '../awtk/scripts')
sys.path.insert(0, 'build/awtk/')

import compile_config
complie_helper = compile_config.complie_helper()
compile_config.set_curr_config(complie_helper)

import awtk_config as awtk

include_dirs = awtk.CPPPATH
extra_compile_args = awtk.CCFLAGS

print (extra_compile_args.split( ))

extra_compile_args_list = extra_compile_args.split( )
extra_compile_args_list.append('-D__'+platform.machine()+'__=1');
print(extra_compile_args_list)
extra_define_macros = []

for i in extra_compile_args_list:
    if i.find("-D", 0, len(i) - 1) >= 0:
        equal_index = i.find("=", 0, len(i) - 1)
        if equal_index > 0 :
            macros = (i[2:equal_index], i[equal_index + 1:len(i)])
            extra_define_macros.append(macros)
            pass
        else:
            macros = (i[2:len(i)], None)
            extra_define_macros.append(macros)

print(extra_define_macros)

extra_lib = []
library_dirs=awtk.LIBPATH
extra_libraries=awtk.LIBS
for i in extra_libraries:
    print(i)
    lib_index = i.find(".lib", 0, len(i))
    if lib_index > 0:
        print(lib_index)
        extra_lib.append(i[0:lib_index])
    else :
        extra_lib.append(i)

print(extra_lib)

NAME = 'awtk'
VERSION = '0.1.0'
AUTHOR = 'Li XianJing'
EMAIL = 'lixianjing@zlg.cn'
DESCRIPTION = 'awtk python binding.'
URL = 'https://github.com/zlgopen/awtk-python'
LICENSE="LGPL-2.0"
PLATFORM=platform.machine()

setup(name="awtk", 
      url=URL,
      version=VERSION,
      author=AUTHOR,
      author_email=EMAIL,
      description=DESCRIPTION,
      license=LICENSE,
      platforms=['any'],
      long_description=DESCRIPTION,
      ext_modules=[Extension("awtk_native",
                             ["src/c/awtk_module.c",
                              "src/assets.c"],
                             include_dirs=include_dirs,
                             define_macros=extra_define_macros,
                             library_dirs=library_dirs,
                             libraries=extra_lib,
                             )])
