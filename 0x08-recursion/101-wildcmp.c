#include "main.h"

/**
 * wildcmp - Compares two strings and checks if they can be considered identical.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: 1 if s1 and s2 are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}

		return (*s2 == '\0');
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}
