#!/bin/bash
gcc -Wall -Wextra -Werror -c *.c
ar rsc libft.a *.o
rm *.o
