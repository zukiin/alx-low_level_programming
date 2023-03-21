/*
 * File: 102-print_comb5.c
 * Author: Zuki Nkalitshana
 */

#include <stdio.h>

/**
 * main - print all combinations of two-digit numbers ranging from 0 to 99
 *
 * Return: 0
 */
int main(void)
{
	int i, j, count = 0;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			if (i == j)
			{
				continue;
			}
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			count++;

			if (count != 4950)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
