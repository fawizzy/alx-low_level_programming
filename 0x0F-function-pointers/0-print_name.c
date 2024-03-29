#include "function_pointers.h"

/**
 * print_name - a function that prints name
 * @name: name to be printed
 * @f: pointer to the function that prints name
 * Return: void
 */

void print_name(char *name, void *f(char *))
{
	if (name == NULL || f == NULL)
		return (NULL);
	f(name);
}
