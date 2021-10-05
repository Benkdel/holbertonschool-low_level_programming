#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: lower limit
 *
 * Return: none - void function
 *
 */
void print_to_98(int n)
{
	int upper = 98;

	if (n > upper)
	{
		while (n >= upper)
		{
			if (n != upper)
				printf("%d%s", n, ", ");
			else
				printf("%d", n);
			n--;
		}
	}
	else
	{
		while (n <= upper)
		{
			if (n != upper)
				printf("%d%s", n, ", ");
			else
				printf("%d", n);
			n++;
		}
	}
	printf("\n");
}
