#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters of second string to add
 * Return: A pointer to the newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	int i, j, k, l_mem;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n > j)
		n = j;

	l_mem = n + i;

	mem = malloc(l_mem + 1);

	if (mem == NULL)
		return (NULL);

	for (k = 0; k <= l_mem; k++)
	{
		if (k < i)
			mem[k] = s1[k];
		else
			mem[k] = s2[k];
	}
	mem[k] = '\0';

	return (mem);
}
