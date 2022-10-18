#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: is a letter
 * Return: 1 if c is a letter
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c >= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
