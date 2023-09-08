#include <stdio.h>

/**
 * main - a function containing the code to be executed, that
 *
 * Return: 0 if the program executed successfully and did what
 * it was intended to do
 */

int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit + '0');

	}

	putchar('\n');

	return (0);
}
