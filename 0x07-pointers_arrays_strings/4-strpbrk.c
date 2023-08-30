#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strpbrk - search a string for any set of bytes and returns a pointer
 * @s: pointer to string
 * @accept: pointer to accept
 * Return: string or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (strchr(accept, *s) != NULL)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
