#include <stdio.h>
#include "main.h"

/**
 * main - tests code
 *
 * Return: 0 for success
 */
int main(void)
{
	int a;

	a = 402;
	printf("a=%d\n", a);
    reset_to_98(&a);
    printf("a=%d\n", a);
    return (0);
}
