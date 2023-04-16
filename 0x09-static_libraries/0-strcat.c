#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: pointer to destination
 */
char *_strcat(char *dest, char *src)
{
	int c = 0, d = 0;

	while (*(dest + c) != '\0')
	{
		c++;
	}

	while (c >= 0)
	{
		*(dest + c) = *(src + d);
		if (*(src + d) == '\0')
			break;
		c++;
		d++;
	}
	return (dest);
}
