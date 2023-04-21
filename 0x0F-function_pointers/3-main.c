#include "function_pointers.h"

/**
 * main - prints result of any user-selected op
 * @argc: arg count
 * @argv: arr of pointers to args
 * Return: result
 */
int main(int argc, char *argv[])
{
	int x = atoi(argv[1]), y = atoi(argv[3]);
	char *op = op = argv[2];

	if (argc < 4 && argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && y <= 0) || (*op == '%' && y <= 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(x, y));
	return (0);
}
