#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - point to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2,
 * and null terminated
 * @s1: destination string
 * @s2: source string
 * Return: NULL or character
 */
char *str_concat(char *s1, char *s2)
{
	char *sc;
	unsigned int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = (strlen(s1) + strlen(s2));
	sc = malloc((i + 1) * sizeof(char));

	if (sc == NULL)
	{
		return (NULL);
	}
	strcpy(sc, s1);
	strcat(sc, s2);
	return (sc);
}
