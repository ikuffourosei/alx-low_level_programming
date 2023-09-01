#include "main.h"
#include <string.h>
/**
 * palindrome_func - determines if a string is a palindrome or not
 * @s: string
 * @l: left hand side
 * @r: right hand side
 * Return: 0 or 1
 */
int is_palindrome_func(char *s, int l, int r)
{
	if (l >= r)
	{
		return (1);
	}
	if (s[l] != s[r])
	{
		return (0);
	}
	return (is_palindrome_func(s, l + 1, r - 1));
}

/**
 * is_palindrome - check for palindrome
 * @s: string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_func(s, 0, len - 1));
}
