#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i, j, k, j1, j2, k1, k2;
	unsigned long int temp_k1, temp_k2, temp_j1, temp_j2;

	j = 1;
	k = 2;

	printf("%lu", j);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k += j;
		j = k - j;
	}
	
	j1 = j / 1000000000;
	j2 = j % 1000000000;
	k1 = k / 1000000000;
	k2 = k % 1000000000;
	
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu%09lu", k1, k2);
		temp_k1 = k1;
		temp_j1 = j1;
		temp_k2 = k2;
		temp_j2 = j2;

		k1 += temp_j1;
		temp_j1 = k1 - temp_j1;

		if ((k2 + temp_j2) >= 1000000000)
			++k1;

		k2 += temp_j2;
		if (k2 >= 1000000000)
		{
			k2 -= 1000000000;
			++k1;
		}

		j1 = temp_k1;
		j2 = temp_k2;
	}

	printf("\n");

	return 0;
}

