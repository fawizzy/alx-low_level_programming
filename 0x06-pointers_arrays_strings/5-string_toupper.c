#include "main.h"

/**
 * string_toupper - change lowercase to upper case
 * @c: string to change to upppercase
 * Return: uppercase letter
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] = '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - 32;
		}
		i++;
	}
	return (c);
}
