#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the first 98 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	long double fib1 = 1;
	long double fib2 = 2;
	int i;

	printf("%.0lf, %.0lf", fib1, fib2);

	for (i = 3; i <= 98; i++)
	{
		long double nextFib = fib1 + fib2;

		printf(", %.0;f", nextFib);

		fib1 = fib2;
		fib2 = nextFib;
	}

	printf("\n");

	return (0);
}
