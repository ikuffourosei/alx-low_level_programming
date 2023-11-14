#include "main.h"

/**
 * _islower - checks if a character is lower
 * @c: character to be checked
 * Return: 1 (success) 0 (otherwise)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
