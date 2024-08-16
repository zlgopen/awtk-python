import os
import sys
import platform
import scripts.app_helper as app

ARGUMENTS['FONT'] = 'default_full'
helper = app.Helper(ARGUMENTS);

PYTHON_ROOT = os.path.normpath(os.path.dirname(sys.executable))
PYTHON_INC = os.path.join(PYTHON_ROOT, 'include');
PYTHON_LIB_PATH = os.path.join(PYTHON_ROOT, 'libs');
PYTHON_VERSION = str(sys.version_info[0]) + "." + str(sys.version_info[1])
PYTHON_VERSION_EXT = PYTHON_VERSION + "." + str(sys.version_info[2]) 
PYTHON_LIB_NAME = "python"+PYTHON_VERSION

OS_NAME = platform.system();

#if it does not work on you platform, change the following values 

if OS_NAME == "Linux":
  PYTHON_INC = os.path.normpath("/usr/include/python"+PYTHON_VERSION)
  PYTHON_LIB_PATH = "/usr/lib/x86_64-linux-gnu/"
elif OS_NAME == "Darwin":
  PYTHON_ROOT="/usr/local/opt/python@"+PYTHON_VERSION+"/Frameworks/Python.framework/Versions/"+PYTHON_VERSION
  PYTHON_ROOT="/opt/homebrew/Cellar/python@"+PYTHON_VERSION+"/"+PYTHON_VERSION_EXT+"/Frameworks/Python.framework/Versions/"+PYTHON_VERSION

  PYTHON_LIB_PATH = PYTHON_ROOT + "/lib"
  PYTHON_INC = PYTHON_ROOT + "/include/python"+PYTHON_VERSION

else:
	PYTHON_LIB_NAME = "python"+str(sys.version_info[0])

APP_LIBS = [PYTHON_LIB_NAME]
APP_CPPPATH = [PYTHON_INC]
APP_LIBPATH = [PYTHON_LIB_PATH]

print(PYTHON_ROOT, PYTHON_LIB_PATH, PYTHON_LIB_NAME, PYTHON_INC)

helper.add_libs(APP_LIBS).add_libpath(APP_LIBPATH).add_cpppath(APP_CPPPATH).call(DefaultEnvironment)

SConscriptFiles = ['src/SConscript']
helper.SConscript(SConscriptFiles)
