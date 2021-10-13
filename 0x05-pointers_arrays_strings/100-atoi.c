
/*
 * _atoi - gets int from string
 *
 * @s: string containing the int
 *
 * Return: integer found in string s
 *
 */

int _atoi(char *s)
{
	unsigned int res = 0;
	int sign = 1;
	int i;
	int numPart = 0;

	if (s[0] == '\0')
		return (0);

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= '0' && s[i] <= '9') || s[i] == '-')
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
