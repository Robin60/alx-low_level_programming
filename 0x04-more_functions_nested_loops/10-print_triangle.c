#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: a size of tringle
 */

void print_triangle(int size)
{
	int x, t;

	if (size > 0)
	{
		for (x = 0; x <= n; x++)
		{
			for (t = n - x; t > 0; t--)
				_putchar(' ');

			for (t = 0; t < x; t++)
				_putchar('#');

			if (x == n)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}

