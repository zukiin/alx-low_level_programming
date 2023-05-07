#include "main.h"

/**
  * get_bit - returns the value of a bit at a given index
  * @n: bin number
  * @index: index of bit
  * Return: value of bit else -1
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	int num;

	/* check if index range*/
	if (index > 63)
		return (-1);

	if (n & (1 << index))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
