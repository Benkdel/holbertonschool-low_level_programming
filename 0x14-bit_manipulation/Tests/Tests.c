#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	unsigned int task_num = 0;
	unsigned int n;

	(void)argc;
	(void)n;

	if (argc > 2)
	{
		printf("Error::max parameter = 1\n");
	}

	if (argc == 2)
	{
		task_num = atoi(argv[1]);
	}

	switch (task_num)
	{
	case 0:
		n = binary_to_uint("101");
		printf("%u\n", n);
		n = binary_to_uint("1");
		printf("%u\n", n);
		n = binary_to_uint("101");
		printf("%u\n", n);
		n = binary_to_uint("1e01");
		printf("%u\n", n);
		n = binary_to_uint("1100010");
		printf("%u\n", n);
		n = binary_to_uint("0000000000000000000110010010");
		printf("%u\n", n);
		break;

	case 1:
		print_binary(0);
		printf("\n");
		print_binary(1);
		printf("\n");
		print_binary(98);
		printf("\n");
		print_binary(1024);
		printf("\n");
		print_binary((1 << 10) + 1);
		printf("\n");
		break;
	case 2:
		n = get_bit(1024, 10);
		printf("%d\n", n);
		n = get_bit(98, 1);
		printf("%d\n", n);
		n = get_bit(1024, 0);
		printf("%d\n", n);
		break;

	default:
		break;
	}

	return (0);
}