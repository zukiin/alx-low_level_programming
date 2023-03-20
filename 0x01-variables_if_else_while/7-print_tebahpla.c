/*
 * File: 7-print_tebahpla.c
 * Author: Zuki Nkalitshana
 */

#include <stdio.h>

/**
 * main - prints alphabets in lowercase and then in uppercase
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

