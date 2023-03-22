#include <stdio.h>

/**
 * main - computes and prints sum of all multiples of 3 or 5 below 1024
 *
 * Return: sum and multiples
 */
int main(void)
{
	int n, sum = 0;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
		n++;
	}
	printf("Sum: %d \n", sum);
	return(0);
}
