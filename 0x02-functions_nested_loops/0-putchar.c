#include "main.h"

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
	while (val[i] != '\0')
	{
		char c = str[i];
		_putchar(c);
		i++;
	}
	return (0);

}

