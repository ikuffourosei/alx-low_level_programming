#include <stdio.h>
#include "main.h"

/**
 * print_array - prints list of array
 * @a: first parameter to be checked
 * @n: second parameter to be checked
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x == n -1)
		{
			printf("%d\n", a[x]);
		}
		else
		{
			printf("%d, ", a[x]);
		}
	}
}
