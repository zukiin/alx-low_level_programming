#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: ist of types of arguments passed
 */
void print_all(const char * const format, ...)
{
	int a = 0, i;
	char *separator = ", ", *s;
	va_list li;
	char c;
	float f;

	va_start(li, format);

	c = va_arg(li, int);
	i = va_arg(li, int);
	f = (float) va_arg(li, double);
	s = va_arg(li, char *);

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
