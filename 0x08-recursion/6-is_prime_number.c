#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is prime number.
 * @n: the number
 * Return: 1 if prime, else 0
 */

int is_prime_number(int n)
{
	return (_is_prime(n, 1));
}

/**
 * _is_prime - checks the prime
 * @n: the number
 * @i: the iterator
 * Return: 1 otherwise 0
 */

int _is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if (n / i < i)
		return (1);
	return (_is_prime(n, i + 1));
}
