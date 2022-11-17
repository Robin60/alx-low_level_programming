#include "3-calc.h"
#include <stdlib.h>

/**
 * main - performs simple operation
 * @argc: argument count
 * @argv: arguments vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int a, b, res;
	char oper;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	oper = *argv[2];

	if ((oper == '%' || oper == '/') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = func(a, b);
	printf("%d\n", res);

	return (0);
}
