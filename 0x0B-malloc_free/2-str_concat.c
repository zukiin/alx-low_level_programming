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
	int i = 0, j = 0, k = 0, len = 0;
	char *concatStr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	len = i + j;
	concatStr = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	j = 0;

	while (k < len)
	{
		if (k <= i)
		{
			concatStr[k] = s1[k];
		}

		if (k >= i)
		{
			concatStr[k] = s2[j];
			j++;
		}

		k++;
	}

	concatStr[k] = '\0';
	return (concatStr);
}
