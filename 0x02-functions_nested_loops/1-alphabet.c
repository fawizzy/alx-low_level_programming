#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Description: a function that prints
 *alphabet in lower case
 *followed by new line
 *
 * Return void
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');

}
