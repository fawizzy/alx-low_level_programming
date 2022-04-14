#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - select the correct function to perform
 * the right operation
 * @s: operator
 * Return: pointer to the function that corresponds to
 * operator given
 */

int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	for (i = 0; ops[i].op != NULL && *ops[i].op != *s; i++)
		;
	return (ops[i].f);
}
