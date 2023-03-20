/*
 * File: 8-print_base16.c
 * Author: Zuki Nkalitshana
 */

#include <stdio.h>

/**
 * main - print all base 16 numbers using putchar() funct
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 16; n++)
	{
		if (n < 10)
		{
			putchar(n + 48);
		}
		else
		{
			putchar(n + 87);
		}
	}
	putchar('\n');
	return (0);
}
