#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: number of argument
 * @argv: array of argumment
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
	{
		;
	}
	else
	{
		int i, digit;

		for (i = 1; i < argc; i++)
		{
			for (digit = 0; argv[i][digit]; digit++)
			{
				if (argv[i][digit] < '0' || argv[i][digit] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}

	printf("%d\n", sum);

	return (0);
}
