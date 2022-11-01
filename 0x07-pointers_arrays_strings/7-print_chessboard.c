#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the array
 */

void print_chessboard(char (*a)[8])
{
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar((*a)[i]);
		if (i < 7)
			_putchar(',');
	}

	_putchar('\n');
}
