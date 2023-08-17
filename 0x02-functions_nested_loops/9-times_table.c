#include "main.h"

/**
 *times_table - prints multiple of 9
 *
 * Return: none
 */
void times_table(void)
{
	int s, e;

	for (s = 0; s <= 9; s++)
	{
		for (e = 0; e <= 9; e++)
		{
			int m, f, l;

			m = s * e;
			f = m / 10;
			l = m % 10;
			if (m < 10)
			{
				_putchar('0' + m);
				if (e < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + f);
				_putchar('0' + l);
				if (e < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
