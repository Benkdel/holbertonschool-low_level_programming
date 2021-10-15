
/**
 * isCap - return if char should be caps
 *
 * @c: char in n - 1 position to be evaluated
 *
 * Return: 1 if true, 0 if false
 *
 */

int isCap(char c)
{
	if (c >= 9 && c <= 10)
		return (1);
	if (c >= 33 && c <= 34)
		return (1);
	if (c >= 40 && c <= 41)
		return (1);
	if (c == 20 || c == 44 || c == 59 || c == 46 || c == 63)
		return (1);
	if (c == 123 || c == 125)
		return (1);
	return (0);
}

/**
 * *cap_string - capitalizes all words of a string
 *
 * @s: string to be modified
 *
 * Return: pointer to modified string
 *
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			if (i == 0)
				s[i] = s[i] - 32;
		}
		else
		{
			if (isCap(s[i - 1]) == 1)
				s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
