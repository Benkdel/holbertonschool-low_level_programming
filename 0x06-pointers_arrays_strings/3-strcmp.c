/**
 * _strcmp - compare two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: return difference of asci hex value
 *
 */
int _strcmp(char *s1, char *s2)
{
	int currValue = 0;
	int i = 0;

	while (currValue == 0 &&  s1[i] != '\0' &&  s2[i] != '\0')
	{
		currValue = s1[i] - s2[i];
		i++;
	}
	return (currValue);
}
