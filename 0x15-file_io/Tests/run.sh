#!/bin/bash

task=$1
filename=$2
text=$3

gcc -g -Wall -Wextra -Werror -pedantic -std=gnu89 ../*.c *.c -o a.out;

./a.out $task $filename $text
