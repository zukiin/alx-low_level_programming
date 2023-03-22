/*
 * File: 2-print_alphabet_x10.c
 * Author: Zuki Nkalitshana
 */

#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets in lowercase 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char ch;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (ch = 'a' ; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}
