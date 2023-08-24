#include "main.h"
#include <string.h>

/**
 * string_toupper - converts string from lower to upper
 * @str: string to be converted
 * Return: str
 */
char *string_toupper(char *str)
{
	char *ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}
	return (str);
}
