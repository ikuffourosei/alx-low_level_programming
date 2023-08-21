#include "main.h"
#include <string.h>

/**
 * puts2 - prints even indexes
 * @str: parameter to be checked
 *
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	i = 0;
	while (i < len)
	{
		int e;

		e = i % 2;
		if (e == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
