#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	unsigned int n_pos;
	
	if (n < 0)
	{
		_putchar('-');
		n_pos = -n;
	}
	else
	{
		n_pos = n;
	}

	if (n_pos / 10 == 0)
		print_number(n_pos / 10);

	_putchar((n_pos % 10) + '0');
}
