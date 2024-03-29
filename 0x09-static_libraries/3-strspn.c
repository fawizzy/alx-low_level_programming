#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: the string to be searched
 * @accept: the string to be measured
 *
 * Return: the number of bytes in s which
 * consists only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (len);
			}
		}
	}
	return (len);
}
