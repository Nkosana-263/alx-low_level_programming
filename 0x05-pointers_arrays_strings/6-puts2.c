#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting
 * with the first character.
 * @str: Pointer to a string.
 *
 * Description: This function takes a pointer to a string as a parameter
 * and prints every other character of the string, starting with the
 * first character. It iterates through the characters of the string
 * and uses an if statement to check if the current index is even.
 * If it is, it calls _putchar to print that character. After printing
 * all characters, it calls _putchar again to print a new line character.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);

		i++;
	}

	_putchar('\n');
}
