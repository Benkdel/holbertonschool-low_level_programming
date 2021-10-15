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

	while (*(a + i))
	{
		for (j = 0; j < 5; j++)
		{
			if (*(a + i) == mapping[j][0] || *(a + i) == mapping[j][1])
				*(a + i) = numbers[j];
		}
		i++;
	}
	return (s);
}
