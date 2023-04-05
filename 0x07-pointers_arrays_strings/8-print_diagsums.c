#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of int
 * @a: array name
 * @size: array size
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size - 1;
	int s, z = 0;

	while (i <= (size * size))
	{
		s = s + a[i];
		i = i + size + 1;
	}

	while (j < (size * size - 1))
	{
		z = z + a[j];
		j = j + size - 1;
	}
	printf("%d, %d\n", s, z);
}
