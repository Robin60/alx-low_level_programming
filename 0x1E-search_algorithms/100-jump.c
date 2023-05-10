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
	size_t start, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (start = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		start = jump;
		jump += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; start < jump && array[start] < value; start++)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	}
	printf("Value checked array[%ld] = [%d]\n", start, array[start]);

	return (array[start] == value ? (int)start : -1);
}
