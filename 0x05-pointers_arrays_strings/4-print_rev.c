#include "main.h"
#include <string.h>

/**
 * print_rev - prints reverse
 * @s: aprameter to be checked
 */
void print_rev(char *s)
{
	int len;

	len = strlen(s);
	while (len >= 0)
	{
		_putchar(s[len - 1]);
		len--;
	}
	_putchar('\n');
}
