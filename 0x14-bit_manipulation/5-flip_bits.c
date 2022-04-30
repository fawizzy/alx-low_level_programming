#include "main.h"

/**
 * flip_bits - find the nmber of bits needed to
 * flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
