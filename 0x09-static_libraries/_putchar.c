#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - writes a char to standard output
 * @c: char being passed
 * Return: 1 on success, -1 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
