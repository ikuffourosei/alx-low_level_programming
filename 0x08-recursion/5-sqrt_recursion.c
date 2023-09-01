#include "main.h"

/**
 * calculate_sqrt - Helper function to calculate the square root recursively.
 * @n: The number for which to calculate the square root.
 * @i: The current guess for the square root.
 *
 * Return: The square root of n if it's a perfect square, otherwise -1.
 */
int calculate_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (calculate_sqrt(n, i + 1));
	}
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to calculate the square root.
 *
 * Return: The square root of n if it's a perfect square, otherwise -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (calculate_sqrt(n, 1));
}
