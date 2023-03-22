#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Return: 0
 */
int main(void)
{
	unsigned long a = 0, b = 1, sum, total;

	while (1)
	{
		sum = a + b;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total += sum;
		a = b;
		b = sum;
	}
	printf("%lu\n", total);
	return (0);
}
