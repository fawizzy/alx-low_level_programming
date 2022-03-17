#include "main.h"

/**
 * print_line - print line
 * @n: length of line
 * Description: print a straight line
 * Return: void
 */

void print_line(int n)
{
	int i;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
