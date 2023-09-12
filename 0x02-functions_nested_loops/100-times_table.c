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

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int result = i * j;
			if (result < 10)
			{
				_putchar(result + '0');
				if (j != n)
					_putchar(',');
					_putchar(' ');
			} else if (result < 100)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');

				if (j != n)
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
			} else
			{
				_putchar((result / 100) + '0');
				_putchar(((result / 10) % 10) + '0');
				_putchar((result % 10) + '0');

				if (j != n)
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
			}

			/* if (j != n)
			{
				_putchar(',');
				_putchar(' ');
				
				if (result <= 100)
					_putchar(' ');
				if (result <= 10)
					_putchar(' ');
			}
			*/

		}
		_putchar('\n');
	}
}
