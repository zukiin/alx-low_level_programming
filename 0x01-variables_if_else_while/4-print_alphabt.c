/*
 * File: 4-print_alphabt.c
 * Author: Zuki Nkalitshana
 */

#include <stdio.h>

/**
 * main - print out the alphabets except for 'q' and 'e'
 *
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
		{
			ch++;
		}
		else
		{
			putchar(ch);
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
