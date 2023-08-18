#include "main.h"

/**
 * print_line - prints line n times
 * @n: number of times line prints
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
