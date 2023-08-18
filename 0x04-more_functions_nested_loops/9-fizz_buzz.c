#include <stdio.h>

/**
 * main - entry point
 * Description: A C program about fizz buzz
 * Return: always 0
 */
int main(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		int f, b;

		f = n % 3;
		b = n % 5;
		if (f == 0)
		{
			char fiz[] = "Fizz";

			printf("%s ", fiz);
		}
		else if (b == 0)
		{
			char buz[] = "Buzz";

			printf("%s ", buz);
		}
		else if (f == 0 && b == 0)
		{
			char fizbuz[] = "FizzBuzz";

			printf("%s ", fizbuz);
		}
		else
		{
			printf("%d ", n);
		}
		n++;
	}
	printf("\n");
	return (0);
}
