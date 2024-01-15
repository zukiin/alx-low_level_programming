#include "main.h"

/**
  * append_text_to_file -  appends text at the end of a file
  * @filename: pointer to file
  * @text_content: string to add at end of file
  * Return: 1 on success and -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int filedes, wr, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}

	filedes = open(filename, O_WRONLY | O_APPEND);
	wr = write(filedes, text_content, length);

	if (filedes == -1 || wr == -1)
		return (-1);

	close(filedes);

	return (1);
}
