#include "main.h"

/**
 * print_square - prints square according to size
 * @size: parameter to be checked
 */
void print_square(int size)
{
	int c, d;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (c = 1; c <= size; c++)
	{
		for (d = 1; d <= size; d++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
