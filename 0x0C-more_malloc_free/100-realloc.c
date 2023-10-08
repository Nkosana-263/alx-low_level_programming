#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated by malloc.
 * @old_size: The size of the allocated memory for ptr.
 * @new_size: The new size of the new memory block.
 *
 * Return: A pointer to the newly allocated memory block,
 *         or NULL if the function fails.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	ptr1 = malloc(new_size);

	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr1[i] = old_ptr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr1[i] = old_ptr[i];
	}

	free(ptr);
	return (ptr1);
}
