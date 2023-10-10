#include <stdio.h>

/**
 * main - Prints the name of the file.
 *
 * Return: Always 0 (Success)
 */
int main() {
	char *filename = __FILE__;
	printf("%s\n", filename);

	return (0);
}
