#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes function given as param on each array element
 * @array: array to iterate
 * @size: size of array
 * @action: point  to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
