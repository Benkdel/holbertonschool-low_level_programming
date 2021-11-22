#include "main.h"

/**
 * close_file - close file and check if was succesfull
 * @fd: file descriptor
 * Return: 1 if closed correctly, 100 if error
 */
int close_file(int fd)
{
	int status = close(fd);

	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		return (100);
	}
	return (status);
}

/**
 * create_buffer - Allocates 1024 bytes for a buffer
 * @fd_src: The name of the file buffer is storing chars for
 * Return: A pointer to the newly-allocated buffer
 */
char *create_buffer(char *fd_src)
{
	char *buffer;

	buffer = malloc(sizeof(char) * BUFFERSIZE);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fd_src);
		exit(99);
	}
	return (buffer);
}

/**
 * main - copies contents of 1 file to another
 * @argc: number of parameters
 * @argv: array of string parameters
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	int fd_src, fd_dest, res = 0, w = 0;
	char *buffer;

	(void)argc;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_src = open(argv[1], O_RDONLY);
	buffer = create_buffer(argv[2]);

	do {
		fd_dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
		res = read(fd_src, buffer, BUFFERSIZE);
		if (fd_src == -1 || res == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		w = write(fd_dest, buffer, res);
		if (fd_dest == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	} while (res > 0);

	free(buffer);
	close_file(fd_src);
	close_file(fd_dest);
	return (0);
}
