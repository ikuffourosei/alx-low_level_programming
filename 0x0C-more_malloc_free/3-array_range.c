#include "main.h"
#include <stdlib.h>

/**
 * array_range -function that allocates memory for an array
 * @min: minimum array value
 * @max: maximum array value
 * Return: NULL or array
 */
int *array_range(int min, int max)
{
	int *arr, arr_size, i, j;

	j = 0;
	if (min > max)
	{
		return (NULL);
	}
	arr_size = (max - min) + 1;
	arr = malloc(arr_size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max && j < arr_size; i++)
	{
		arr[j] = i;
		j++;
	}
	return (arr);
}
