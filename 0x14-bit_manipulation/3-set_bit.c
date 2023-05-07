#include "main.h"

/**
  * set_bit - sets the value of a bit to 1 at a given index
  * @n: bin number
  * @index: bit's index
  * Return: 1 on success and -1 on error
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1 << index);
	return (1);
}
