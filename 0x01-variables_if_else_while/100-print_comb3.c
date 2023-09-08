#include <stdio.h>

/**
 * main - a function containing the code to be executed, that
 * prints all possible different combinations of two digits
 *
 * Return: 0 if the program executed successfully and did what
 * it was intended to do
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}

    }

    putchar('\n');

    return (0);
}
