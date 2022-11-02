#include "main.h"

/**
 * _strchr - locates a chracter in a string
 * @s: the string
 * @c: the character
 * Return: the string
 */

char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
		i++;

	for (j = 0; j < i; j++)
	{
		if (c == s[j])
		{
			s += j;
			return (s);
		}
	}
	return ('\0');
}
