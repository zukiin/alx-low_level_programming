#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: array of args
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int a, b, sum;

	if (argc != 3)
	{
		printf("Error\n");
		return(1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	sum = a * b;

	printf("%d\n", sum);
	return (0);
}
