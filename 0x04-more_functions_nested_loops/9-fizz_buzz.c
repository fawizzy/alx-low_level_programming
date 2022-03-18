#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Description:a program that prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of three print Fizz
 * instead of the number and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Return: 0
 */

int main(void)
{
	int i = 1;
	int j = 0;

	while (i <= 100)
	{
		j = i;

		if (j % 3 == 0 && j % 5 != 0)
		{
			printf("Fizz");
		}
		else if (j % 5 == 0 && j % 3 != 0)
		{
			printf("Buzz");
		}
		else if (j % 3 == 0 && j % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			_putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
