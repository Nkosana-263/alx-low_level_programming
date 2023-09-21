#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 algorithm.
 * @str: The string to be encoded.
 *
 * Return: The encoded string.
 */
char *rot13(char *str)
{
	int i;

	while (str != '\0')
	{
		if ((str >= 'a' && str <= 'm') || (str >= 'A' && str <= 'M'))
		{
			str += 13;
		}
		else if ((str >= 'n' && str <= 'z') || (str >= 'N' && str <= 'Z'))
		{
			str -= 13;
		}
		str++;
	}

	return (str);
}
