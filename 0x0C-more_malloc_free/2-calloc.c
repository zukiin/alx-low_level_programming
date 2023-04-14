#include "main.h"

/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: num of elements in arr
 * @size: mem block size
 * Return: NULL if nmemb/size == 0, else NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *mem_block;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem_block = malloc(nmemb * size);

	if (mem_block != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
		{
			mem_block[i] = 0;
		}
		return (mem_block);
	}
	else
	{
		return (NULL);
	}
}
