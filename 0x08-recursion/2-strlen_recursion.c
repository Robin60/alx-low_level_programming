#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: the string
 * Return: the length
 */

int _strlen_recursion(char *s)
{
	len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
}
