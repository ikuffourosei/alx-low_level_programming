#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: integer value
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts integers
 * @a: first integer
 * @b: second integer
 * Return: integer value
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies integers
 * @a: first intger
 * @b: second intger
 * Return: integer value
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: integer value
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo of two intgers
 * @a: first integer
 * @b: second integer
 * Return: integer value
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
