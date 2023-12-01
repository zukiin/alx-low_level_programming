#include "main.h"

/**
  * create_file - creates a file
  * @filename: file to create
  * @text_content: NULL terminated string to write to the file
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int filedes,  wr, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		while (text_content[length])
			length++;

	filedes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	wr = write(filedes, text_content, length);

	if (filedes == -1 || wr == -1)
		return (-1);

	close(filedes);
	return (1);
}
