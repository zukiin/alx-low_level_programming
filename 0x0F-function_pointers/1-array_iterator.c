#include "function_pointers.h"

/**
 * array_iterator - executes a func given as a param on ea
 * element of an array
 * @array: array of int
 * @size: array size
 * @action: pointer to secondary func
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && size > 0 && action != NULL)
	{
		while (size--)
		{
			action(*array);
			array++;
		}
	}
}
