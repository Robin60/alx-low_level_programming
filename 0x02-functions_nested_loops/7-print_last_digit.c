#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: the number
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int lc = n % 10;

	if (lc < 0)
		lc *= -1;

	_putchar(lc + '0');

	return (lc);
}
