#include "main.h"
#include <stdbool.h>
#include <ctype.h>

/**
 * cap_string - capitalizes all strings
 * @c: string to be capitalized
 * Return: str
 */

bool is_separator(char c)
{
	int i;
	char separators[] = " \t\n,;.!?\"(){}";
	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return true;
		}
	}
	return false;
}

char *cap_string(char *str)
{
	int i;
	bool new_word = true;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (is_separator(str[i]))
		{
			new_word = true;
		}
		else if (new_word && islower(str[i]))
		{
			str[i] = toupper(str[i]);
			new_word = false;
		}
		else
		{
			new_word = false;
		}
	}
	return str;
}
