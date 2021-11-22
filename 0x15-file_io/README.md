<h1 align="center" >
<br>
    <img src="https://assets.website-files.com/6105315644a26f77912a1ada/610540e8b4cd6969794fe673_Holberton_School_logo-04-04.svg" height="50%" width="40%">
</h1>

<h2 align="center">
    0x15. C - FILE I/O
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

<h4 align="center"> Create, open, close, read and write files </h4>

<p align="center">
    <a href="#Synopsis">Synopsis</a> •
    <a href="#Learning Objectives:">Learning Objectives</a> •
    <a href="#General Considerations:">General Considerations</a> •
    <a href="#Contact Information:">Contact Information</a> •
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
> 0. ssize_t read_textfile(const char *filename, size_t letters); [implemented]
> 1. int create_file(const char *filename, char *text_content); [Pending]
> 2. int append_text_to_file(const char *filename, char *text_content); [Pending]

##### Advanced:

#### Contributors:
> * Carlon Bentin

# Learning Objectives:

> * How to create, open, close, read and write files
> * What are file descriptors
> * What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
> * How to use the I/O system calls open, close, read and write
> * What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
> * What are file permissions, and how to set them when creating a file with the open system call
> * What is a system call
> * What is the difference between a function and a system call

# Functions Implemented:

|             File Name                  |   Description    				   	| 
|----------------------------------------|------------------------------------------------------|
| 0-read_textfile.c			 | Writes file input into stdout			|
| 1-create_file.c			 | Create a file and writes text into it		|
| 2-append_text_to_file.c		 | Appends text at the end of a file			|



# General Considerations:
> * Compiled with: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
> * Code compliant with Betty style and betty doc
> * Global Variables Not Allowed
> * Maximum of 5 functions per file
> * C libraries allowed: malloc, free and exit.

# Contact Information:

<p align="center">
Carlos Bentin -
<a href="https://github.com/Benkdel">
        <img src="https://img.shields.io/badge/Carlos-mainPage-blue">
</a>
</p>
