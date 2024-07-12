#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -c liball.a *.o
ranlib liball.a
