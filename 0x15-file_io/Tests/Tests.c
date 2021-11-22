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
	int res;
	ssize_t n;

	(void)argc;
	(void)n;
	(void)res;

	if (argc < 3)
	{
		dprintf(2, "At least 3 parameters: num of task, filename, and text. passed: %d\n", argc);
		exit(1);
	}
	task_num = atoi(argv[1]);

	switch (task_num)
	{
	case 0:
		n = read_textfile(argv[2], 114);
		printf("\n(printed chars: %li)\n", n);
		n = read_textfile(argv[2], 1024);
		printf("\n(printed chars: %li)\n", n);
		break;
	case 1:
		res = create_file(argv[2], argv[3]);
    		printf("-> %i)\n", res);
		break;
	case 2:
		res = append_text_to_file(argv[2], argv[3]);
    		printf("-> %i)\n", res);
		break;
	case 4:
		break;
	default:
		break;
	}

	return (0);
}