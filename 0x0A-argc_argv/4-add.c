#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * main - entry point
 * @argc: count the number of arguments
 * @argv: string array
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, num, sum, j;
	bool validInput =  true;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		char *arr = argv[i];

		for (j = 0; arr[j] != '\0'; j++)
		{
			if (arr[j] < '0' || arr[j] > '9')
			{
				validInput = false;
				break;
			}
		}
		if (validInput)
		{
			num = atoi(arr);
			if (num >= 0)
			{
				sum += num;
			}
			else
			{
				validInput = false;
			}
		}
		if (!validInput)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
