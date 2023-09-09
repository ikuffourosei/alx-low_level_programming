#include "main.h"
#include <stdlib.h>
 
/**
 * string_nconcat - concatenate two strings
 * @s1: destination string
 * @s2: source string
 * @n: number of bytes
 * Return: NULL or ptr or empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1, i, j, len2;

	j = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	ptr = malloc((len1 + n + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = len1; i < len1 + n; i++)
	{
		ptr[i] = s2[j++];
	}
	ptr[i] = '\0';
	return (ptr);
}
