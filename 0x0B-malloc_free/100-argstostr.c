#include "main.h"

int getstrlength(char *str);

/**
 * argstostr - concatenates all the arguments of program
 * @ac: num of args to pass to func
 * @av: array of args
 * Return: pointer to new string on success, NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int i = ac, j = 0, k = 0, s = 0, tmp = 0;
	char **newStr = NULL;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}

	while (ac--)
	{
		s += (getstrlength(av[ac]) + 1);
	}
	
	newStr = (char *) malloc(s++);

	if (newStr != NULL)
	{
		while (k < i)
		{
			for (j = 0; av[k][j] != '\0'; j++)
			{
				newStr[j + tmp] = av[k][j];
			}
			newStr[tmp + j] = '\n';
			tmp += (j + 1);
			k++;
		}
		newStr[tmp] = '\0';
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
