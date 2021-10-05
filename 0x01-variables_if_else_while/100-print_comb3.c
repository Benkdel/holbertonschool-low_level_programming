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
	int first = 1;

	while (x <= '9')
	{
		while (y <= '9')
		{
			if (x < y)
			{
				if (x == '0' && y == '0')
				{
					/* do nothing */
				}
				else
				{
					if (first == 0)
					{
						putchar(',');
						putchar(' ');
					}
					first = 0;
				}
				putchar(x);
				putchar(y);
			}
			y++;
		}
		x++;
		y = '0';
	}
	putchar(10);
	return (0);
}
