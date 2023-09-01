#include "main.h"

/**
 * prime_factor -  calculates if n is a prime number
 * @n: integer input
 * @i: guess integer to check for prime factor
 * Return: 0 if false 1 if true
 */
int prime_factor(int n, int i)
{
	if (i * i <= n)
	{
		if (n % (i * i) == 0)
		{
			return (0);
		}
		else
		{
			return (prime_factor(n, i + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - checks for prime number
 * @n: integer input
 * Return: 0 if false, 1 if true
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (prime_factor(n, 2));
	}
}
