#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: 0 for success (s1 = s2)
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, c = 0;

	while (c == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		c = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (c);
}
