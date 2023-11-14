#include "main.h"

/**
 * _strncat - concatenates at most n characters from src to dest
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to concatenate
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len = 0;
	
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[i] != '\0' && i < n)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	
	dest[dest_len + i] = '\0';
	
	return (dest);
}

