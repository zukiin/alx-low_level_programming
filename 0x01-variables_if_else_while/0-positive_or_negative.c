/*
 * File: 0-positive_or_negative.c
 * Author: Zuki Nkalitshana
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints a random number everytime program is executed
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is a zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
