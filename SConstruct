import os
import sys
import platform
import scripts.app_helper as app

ARGUMENTS['FONT'] = 'default_full'
helper = app.Helper(ARGUMENTS);

PYTHON_ROOT = os.path.normpath(os.path.dirname(sys.executable))
PYTHON_INC = os.path.join(PYTHON_ROOT, 'include');
PYTHON_LIBS = os.path.join(PYTHON_ROOT, 'libs');
PYTHON_MAJOR = sys.version_info[0]
PYTHON_MINOR = sys.version_info[1]
PYTHON_VERSION = str(PYTHON_MAJOR) + "." + str(PYTHON_MINOR)
PYTHON_LIB_NAME = "python"+PYTHON_VERSION

OS_NAME = platform.system();

#if it does not work on you platform, change the following values 

if OS_NAME == "Linux":
  PYTHON_INC = os.path.normpath("/usr/include/python"+PYTHON_VERSION)
  PYTHON_LIBS = "/usr/lib/x86_64-linux-gnu/"

APP_CCFLAGS = ''
APP_LIBS = [PYTHON_LIB_NAME]
APP_CPPPATH = [PYTHON_INC]
APP_LIBPATH = [PYTHON_LIBS]

helper.add_libs(APP_LIBS).add_libpath(APP_LIBPATH).add_ccflags(APP_CCFLAGS).add_cpppath(APP_CPPPATH).call(DefaultEnvironment)

SConscriptFiles = ['src/SConscript']
SConscript(SConscriptFiles)
