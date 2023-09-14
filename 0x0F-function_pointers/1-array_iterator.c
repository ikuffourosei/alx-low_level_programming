#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - perfomrs the function (action) on each
 * element in the array
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function to be performed on array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size == 0 || array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
