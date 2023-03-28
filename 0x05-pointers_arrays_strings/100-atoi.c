#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts string to an int
 * @s: string to convert
 * Return: int
 */
int _atoi(char *s)
{
	int i = 1;
	unsigned int n = 0;

	do {
		if (*s == '-')
		{
			i *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			n = (n * 10) + (*s - '0');
		}
		else if (n > 0)
		{
			break;
		}
	} while (*s++);

	return (n * i);
}
