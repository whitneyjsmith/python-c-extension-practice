// Whitney Smith
// Last modified: 4/18/2018

#include "add.c"

// Python module
// structure used to describe a method of an extension type 
static PyMethodDef AddMethods[] =
{
	{ "wrapper", (PyCFunction)wrapper, METH_O, NULL}, // 1st thing is name exposed to Python and the 2nd is the C function name that contains implementation
	{ NULL, NULL, 0, NULL } // Sentinel
};

static PyModuleDef teal_c_code_module = {
	PyModuleDef_HEAD_INIT,
	"teal_c_code",	// Module name to use with Python import statements
	"Adds numbers",	// Module description
	0,
	AddMethods // Structure that defines the methods of the module
};

PyMODINIT_FUNC PyInit_teal_c_code() {
	return PyModule_Create(&teal_c_code_module);
}
