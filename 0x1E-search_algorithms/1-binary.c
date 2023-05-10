#include "search_algos.h"

/**
 *  binary_search - searches for a value in a sorted array
 *  @array: the array of integers
 *  @size: size of array
 *  @value: Value to search
 *  Return: index at match, else -1
 */

int binary_search(int *array, size_t size, int value)
{
	int i = 0, l = 0, r = size - 1, mid = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (l <= r)
	{
		i = 0;
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i == r)
			{
				printf("%d\n", array[r]);
				break;
			}
			else
				 printf("%d, ", array[i]);
		}
		mid = (l + r) / 2;
		if (array[mid] < value)
			l = mid + 1;
		else if (array[mid] > value)
			r = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
