# C - More functions, more nested loops

![header](https://i.stack.imgur.com/Qn5ZL.jpg)

## Task 0. isupper
[`0-isupper.c`](0-isupper.c)  
Checks for uppercase character.  

*Example:*
```console
nkosana@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper
nkosana@ubuntu:~/0x04$ ./0-isuper 
A: 1
a: 0
nkosana@ubuntu:~/0x04$ 
```

## Task 1. isdigit
[`1-isdigit.c`](1-isdigit.c)  
Checks for a digit (`0` through `9`).  

*Example:*
```console
nkosana@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-isdigit.c -o 1-isdigit
nkosana@ubuntu:~/0x04$ ./1-isdigit 
0: 1
a: 0
nkosana@ubuntu:~/0x04$ 
```

## Task 2. 

> "Collaboration is multiplication" - John C. Maxwell

[`2-mul.c`](2-mul.c)  
Multiplies two integers.  

## Task 3. 

> "The numbers speak for themselves"

[`3-print_numbers.c`](3-print_numbers.c)  
Prints the numbers, from `0` to `9`, followed by a new line.  

*Example:*
```console
nkosana@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-print_numbers.c -o 3-print_numbers
nkosana@ubuntu:~/0x04$ ./3-print_numbers | cat -e
0123456789$
nkosana@ubuntu:~/0x04$ 
```

## Task 4. 

> "I believe in numbers and signs" - Vikram Chatwal

[`4-print_most_numbers.c`](4-print_most_numbers.c)  
Prints the numbers, from `0` to `9` excluding `2` and `4`, followed by a new line.  

*Example:*
```console
nkosana@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_most_numbers.c -o 4-print_most_numbers
nkosana@ubuntu:~/0x04$ ./4-print_most_numbers 
01356789
nkosana@ubuntu:~/0x04$ 
```

## Task 5. 

> "Numbers constitute the only universal language" - Nathanael West

[`5-more_numbers.c`](5-more_numbers.c)  
Prints 10 times the numbers, from `0` to `14`, followed by a new line.  

*Example:*
```console
nkosana@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-more_numbers.c -o 5-more_numbers
nkosana@ubuntu:~/0x04$ ./5-more_numbers 
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
nkosana@ubuntu:~/0x04
```

## Task 6. 

> "The shortest distance between two points is a straight line" - Archimedes

[`6-print_line.c`](6-print_line.c)  
Draws a straight line in the terminal.  


## Task 7. 

> "I feel like I am diagonally parked in a parallel universe" - Anonymous

[`7-print_diagonal.c`](7-print_diagonal.c)  
Draws a diagonal line on the terminal.  

## Task 8. 

> "You are so much sunshine in every square inch" - Walt Whitman

[`8-print_square.c`](8-print_square.c)  
Prints a square, followed by a new line.  

## Task 9. Fizz-Buzz
[`9-fizz_buzz.c`](9-fizz_buzz.c)  
Prints the numbers from `1` to `100`, followed by a new line.
But for multiples of three prints `Fizz` instead of the number
and for the multiples of five prints `Buzz`. For numbers which
are multiples of both three and five prints `FizzBuzz`.  

*Example:*
```console
nkosana@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-fizz_buzz.c -o 9-fizz_buzz
nkosana@ubuntu:~/0x04$ ./9-fizz_buzz 
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 26 Fizz 28 29 FizzBuzz 31 32 Fizz 34 Buzz Fizz 37 38 Fizz Buzz 41 Fizz 43 44 FizzBuzz 46 47 Fizz 49 Buzz Fizz 52 53 Fizz Buzz 56 Fizz 58 59 FizzBuzz 61 62 Fizz 64 Buzz Fizz 67 68 Fizz Buzz 71 Fizz 73 74 FizzBuzz 76 77 Fizz 79 Buzz Fizz 82 83 Fizz Buzz 86 Fizz 88 89 FizzBuzz 91 92 Fizz 94 Buzz Fizz 97 98 Fizz Buzz
nkosana@ubuntu:~/0x04$ 
```

## Task 10. Triangles
[`10-print_triangle.c`](10-print_triangle.c)  
Prints a triangle, followed by a new line.     


## Task 11.

> "The problem of distinguishing prime numbers from composite numbers and of resolving the
> latter into their prime factors is known to be one of the most important and useful in arithmetic" - Carl Friedrich Gauss

[`100-prime_factor.c`](100-prime_factor.c)  
Finds and prints the largest prime factor of the
number `612852475143`, followed by a new line.  

## Task 12. Numbers have life; they're not just symbols on paper
[`101-print_number.c`](101-print_number.c)  
Prints an integer. 
