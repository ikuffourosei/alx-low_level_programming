#include <stdio.h>

/**
 * main - entry point
 * Description: A C program that prints decimal digits (0-9)
 * While loop -  iterate till condition is false
 * Return: Always 0 (success)
 */
int main(void)
{
	int d;

	d = 0;
	while (d <= 9)
	{
		printf("%d", d);
		d++;
	}
	printf("\n");
	return (0);
}
