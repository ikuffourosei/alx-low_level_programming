#include <stdio.h>
#include "main.h"

/**
 * main -  check code
 *
 * Return: always 0
 */
int main(void)
{
	int c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));

	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));

	c = '9';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
