#include "main.h"

/**
 * print_last_digit -  calculates the last digit
 * @n: parameter to be checked
 *
 * Return: return n % 10
 */
int print_last_digit(int n)
{
	int lsd;

	lsd = n % 10;
	if (n < 0)
	{
		lsd = -lsd;
	}
	_putchar(lsd + '0');
	return (lsd);
}
