#include "main.h"

/**
 * *_strchr - returns a pointer to the first occurence
 * of a character
 * @s: set of characters
 * @c: the character to check
 * Return: pointer to the first occurence of c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
