/*
 * File: 5-print_numbers.c
 * Author: Zuki Nkalitshana
 */

#include <stdio.h>

/**
 * main - print all base 10 numbers
 *
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
