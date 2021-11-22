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
		dprintf(2, "Error: Can't close fd %d\n", fd);
		return (100);
	}
	return (status);
}

/**
 * main - copies contents of 1 file to another
 * @argc: number of parameters
 * @argv: array of string parameters
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	int fd_src, fd_dest, res = 0;
	char *buffer;

	(void)argc;
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_src = open(argv[1], O_RDONLY);
	if (fd_src == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_dest = open(argv[2], O_CREAT | O_TRUNC | 2, 0664);
	if (fd_dest == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		if (close_file(fd_src) == 100)
			exit(100);
		exit(99);
	}
	buffer = malloc(sizeof(char) * BUFFERSIZE);
	if (buffer == NULL)
	{
		if (close_file(fd_dest) == 100 || close_file(fd_src) == 100)
			exit(100);
		return (-1);
	}
	do {
		res = read(fd_src, buffer, BUFFERSIZE);
		write(fd_dest, buffer, res);
	} while (res > 0);
	free(buffer);
	return (0);
}
