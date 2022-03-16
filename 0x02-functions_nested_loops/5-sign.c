#include "main.h"

/**
 * print_sign - check the sign
 * Description: print the sign of a number
 * @c: character to be tested
 * Return: 1 if c is greater than zero,
 * 0 if c is zero and -1 if less than zero
 */

int print_sign(int n)
{
	if (n > o)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}

}
