#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int ct, cn = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		ct = atoi(argv[1]);

		while (ct > 0)
		{
			if (ct >= 25)
				ct -= 25;
			else if (ct >= 10)
				ct -= 10;
			else if (ct >= 5)
				ct -= 5;
			else if (ct >= 2)
				ct -= 2;
			else if (ct >= 1)
				ct -= 1;
			cn += 1;
		}
	}
	printf("%d\n", cn);
	return (0);
}
