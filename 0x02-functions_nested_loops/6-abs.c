#include "main.h"

/**
 * _abs -  returns the absolute of an integer
 * @n: parameter to be checked
 *
 * Return: n if (positve or zero) n * -1
 * if negative
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
