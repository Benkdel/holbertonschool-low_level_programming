#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = 98;
        (positive_or_negative(i) == 0) ? printf("0 is zero") : printf("Error");

        return (0);
}
