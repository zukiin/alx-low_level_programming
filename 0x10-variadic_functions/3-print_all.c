#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: ist of types of arguments passed
 */
void print_all(const char * const format, ...)
{
	int a = 0, i;
	char *separator, *s;
	va_list li;
	char c;
	float f;

	va_start(li, format);

	while (format && format[a])
	{
		switch (format[a])
		{
			case 'c':
				c = va_arg(li, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(li, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(li, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(li, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				break;
		}
	if (format[a + 1])
	{
		separator = ", ";
		printf("%s", separator);
	}
	a++;
	}
	putchar('\n');
	va_end(li);
}
