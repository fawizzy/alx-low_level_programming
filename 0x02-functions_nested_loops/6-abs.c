#include "main.h"

/**
 * _abs - entry point
 * @n: number is the integer
 * Description: print absolute value of a number
 * Return: 0
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
	{
		return (-n);
	}
	else
		return (0);
}
