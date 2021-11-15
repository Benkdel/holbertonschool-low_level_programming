<h1 align="center" >
<br>
    <img src="https://assets.website-files.com/6105315644a26f77912a1ada/610540e8b4cd6969794fe673_Holberton_School_logo-04-04.svg" height="50%" width="40%">
</h1>

<h2 align="center">
    0x13. C - More singly linked lists
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

<h4 align="center"> More singly linked lists in C - Basics of Data Structures </h4>

<p align="center">
    <a href="#Synopsis">Synopsis</a> •
    <a href="#Learning Objectives">Learning Objectives</a> •
    <a href="#General Considerations">General Considerations</a> •
    <a href="#Contact Information">Learning Objectives</a> •
</p>


# 

# Synopsis:
#### Main Includes:
> * #include "lists.h"
> * #include <stdio.h>


### For Testing Includes:
> * #include <stdio.h>
> * #include <stdlib.h>

#### Prototypes:
##### Mandatory:
> 0. size_t print_listint(const listint_t *h)
> 1. size_t listint_len(const listint_t *h)
> 2. listint_t *add_nodeint(listint_t **head, const int n)
> 3. listint_t *add_nodeint_end(listint_t **head, const int n)
> 4. void free_listint(listint_t *head)
> 5. void free_listint2(listint_t **head)
> 6. int pop_listint(listint_t **head)
> 7. listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
> 8. int sum_listint(listint_t *head)
> 9. listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
> 10. int delete_nodeint_at_index(listint_t **head, unsigned int index)
##### ADvanced

#### Contributors:
> * Carlon Bentin

# Learning Objectives

> * How to use linked lists
> * Start to look for the right source of information without too much help

# Functions Implemented:

|             File Name                  |   Description    				   | 
|----------------------------------------|-------------------------------------------------|
| 0-print_listint.c                      | Prints all the elements of a listint_t list     |
| 1-listint_len.c	                 | Returns number of elements in the list	   |
| 2-add_nodeint.c			 | Adds a new node at the beginning of the list    |



# General Considerations
> * Compiled with: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
> * Code compliant with Betty style and betty doc
> * Global Variables Not Allowed
> * Maximum of 5 functions per file
> * C libraries allowed: malloc, free and exit.

# Contact Information

<p align="center">
Carlos Bentin -
<a href="https://github.com/Benkdel">
        <img src="https://img.shields.io/badge/Carlos-mainPage-blue">
</a>
</p>
