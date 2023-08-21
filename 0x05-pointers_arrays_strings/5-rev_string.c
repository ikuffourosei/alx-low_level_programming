#include "main.h"
#include <string.h>

/**
 * rev_string - reverse string
 * @s: parameter to be reversed
 */
void rev_string(char *s)
{
	int len, i;
	char prev;
	
	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		prev = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = prev;
	}
}
