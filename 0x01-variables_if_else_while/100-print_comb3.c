/*
 * File: 100-print_comb3.c
 * Author: Zuki Nkalitshana
 */

#include <stdio.h>

/**
 * main - print all possible different combinations of two digits
 *
 * Return: 0
 */
int main(void)
{
	int o, i;

	for (o = 0; o < 9; o++)
	{
		for (i = o + 1; i <= 9; i++)
		{
			putchar(o + '0');
			putchar(i + '0');
			if (o == 8 && i == 9)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
