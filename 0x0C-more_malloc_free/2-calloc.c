#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory of array using malloc
 * @nmemb: number of elements
 * @size: number of bytes
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return ('\0');
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return ('\0');
	i = 0;
	while (i < nmemb * size)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
