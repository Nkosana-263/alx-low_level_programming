#include <stdio.h>

/**
 * main - a function containing the code to be executed, that
 * prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 *
 * Return: 0 if the program executed successfully and did what
 * it was intended to do
 */

int main(void)
{
	char lowercase;
	char uppercase;
	
	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}
	
	putchar('\n');
	
	return (0);
}
