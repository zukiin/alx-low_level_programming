#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string inputted
 * Return: pointer to destination
 */

char *cap_string(char *s)
{
	int i, c = 0;
	int separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + c) >= 97 && *(s + c) <= 122)
		*(s + c) = *(s + c) - 32;
	c++;
	while (*(s + c) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + c) == separators[i])
			{
				if ((*(s + (c + 1)) >= 97) && (*(s + (c + 1)) <= 122))
					*(s + (c + 1)) = *(s + (c + 1)) - 32;
				break;
			}
		}
		c++;
	}
	return (s);
}
