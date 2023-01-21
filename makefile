build:
	clear;
	gcc -g -Wall -Werror -Wextra -pedantic *.c -o monty
	betty-style *.c
	betty-doc *.c 1> /dev/null
