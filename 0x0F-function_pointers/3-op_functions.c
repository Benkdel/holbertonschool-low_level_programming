#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: sum of two numbers
 *
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calc difference of a and b
 *
 * @a: first number
 * @b: second number
 *
 * Return: difference of a and b
 *
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: product of a times b
 *
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide a by b
 *
 * @a: first number
 * @b: second number
 *
 * Return: division of two integers
 *
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calc modulo of a number
 *
 * @a: first number
 * @b: second number
 *
 * Return: reminder when a is div by b
 *
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
