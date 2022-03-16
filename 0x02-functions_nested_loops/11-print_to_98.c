#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print to 98
 * @n: first number
 * Description: print from n to 98
 * return: 0;
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d", n);
		n++;
	}
}
