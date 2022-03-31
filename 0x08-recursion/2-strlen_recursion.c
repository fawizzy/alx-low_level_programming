#include "main.h"

/**
 * _strlen_recursion - return the length of string
 * @s: the string to find the length
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
