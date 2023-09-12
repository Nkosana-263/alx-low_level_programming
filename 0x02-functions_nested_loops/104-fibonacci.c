#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the first 98 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i, fib1_temp1, fib1_temp2, fib2_temp1, fib2_temp2;

	unsigned long int fib1 = 1;
	unsigned long int fib2 = 2;

	printf("%lu", fib1);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", fib2);
		fib2 = fib2 + fib1;
		fib1 = fib2 - fib1;
	}

	fib1_temp1 = fib1 / 1000000000;
	fib1_temp2 = fib1 % 1000000000;
	fib2_temp1 = fib2 / 1000000000;
	fib2_temp2 = fib2 % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", fib2_temp1 + (fib2_temp2 / 1000000000));
		printf("%lu", fib2_temp2 % 1000000000);
		fib2_temp1 = fib2_temp1 + fib1_temp1;
		fib1_temp1 = fib2_temp1 - fib1_temp1;
		fib2_temp2 = fib2_temp2 + fib1_temp2;
		fib1_temp2 = fib2_temp2 - fib1_temp2;
	}

	printf("\n");

	return (0);
}
