#include "main.h"

/**
 * _pow_recursion - returns value of x raised to power y
 * @x: base value
 * @y: power value
 * Return: x power y
 */

int _pow_recursion(int x, int y)
{
	if (x == 1)
		return (1);
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
