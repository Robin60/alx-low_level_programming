#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of memeory to be allocated
 * Return: pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b * sizeof(unsigned int));

	if (mem == NULL)
		return (98);
	return (mem);
}
