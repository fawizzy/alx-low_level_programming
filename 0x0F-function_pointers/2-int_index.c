#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: list of item
 * @size: size of the array
 * @cmp: the function to compare value
 * Return: index of the first element to be found
 * -1 if no element is found and size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		cmp(array[i]);

		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);

}
