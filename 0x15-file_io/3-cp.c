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
 * error_handler - returns respective exit status
 * @fd: file descriptor
 * @fname: file descriptor
 * @type: type of sys call
 * Return: 0 on success, exit status on error
 */
int error_handler(int fd, char *fname, int type)
{
	int status = 0;

	switch (type)
	{
	case READ_ERROR:
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", fname);
		status = 98;
		break;
	case WRITE_ERROR:
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", fname);
		status = 99;
		break;
	default:
		break;
	}
	return (status);
}

/**
 * create_buffer - allocates a buffer of BUFFERSIZE
 * @fileName: file dest to print error
 * Return: pointer to new allocated buffer
 */
char *create_buffer(char *fileName)
{
	char *buffer;

	buffer = malloc(sizeof(char) * BUFFERSIZE);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileName);
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
	int fd_src, fd_dest, res = 0;
	char *buffer;

	(void)argc;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_src = open(argv[1], O_RDONLY);
	if (fd_src == -1)
		exit(error_handler(fd_src, argv[1], READ_ERROR));

	buffer = create_buffer(argv[2]);

	fd_dest = open(argv[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	if (fd_dest == -1)
		exit(error_handler(fd_dest, argv[2], WRITE_ERROR));

	do {
		res = read(fd_src, buffer, BUFFERSIZE);
		if (res == -1)
			exit(error_handler(res, argv[1], READ_ERROR));
		res = write(fd_dest, buffer, res);
		if (res == -1)
			exit(error_handler(res, argv[2], WRITE_ERROR));
	} while (res > 0);

	free(buffer);

	return (0);
}
