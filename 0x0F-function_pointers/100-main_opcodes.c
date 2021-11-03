#include <stdio.h>
#include <stdlib.h>

/**
 * main(int argc, char** argv) - describe function
 *
 * @p1: describe variables in this way
 *
 * Return: describe
 *
 */
int main(int argc, char** argv)
{
	int (*address)(int, char **) = main;
	unsigned char opcode;

	opcode = *(unsigned char *)address;

	printf("%.2x\n", opcode);

	return (0);
}
