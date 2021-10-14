/**
 * _strlength - returns length of string
 *
 * @s: string to be evaluated
 *
 * Return: integer of string length
 *
 */
int _strlength(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * *_strncat - return concatenated string
 *
 * @dest: string dest
 * @src: string src
 * @n: number of bytes to get from dest
 *
 * Return: pointer to string dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int totalLength;
	int destLength;
	int i;
	int j = 0;

	destLength = _strlength(dest);
	totalLength = destLength + n;

	for (i = destLength; i < totalLength; i++)
		dest[i] = src[j++];
	return (dest);
}
