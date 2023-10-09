#include <Python.h>

/**
 * print_python_list_info - adds new node at the end of a listint_t
 * @p: pointer PyObject
 */

void print_python_list_info(PyObject *p)
{
	long int list_size;
	int m;
	PyListObject *list_obj;

	list_size = PyList_Size(p);
	list_obj = (PyListObject *)p;
	printf("[*] Size of the Python List = %li\n", list_size);
	printf("[*] Allocated = %li\n", list_obj->allocated);
	for (m = 0; m < list_size; m++)
		printf("Element %i: %s\n", m, Py_TYPE(list_obj->ob_item[m])->tp_name);
}
