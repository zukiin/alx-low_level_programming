#include <stdio.h>

/**
 * main - finds and prints first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	unsigned long a = 0, b = 1, sum;
	int i;

	for (i = 0; i < 99; i++)
	{
		sum = a + b;
		printf("%lu", sum);
		a = b;
		b = sum;

		if (i == 97)
		{
			putchar('\n');
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
