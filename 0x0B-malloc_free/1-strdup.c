#include "main.h"
#include <stdlib.h>

/**
 * strdup - returns pointer to the duplicated string
 * @str: the string to be duplicated
 *
 * Return: NULL if str = NULL
 * pointer to the new string
 */

char *_strdup(char *str)
{
	char *array;
	int i, len = 0;

	for (i = 0; str[i]; i++)
	{
		len++;
	}

	array = malloc(sizeof(char) * (len + 1));	
	if (array == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		array[i] = str[i];
	}
	array[len] = '\0';

	return (array);
}
