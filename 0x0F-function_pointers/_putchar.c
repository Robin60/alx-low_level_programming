#include "main.h"
#include <unistd.h">

/**
 * _putchar -writes the character c to stdout
 * @c: caracter to print
 * Return: 1 if success else -1
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
