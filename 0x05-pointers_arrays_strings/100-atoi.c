/*
 * isNumericChar - checks if char is numeric or negative sign
 *
 * @x: char to evaluate
 *
 * Return: 1 if x is numeric, otherwise 0
 *
 */
int isNumericChar(char x)
{
	return (((x >= '0' && x <= '9') || x == '-') ? 1 : 0);
}

/*
 * _atoi - gets int from string
 *
 * @s: string containing the int
 *
 * Return: integer
 *
 */
int _atoi(char *s)
{
	if (*s == '\0')
		return (0);

	int res = 0;
	int sign = 1;
	int i;
	int numPart = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (isNumericChar(s[i]))
		{
			if (s[i] == '-')
				sign *= -1;
			else
			{
				numPart = 1;
				res = res * 10 + s[i] - '0';
			}
		}
		else
		{
			if (numPart == 1)
				return (sign * res);
		}
	}
	return (sign * res);
}
