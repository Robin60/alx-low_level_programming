#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: the printed name
 * @f: callback function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
