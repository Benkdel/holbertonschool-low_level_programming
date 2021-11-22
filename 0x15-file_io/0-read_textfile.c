#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: path of the file to read
 * @letters: number of letters to read and print
 * Return: number of letters readed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int count, fd;

	if (filename == NULL)
		return (0);

	/* Open file and get file descriptor */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* allocate memory in buffer to read contents of fd */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* read contents of fd */
	count = read(fd, buffer, letters);
	if (count == 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* write to standard output */
	count = write(STDOUT_FILENO, buffer, letters);
	if (count == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);

	return (count);
}
