#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strstr - a function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h_ptr = haystack;
		char *n_ptr = needle;

		while (*n_ptr != '\0' && *h_ptr == *n_ptr)
		{
			h_ptr++;
			n_ptr++;
		}
		if (*n_ptr == '\0')
		{
			return (haystack);
		}
			haystack++;
	}
	return (NULL);
}
