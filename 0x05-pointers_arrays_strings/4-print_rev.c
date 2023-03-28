#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse order
 * @s: string inputted
 */
void print_rev(char *s)
{
	int c = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
	}
	for (c -= 1; c >= 0; c--)
	{
		putchar(s[c]);
	}

	putchar('\n');
}
