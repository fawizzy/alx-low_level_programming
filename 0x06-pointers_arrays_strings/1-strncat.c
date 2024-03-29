#include "main.h"

/**
 * _strncat - concatenate two strings add n bytes of
 * src to dest
 * @dest: the first strings
 * @src: the second string
 * @n: number of characters from src
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0, j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
