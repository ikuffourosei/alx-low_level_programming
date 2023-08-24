#include "main.h"
#include <string.h>

/**
 * _strcat - concantenates two strings
 * @dest: first parameter (destination)
 * @src: second parameter (source)
 * Return: string value
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
