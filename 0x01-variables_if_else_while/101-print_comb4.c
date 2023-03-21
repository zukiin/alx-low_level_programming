/*
 * File: 101-print_comb4.c
 * Author: Zuki Nkalitshana
 */

#include <stdio.h>

/**
 * main - print all possible combinations of different 3 digit nums
 *
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n < 1000)
	{
		int u = n % 10;
		int t = (n / 10) % 10;
		int h = (n / 100) % 10;

		if (u != t && u != h && t != h)
		{
			putchar(u + '0');
			putchar(t + '0');
			putchar(h + '0');
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
