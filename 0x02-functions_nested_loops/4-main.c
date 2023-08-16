#include <stdio.h>
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		r = _isalpha(ch);
		_putchar(r + '0');
	}
	_putchar('\n');
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		r = _isalpha(ch);
		_putchar(r + '0');
	}
	_putchar('\n');
	return (0);
}
