#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: integer parameter
 */
void *malloc_checked(unsigned int b)
{
	int i = 98;
	void *ptr = (void *)malloc(b);

	if (ptr == NULL)
	{
		exit(i);
	}
	return (ptr);
}
