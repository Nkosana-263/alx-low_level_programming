#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to a string.
 *
 * Description: This function takes a pointer to a string as
 * a parameter and prints the second half of the string.
 * If the number of characters in the string is odd, it
 * prints the last (length_of_the_string - 1) / 2 characters.
 * It calculates the length of the string and then determines
 * where to start printingbased on whether the length is even
 * or odd. It uses _putchar to print each character, and
 * finally calls _putchar again to print a new line character.
 */

void puts_half(char *str)
{
	int length = 0;
	int start;
	int i;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		start = length / 2;
	else
		start = (length - 1) / 2 + 1;

	for (i = start; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
