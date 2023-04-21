#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: string between strings
 * @n: num of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *string;
	va_list li;

	va_start(li, n);

	for (; i < n; i++)
	{
		string = va_arg(li, char *);
		string == NULL ? printf("(nil)") : printf("%s", string);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);

	}
	putchar('\n');
	va_end(li);
}
