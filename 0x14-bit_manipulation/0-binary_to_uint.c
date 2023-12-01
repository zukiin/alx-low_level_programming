#include "main.h"

/**
 * binary_to_uint - converts a binary num to unsigned int.
 * @b: binary number
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int base_two = 1, i = 0;

	if (b == NULL)
		return (0);

	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	while (i >= 0)
	{
		result += ((b[i] - '0') * base_two);
		base_two *= 2;
		i--;
	}

	return (result);
}
