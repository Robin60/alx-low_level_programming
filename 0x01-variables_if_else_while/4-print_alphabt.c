#include <stdio.h>
/**
 * main - prints alphabets in lowercase except q and e
 * Return: Always 0
 */
int main(void)
{
	char le;

	for (le = 'a'; le <= 'z'; le++)
	{
		if (le != 'q' && le != 'e')
		{
			putchar(le);
		}
	}
	putchar('\n');

	return (0);
}

