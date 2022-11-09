#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initializes it with specific char.
 * @size: the size of elements
 * @c: the char
 * Return: the pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int p = 0;

	if (size == 0)
		return ('\0');
	ptr = (char *) malloc(size * sizeof(c));

	if (ptr == 0)
		return ('\0');
	while (p < size)
	{
		*(ptr + p) = c;
		p++;
	}
	return (ptr);
}
