#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by new line
 * @separator: string to print between num
 * @n: num of int passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ln;

	va_start(ln, n);
	for (; i < n; i++)
	{
		printf("%d", va_arg(ln, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	putchar('\n');
	va_end(ln);
}
