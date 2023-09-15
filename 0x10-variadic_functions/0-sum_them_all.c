#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sums all parameters
 * @n: number of paarameters given
 * Return: sum value or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sm;
	int res, par;
	unsigned int i;

	va_start(sm, n);
	res = 0;
	if (n == 0)
	{
		va_end(sm);
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		par = va_arg(sm, int);
		res += par;
	}
	va_end(sm);

	return (res);

}
