#include "main.h"

/**
 *_abs - absoulte of a number
 * @n: number
 * return: positive integer (n) or (n * -1) if n is negative
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n == 0)
		return (n);
	else
		return (n * -1);
}
