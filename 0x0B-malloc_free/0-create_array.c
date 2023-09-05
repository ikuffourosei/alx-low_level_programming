#include "main.h"
#include "stdlib.h"

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: character
 * Return: character or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int j;

	if (size == 0)
	{
		return (NULL);
	}

	ch = malloc((size + 1) * sizeof(char));

	for (j = 0; j < size; j++)
	{
		ch[j] = c;
	}

	return (ch);
}
