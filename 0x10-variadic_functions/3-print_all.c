#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: ist of types of arguments passed
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *separator = ", ";
	va_list li;
	char c = va_arg(li, int);
	int i = va_arg(li, int);
	float f = (float) va_arg(li, double);
	char *s = va_arg(li, char *);

	va_start(li, format);
	while (format && format[a])
		switch (format[a])
		{
			case 'c':
				printf("%c", c);
				break;
			case 'i':
				printf("%d", i);
				break;
			case 'f':
				printf("%f", f);
				break;
			case 's':
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				break;
		}
	if (format[a + 1])
		printf("%s", separator);

	a++;

	putchar('\n');
	va_end(li);
}
