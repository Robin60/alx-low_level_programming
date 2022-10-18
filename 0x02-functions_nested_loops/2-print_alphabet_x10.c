#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabet, in lowercas.
 */
void print_alphabet_x10(void)
{
	int lc;
	int times;

	for (times = 0; times <= 9; times++)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
			_putchar(lc);
		_putchar('\n');
	}
}
