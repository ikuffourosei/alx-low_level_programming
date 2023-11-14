#include "main.h"

/**
 * _strcat -  a fucntion that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: concatenated string (dest)
 */
char *_strcat(char *dest, char *src)
{
	char *ptr;
	size_t i = 0, j = 0, k = 0, l = 0;
	
	if (dest == NULL)
	{
		dest = "";
	}
	if (src == NULL)
	{
		src = "";
	}
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	ptr = _calloc(i + j + 1, sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (k < i)
	{
		ptr[k] = dest[k];
		k++;
	}
	for (k = i; k < i + j; k++, l++)
	{
		ptr[k] = src[l];
	}
	ptr[k] = '\0';
	return (ptr);
}
