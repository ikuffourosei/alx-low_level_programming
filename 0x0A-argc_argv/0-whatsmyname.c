#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: counts the number of arguments
 * @argv: string array of arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
