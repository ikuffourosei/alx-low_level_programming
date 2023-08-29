#include "main.h"
#include <string.h>

/**
 * _strchr - returns a pointer to the first occurence of c
 * @s: pointer to string s
 * @c: character being checked for
 * Return: pointer to occurrnece of string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
