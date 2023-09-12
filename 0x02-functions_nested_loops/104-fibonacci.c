#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the first 98 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int fib1 = 1;
	unsigned int fib2 = 2;
	int i;
	
	printf("%u, %u", fib1, fib2);

	for (i = 3; i <= 98; i++)
	{
		unsigned int nextFib = fib1 + fib2;

		printf(", %u", nextFib);

		fib1 = fib2;
		fib2 = nextFib;
	}
	
	printf("\n");

	return (0);
}
