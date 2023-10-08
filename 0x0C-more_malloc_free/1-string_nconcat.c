#include <stdlib.h>
#include "main.h"

/**
 * _strlen - Calculates and returns the length of a string.
 *
 * @string: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
size_t _strlen(char *string) {
	size_t length = 0;

	while (string[length] != '\0') {
		length++;
	}

	return length;
}

/**
 * string_nconcat - Concatenates two strings.
 *
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes to copy from the second string.
 * 
 * Return: A pointer to a newly allocated space in memory,
 *         which contains the concatenated string, or NULL
 *         if the function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n) {
	if (s1 == NULL || s2 == NULL) {
		return (NULL);
	}
	
	size_t s1_len = _strlen(s1);
	size_t s2_len = _strlen(s2);

	size_t new_string_len = s1_len + n + 1;

	char *new_string = malloc(new_string_len);

	if (new_string == NULL) {
		return (NULL);
	}

	memcpy(new_string, s1, s1_len);

	memcpy(new_string + s1_len, s2, n);

	new_string[new_string_len - 1] = '\0';

	return (new_string);
}
