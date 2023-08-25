#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * rot13 - function that encodes string using rot13
 * @input: character input to be encoded
 * Return: character (output)
 */
char *rot13(char *input)
{
	int i;
	char *output = (char *)malloc(strlen(input) + 1);

	if (output == NULL)
	{
		perror("Memory allocation failed");
		exit(EXIT_FAILURE);
	}
	for (i = 0; input[i] != '\0'; i++)
	{
		char c = input[i];

		if ((c >= 'a' && c <= 'z'))
		{
			output[i] = (c - 'a' + 13) % 26 + 'a';
		}
		else if ((c >= 'A' && c <= 'Z'))
		{
			output[i] = (c - 'A' + 13) % 26 + 'A';
		}
		else
		{
			output[i] = c;
		}
	}
	output[strlen(input)] = '\0';
	return (output);
}
