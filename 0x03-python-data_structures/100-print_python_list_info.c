#include <stdio.h>
#include "/usr/include/python3.8/Python.h"

void print_python_list_info(PyObject *p)
{
	PyListObject *pp;
	int i;

	pp = p;
	printf("[*] Size of the Python List = %d\n", pp->ob_base.ob_size);
	printf("[*] Allocated = %d\n", pp->allocated);

	for (i = 0; i < pp->ob_base.ob_size; i++);
	{
		printf("Element %d: %s\n", i, pp->ob_item[i]->ob_type->tp_name);
	}
}
