#!/bin/bash

# Create object files from all .c files
gcc -c *.c

# Create static library from object files
ar rcs liball.a *.o

# Clean up the object files
rm *.o

