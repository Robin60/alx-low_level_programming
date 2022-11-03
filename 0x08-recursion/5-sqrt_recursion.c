#include "main.h"

/**
 * _sqrt_recursion - natural square root of number
 * @n: the root number
 * Return: natural sq of number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive square root.
 * @n: the number
 * @i: the iterator
 * Return: the number
 */

int _sqrt(int n, int i)
{
	int sq = i * i;

	if (sq > n)
		return (-1);
	if (sq == n)
		return (i);
	return (_sqrt(n, i + 1));
}
