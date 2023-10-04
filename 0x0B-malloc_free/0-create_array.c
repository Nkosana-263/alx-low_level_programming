#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars and initializes
 *                it with a specific char.
 * @size: Size of the array to create.
 * @c: Char to initialize the array with.
 *
 * Return: Pointer to the array (Success), NULL (Error).
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	while (i < size)
	{
		p[i] = c;
		i++;
	}

	p[i] = '\0';

	return (p);
}
