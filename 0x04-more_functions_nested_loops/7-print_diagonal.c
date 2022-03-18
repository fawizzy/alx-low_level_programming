#include "main.h"

/**
 * print_diagonal - draw diagonal line
 * @n: number of times character should be printed
 * Description: draw a diagonal line
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	while (i < n && n > 0)
	{
		j = 0;

		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
