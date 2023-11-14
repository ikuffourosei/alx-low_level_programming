#include "main.h"

/**
 * _strcpy - copies a string from source to destination
 * @dest: dsetination 
 * @src: source
 * Return: destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
