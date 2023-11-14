#include "main.h"

/**
 * _isdigit - checks if an input is digit
 * @c: number
 * Return: 1 (true) 0 (false) 
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
