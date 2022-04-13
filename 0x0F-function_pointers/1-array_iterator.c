#include "function_pointers.h"

/**
 * array_iterator - executes a function as a parameter
 * @array: list of items
 * @size: size of array
 * @action: the function to execute
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
