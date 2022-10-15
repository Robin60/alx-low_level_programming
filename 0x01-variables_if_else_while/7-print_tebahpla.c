#include <stdio.h>
/**
 * main - print lower alphabet in reverse followerd by new line
 * Return: Always 0
 */
int main(void)
{
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
	{
		putchar(lc);
	}

	putchar('\n');

	return (0);
}
