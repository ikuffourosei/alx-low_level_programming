#include "main.h"

/**
 * more_numbers - print numbers 10 times
 */
void more_numbers(void)
{
	int d, t;

	for (t = 0; t < 10; t++)
	{
		for (d = 0; d <= 14; d++)
		{
			int f, l;

			f = d / 10;
			l = d % 10;
			if (d > 9)
			{
				_putchar('0' + f);
			}
			_putchar('0' + l);
		}
		_putchar('\n');
	}
}
