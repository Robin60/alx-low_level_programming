#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals matrix
 * @a: array
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum = 0;
	int b[size][size];

	a = *b;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j || i + j == size - 1)
			{
				sum = sum + b[i][j];
			}
		}
	}

	printf("%d\n", sum);
}

