#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * read_textfile - reads a text file and prints it to the POSIX stdout
  * @filename: name of file
  * @letters: number of letters to read and print
  * Return: num of letters it can read&print else 0
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t letters_read, letters_writ, filedes;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	filedes = open(filename, O_RDONLY);
	letters_read = read(filedes, buffer, letters);
	letters_writ = write(STDOUT_FILENO, buffer, letters_read);

	if (filedes == -1 || letters_read == -1 || letters_writ == -1 ||
			letters_writ != letters_read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(filedes);

	return (letters_writ);
}
