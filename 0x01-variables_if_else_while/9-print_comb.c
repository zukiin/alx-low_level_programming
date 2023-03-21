/*
 * File: 9-print_comb.c
 * Author: Zuki Nkalitshana
 */

#include <stdio.h>

/**
 * main - print all combinations of single-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + 48);

		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('$');
	return (0);
}
