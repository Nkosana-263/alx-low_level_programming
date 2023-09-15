# Functions and nested loops

![header](https://i.redd.it/l5jkte8y6f161.png)

## Task 0. _putchar
[`0-putchar.c`](0-putchar.c)  
Prints `_putchar`, followed by a new line.  

*Example:*
```console
nkosana@ubuntu:~/0x02$  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar
nkosana@ubuntu:~/0x02$ ./0-putchar 
_putchar
nkosana@ubuntu:~/0x02$ 
```

## Task 1.
> "I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game." - Roz Chast

[`1-alphabet.c`](1-alphabet.c)  

Prints the alphabet, in lowercase, followed by a new line.  

*Example:*
```console
nkosana@ubuntu:~/0x02$ cat 1-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}
nkosana@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet
nkosana@ubuntu:~/0x02$ ./1-alphabet 
abcdefghijklmnopqrstuvwxyz
nkosana@ubuntu:~/0x02$
```

## Task 2. 10 x alphabet
[`2-print_alphabet_x10.c`](2-print_alphabet_x10.c)  
Prints 10 times the alphabet, in lowercase, followed by a new line.

*Example:*
```console
nkosana@ubuntu:~/0x02$ cat 2-main.c
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet_x10();
    return (0);
}
nkosana@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10
nkosana@ubuntu:~/0x02$ ./2-alphabet_x10 
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
nkosana@ubuntu:~/0x02$ 
```

## Task 0. islower
[`3-islower.c`](3-islower.c)  
Checks for lowercase character.    

*Example:*
```console
nkosana@ubuntu:~/0x02$ cat 3-main.c 
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
nkosana@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-islower.c -o 3-islower
nkosana@ubuntu:~/0x02$ ./3-islower 
011
nkosana@ubuntu:~/0x02$ 
```





