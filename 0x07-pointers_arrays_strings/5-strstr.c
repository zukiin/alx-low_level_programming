#include <stdlib.h>
#include "main.h"

/**
* _strstr - locates a substring
* @haystack: text of string to search
* @needle: string to search for
*
* Return: pointer to string result
*/
char *_strstr(char *haystack, char *needle)
{
	int i, w = 0;

	while (needle[w] != '\0')
		w++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
			{
				break;
			}
		}
		if (i != w)
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
