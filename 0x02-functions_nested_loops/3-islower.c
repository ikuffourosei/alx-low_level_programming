#include "main.h"
#include <ctype.h>

/**
 * _islower - checks if a character is lowercase
 * @c: The character to be checked
 *
 * Return: 1 if true, 0 if false or otherwise
 */
int _islower(int c)
{
	c = 'a';

	if (c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
