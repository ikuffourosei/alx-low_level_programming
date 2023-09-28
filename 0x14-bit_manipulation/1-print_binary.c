#include "main.h"

/**
 * xpo - calculates the base and exponent
 * @base: base
 * @power: power
 * Return: value of base and power
 */
unsigned long int xpo(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= power; i++)
		num *= base;
	return (num);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: num of printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int bin, res;
	char flag;

	flag = 0;
	bin = xpo(2, sizeof(unsigned long int) * 8 - 1);

	while (bin != 0)
	{
		res = n & bin;
		if (res == bin)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || bin == 1)
		{
			_putchar('0');
		}
		bin >>= 1;
	}
}
