#include "main.h"

/**
 * str_concat - concaenates two strings
 * @s1: first string inputted
 * @s2: second string inputted
 * Return: pointer to allocated space in memory for concat str
 * (on success) and NULL on fail
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len = 0;
	char *concatStr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] || s2[i]; i++)
	{
		len++;
	}

	concatStr = malloc(sizeof(char) * len);

	if (concatStr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		concatStr[j++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		concatStr[j++] = s2[i];
	}

	return (concatStr);
}
