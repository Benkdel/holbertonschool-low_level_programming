#include "main.h"
/**
 * jack_bauer - function to return the last digit of a numberprint jack B day
 *
 *
 * Return: none - void function
 *
 */
void jack_bauer(void)
{
	int minutes = 0;
	int hours = 0;
	int m_units = 0;
	int m_tens = 0;
	int h_units = 0;
	int h_tens = 0;

	while (hours <= 23)
	{
		h_units = hours % 10;
		h_tens = (hours - h_units) / 10;
		while (minutes <= 59)
		{
			_putchar(h_tens + '0');
			_putchar(h_units + '0');
			_putchar(58);
			m_units = minutes % 10;
			m_tens = (minutes - m_units) / 10;
			_putchar(m_tens + '0');
			_putchar(m_units + '0');
			_putchar(10);
			minutes++;
		}
		hours++;
		minutes = 0;
	}
}
