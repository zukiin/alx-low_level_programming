#include "main.h"
#include <stdio.h>

/**
  * print_square - prints n squares
  * @s: The number of squares/number of times
  *
  * Return: empty
  */
void print_square(int s)
{
	int i, j;

	if (s <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < s; i++)
		{
			for (j = 0; j < s; j++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
