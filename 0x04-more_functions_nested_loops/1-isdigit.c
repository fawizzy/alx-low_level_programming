#include "main.h"
/**
 * _isdigit - check for number
 * @c: number to check
 * Description: function that checks for numbers
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (c == i)
		{
			return (1);
		}		
	}
	return (0);
}
