#include "main.h"

/**
 * leet - function that encodes string into 1337
 * @str: string to be encoded
 * Return: str
 */
char *leet(char *str)
{
	int i, j;
	char leet_mappings[] = "aAeEoOtTlL";
	char leet_replacements[] = "443370011";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_mappings[j] != '\0'; j++)
		{
			if (str[i] == leet_mappings[j])
			{
				str[i] = leet_replacements[j];
				break;
			}
		}
	}
	return (str);
}
