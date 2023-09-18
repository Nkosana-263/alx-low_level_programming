#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to a string.
 *
 * Description: This function takes a pointer to a string as a parameter
 * and reverses the characters in the string. It swaps the characters from
 * both ends of the string until it reaches the middle.
 */

void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end;

	while (s[length] != '\0')
		length++;

	end = length - 1;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
