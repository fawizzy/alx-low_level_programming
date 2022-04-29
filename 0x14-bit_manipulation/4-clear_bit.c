#include "main.h"

/**
 * clear_bit - set a bit at an index to 0
 * @n: the number to modify
 * @index: index of bit to change
 * Return: 1 if success, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int check = 1;

	check = check << 1;
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	*n = ~(*n | 1);
	return (1);

}
