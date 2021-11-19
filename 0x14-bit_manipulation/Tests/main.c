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
        

        default:
                break;
        }

        return (0);
}