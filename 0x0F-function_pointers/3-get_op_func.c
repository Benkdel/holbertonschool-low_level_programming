#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - function to select correct funciton to perform
 *
 * @s: string with operation to be performed
 *
 * Return: pointer to function to be use
 *
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0, cmp = -1;
	char *op;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		op = ops[i].op;
		cmp = strcmp(s, op);
		if (cmp == 0)
		{
			return (ops[i].f);
		}
		i++;
	}

	printf("Error\n");
	exit(99);
}
