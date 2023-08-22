#include "main.h"
#include <string.h>

/**
 * puts_half - prints second half of a string
 * @str: parameter to be checked
 */
void puts_half(char *str)
{
	int len, n;

	len = strlen(str);
	if (len % 2 == 0)
	{
		n = len / 2;
		while (n < len)
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		int k;

		k = ((len -1 ) / 2) + 1;
		while (k < len)
		{
			_putchar(str[k]);
			k++;
		}
	}
	_putchar('\n');
}
