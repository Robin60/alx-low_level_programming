#include "main.h"

/**
 * _memset - fills the memory with constaant byte
 * @s: the string
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
