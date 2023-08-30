#include "main.h"
#include <string.h>

/**
 * _strspn - gets length of prefix substring
 * @s: pointer to string
 * @accept: pointer to accept
 * Return: l
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l;

	l = 0;
	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		l++;
		s++;
	}
	return (l);
}
