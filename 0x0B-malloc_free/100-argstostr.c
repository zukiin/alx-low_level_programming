#include "main.h"

/**
 * argstostr - concatenates all the arguments of program
 * @ac: argument count to input to func
 * @av: array of args
 * Return: pointer to new string on success, NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j, k = 0, len = 0;
	char **newStr = NULL;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
		len++;
	}

	len++;

	newStr = malloc(len * sizeof(char));

	if (newStr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			newStr[k] = av[i][j];
			k++;
		}
		newStr[k] = '\n';
		k++;
	}

	newStr[k] = '\0';
	return (newStr);
}
