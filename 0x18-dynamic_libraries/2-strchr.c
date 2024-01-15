#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to search for
 *
 * Return: a pointer to the first c in the string
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
