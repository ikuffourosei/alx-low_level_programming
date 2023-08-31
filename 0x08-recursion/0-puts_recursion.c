#include "main.h"

/**
 * _puts_recursion - prints string recursively
 * @s: string to be printed to STDOUT
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
