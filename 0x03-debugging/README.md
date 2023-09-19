# C - Debugging

![image](https://github.com/Nkosana-263/alx-low_level_programming/assets/60256844/86718e54-3698-4836-84fc-807886fa1a19)

## Task 0. Multiple mains
[`0-main.c`](0-main.c)  
Test that the function `positive_or_negative()`
gives the correct output when given a case of `0`.  

*Example:*
```console
nkosana@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main
nkosana@ubuntu:/debugging$ ./0-main
0 is zero
nkosana@ubuntu:/debugging$ 
```

## Task 1 Like, comment, subscribe
[`1-main.c`](1-main.c)  
In this task i commented out the part of the code that was causing
the output to go into an infinite loop.  

*The final output should look like this:*
```console
nkosana@ubuntu:/debugging$ gcc -std=gnu89 1-main.c -o 1-main
nkosana@ubuntu:/debugging$ ./1-main
Infinite loop incoming :(
Infinite loop avoided! \o/
nkosana@ubuntu:/debugging$ wc -l 1-main.c
24 1-main.c
nkosana@ubuntu:/debugging$
```

## Task 2. 0 > 972?
[`2-largest_number.c`](2-largest_number.c)  
Fixed the code so that it correctly prints out the
largest of three numbers.  


## Task 3. Leap year
[`3-print_remaining_days.c`](3-print_remaining_days.c)  
Fixed the `print_remaining_days()` function so that the output
works correctly for all dates and all leap years.
