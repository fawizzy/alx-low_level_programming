#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the newly allocated space
 * that contains content of s1 followed by s2
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, j, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;
	for (i = 0; s2[i]; i++)
		len++;
	s3 = malloc(sizeof(char) * (len + 1));
	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s3[i] = s1[i];
	for (j = 0; s2[j]; j++)
		s3[i] = s2[j];
	s3[len] = '\0';
	return (s3);
}
