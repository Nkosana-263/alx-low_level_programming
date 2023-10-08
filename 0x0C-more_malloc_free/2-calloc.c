#include <stdlib.h>
#include "main.h"

/**
 * *array_range - Creates an array of integers.
 *
 * @min: The minimum range of values stored.
 * @max: The maximum range of values stored and number of elements.
 *
 * Return: A pointer to the new array, or NULL if the function fails.
 */
int *array_range(int min, int max) {
	if (min > max) {
		return (NULL);
	}

	int size = max - min + 1;

	int *array = malloc(size * sizeof(int));

	if (array == NULL) {
		return (NULL);
	}

	for (int i = 0; i < size; i++) {
		array[i] = min++;
	}

	return (array);
}
