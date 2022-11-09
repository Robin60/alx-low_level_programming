#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the string length
 * @str: string
 * Return: the length
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * str_concat - concatinates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0;
	unsigned int size;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = (_strlen(s1) + _strlen(s2) + 1);

	ptr = (char *) malloc(size * sizeof(char));

	if (ptr == 0)
	{
		return ('\0');
	}

	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*(ptr + i) = *(s1 + i);
	}
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(ptr + i) = *(s2 + j);
		i++;
	}
	return (s1);
}
