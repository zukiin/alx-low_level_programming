/*
 * File: 3-print_alphabets.c
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

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
