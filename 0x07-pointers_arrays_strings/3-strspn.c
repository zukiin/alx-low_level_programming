#include <string.h>
#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: bytes from substring
 *
 * Return: n bytes in intial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, with_char, prev_char = 0;

	while (*s)
	{
		prev_char = with_char;
		while (*(accept + i) != '\0')
		{
			if (*(accept + i) == *s)
			{
				with_char++;
			}
			i++;
		}
		if (prev_char == with_char)
		{
			break;
		}
		s++;
	}
	return (with_char);
}
