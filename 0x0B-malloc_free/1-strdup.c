#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a duplicate of a string
 * @str: string
 * Return: NULL or character value
 */
char *_strdup(char *str)
{
	unsigned int i, len;
	char *new;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);

	new = malloc((len + 1) * sizeof(char));
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		new[i] = str[i];
	}
	new[len] = '\0';

	return (new);
}
