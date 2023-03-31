#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverses the content of an arr of int
 * @a: array
 * @n: num of elements of array
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			tmp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = tmp;
		}
	}
}
