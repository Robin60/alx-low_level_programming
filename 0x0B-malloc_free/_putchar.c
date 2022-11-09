#include "main.h"

/**
 * _putchar - prints the character
 * @c: the character
 * Return: 1 if success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
