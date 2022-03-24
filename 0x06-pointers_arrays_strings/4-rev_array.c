#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a: array of integers
 * @n: number of elemnts in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;
	int half = n / 2;

	while (half > 0)
	{

		temp = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = temp;
		i++;
		half--;
	}
}
