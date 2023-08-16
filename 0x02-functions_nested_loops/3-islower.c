#include <unistd.h>
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
	return (islower(c));
}
