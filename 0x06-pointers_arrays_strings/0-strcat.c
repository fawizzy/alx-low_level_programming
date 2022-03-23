#include "main.h"

/**
 *  _strcat - a function that appends string to anothe string
 *  @src: first string
 *  @dest: second string
 *  Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
