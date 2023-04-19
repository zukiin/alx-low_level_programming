#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name passed as input
 * @f: function to execute print
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
