#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	char password[100];
	int i;

	srand(time(0));

	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 26 + 'a';
	}

	password[99] = '\0';

	printf("%s\n", password);

	return 0;
}
