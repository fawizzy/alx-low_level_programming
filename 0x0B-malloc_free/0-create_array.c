#include "main.h"

/**
 * create_array - a function that creates an array
 *of chars and initializes it with a specific bar
 * @size: the size of array to be initialized
 * @c: The specific char to initialize the array
 *with
 *
 * Return: If size == 0 or thr functions fail - NULL
 *Otherwise - a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);


	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
