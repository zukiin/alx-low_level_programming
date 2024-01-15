#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string then a new line
 * @str: string input
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
