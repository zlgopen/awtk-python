import os
import sys
import shutil
import platform
import subprocess
import sysconfig
import scripts.app_helper as app

ARGUMENTS['FONT'] = 'default_full'
helper = app.Helper(ARGUMENTS);

PYTHON_ROOT = os.path.normpath(os.path.dirname(sys.executable))
PYTHON_INC = os.path.join(PYTHON_ROOT, 'include');
PYTHON_LIB_PATH = os.path.join(PYTHON_ROOT, 'libs');
PYTHON_VERSION = str(sys.version_info[0]) + "." + str(sys.version_info[1])
PYTHON_LIB_NAME = "python"+PYTHON_VERSION
PYTHON_LINKFLAGS = ''

OS_NAME = platform.system();

def python_header_exists(include_dir):
  return include_dir and os.path.isfile(os.path.join(include_dir, 'Python.h'))

def is_apple_python(python_exe):
  path = os.path.realpath(python_exe)
  return ('Xcode.app' in path) or ('CommandLineTools' in path)

def query_python_config(python_exe):
  code = (
    'import sys,sysconfig;'
    'print(sysconfig.get_config_var("INCLUDEPY") or "");'
    'print(sysconfig.get_config_var("LIBDIR") or "");'
    'print("%d.%d" % (sys.version_info[0], sys.version_info[1]));'
    'print(sysconfig.get_config_var("prefix") or "");'
  )
  try:
    output = subprocess.check_output([python_exe, '-c', code], universal_newlines=True)
  except (OSError, subprocess.CalledProcessError):
    return None
  lines = output.strip().splitlines()
  if len(lines) < 4:
    return None
  return {
    'inc': lines[0],
    'lib_path': lines[1],
    'version': lines[2],
    'root': lines[3],
    'exe': python_exe,
  }

def apply_python_config(cfg):
  global PYTHON_ROOT, PYTHON_INC, PYTHON_LIB_PATH, PYTHON_VERSION, PYTHON_LIB_NAME
  PYTHON_INC = cfg['inc']
  PYTHON_LIB_PATH = cfg['lib_path']
  PYTHON_VERSION = cfg['version']
  PYTHON_ROOT = cfg['root'] or PYTHON_ROOT
  PYTHON_LIB_NAME = "python"+PYTHON_VERSION

def framework_search_path(lib_path):
  parts = os.path.normpath(lib_path).split(os.sep)
  for i, part in enumerate(parts):
    if part.endswith('.framework'):
      return os.sep.join(parts[:i]) if i > 0 else os.sep
  return None

def pick_python_config():
  candidates = []
  python_arg = ARGUMENTS.get('PYTHON')
  if python_arg:
    candidates.append(python_arg)
  path_python3 = shutil.which('python3')
  if path_python3:
    candidates.append(path_python3)
  candidates.append(sys.executable)

  seen = set()
  preferred = []
  fallback = []
  for exe in candidates:
    real = os.path.realpath(exe)
    if real in seen:
      continue
    seen.add(real)
    cfg = query_python_config(exe)
    if not cfg or not python_header_exists(cfg['inc']):
      continue
    if OS_NAME == 'Darwin' and is_apple_python(exe):
      fallback.append(cfg)
    else:
      preferred.append(cfg)
  if preferred:
    return preferred[0]
  if fallback:
    return fallback[0]
  return None

#if it does not work on you platform, change the following values

if OS_NAME == "Linux":
  PYTHON_INC = sysconfig.get_config_var('INCLUDEPY') or os.path.normpath("/usr/include/python"+PYTHON_VERSION)
  PYTHON_LIB_PATH = sysconfig.get_config_var('LIBDIR') or "/usr/lib/x86_64-linux-gnu/"
elif OS_NAME == "Darwin":
  cfg = pick_python_config()
  if cfg:
    apply_python_config(cfg)
  else:
    PYTHON_INC = sysconfig.get_config_var('INCLUDEPY')
    PYTHON_LIB_PATH = sysconfig.get_config_var('LIBDIR')
    PYTHON_ROOT = sysconfig.get_config_var('prefix') or PYTHON_ROOT

  framework_dir = framework_search_path(PYTHON_LIB_PATH)
  if framework_dir:
    PYTHON_LINKFLAGS = ' -Wl,-rpath,' + framework_dir + ' '
else:
	PYTHON_LIB_NAME = "python"+str(sys.version_info[0])

APP_LIBS = [PYTHON_LIB_NAME]
APP_CPPPATH = [PYTHON_INC]
APP_LIBPATH = [PYTHON_LIB_PATH]

print(PYTHON_ROOT, PYTHON_LIB_PATH, PYTHON_LIB_NAME, PYTHON_INC)

helper.add_libs(APP_LIBS).add_libpath(APP_LIBPATH).add_cpppath(APP_CPPPATH).add_linkflags(PYTHON_LINKFLAGS).call(DefaultEnvironment)

SConscriptFiles = ['src/SConscript']
helper.SConscript(SConscriptFiles)
