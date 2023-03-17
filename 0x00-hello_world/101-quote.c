/*
 * File: 101-quote.c
 * Author: Zuki Nkalitshana
 */

#include <unistd.h>

/**
 * main - prints "and that piece of art is useful\" - Dora Korpar, 2015-10-19"
 *
 * Return: 1
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	return (1);
}
