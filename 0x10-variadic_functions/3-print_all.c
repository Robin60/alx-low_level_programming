#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list params;
	unsigned int i = 0, j, c = 0;
	const char arg_t[] = "cifs";
	char *str;

	va_start(params, format);
	while (format && format[i])
	{
		j = 0;
		while (arg_t[j])
		{
			if (format[i] == arg_t[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(params, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(params, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(params, double)), c = 1;
				break;
			case 's':
				str = va_arg(params, char *), c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	}
	printf("\n"), va_end(params);
}
