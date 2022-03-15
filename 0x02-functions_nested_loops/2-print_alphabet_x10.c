#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description - print 10 the alphabet
 * in lower case followed by a new line
 *
 * Return void
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
