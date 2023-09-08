#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - a function containing the code to be executed, that
 * print whether the number stored in the variable `n` is positive
 * or negative
 * Return: 0 if the program executed successfully and did what
 * it was intended to do
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
  
  if (n > 0)
  {
    printf("%d is positive\n", n);
  }
  else if (n == 0)
  {
    printf("%d is zero\n", n);
  }
  else
  {
    printf("%d is negative\n", n);
  }
  
	return (0);
}
