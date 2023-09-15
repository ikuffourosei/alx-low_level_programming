#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints the strings passed as arguments to a function
 * @separator: string that separates each parameter
 * @n: number of strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list st;
	unsigned int i;
	char *str;

	va_start(st, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(st, char *);
		if (str != NULL)
		{
			printf("%s", str);
			if ((i < n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		else if (str == NULL)
		{
			printf("nil");
			if ((i < n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(st);
}
