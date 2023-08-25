#include "main.h"

/**
 * reverse_array - reverses the contents in an array
 * @a: array
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int j, k;

	j = 0;
	k = n - 1;
	while (j < k)
	{
		int prev = a[j];

		a[j] = a[k];
		a[k] = prev;
		j++;
		k--;
	}
}
