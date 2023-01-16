#include "main.h"

/**
 * *_strcpy - copies string pointed by src
 * @dest: buffer pointed
 * @src: string pointed
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = '\0';

	return (dest);
}
