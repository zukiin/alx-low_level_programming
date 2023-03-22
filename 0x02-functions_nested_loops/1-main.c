#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;
	r = print_sign('x');
	putchar(r + '0');
	r = print_sign('9');
	putchar(r + '0');
	r = print_sign(108);
	putchar(r + '0');
	putchar('\n');
	return (0);
}
