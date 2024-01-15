#include "main.h"
#include <stddef.h>

/**
* _strstr - locates a substring
* @haystack: text of string to search
* @needle: string to search for
*
* Return: pointer to string result
*/
char *_strstr(char *haystack, char *needle)
{
	int i, ss = 0;

	while (needle[ss] != '\0')
		ss++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
			{
				break;
			}
		}
		if (i != ss)
		{
			haystack++;
		}
		else
		{
			return (haystack);
		}
	}
	return (NULL);
}
