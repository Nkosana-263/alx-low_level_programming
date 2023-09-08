#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - a function containing the code to be executed, that
 * print the last digit of the number stored in the variable `n`.
 * 
 * Return: 0 if the program executed successfully and did what
 * it was intended to do
 */

int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	printf("Last digit of %d is ", n);

	if (lastDigit > 5)
	{
		printf("%d and is greater than 5\n", lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("%d and is 0\n", lastDigit);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", lastDigit);
	}

	return (0);
}
