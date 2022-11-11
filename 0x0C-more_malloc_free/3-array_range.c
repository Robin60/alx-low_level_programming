#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min elements number
 * @max: maximum elements number
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, p;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (0);
	p = min;
	i = 0;
	while (i <= max - min)
	{
		arr[i++] = p++;
	}
	return (arr);
}
