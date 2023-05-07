#include "main.h"

/**
  * flip_bits - returns the number of bits flipped
  * @n: bin number
  * @m: resultant bin number
  * Return: number of flipped bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d = n ^ m;
	unsigned int c = 0;

	while (d != 0)
	{
		c = c & 1;
		d = d >> 1;
	}

	return (c);
}
