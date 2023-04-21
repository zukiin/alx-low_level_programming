#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: 1st num passed as an arg
 * Return: 0 if n == NULL, else sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum;
	va_list ln;

	va_start(ln, n);

	if (n == 0)
		return (0);

	for (; i < n; i++)
		sum += va_arg(ln, int);

	va_end(li);
	return (sum);
}
