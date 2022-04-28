#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 * @n: integer value
 * @index: the index to get bit from
 *
 * Return: value of bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check = 1;

	check <<= index;
	if (index > (sizeof(unsigned long int) * 8))
			return (-1);

	if (check & n)
		return (1);
	else
		return (0);

	
}
