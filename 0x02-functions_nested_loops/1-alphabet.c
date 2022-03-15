#include "holberton.h"

/**
 * main- check the code
 *
 * Description: a function that prints
 * 		alphabet in lower case 
 * 		followed by new line
 *
 * Return always 0
 */

int main(void)
{
	_putchar();
	return (0);
}

void print_alphabet(void)
{
	char letter = 'a';
	while (letter <='z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	return (0);
}
