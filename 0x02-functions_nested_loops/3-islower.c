#include "main.h"

/**
 *  _islower - entry point
 *  Description: check for lower case
 *  @c: the input to check
 *  Return: 1 if true. 0 if false
 */

int _islower(int c)
{
	int letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters == c)
		{
			return (1);
		}
	}
return (0);
}
