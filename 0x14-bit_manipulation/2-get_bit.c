#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: checking bits
 * @index: position to check bit
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bin, res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	bin = 1 << index;
	res = n & bin;
	if (res == bin)
		return (1);

	return (0);
}
