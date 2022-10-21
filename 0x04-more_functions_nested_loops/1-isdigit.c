#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: the digit
 * Return: 1 if c is a digit else 0
 */

int _isdigit(int c)
{
	int x = 0;

	if (c >= '0' && c <= '9')
		x = 1;

	return (x);
}
