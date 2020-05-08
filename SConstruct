import os
import sys
import platform


print(sys.executable)
sys.path.insert(0, '../awtk/')
import awtk_config as awtk

APP_ROOT    = os.path.normpath(os.getcwd())
APP_BIN_DIR = os.path.join(APP_ROOT, 'bin')
APP_LIB_DIR = os.path.join(APP_ROOT, 'lib')

os.environ['APP_ROOT'] = APP_ROOT;
os.environ['BIN_DIR'] = APP_BIN_DIR;
os.environ['LIB_DIR'] = APP_LIB_DIR;

PYTHON_ROOT = os.path.normpath(os.path.dirname(sys.executable))
PYTHON_INC = os.path.join(PYTHON_ROOT, 'include');
PYTHON_LIBS = os.path.join(PYTHON_ROOT, 'libs');

print(PYTHON_LIBS)

OS_NAME = platform.system();

APP_CCFLAGS = ''
if OS_NAME == 'Windows':
  APP_LIBS = ['python3']
  APP_CPPPATH = [PYTHON_INC]
  APP_LIBPATH = [APP_LIB_DIR, PYTHON_LIBS]
else:
  APP_LIBS = []
  APP_CPPPATH = []
  APP_LIBPATH = [APP_LIB_DIR]

DefaultEnvironment(
  CPPPATH   = APP_CPPPATH + awtk.CPPPATH,
  LINKFLAGS = awtk.LINKFLAGS,
  LIBS      = APP_LIBS + awtk.LIBS,
  LIBPATH   = APP_LIBPATH + awtk.LIBPATH,
  CCFLAGS   = APP_CCFLAGS + awtk.CCFLAGS, 
  OS_SUBSYSTEM_CONSOLE=awtk.OS_SUBSYSTEM_CONSOLE,
  OS_SUBSYSTEM_WINDOWS=awtk.OS_SUBSYSTEM_WINDOWS)

SConscript(['src/SConscript'])

