#include "main.h"

/**
 * _pow_recursion - find the value of ax raised to the pow of y
 * @x: base number
 * @y: power
 * Return: -1 if < 0
 * x raised to pow y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
