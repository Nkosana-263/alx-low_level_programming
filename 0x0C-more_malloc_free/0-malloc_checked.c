#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 *
 * @b: The size of the memory to allocate in bytes.
 *
 * Return: A pointer to the allocated memory,
 *         or 98 if malloc fails.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr
	
	ptr = malloc(b);

	if (ptr == NULL) {
		exit(98);
	}

	return (ptr);
}
