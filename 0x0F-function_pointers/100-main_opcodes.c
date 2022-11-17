#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints opcodes of its own main function
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	char *opcode = (char *) main;
	int i, nbts;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nbts = atoi(argv[1]);
	if (nbts < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < nbts; i++)
	{
		printf("%02x", opcode[i] & 0xFF);
		if (i != nbts - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
