#include "main.h"

/**
 * string_toupper - changes all lowercase strings to upper
 * @n: input params
 * Return: pointer to results
 */

char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\n')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
