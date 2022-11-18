#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all its paramameters
 * @n: constant number of parameters passed
 * @... variable parameters
 * Return: sum of the variable parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list params;

	va_start(params, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(params, int);
	}
	va_end(params);
	return (sum);
}

