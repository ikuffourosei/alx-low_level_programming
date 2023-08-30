#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of diagonals of a 2D array
 * @a: pointer to array
 * @size: array size
 */
void print_diagsums(int *a, int size)
{
	int i;
	int first_sum = 0;
	int second_sum = 0;

	for (i = 0; i < size; i++)
	{
		first_sum += a[i * size + i];
		second_sum += a[i * size + (size - 1 - i)];
	}
	printf("%d, ", first_sum);
	printf("%d\n", second_sum);
}
