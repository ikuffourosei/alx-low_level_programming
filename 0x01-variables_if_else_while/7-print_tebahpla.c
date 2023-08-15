#include <stdio.h>

/**
 * main - entry point
 * Description: A C program that prints alphabets in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
