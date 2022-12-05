#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - returns number of bits to flip to get from one number to another
 * @n: the number
 * @m: the number to flip n to
 * Return:  returns the number of bits you would need to flip to
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int oper = n ^ m, bits = 0;

	while (oper > 0)
	{
		bits += (oper & 1);
		oper >>= 1;
	}
	return (bits);
}
