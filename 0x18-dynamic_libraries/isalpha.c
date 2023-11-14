#include "main.h"

/**
 *_isalpha - checks if a function is alpha 
 * @c: character to be checked
 * Return: 1 (success) 0(otherwiase)
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}
