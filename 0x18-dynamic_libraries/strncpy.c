#include "main.h"

/**
 * _strncpy - function that copies the first n characters to dest
 * @dest: destination of copied string
 * @src: string to be copied
 * @n: number of characters
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
