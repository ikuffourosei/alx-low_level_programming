#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - prints buffer
 * @b: character parameter
 * @size: buffer size
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x ", i);
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				printf("%02x", (unsigned char)b[j]);
			}
			else
			{
				printf("  ");
			}
			if (j % 2 == 1)
			{
				putchar(' ');
			}
		}
		putchar(' ');
		for (j = i; j < i + 10 && j < size; j++)
		{
			if (isprint((unsigned char)b[j]))
			{
				putchar(b[j]);
			}
			else
			{
				putchar('.');
			}
		}
		putchar('\n');
	}
}
