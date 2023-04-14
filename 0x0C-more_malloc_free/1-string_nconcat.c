#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string passed
 * @s2: second string passed
 * @n: num of bytes
 * Return: pointer to concat string with s1 and 1st
 * n bytes of s2 (on success), and NULL (on failure)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatStr;
	unsigned int i = 0, length = n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (; s1[i]; i++)
	{
		length++;
	}

	concatStr = malloc(sizeof(char) * (length + 1));

	if (concatStr == NULL)
	{
		return (NULL);
	}
	length = 0;

	for (i = 0; s1[i]; i++)
	{
		concatStr[length++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		concatStr[length++] = s2[i];
	}

	concatStr[length] = '\0';
	return (concatStr);
}
