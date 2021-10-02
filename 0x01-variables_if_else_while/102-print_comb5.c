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
	int x = 0;
	int y = 0;
	int ud_x = 0;
	int ud_y = 0;
	int dd_x = 0;
	int dd_y = 0;

	while (x < 100)
	{
		ud_x = x % 10;
		dd_x = (x - ud_x) / 10 % 10;
		if (dd_x < 0)
			dd_x = 0;

		while (y < 100)
		{
			if (x < y)
			{
				ud_y = y % 10;
				dd_y = (y - ud_y) / 10 % 10;
				if (dd_y < 0)
					dd_y = 0;
				putchar(dd_x + '0');
				putchar(ud_x + '0');
				putchar(' ');
				putchar(dd_y + '0');
				putchar(ud_y + '0');
				if (x != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		x++;
		y = 0;
	}
	putchar(10);
	return (0);
}
