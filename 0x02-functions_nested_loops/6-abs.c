#include "main.h"

/**
 * _abs: entry point
 * @n: number is the integer
 * Description: print absolute value of a number
 * Return 0
 */

int _abs(int n)
{
	if (n > 0)
		_putchar(n);
	if (n < 0)
	{
		n = n * -1;
		_putchar(n);
	}
	return (0);
}
