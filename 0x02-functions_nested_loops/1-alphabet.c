#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - prints lowercase characters followed by newline
 * Return: no value
 */
void print_alphabet(void)
{
	char lett;

	lett = 'a';
	while (lett <= 'z')
	{
		_putchar(lett);
		lett++;
	}
	_putchar('\n');
}
