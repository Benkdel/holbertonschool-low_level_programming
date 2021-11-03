#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * getFun - function to select correct funciton to perform
 *
 *
 * Return: pointer to function to be use
 *
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0, cmp = -1;
	char *op;

	op_t ops[] =
	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 6)
	{
		op = ops[i].op;
		/*printf("comparing parameter %s with op %s  || ", s, op);
		printf("len of parameter is: %ld, len of op is: %ld\n", strlen(s), strlen(op));
		printf("%d\n", strcmp(s, op));*/
		cmp = strcmp(s, op);
		if (cmp == 0)
		{
			/*printf("match op function, %s == %s\n", s, op);*/
			return (ops[i].f);
		}
		i++;
	}

	printf("Error\n");
	exit(99);
}
