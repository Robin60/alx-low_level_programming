#include "main.h"

/**
 * _strlen_recursion - lenght of string
 * @s: string pointer
 * Return: the resultant length
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}

/**
 * pal - the palindrome
 * @s: the string pointer
 * @i: the index
 * Return: 1 else 0
 */

int pal(char *s, int i)
{
	if (i < 1)
		return (1);
	if (*s == *(s + i))
		return (pal(s + 1, i - 2));
	return (0);
}

/**
 * is_palindrome - palindrome or not
 * @s: the string pointer
 * Return: 1 else 0
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (pal(s, len - 1));
}
