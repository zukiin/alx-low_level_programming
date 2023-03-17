/*
 * File: 6-size.c
 * Author: Zuki Nkalitshana
 */

#include <stdio.h>
#include <conio.h>

/**
 * main - prints the size of various types
 *
 * ReturnL 0
 */
int main(void)
{
	puts("Size of a char: %zu byte(s)", sizeof(char));
	puts("Size of an int: %zu byte(s)", sizeof(int));
	puts("Size of a long int: %zu byte(s)", sizeof(long int));
	puts("Size of a long long int: %zu byte(s)", sizeof(long long int));
	puts("Size of a float: %zu byte(s)", sizeof(float));
	return (0);
}
