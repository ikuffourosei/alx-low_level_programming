#include "main.h"

/**
 * _puts - writes a string to the stdout
 * @s: string
 * Return: string
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}
