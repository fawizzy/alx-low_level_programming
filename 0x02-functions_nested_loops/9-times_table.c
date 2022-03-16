#include "main.h"

/**
 * times_table - prints 9 times table
 * Description: print multiplication table up to 9
 * Return: void
 */

void times_table(void)
{
	int i = 0;
	int j = 0;
	int product, tens, unit;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			product = i*j;
			tens = product / 10;
			unit = product % 10;
			_putchar(tens + '0');
			_putchar(unit + '0');
			_putchar(',');
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
