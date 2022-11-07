#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - adds two positive numbers
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int c, sum = 0;
	char *arr;

	if (argc < 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			arr = argv[i];

			for (c = 0; c < strlen(arr); c++)
			{
				if (arr[c] < 48 || arr[c] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(arr);
			arr++;
		}

		printf("%d\n", sum);
	}

	return (0);
}
