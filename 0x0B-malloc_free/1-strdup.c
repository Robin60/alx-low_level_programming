#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns string length
 * @str: the string
 * Return: the length
 */

char _strlen(char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * _strcpy - copies a string to destination
 * @src: the source
 * @dest: the destination
 * Return: the destination pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * _strdup - returns a pointer to newly created string
 * @str: newly created string
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	char *dest;
	unsigned int size;

	if (str == 0)
		return ('\0');
	size = _strlen(str) + 1;
	dest = (char *) malloc(size * sizeof(char));
	if (dest == 0)
		return ('\0');
	_strcpy(dest, str);

	return (dest);
}
