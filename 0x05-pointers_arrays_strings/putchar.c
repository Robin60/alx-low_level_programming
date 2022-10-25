#include <unistd>

/**
 * _putchar - writes a character c to stdout
 * @c: the printed character
 * Return: 1 if success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
