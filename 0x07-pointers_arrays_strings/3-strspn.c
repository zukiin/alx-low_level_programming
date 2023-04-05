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
	int i, c;
	unsigned int t = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (t = 0; accept[t] != '\0'; t++)
			{
				if (s[i] == accept[t])
					c++;
			}
		}
		else
		{
			return (c);
		}
	}
	return (c);
}
