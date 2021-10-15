/**
 * *leet - encodes using leet code
 *
 * @s: string to be encoded
 *
 * Return: string encoded
 *
 */
char *leet(char *s)
{
	int j;
	int i = 0;
	char mapping[5][2] = {"Aa", "Ee", "Oo", "Tt", "Ll"};
	int numbers[] = {52, 51, 48, 55, 49};

	while (s[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == mapping[j][0] || s[i] == mapping[j][1])
				s[i] = numbers[j];
		}
		i++;
	}
	return (s);
}
