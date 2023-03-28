#include <stdio.h>
#include "main.h"

/**
 * main - tests code
 *
 * Return: 0 for success
 */
int main(void)
{
	char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
