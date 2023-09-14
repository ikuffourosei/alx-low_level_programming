#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check code
 * @argc: argument count
 * @argv: argument parameter
 * Return: 0 (success) or exit 98
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;
	int results;
	int (*fxn)(int, int);

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	fxn = get_op_func(operator);
	if (fxn == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	results = fxn(num1, num2);
	printf("%d\n", results);
	return (0);
}
