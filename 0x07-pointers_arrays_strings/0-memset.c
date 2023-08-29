#include "main.h"

/**
 * _memset - fills the first n bytes of memory area pointed to by s with b
 * @s: pointer to memory allocation
 * @b: bytes constant
 * @n: number of bytes
 * Return: pointer to memory (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
