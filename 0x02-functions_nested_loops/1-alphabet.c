#include <unistd.h>
#include "main.h"

/**
 * void - function with no return value
 * print_alphabet - function that writes lowercase characters to STDOUT
 * with another prototype function called _putchar
 * to the STDOUT
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
}
