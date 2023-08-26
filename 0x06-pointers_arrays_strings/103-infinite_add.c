#include <stdio.h>
#include <string.h>

/**
 * infinite_add - adds two numbers
 * @n1: character format of integer
 * @n2: character format of integer
 * @r: buffer that stores result
 * @size_r: buffer size
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j;
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int idx1 = len1 - 1;
	int idx2 = len2 - 1;
	int result_idx = 0;

	while (idx1 >= 0 || idx2 >= 0 || carry)
	{
		int digit1 = idx1 >= 0 ? n1[idx1] - '0' : 0;
		int digit2 = idx2 >= 0 ? n2[idx2] - '0' : 0;
		int sum = digit1 + digit2 + carry;

		carry = sum / 10;
		if (result_idx < size_r - 1)
		{
			r[result_idx] = '0' + (sum % 10);
			result_idx++;
		}
		else
		{
			return (0);
		}
		idx1--;
		idx2--;
	}
	r[result_idx] = '\0';

	for (i = 0, j = result_idx - 1; i < j; i++, j--)
	{
		char temp = r[i];

		r[i] = r[j];
		r[j] = temp;
	}
	return (r);
}
