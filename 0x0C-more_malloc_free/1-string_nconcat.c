#include <stdlib.h>
#include "main.h"

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
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, s1_len = 0, s2_len = 0;

	while (s1 && s1[s1_len])
	{
		s1_len++;
	}
	while (s2 && s2[s2_len])
	{
		s2_len++;
	}

	if (n < s2_len)
	{
		s = malloc(sizeof(char) * (s1_len + n + 1));
	}
	else
	{
		s = malloc(sizeof(char) * (s1_len + s2_len + 1));
	}

	if (!s)
	{
		return (NULL);
	}

	while (i < s1_len)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < s2_len && i < (s1_len + n))
	{
		s[i++] = s2[j++];
	}

	while (n >= s2_len && i < (s1_len + s2_len))
	{
		s[i++] = s2[j++];
	}

	s[i] = '\0';

	return (s);
}
