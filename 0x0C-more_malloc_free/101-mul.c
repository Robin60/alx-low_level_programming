#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
 * main - multiplies two positive nubers
 * @argc: number of arguments
 * @argv: argument vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0 ; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
