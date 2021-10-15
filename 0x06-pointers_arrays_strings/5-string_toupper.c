
/**
 * *string_toupper - change string to uppercase
 *
 * @c: string to be change
 *
 * Return: modified string
 *
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 97 && c[i] <= 122)
			c[i] = c[i] - 32;
		i++;
	}

	return (c);
}
