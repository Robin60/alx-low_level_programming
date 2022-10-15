#include <stdio.h>
/**
 * main - print all numbers in base 16 followed by new line
 * Return: Always 0
 */
int main(void)
{
	int i;
	char lc;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	for (lc = 'a'; lc <= 'f'; lc++)
		putchar(lc);

	putchar('\n');

	return (0);

}
