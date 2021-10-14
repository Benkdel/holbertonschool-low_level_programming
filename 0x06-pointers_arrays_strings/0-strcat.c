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
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * *_strcat - return concatenated string
 *
 * @dest: string dest
 * @src: string src
 *
 * Return: pointer to string dest
 *
 */
char *_strcat(char *dest, char *src)
{
	unsigned int totalLength;
	unsigned int destLength;
	int i;
	int j = 0;

	destLength = _strlength(dest);
	totalLength = destLength + _strlength(src);

	for (i = destLength; i < totalLength; i++)
		dest[i] = src[j++];
	return (dest);
}
