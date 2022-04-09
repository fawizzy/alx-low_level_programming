#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * @b: size of memory
 * Return: pointer to the allocated memory
 */

void *malloc_checked(int b)
{
	char *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
