#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a char
 * @size: size of array
 * @c: char
 * Return: pointer to array on success, and NULL on fail
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = NULL;

	if (size == 0)
	{
		return (NULL);
	}
	if (size != 0)
	{
		arr = (char *)malloc(size * sizeof(char));
		if (arr != NULL)
		{
			for (i = 0; i < size; i++)
				arr[i] = c;
		}
	}
	return (arr);
}
