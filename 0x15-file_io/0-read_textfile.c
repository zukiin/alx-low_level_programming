#include "main.h"

/**
  * read_textfile - reads a text file and prints it to the POSIX stdout
  * @filename: name of file
  * @letters: number of letters to read and print
  * Return: num of letters it can read&print else 0
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedes;
	ssize_t letters_read, letters_writ;
	char *buffer;

	if (filename == NULL)
		return (0);

	filedes = fopen(filename, 0_RDONLY);
	letters_read = read(fildes, buffer, letters);
	letters_writ = write(0_WRONLY, buffer, letters_read);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	if (filedes == -1 || letters_read == -1 || letters_writ == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	fclose(filedes);

	return (letters_writ);
}
