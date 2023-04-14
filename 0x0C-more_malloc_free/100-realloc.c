#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previously allocated mem using malloc
 * @old_size: size of ptr allocated mem
 * @new_size: size of new mem block
 * Return: NULL if new_size == 0 && ptr!= NULL else ptr if
 * new_size == old_size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *tmp;
	unsigned int i, min_size;

	if (new_size == old_size)
	{
		return (ptr);
	}
	else if (ptr == NULL)
	{
		tmp = malloc(new_size);
		return (tmp);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		tmp = malloc(new_size);

		if (tmp != NULL)
		{
			min_size = old_size < new_size ? old_size : new_size;

			for (i = 0; i < min_size; i++)
			{
				*((char *)tmp + i) = *((char *) ptr + i);
			}
			free(ptr);
			return (tmp);
		}
		else
		{
			return (NULL);
		}
	}
}
