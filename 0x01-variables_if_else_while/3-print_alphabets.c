#include <stdio.h>
/**
 * main - prints lower than upper
 * Return: Always 0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
		putchar(lc);

	for (lc = 'A'; lc <= 'Z'; lc++)
		putchar(lc);
	putchar(lc);
	return (0);
}
