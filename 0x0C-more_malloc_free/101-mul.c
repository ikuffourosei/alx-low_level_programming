#include "main.h"

/**
 *is_digit - checks if c is a digit
 * @c: character
 * Return: int value
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * print_error - prints error
 */
void print_error(void)
{
	int i;

	char error[] = "Error\n";
	for (i = 0; error[i] != '\0'; i++)
	{
		_putchar(error[i]);
	}
}

/**
 * main - check code
 * @argc: argument count
 * @argv: argument vector
 * Return: integer value
 */
int main(int argc, char *argv[])
{
	int i;

	char *num1str;
	char *num2str;
	unsigned long num1;
        unsigned long num2;

        unsigned long result;

	if (argc != 3)
	{
		print_error();
		return (98);
	}
	num1str =  argv[1];
	num2str = argv[2];
	for (i = 0; num1str[i] != '\0'; i++)
	{
		if (!is_digit(num1str[i]))
		{
			print_error();
			return (98);
		}
	}
	for (i = 0; num2str[i] != '\0'; i++)
	{
		if (!is_digit(num2str[i]))
		{
			print_error();
			return (98);
		}
	}

	num1 = strtoul(num1str, NULL, 10);
	num2 = strtoul(num2str, NULL, 10);
	result = num1 * num2;

	printf("%lu\n", result);
	return (0);
}
