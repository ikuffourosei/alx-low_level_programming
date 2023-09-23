#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return integer value
 */
int main(int argc, char *argv[])
{
	unsigned char *opcode;
	void (*main_f)();
	int n, i;
	
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	
	n = atoi(argv[1]);
	
	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}
	main_f = (void (*)())&main;
	opcode = (unsigned char *)main_f;
	for (i = 0; i < n; i++)
	{
		printf("%02x", opcode[i]);
	}
	printf("\n");
	return (0);
}
