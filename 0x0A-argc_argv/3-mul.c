#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count the number of arguments
 * @argv: string array of arguments
 * Return: (0) success (1) Error
 */
int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;
	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
