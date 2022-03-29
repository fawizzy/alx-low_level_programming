#include "main.h"

/**
 * _memcpy - copy bytes from one memory to another
 * @dest: destination memory
 * @src: source memory
 * @n: size of memory
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
