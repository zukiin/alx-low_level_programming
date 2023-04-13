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
	int i, j, count;
	unsigned int k;
	char *concatStr = NULL;

	count = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{}
	for (j = 0; s2[j] != '\0'; j++)
		;
	concatStr = (char *)malloc((i + j + 1) * sizeof(char));
	if (concatStr == NULL)
	{
		return (NULL);
	}
	for (k = 0; s1[k] != '\0'; k++)
	{
		concatStr[k] = s1[k];
	}
	for (; s2[count] != '\0'; k++)
	{
		concatStr[] = s2[count];
		count++;
	}
	return (concatStr);
}
