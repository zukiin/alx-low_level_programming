#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: returns NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **arr;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr != NULL)
	{
		while (i < height)
		{
			arr[i] = (int *) malloc(sizeof(int) * width);

			if (arr[i] != NULL)
			{
				for (; j < width; j++)
					array[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(arr[i]);
					i--;
				}
				free(arr);
				return (NULL);
			}

			i++;
		}
		return (arr);
	}
	else
	{
		return (NULL);
	}
}
