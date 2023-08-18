#include "main.h"

/**
 * print_most_numbers -  prints numbers except 4 and 2
 */
void print_most_numbers(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		if (d == 2 || d == 4)
		{
			continue;
		}
		_putchar('0' + d);
	}
	_putchar('\n');
}
