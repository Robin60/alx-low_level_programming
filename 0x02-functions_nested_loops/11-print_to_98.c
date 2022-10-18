#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers
 * @n: from this to 98
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d, ", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d, ", n);
	}
}