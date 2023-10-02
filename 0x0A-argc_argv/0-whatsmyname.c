#include "main.h"

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array of command line arguments
 *
 * Description: Prints the name of the program
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		_putchar(argv[0]);
		_putchar('\n');
	}

	return (0);
}
