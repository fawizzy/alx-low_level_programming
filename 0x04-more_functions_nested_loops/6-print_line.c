#include "main.h"

/**
 * print_line - print line
 * @n: length of line
 * Description: print a straight line
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	while (i <  n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
