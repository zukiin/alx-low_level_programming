#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: character string inputted
 *
 * Return: c
 */
int _strlen(char *s)
{
	int c;

	c = 0;
	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
