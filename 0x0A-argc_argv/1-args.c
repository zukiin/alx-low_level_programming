#include "main.h"

/**
 * main - prints number of args passed into it
 * @argc: argument count
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	printf("String: %s\n", argv[i]);
	printf("%d\n", argc - 1);
	return (0);
}
