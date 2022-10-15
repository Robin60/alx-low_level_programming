#include <stdio.h>
/**
 * main - print all possible combinations of single digit numbers
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 57; i++)
	{
		putchar(i);
		if (i != 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
