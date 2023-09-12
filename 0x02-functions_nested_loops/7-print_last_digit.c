#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @num: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int num)
{
	int last_digit;

	if (num < 0)
		num *= -1;  /* Convert negative number to positive */
	
	last_digit = num % 10;

	if (last_digit < 0)
		last_digit *= -1;  /* Convert negative number to positive */
	
	_putchar(last_digit + '0');
	
	return (last_digit);
}
