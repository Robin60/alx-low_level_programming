#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number else 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] == '1' || b[i] == '0')
	{
		res <<= 1;
		res = b[i] - '0';
		i++;
	}
	return (res);
}
