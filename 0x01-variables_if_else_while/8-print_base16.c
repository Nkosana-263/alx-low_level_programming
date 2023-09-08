#include <stdio.h>

/**
 * main - a function containing the code to be executed, that
 * prints all the numbers of base 16 in lowercase, followed by
 * a new line
 *
 * Return: 0 if the program executed successfully and did what
 * it was intended to do
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
