# C variables and conditional statements

![header](https://preview.redd.it/fm7z08nffkk51.jpg?auto=webp&s=fb9c5560d1405a0c68cb7c82d828bf5c31434c2b)

## Task 0.
> "Positive Anything Is Better Than Negative Nothing." - Elbert Hubbard

[`0-positive_or_negative.c`](0-positive_or_negative.c)  

Assigns a random number to the variable `n` each time it is executed and prints whether the number stored in the variable `n` is positive or negative.

*Example:*
```console
nkosana@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
nkosana@ubuntu:~/0x01$ ./0-positive_or_negative 
-520693284 is negative
nkosana@ubuntu:~/0x01$ ./0-positive_or_negative 
-973398895 is negative
nkosana@ubuntu:~/0x01$ ./0-positive_or_negative 
-199220452 is negative
nkosana@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
nkosana@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
nkosana@ubuntu:~/0x01$ ./0-positive_or_negative 
266853958 is positive
nkosana@ubuntu:~/0x01$ ./0-positive_or_negative 
-48147767 is negative
nkosana@ubuntu:~/0x01$ ./0-positive_or_negative 
0 is zero
nkosana@ubuntu:~/0x01$ 
```

## Task 1. The last digit
[`1-last_digit.c`](1-last_digit.c)  
Assigns a random number to the variable `n` each time it is executed and prints the last digit of the number stored in the variable `n`.
- if the last digit of `n` is greater than 5: print `and is greater than 5`
- if the last digit of `n` is 0: peint `and is 0`
- if the last digit of `n` is less than 6 and not 0: print `and is less than 6 and not 0`

*Example:*
```console
nkosana@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
nkosana@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 629438752 is 2 and is less than 6 and not 0
nkosana@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -748255693 is -3 and is less than 6 and not 0
nkosana@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -1052791662 is -2 and is less than 6 and not 0
nkosana@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
nkosana@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
nkosana@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 491506926 is 6 and is greater than 5
nkosana@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 954249937 is 7 and is greater than 5
nkosana@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 652334952 is 2 and is less than 6 and not 0
nkosana@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
nkosana@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
nkosana@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
nkosana@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
nkosana@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 809065140 is 0 and is 0
nkosana@ubuntu:~/0x01$
```

## Task 2.

> "I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game." - Roz Chast

[`2-print_alphabet.c`](2-print_alphabet.c)  
Prints the alphabet in lowercase, followed by a new line.

*Example:*
```console
nkosana@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
nkosana@ubuntu:~/0x01$ ./2-print_alphabet 
abcdefghijklmnopqrstuvwxyz
nkosana@ubuntu:~/0x01$ 
```

## Task 3. alphABET
[`3-print_alphabets.c`](3-print_alphabets.c)  
Prints the alphabet in lowercase, and then in uppercase, followed by a new line.

*Example:*
```console
nkosana@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets
nkosana@ubuntu:~/0x01$ ./3-print_alphabets | cat -e
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
nkosana@ubuntu:~/0x01$ 
```

## Task 4.

> "When I was having that alphabet soup, I never thought that it would pay off." — Vanna White

[`4-print_alphabt.c`](4-print_alphabt.c)  
Prints the alphabet in lowercase, followed by a new line.

*Example:*
```console
nkosana@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt
nkosana@ubuntu:~/0x01$ ./4-print_alphabt 
abcdfghijklmnoprstuvwxyz
nkosana@ubuntu:~/0x01$ ./4-print_alphabt | grep [eq]
nkosana@ubuntu:~/0x01$ 
```

## Task 5. Numbers
[`5-print_numbers.c`](5-print_numbers.c)  
Prints all single digit numbers of base 10 starting from `0`, followed by a new line.

*Example:*
```console
nkosana@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers
nkosana@ubuntu:~/0x01$ ./5-print_numbers 
0123456789
nkosana@ubuntu:~/0x01$ 
```

## Task 6. Numberz
[`6-print_numberz.c`](6-print_numberz.c)  
Prints all single digit numbers of base 10 starting from `0`, followed by a new line

*Example:*
```console
nkosana@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz
nkosana@ubuntu:~/0x01$ ./6-print_numberz 
0123456789
nkosana@ubuntu:~/0x01$ 
```

## Task 7. Smile in the mirror
[`7-print_tebahpla.c`](7-print_tebahpla.c)  
Prints the lowercase alphabet in reverse, followed by a new line.

*Example:*
```console
nkosana@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla
nkosana@ubuntu:~/0x01$ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
nkosana@ubuntu:~/0x01$
```

## Task 8. Hexadecimal
[`8-print_base16.c`](8-print_base16.c)  
Prints all the numbers of base 16 in lowercase, followed by a new line.

*Example:*
```console
nkosana@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16
nkosana@ubuntu:~/0x01$ ./8-print_base16
0123456789abcdef
nkosana@ubuntu:~/0x01$
```

## Task 9.

> "Patience, persistence and perspiration make an unbeatable combination for success." - Napoleon Hill

[`9-print_comb.c`](9-print_comb.c)  
Prints all possible combinations of single-digit numbers.

*Example:*
```console
nkosana@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
nkosana@ubuntu:~/0x01$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
nkosana@ubuntu:~/0x01$ 
```

## Task 10. Inventing is a combination of brains and materials. The more brains you use, the less material you need

> "Inventing is a combination of brains and materials. The more brains you use, the less material you need." - Charles Kettering

[`100-print_comb3.c`](100-print_comb3.c)  
Prints all possible different combinations of two digits.

*Example:*
```console
nkosana@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-print_comb3.c -o 100-print_comb3
nkosana@ubuntu:~/0x01$ ./100-print_comb3
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
nkosana@ubuntu:~/0x01$ 
```

## Task 11. 

> "The success combination in business is: Do what you do better... and: do more of what you do." - David Joseph Schwartz

[`101-print_comb4.c`](101-print_comb4.c)  
Prints all possible different combinations of three digits.

*Example:*
```console
nkosana@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-print_comb4.c -o 101-print_comb4
nkosana@ubuntu:~/0x01$ ./101-print_comb4
012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789
nkosana@ubuntu:~/0x01$ 
```

## Task 12. 

> "Software is eating the world," - wrote Marc Andreessen

[`102-print_comb5.c`](102-print_comb5.c)  
Prints all possible combinations of two two-digit numbers.

*Example:*
```console
nkosana@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-print_comb5.c -o 102-print_comb5
nkosana@ubuntu:~/0x01$ ./102-print_comb5
00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11, [...] 40 91, 40 92, 40 93, 40 94, 40 95, 40 96, 40 97, 40 98, 40 99, 41 42, 41 43, 41 44, 41 45, 41 46, 41 47, 41 48, 41 49, 41 50, 41 51, 41 52, 41 53 [...] 93 95, 93 96, 93 97, 93 98, 93 99, 94 95, 94 96, 94 97, 94 98, 94 99, 95 96, 95 97, 95 98, 95 99, 96 97, 96 98, 96 99, 97 98, 97 99, 98 99
```

