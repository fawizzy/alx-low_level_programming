#include "main.h"

/**
 * is_prime_number - check for prime number
 * @n: number to check
 * Return: return 1 if prime
 * 0 if not prime
 */

int check_prime(int x, int factor);

int is_prime_number(int n)
{
	int factor = 0;

	if (n == 0 || n == 1)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (check_prime(n, factor + 1));
}

/**
 * check_prime - check prime numbers
 * @x: number to check
 * @factor: check if its divisible by factor
 * Return: 1 if prime
 * 0 if not prime
 */

int check_prime(int x, int factor)
{
	if (x % factor == 0 && x != factor && factor > 1)
		return (0);
	else if (x == factor)
		return (1);
	else
		return (check_prime(x, factor + 1));
}
