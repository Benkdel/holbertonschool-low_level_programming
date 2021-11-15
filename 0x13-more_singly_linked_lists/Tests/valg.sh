#!/bin/bash

task=$1

valgrind --leak-check=full -s --track-origins=yes ./a.out $task
