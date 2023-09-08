#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
	unsigned int len1, i, len2;

	len1 = strlen(s1);
	len2 =  strlen(s2);
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= len2)
	{
		len1 = len1 + len2;
	}
	else if (n < len2)
	{
		len1 = len1 + n;
	}
	ptr = malloc((len1 + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < n && s2[i] != '\0'; i++)
	{
		ptr[len1 + i] = s2[i];
	}
	ptr[len1 + i] = '\0';
	return (ptr);
}
