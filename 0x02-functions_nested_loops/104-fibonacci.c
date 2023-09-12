#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the first 98 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	double fib1 = 1;
	double fib2 = 2;
	int i;

	printf("%.0f, %.0f", fib1, fib2);

	for (i = 3; i <= 98; i++)
	{
		double nextFib = fib1 + fib2;

		printf(", %.0f", nextFib);

		fib1 = fib2;
		fib2 = nextFib;
	}

	printf("\n");

	return (0);
}
