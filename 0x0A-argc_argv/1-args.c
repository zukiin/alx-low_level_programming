#include "main.h"

/**
 * main - prints number of args passed into it
 * @argc: argument count
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
