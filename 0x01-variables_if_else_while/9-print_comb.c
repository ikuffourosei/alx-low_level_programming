#include <stdio.h>

/**
 * main - entry point
 * Description: printing numbersfrom 0-9
 * separated by commas and white spaces
 * Return: always 0 (success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num <= 9)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		
		num++;
	}
	putchar('\n');
	return (0);
}
