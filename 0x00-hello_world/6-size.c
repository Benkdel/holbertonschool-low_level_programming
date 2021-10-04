#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char un[8] = "byte(s)";

	printf("%s %d %s\n", "Size of a char:", sizeof(char), un);
	printf("%s %d %s\n", "Size of an int:", sizeof(int), un);
	printf("%s %d %s\n", "Size of a long int:", sizeof(long int), un);
	printf("%s %d %s\n", "Size of a long long int:", sizeof(long long int), un);
	printf("%s %d %s\n", "Size of a float:", sizeof(float), un);
	printf("%s %d %s\n", "Size of a unsigned int:", sizeof(unsigned int), un);
	return (0);
}
