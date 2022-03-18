#include "main.h"

/**
 * print_square - print a square
 * @size: size of the square
 * Description: a function that print a square
 * of a particular size
 * return: void
 */

void print_square(int size)
{
	int i = 0;
	int j = 0;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
