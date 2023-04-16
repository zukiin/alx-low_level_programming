#include "main.h"

/**
 * main - prints all arguments passed on new lines
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
