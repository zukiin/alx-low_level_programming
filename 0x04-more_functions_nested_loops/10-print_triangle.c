#include <stdio.h>
#include "main.h"

/**
 * print_triangle -  prints a triangle to the terminal
 * @size: size of the triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size ; i++)
	{
		if (size <= 0)
		{
			break;
		}
		else
		{
			for (j = size - i; j > 1 ; j--)
			{
				_putchar(32);
			}
			for (k = 0; k <= i; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
