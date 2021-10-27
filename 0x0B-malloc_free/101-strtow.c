#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **strtow - split string into words
 *
 * @str: string to be splited
 *
 * Return: pointer to array of words
 *
 */
char **strtow(char *str)
{
	char **arrOfStrings = NULL;
	int *wordLens = NULL;
	int i = 1, j = 0, wLen = 0, row = 0;

	if (str == NULL)
		return (NULL);

	/* calculate number of words */
	while (str[i] != '\0')
	{
		 if (str[i] == 32 && str[i-1] != 32)
			 row++;
		  i++;
	}

	i = 1;

	/* assing memory for all rows */
	wordLens = malloc(row * sizeof(int));

	if (wordLens == NULL)
	{
		printf("Error allocating memory: Row count - %d\n", row);
		return (NULL);
	}

	/* calculate each word len and alocate memory */
	while (str[i] != '\0')
	{
		if(str[i] != 32 && str[i-1] != 32)
			wLen++;
		else if (str[i] != 32 && str[i-1] == 32)
		{
			wLen = 1;
		}
		else if (str[i] == 32 && str[i-1] != 32)
		{
			wLen++;
			arrOfStrings[j] = malloc(wordLens[j] * sizeof(char));
			if (arrOfStrings[j] == NULL)
			{
				while (--i >= 0)
					free(arrOfStrings[i]);
				free(arrOfStrings);
				return (NULL);
			}
			j++;
		}
		i++;
	}

	i = 1;
	j = 0;
	row = 0;

	if (str[0] != 32)
		arrOfStrings[0][0] = str[0];

	/* populate words */
	while (str[i] != '\0')
	{
		if(str[i] != 32 && str[i-1] != 32)
		{
			arrOfStrings[row][j] = str[i];
			j++;
		}
		else if (str[i] != 32 && str[i-1] == 32)
		{
			/* beg of words, go to next row */
			row++;
			j = 0;
			arrOfStrings[row][j] = str[i];
			j++;
		}
		else if (str[i] == 32 && str[i-1] != 32)
		{
			/* after last word */
			arrOfStrings[row][j] = str[i];
			row++;
		}
		i++;
	}

	return (arrOfStrings);
}
