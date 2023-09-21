#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result, or 0 if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0;
	int i, j;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 > size_r || len2 > size_r)
		return (0);

	r[size_r - 1] = '\0';
	i = len1 - 1;
	j = len2 - 1;

	while (i >= 0 || j >= 0)
	{
		if (i >= 0)
			carry += n1[i--] - '0';
		if (j >= 0)
			carry += n2[j--] - '0';

		r[--size_r] = carry % 10 + '0';
		carry /= 10;
	}

	if (carry)
	{
		if (size_r == 1)
			return 0;
		r[--size_r] = carry + '0';
	}

	return (&r[size_r]);
}
