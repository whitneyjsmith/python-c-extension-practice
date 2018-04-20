// Whitney Smith
// Last modified: 4/18/2018

#include <stdio.h>
#include <Python.h>

// original function
static double c_add(double x, double y)
{
	double total = x + y;

	return total;
}

// wrapper function that returns python stuff
// may need to do some error handling
static PyObject *wrapper(PyObject *self, PyObject *args)
{
	// return a C double representation of the contents of pyfloat
	double inX = PyFloat_AsDouble(args);

	// PyObject to return
	PyObject* ret;

	// run function
	double outTotal = c_add(inX, inX);

	// build result into PyFloatObject
	ret = PyFloat_FromDouble(outTotal);

	return ret;
}

