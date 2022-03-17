#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to check
 * Description: a function that checks for uppercase
 * Returns: 1 if uppercase, 0 if lowercase
 */

int _isupper(int c)
{
	for (int letters = 'A'; letters < 'Z'; letters++)
	{
		if (c == letters)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
