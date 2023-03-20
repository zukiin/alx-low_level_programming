/*
 * File: 6-print_numberz.c
 * Author: Zuki Nkalitshana
 */

#include <stdio.h>

/**
 * main - print all base 10 numbers using putchar() funct
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}

