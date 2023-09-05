#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  a function that returns a pointer to 2D array
 * of integers where all elements are initialized to 0
 * @width: the number of columns
 * @height: the number of rows
 * Return: NULL or integer value
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = (int **)malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < width; j++)
			{
				free(arr[j]);
			}
			free(arr[i]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
