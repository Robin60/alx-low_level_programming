#include "search_algos.h"
#include <math.h>


/**
 * jump_search - searches for a value in a sorted array of integers using
 * the Jump search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements
 * @value: the value to search
 * Return: index of value searched else -1
 */

int jump_search(int *array, size_t size, int value)
{
	int stp = sqrt(size);
	size_t p = 0;

	while (array[(size_t)fmin(stp, size) - 1] < value)
	{
		printf("Value checked array[%li] = [%d]\n", p, array[p]);
		p = stp;
		stp += sqrt(size);
		if (p >= size)
			return (-1);
	}

	while (array[p] < value)
	{
		printf("Value checked array[%li] = [%d]\n", p, array[p]);
		p++;
		if (p == (size_t)fmin(stp, size))
			return (-1);
	}

	if (array[p] == value)
		return (p);
	return (-1);
}

