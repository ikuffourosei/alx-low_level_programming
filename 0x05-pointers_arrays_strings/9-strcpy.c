#include <stdio.h>

/**
 * _strcpy - copies string from src to destination
 * @dest: first parameter
 * @src: second parameter
 * Return: character if successful
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (original_dest);
}
