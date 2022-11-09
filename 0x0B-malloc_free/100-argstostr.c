#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatinates all arguments of a program
 * @ac: argument count or grid width
 * @av: the argument vector or grid height
 * Return: NULL if ac or av is 0
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int count, a = 0, b = 0, c = 0;

	if (ac == 0 || av == NULL)
		return ('\0');
	while (a < ac)
	{
		while (av[a][b] != '\0')
		{
			count++;
			b++;
		}
		a++;
	}
	count = count + ac + 1;
	ptr = malloc(sizeof(char) * count);

	if (ptr == NULL)
		return ('\0');
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			ptr[c] = av[a][c];
			c++;
		}
		ptr[c] = '\n';
		c++;
	}

	return (ptr);
}
