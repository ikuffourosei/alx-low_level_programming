#include "main.h"

/**
 * _puts -  prints a string to standard output
 * @str: parameter to be checked
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
