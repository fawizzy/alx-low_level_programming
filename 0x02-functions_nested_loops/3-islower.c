#include "main.h"

/**
 *  _islower - entry point
 *
 *  Description: check for lower case
 *
 *  Return 0
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
