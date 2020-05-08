#define PY_SSIZE_T_CLEAN

#include "awtk.h"
#include <Python.h>

static const char *s_bootstrap_scripts = "\
import os \n\
import sys \n\
\n\
CWD=os.getcwd()\n\
AWTK_PYTHON_ROOT=os.path.normpath(os.path.join(CWD, 'src/python'));\n\
\n\
sys.path.insert(0, CWD);\n\
sys.path.insert(0, './demos');\n\
sys.path.insert(0, AWTK_PYTHON_ROOT);\n\
\n\
";

static wchar_t *program = NULL;
PyMODINIT_FUNC PyInit_awtk_native(void);

static ret_t python_init(const char *app_name) {
  program = Py_DecodeLocale(app_name, NULL);
  PyImport_AppendInittab("awtk_native", PyInit_awtk_native);

  if (program == NULL) {
    fprintf(stderr, "Fatal error: cannot decode argv[0]\n");
    exit(1);
  }

  Py_SetProgramName(program);
  Py_Initialize();

  return RET_OK;
}

static ret_t python_run(const char *script_file) {
  uint32_t size = 0;
  char* content = file_read(script_file, &size);

  return_value_if_fail(content != NULL, RET_BAD_PARAMS);

  PyRun_SimpleString(s_bootstrap_scripts);
  PyRun_SimpleString(content);

  TKMEM_FREE(content);

  return RET_OK;
}

static ret_t python_deinit(void) {
  if (Py_FinalizeEx() < 0) {
    exit(120);
  }
  PyMem_RawFree(program);

  return TRUE;
}

const char* script_file = NULL;

static ret_t on_cmd_line(int argc, char* argv[]) {
  script_file = argc == 2 ? argv[1] : "./demos/button.py";

  return RET_OK;
}

static ret_t application_init() {
  python_init("awtkRun");
  python_run(script_file);

  return RET_OK;
}

static ret_t application_exit() {
  python_deinit();

  return RET_OK;
}

#define APP_NAME "AWTK-Python"
#define ON_CMD_LINE on_cmd_line

#include "awtk_main.inc"

