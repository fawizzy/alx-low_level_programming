#include "main.h"

/**
 * set_bit - set the value of a bit to 1
 * @n: unsigned long int to check
 * @index: the index to check
 *
 * Return: 1 if it worked, -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int check = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	check <<= index;
	*n = (*n | check);

	return (1);

}
