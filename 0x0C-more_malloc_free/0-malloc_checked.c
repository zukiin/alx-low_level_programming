#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory block to allocate
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *block;

	block = malloc(b);
	if (block == 0 || block == NULL)
	{
		exit(98);
	}
	return (block);
}
