#include <stdio.h>

/**
 * main - a function containing the code to be executed, that
 * prints all possible combinations of two two-digit numbers
 *
 * Return: 0 if the program executed successfully and did what
 * it was intended to do
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i+1; j < 100; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
