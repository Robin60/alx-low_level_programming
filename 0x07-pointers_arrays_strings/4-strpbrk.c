#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: number of accepted bytes
 * Return: pointer to bytes in string
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*accept++ == *s)
				return ((char *) s);
		}
		s++;
	}

	return ('\0');
}


