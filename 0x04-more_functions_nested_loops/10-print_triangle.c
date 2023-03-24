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
				putchar(32);
			}
			for (k = 0; k <= i; k++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
	putchar('\n');
}

/**
 * main - test that print_triangle funct prints a triangle
 * Return: always 0
 */
int main(void)
{
	int t = 10;

	print_triangle(t);
	return (0);
}
