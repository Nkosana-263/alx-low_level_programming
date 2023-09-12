#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number of times
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');

		for (j = 1; j <= n; j++)
		{
			int result = i * j;

			_putchar(',');

			if (result < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			} else if (result < 100)
			{
				_putchar(' ');
				_putchar(' ');
			}

			if (result >= 100)
			{
				_putchar(' ');
				_putchar((result / 100) + '0');
				_putchar(((result / 10) % 10) + '0');
			} else if (result >= 10)
			{
				_putchar((result / 10) + '0');
			}

			_putchar((result % 10) + '0');
		}

		_putchar('\n');
	}
}

