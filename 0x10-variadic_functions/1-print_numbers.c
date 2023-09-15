#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <string.h>

/**
 * print_numbers - prints numbers separated by the separator string
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pnf;
	unsigned int i;
	int digit;

	va_start(pnf, n);

	if (separator == NULL)
	{
		va_end(pnf);
		return;
	}
	for (i = 0; i < n; i++)
	{
		digit = va_arg(pnf, int);
		printf("%d", digit);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(pnf);
	printf("\n");
}
