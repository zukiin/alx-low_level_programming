#include "main.h"
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: lowest value in arr
 * @max: largest value in arr
 * Return: pointer to new arr mem block
 */
int *array_range(int min, int max)
{
	int *mem_block;
	int i = 0, j = 0;

	if (min > max)
	{
		return (NULL);
	}

	mem_block = malloc(sizeof(*mem_block) * ((max - min) + 1));

	if (mem_block != NULL)
	{
		for (i = min; i <= max; i++)
		{
			mem_block[j] = i;
			j++;
		}
		return (mem_block);
	}
	else
	{
		return (NULL);
	}
}
