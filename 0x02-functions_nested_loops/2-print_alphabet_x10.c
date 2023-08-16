#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints characters from a
 * to z 10 times to STDOUT
 * Return: No return value
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
