#include "main.h"

/**
 * argstostr - concatenates all the arguments of program
 * @ac: num of args to pass to func
 * @av: array of args
 * Return: pointer to new string on success, NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int i = ac, j = 0, k = 0, t = 0;
	char **newStr = NULL;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}

	while (ac--)
	{
		t += (len(av[ac]) + 1);
		newStr = (char *) malloc(t + 1);
	}

	if (newStr != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++)
			{
				newStr[k] = av[i][j];
				k++;
			}
			newStr[k] = '\n';
		}
		newStr[k] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (newStr);
}

/**
 * getstrlength - gets length of string
 * @str: string inputted
 * Return: length of the string
 */
int getstrlength(char *str)
{
	int length = 0;

	if (str != NULL)
	{
		while (str[length])
		{
			length++;
		}
	}
	return (length);
}
