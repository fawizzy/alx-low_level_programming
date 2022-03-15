#include <stdio.h>

/**
 * main - putchar
 *
 * Description: A program that prints _putchar
 *
 * Return: Always 0
 */
int main(void)
{
	char val[] = "_putchar\n";
	int i = 0;
	while (val[i] != "\0")
	{
		_putchar(val);
		i++;
	}
	return (0);

}

