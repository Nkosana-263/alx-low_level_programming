#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the first 98 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int fib1 = 1;
	unsigned long int fib2 = 2;
	unsigned long int i, nextFib, j1, j2, k1, k2;

	printf("%lu", fib1);
	printf("%lu", fib2);

	for (i = 1; i < 91; i++)
	{
		nextFib = fib1 + fib2;
		fib1 = fib2;
		fib2 = nextFib;

		printf(", %lu", nextFib);
	}

	j1 = fib1 / 1000000000;
	j2 = fib1 % 1000000000;
	k1 = fib2 / 1000000000;
	k2 = fib2 % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", k1 + (k2 / 1000000000));
		printf("%lu", k2 % 1000000000);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}

	printf("\n");

	return (0);
}
