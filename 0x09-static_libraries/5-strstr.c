#include "main.h"

/**
 * _strstr - loctes a substring
 * @haystack: the string
 * @needle: the substring
 * Return: pointer to the beginning of the loc subst
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i])
				return (haystack + i);
		}
	}

	return ('\0');
}
