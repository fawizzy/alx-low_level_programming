#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to check
 * Description: a function that checks for uppercase
 * Return: 1 if uppercase, 0 if lowercase
 */

int _isupper(int c)
{
	int letters;

	for (letters = 'A'; letters < 'Z'; letters++)
	{
		if (letters == c)
		{
			return (1);
		}
	}

	return (0);
}
