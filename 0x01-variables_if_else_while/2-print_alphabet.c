#include <stdio.h>

/**
 * main - entry point
 * Description: A C program that prints lowercase letters
 * For loop - Iterate an expression over a given
 * initialization till condition is false
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		putchar(c);
	}
	return (0);
}
