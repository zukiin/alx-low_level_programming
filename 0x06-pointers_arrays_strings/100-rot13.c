#include "main.h"

/**
 * rot13 - encode string using rot13
 * @s: string inputted
 * Return: pointer to destination
 */

char *rot13(char *s)
{
	int i, c = 0;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + c) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + c) == alphabets[i])
			{
				*(s + c) = rot13[i];
				break;
			}
		}
		c++;
	}

	return (s);
}
