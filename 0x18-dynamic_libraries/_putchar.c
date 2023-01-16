#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: character to be printed
 * Return: 1 if success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
