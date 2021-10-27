#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - concatenates all arguments passed to main
 *
 * @ac: arg count
 * @av: pointer of pointers
 *
 * Return: pointer to concatenated string
 *
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, n = 0, size;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	size++;

	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[n++] = av[i][j];
		str[n++] = '\n';
	}

	str[n] = '\0';

	return (str);
}
