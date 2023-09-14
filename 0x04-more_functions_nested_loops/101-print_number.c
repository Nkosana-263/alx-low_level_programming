#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int n_pos;

	if (n < 0)
	{
		n_pos = -n;
		_putchar('-');
	} else
	{
		n_pos = n;
	}

	if (n_pos / 10)
	{
		print_number(n_pos / 10);
	}

	_putchar((n_pos % 10) + '0');
}
