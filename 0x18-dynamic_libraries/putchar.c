#include "main.h"

/**
 * _putchar - writes a character to stdout
 * @c: character to be printed
 * Return: character
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}
