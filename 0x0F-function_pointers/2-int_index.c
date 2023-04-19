#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: int array
 * @size: array size
 * @cmp: pointer to secondary func
 *
 * Return: -1 if size<=0 || !match, else 1st
 * non-zero element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (; i < size ; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
