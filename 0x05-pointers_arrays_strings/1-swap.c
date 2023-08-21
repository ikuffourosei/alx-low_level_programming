#include "main.h"

/**
 * swap_int - swapping integers
 * @a: first parameter to be checked
 * @b: second parameter to be checked
 */
void swap_int(int *a, int *b)
{
	int initial;

	initial = *a;
	*a = *b;
	*b = initial;
}
