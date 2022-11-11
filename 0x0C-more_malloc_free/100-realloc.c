#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc, free
 * @ptr: pointer to memory
 * @old_size: size of ptr
 * @new_size: size of new memory block
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mem1, *mem2;
	unsigned int i;

	if (ptr != NULL)
		mem1 = ptr;
	else
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	mem2 = malloc(new_size);
	if (mem2 == NULL)
		return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(mem2 + i) = mem1[i];
	}
	free(ptr);
	return (mem2);
}
