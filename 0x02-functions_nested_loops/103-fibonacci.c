#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the sum of even-valued terms in the Fibonacci sequence
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int fib1 = 1;
	unsigned long int fib2 = 2;
	unsigned long int sum = 0;

	while (fib1 <= 4000000)
	{
		if (fib1 % 2 == 0)
		{
			sum += fib1;
		}

		unsigned long int nextFib = fib1 + fib2;
		
		fib1 = fib2;
		fib2 = nextFib;
	}

	printf("%ul\n", sum);

	return (0);
}

