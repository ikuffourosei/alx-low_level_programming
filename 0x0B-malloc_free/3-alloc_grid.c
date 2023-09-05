#include "main.h"
#include <stdlib.h>

/**
 * alloc_grind -  a function that returns a pointer to 2D array
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
	for (i = 0; i < width; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
