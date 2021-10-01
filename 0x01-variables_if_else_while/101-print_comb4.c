#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 *
 *
 */
int main(void)
{
	int x = '0';
	int y = '0';
	int z = '0';
	int first = 1;

	while (x <= '9')
	{
		while (y <= '9')
		{
			while (z <= '9')
			{

				if (x < y && y < z)
				{
					if (x == '0' && y == '0' && z == '0')
					{
					}
					else if (first == 0)
					{
						putchar(',');
						putchar(' ');
					}
					first = 0;
					putchar(x);
					putchar(y);
					putchar(z);
				}
				z++;
			}
			y++;
			z = '0';
		}
		x++;
		y = '0';
	}
	putchar(10);
	return (0);
}
