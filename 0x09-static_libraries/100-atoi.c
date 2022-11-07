#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the string
 * Return: the integers
 */

int _atoi(char *s)
{
	int res = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		res = res * 10 + s[i] - '0';
	}

	return (res);
}
