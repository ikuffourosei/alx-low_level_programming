#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * Description: A C prorgam that checks for prime factors
 *
 * is_prime - checks for prime
 * @n: parameter to be checked
 * Return: 1 (success) 0(otherwise)
 *
 * prime_factors - prints prime factors
 * @n: parameter to be checked
 * Return: always 0 (main)
 */
int is_prime(int n)
{
	int k; 

	if (n <= 1)
	{
		return (0);
	}
	
	for (k = 2; k <= sqrt(n); k++)
	{
		if (n % k == 0)
		{
			return (0);
		}
	}
	
	return (1);
}

void prime_factors(int n)
{
	int i;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0 && is_prime(i))
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}

int main(void)
{
	long int number = 612852475143;
	
	printf("Prime factors of %ld: ", number);
	prime_factors(number);
	printf("\n");
	
	return (0);
}
