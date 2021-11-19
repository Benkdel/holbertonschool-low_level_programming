<h1 align="center" >
<br>
    <img src="https://assets.website-files.com/6105315644a26f77912a1ada/610540e8b4cd6969794fe673_Holberton_School_logo-04-04.svg" height="50%" width="40%">
</h1>

<h2 align="center">
    0x14. C - Bit manipulation
</h2>

<p align="center">
    <a href="https://github.com/Benkdel/holbertonschool-low_level_programming/commits/main">
        <img src="https://img.shields.io/github/last-commit/Benkdel/holbertonschool-low_level_programming.svg?style=flat-square&logo=github&logoColor=white" alt="GitHub last commit">
    </a>
    <a href="https://github.com/Benkdel/holbertonschool-low_level_programming/issues">
    <img src="https://img.shields.io/github/issues-raw/Benkdel/holbertonschool-low_level_programming.svg?style=flat-square&logo=github&logoColor=white"
         alt="GitHub issues">
    </a>
    <a href="https://github.com/Benkdel/holbertonschool-low_level_programming/pulls">
    <img src="https://img.shields.io/github/issues-pr-raw/Benkdel/holbertonschool-low_level_programming.svg?style=flat-square&logo=github&logoColor=white"
         alt="GitHub pull requests">
    </a>
</p>

<h4 align="center"> convert numbers between bases and use bit operators </h4>

<p align="center">
    <a href="#Synopsis">Synopsis</a> •
    <a href="#Learning Objectives:">Learning Objectives</a> •
    <a href="#General Considerations:">General Considerations</a> •
    <a href="#How to convert from any base to any base:">How to</a> •
    <a href="#Contact Information:">Learning Objectives</a> •
</p>


# 

# Synopsis:
#### Main Includes:
> * #include "main.h"
> * #include <stdio.h>


### For Testing Includes:
> * #include <stdio.h>
> * #include <stdlib.h>

#### Functions:
##### Mandatory:
> 0. unsigned int binary_to_uint(const char *b); [implemented]
> 1. void print_binary(unsigned long int n); [Pending]
> 2. int get_bit(unsigned long int n, unsigned int index); [Pending]
> 3. int set_bit(unsigned long int *n, unsigned int index); [Pending]
> 4. int clear_bit(unsigned long int *n, unsigned int index); [Pending]
> 5. unsigned int flip_bits(unsigned long int n, unsigned long int m); [Pending]

##### Advanced:

#### Contributors:
> * Carlon Bentin

# Learning Objectives:

> * numbers conversions and bit operators
> * look for the right source of information without too much help

# Functions Implemented:

|             File Name                  |   Description    				   	| 
|----------------------------------------|------------------------------------------------------|
| 0-binary_to_uint.c			 | converts binary into unsigned int			|
| 1-print_binary.c			 | prints binary using recursive and bit operators	|
| 2-get_bit.c				 | gets bit at index   					|
| 3-set_bit.c				 | sets bit at index   					|
| 4-clear_bit.c				 | clears bit at index					|
| 45-flip_bit.c				 | flips bits   					|


# General Considerations:
> * Compiled with: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
> * Code compliant with Betty style and betty doc
> * Global Variables Not Allowed
> * Maximum of 5 functions per file
> * C libraries allowed: malloc, free and exit.

# How to convert from any base to any base:

> 1. Convert from source base to decimal (base 10 ) by multiplying each digit with the base raised to the power of the digit number (starting from right digit number 0):

```
decimal = ∑(digit×basedigit number)
```

> 2. Convert from decimal to destination base: divide the decimal with the base until the quotient is 0 and calculate the remainder each time. The destination base digits are the calculated remainders.


# Contact Information:

<p align="center">
Carlos Bentin -
<a href="https://github.com/Benkdel">
        <img src="https://img.shields.io/badge/Carlos-mainPage-blue">
</a>
</p>
