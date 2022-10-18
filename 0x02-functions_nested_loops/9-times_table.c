#include "main.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int n;
	int times;
	int res;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (times = 0; times <= 9; times++)
		{
			_putchar(',');
			_putchar(' ');

			res = n * times;

			if (res <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((res / 10) + '0');
			}
			_putchar((res / 10) + '0');
		}
		_putchar('\n');
	}
}

