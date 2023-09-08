#include <stdio.h>

/**
 * main - a function containing the code to be executed, that
 * prints the lowercase alphabet in reverse, followed by a
 * new line
 *
 * Return: 0 if the program executed successfully and did what
 * it was intended to do
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
