#include <stdio.h>

/**
 * main -  entry point
 * Description: A  program that prints every alphabet
 * except q and e
 * While loop - iterates over the statements till condtion is false
 * If - if statement is true, execute this code
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
			c++;
			continue;
		}
		putchar(c);
		c++;
	}
	putchar (c);
	return (0);
}
