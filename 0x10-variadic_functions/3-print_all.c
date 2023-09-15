#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: list of arguments to be passed to function
 */

void print_all(const char * const format, ...)
{
	int i;
	int flag;
	char *str;
	va_list print;

	va_start(print, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(print, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(print, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(print, double));
				flag = 0;
				break;
			case 's':
				str = va_arg(print, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(print);
}
