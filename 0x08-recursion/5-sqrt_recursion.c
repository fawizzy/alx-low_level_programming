#include "main.h"

/**
 * _sqrt_recursion - find square root
 * @n: the number whose sqrt is to be found
 * Return square root of n
 */

int _sqrt_recursion(int n)
{
	int root = n;
	return check_root(n,root);
}

int check_root(int x, int root)
{
	if (root * root == x)
		return root;
	else if (root == 0 || x < 0)
		return (-1);
	else
		return check_root(x, root - 1);
}
