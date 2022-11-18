#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - print strings followed by new line
 * @separator: string to be in between lines
 * @n: number of strings passed
 * @...: varable parameters to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list params;
	unsigned int i;
	char *str;

	va_start(params, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(params, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(params);
}
