#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: array of integers
 * @size: the size of array
 * @value: The value to search
 * Return: the first index where value is located, else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (i < size)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
