#include <stdio.h>
#include "main.h"
#include <math.h>

/**
  * main - prints the largest prime factor of number 612852475143
  *
  * Return: 0 (for success)
  */
int main(void)
{
	long n = 612852475143, a, max;
	double sq = sqrt(number);

	for (a = 1; a <= sq; a++)
	{
		if (n % a == 0)
		{
			max = n / a;
		}
	}

	printf("%ld\n", max);

	return (0);
}
