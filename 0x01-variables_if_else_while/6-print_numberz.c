#include <stdio.h>

/**
 * main - entry point
 * Description: A C program that prints decimals from 0-9
 * using putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;

	c = '0';
	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
