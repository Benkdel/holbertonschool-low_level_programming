#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - executes function pointer with par name
 *
 * @name: string to be passed to function pointer
 * @f: function pointer
 *
 * Return: none - void function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
