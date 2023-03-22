#include <stdio.h>

/**
 * main - print the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int sum, i;

	for (i = 0; i < 50 ; i++)
	{
		sum = a + b;
		printf("%d %d %d\n", a, b, sum);
		a = b;
		b = sum;
	}
	return (0);
}
