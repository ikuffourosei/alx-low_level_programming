#include <unistd.h>
#include "main.h"

/**
 * void - function with no return value
 * print_alphabet - prints lowercase characters followed by newline
 * Description: print_alphabet() displays the lowercase
 * alphabet in sequential order,starting from 'a' and ending with 'z',
 * followed by a newline character
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
