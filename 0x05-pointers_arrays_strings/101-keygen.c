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
    int ascii = 2772;
    int i = 0;
    int j;
    int random;
    char password[100];
    
    srand(time(NULL));
    
    while (ascii > 126)
    {
        random = rand() % 126;
        password[i] = (char)random;
        ascii -= random;
        i++;
    }
    
    if (ascii > 0)
        password[i] = (char)ascii;
    else
        i--;
    
    for (j = 0; j <= i; j++)
        putchar(password[j]);
    
    putchar('\n');
    
    return (0);
}
