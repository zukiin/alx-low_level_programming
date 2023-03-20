/*
 * File: 2-print_alphabet.c
 * Author: Zuki Nkalitshana
 */

#include <stdio.h>

/**
 * main - print alphabets in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
