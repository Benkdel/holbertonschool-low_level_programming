/**
 * _strlen - returns length of string
 *
 * @s: string to be evaluated
 *
 * Return: integer of string length
 *
 */
int _strlen(char *s)
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
	int totalLen;
	int destLen;
	int i;
	int j = 0;

	destLen = _strlen(dest);
	totalLen = destLen + n;
	totalLen = (totalLen > destLen) ? _strlen(src) : totalLen;

	for (i = destLen; i < totalLen; i++)
		dest[i] = src[j++];
	return (dest);
}
