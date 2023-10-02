#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create the static library
ar rcs liball.a *.o

# Clean up object files
rm *.o

echo "Static library liball.a created successfully!"
