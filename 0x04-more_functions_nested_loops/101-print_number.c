#include <stdio.h>
#include "main.h"

/**
 * print_number - prints an integer
 * @n: number inputted
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		n *= -1;
		i = n;
		putchar('-');
	}
	if ((i / 10) > 0)
	{
		print_number(i / 10);
	}
	putchar((n % 10) + '0');
}
