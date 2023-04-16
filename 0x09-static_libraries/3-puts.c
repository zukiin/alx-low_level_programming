#include "main.h"

/**
 * _puts - prints a string then a new line
 * @str: string input
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
