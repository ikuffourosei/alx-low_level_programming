#include "main.h"

/**
 * print_triangle - prints traingle
 * @size: parameter to be checked
 */
void print_triangle(int size)
{
	int c, d;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (c = 1; c <= size; c++)
	{
		for (d = 1; d <= (size - c); d++)
		{
			_putchar(' ');
		}
		for (d = 1; d <= c; d++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
