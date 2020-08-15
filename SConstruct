import os
import sys
import platform
import scripts.app_helper as app

ARGUMENTS['FONT'] = 'default_full'
helper = app.Helper(ARGUMENTS);

PYTHON_ROOT = os.path.normpath(os.path.dirname(sys.executable))
PYTHON_INC = os.path.join(PYTHON_ROOT, 'include');
PYTHON_LIBS = os.path.join(PYTHON_ROOT, 'libs');

OS_NAME = platform.system();

APP_CCFLAGS = ''
if OS_NAME == 'Windows':
  APP_LIBS = ['python3']
  APP_CPPPATH = [PYTHON_INC]
  APP_LIBPATH = [PYTHON_LIBS]
else:
  APP_LIBS = []
  APP_CPPPATH = []
  APP_LIBPATH = []

helper.add_libs(APP_LIBS).add_libpath(APP_LIBPATH).add_ccflags(APP_CCFLAGS).add_cpppath(APP_CPPPATH).call(DefaultEnvironment)

SConscriptFiles = ['3rd/lua/SConscript', 'src/SConscript']
SConscript(SConscriptFiles)
