#include "main.h"

/**
 * _strncpy - copy the value of a string to another string
 * @dest: first string
 * @src: second string
 * @n: number of characters to sprint
 * Return: dest
 */

int *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	
}
