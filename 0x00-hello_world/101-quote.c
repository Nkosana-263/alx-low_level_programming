#include <stdio.h>
#include <unistd.h>

/**
 * main - a function containing the code to be executed,  that prints
 * exactly and that piece of art is useful" - Dora Korpar, 2015-10-19,
 * followed by a new line, to the standard error.
 * Return: 1 if the program executed successfully and did what
 * it was intended to do
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

  	return (1);
}
