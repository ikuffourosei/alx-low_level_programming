#include <stdio.h>

/**
 * main - entry point
 * Description: A C program that prints lowercase letters
 * While loop - Iterate an expression over a given
 * initialization till condition is false
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
