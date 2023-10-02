#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: Pointer to a string.
 *
 * Description: This function takes a pointer to a string as a parameter
 * and prints the characters of the string one by one until it reaches
 * the null terminator ('\0'). It then prints a new line character.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
