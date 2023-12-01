#include "main.h"

/**
  * clear_bit - sets the value of a bit to 0 at a given index
  * @n: bin number
  * @index: bit's index
  * Return: 1 on success, -1 on fail
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
