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
sys.path.insert(0, AWTK_PYTHON_ROOT);\n\
\n\
";

ret_t assets_init(void);
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
  FILE *fp = NULL;
  fp = fopen(script_file, "r");
  return_value_if_fail(fp != NULL, RET_BAD_PARAMS);

  PyRun_SimpleString(s_bootstrap_scripts);
  PyRun_AnyFile(fp, script_file);

  fclose(fp);

  return RET_OK;
}

static ret_t python_deinit(void) {
  if (Py_FinalizeEx() < 0) {
    exit(120);
  }
  PyMem_RawFree(program);

  return TRUE;
}

int main(int argc, char *argv[]) {
  int w = 320;
  int h = 480;
  const char *app_name = NULL;
  const char *script_file = NULL;

  if(argc < 2) {
    log_debug("Usage: %s script [w] [h]\n", argv[0]);

    return 0;
  }

  app_name = argv[0];
  script_file = argv[1];

  if(argc > 2) {
    w = atoi(argv[2]);
  }
  
  if(argc > 3) {
    h = atoi(argv[3]);
  }

  tk_init(w, h, APP_SIMULATOR, "AWTK-PY", NULL);

  assets_init();
  tk_ext_widgets_init();

  python_init(app_name);
  python_run(script_file);

  tk_run();

  python_deinit();

  return 0;
}

