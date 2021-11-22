#include "main.h"

/**
 * create_file - creates a file
 * @filename: path of file
 * @text_content: content to be write on new file or truncated on existing
 * Return: 1 on Success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int count, len = 0, fd, i;

	if (filename == NULL)
		return (-1);

	/* Open file and get file descriptor */
	fd = open(filename, O_CREAT | 2 | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	for (i = 0; text_content[i]; i++)
		len++;

	/* write into file description */
	count = write(fd, text_content, len);
	if (count == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}
