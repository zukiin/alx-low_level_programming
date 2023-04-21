#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: ist of types of arguments passed
 */
void print_all(const char * const format, ...)
{
	unsigned int a = 0, i;
	char *separator = "", *s;
	va_list li;
	char c;
	float f;

	va_start(li, format);

	if (format)
	{
		while (format[a])
	{
		switch (format[a])
		{
			case 'c':
				c = va_arg(li, int);
				printf("%s%c", separator, c);
				break;
			case 'i':
				i = va_arg(li, int);
				printf("%s%d", separator, i);
				break;
			case 'f':
				f = va_arg(li, double);
				printf("%s%f", separator, f);
				break;
			case 's':
				s = va_arg(li, char *);
				if (s == NULL)
					printf("%s(nil)", separator);
				else
					printf("%s%s", separator, s);
				break;
			default:
				a++;
				continue;
		}
		separator = ", ";
	a++;
	}
	}
	putchar('\n');
	va_end(li);
}
