#include "main.h"

/**
 * print_number - prints number using putchar
 * @n: integer value to be printed
 */
void print_number(int n)
{
	int divisor, temp;

	divisor = 1;
	temp = n;
	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	
	while (temp > 9)
	{
		divisor *= 10;
		temp /= 10;
	}
	
	while (divisor != 0)
	{
		int digit = n / divisor;
		_putchar('0' + digit);
		n -= digit * divisor;
		divisor /= 10;
	}
}
