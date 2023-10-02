#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Description: Prints the number of arguments passed
 *              into the program
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count = argc - 1;

	printf("%d\n", count);

	return (0);
}
