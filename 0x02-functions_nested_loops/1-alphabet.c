/*
 * File: 1-alphabet.c
 * Author: Zuki Nkalitshana
 */

#include <stdio.h>
#include "main.h"

/**
 * print_alphabets - prints alphabets in lowercase
 *
 * Return: 0
 */
void print_alphabets(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
