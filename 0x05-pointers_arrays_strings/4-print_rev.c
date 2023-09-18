#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to a string.
 *
 * Description: This function takes a pointer to a string as a parameter
 * and prints the characters of the string in reverse order. It starts from
 * the end of the string and goes backwards until it reaches the first character.
 * After printing all characters in reverse, it prints a new line character.
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
		length++;

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
