#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integer
 * @min: minimum integer in the array
 * @max: maximum integer in the array
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *mem;
	int len, i;

	len = max - min + 1;
	mem = malloc(sizeof(int) * len);

	if (mem == NULL || min > max)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		mem[i] = min;
		min++;
	}

	return (mem);
}
