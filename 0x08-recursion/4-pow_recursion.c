#include "main.h"

/**
 * _pow_recursion - returns the exponent of two integers
 * @x: base integer
 * @y: power integer
 * Return: -1 if y < 0, exponent value
 */
int _pow_recursion(int x, int y)
{
	if (x == 1 || y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y-1));
}
