#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Description: A C program that generates a random number and compares its last digit to 6,0, and 5
 * If - If this condition is true, execute the code in its block statement
 * Else If - execute this if the If condition is false
 * Else -  execute this when both If and Else If condtions are false
 * Return: Always 0 (success) */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int ld = n % 10	
	return (0);
}i
