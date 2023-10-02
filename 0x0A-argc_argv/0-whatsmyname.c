#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Description: Prints the program name, followed by a new line.
 * Return: Always 0 (Success).
 */
int main(int argc __attribute__((unused)), char *argv[])
{	
	printf("%s\n", *argv);

	return (0);
}
