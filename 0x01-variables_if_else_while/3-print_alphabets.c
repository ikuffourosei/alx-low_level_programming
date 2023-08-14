#include <stdio.h>

/**
 * main - entry point
 * Description: A C program that prints all alphabets
 * in lowercase follwed by uppercase
 * While loop - Iterates over a given command till condition is false
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

	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
