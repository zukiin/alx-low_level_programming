#include "main.h"

#define BUFFER_SIZE 1024

void close_fd(int filedes);

/**
  * close_fd - closes the file descriptor
  * @filedes: file descriptor to close
  */
void close_fd(int filedes)
{
	int cl;

	cl = close(filedes);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Err closing file descriptor  %d\n", filedes);
		exit(100);
	}
}

/**
  * main - copies file content to another
  * @argc: number of args passed
  * @argv: args array
  * Return: 0 on sucess, error on failure
  */
int main(int argc, char *argv[])
{
	int from_fd, to_fd, reader, writer;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(argv[1], O_RDONLY);
	reader = read(from_fd, buffer, 1024);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (reader > 0)
	{
		writer = write(to_fd, buffer, reader);
		if (writer == -1 || reader != writer)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (reader == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	close_fd(from_fd);
	close_fd(to_fd);
	return (0);
}
