#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Description: A C programming code that prints a random
 * number telling whether poitive or negative
 * If - If the condtion is true, the body of the If statement is executed
 * Else - This is executed when both If and Else _f conditions are false
 * Return: Always 0 (successful)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
