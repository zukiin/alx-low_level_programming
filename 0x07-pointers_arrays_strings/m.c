#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - tests the code
 *
 * return: 0 for success
 */
int main(void)
{
	char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
