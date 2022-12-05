#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n);
	_putchar((n & 1) + '0');
}
