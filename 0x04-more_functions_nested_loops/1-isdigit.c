#include "main.h"

/**
 * _isdigit - check if input is a digit
 * @c: parameter to be checked
 *
 * Return: 1 (digit) 0 (otherwise)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
