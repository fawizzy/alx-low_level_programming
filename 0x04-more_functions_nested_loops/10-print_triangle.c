#include "main.h"

/**
 * print_triangle - print triangle
 * @size: size of the triangle
 * Description: print triangle
 * return: void
 */

void print_triangle(int size)
{
	int i = 1;
	int j = 0;

	while (i < size)
	{
		j = 0;
		while (j < size - i)
		{
			_putchar(' ');
			j++;
		}
		j = 0;
		while (j < i)
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
