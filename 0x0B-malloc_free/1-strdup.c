#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to input
 * Return: pointer to duplicate string (on success) and NULL on fail
 */
char *_strdup(char *str)
{
	int i;
	unsigned int j;
	char *newString = NULL;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{}
	newString = (char *)malloc(i + 1 * sizeof(char));
	if (newString != NULL)
	{
		for (j = 0; str[j] != '\0'; j++)
			newString[j] = str[j];
	}
	else
	{
		return (NULL);
	}
	newString[j] = '\0';
	return (newString);
}
