#include "main.h"
#include <string.h>

/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: pointer to character string (of 0s and 1s)
  * Return: converted num (on success), or 0 on NULL or b[i] !=0 || 1
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int output = 0;

	if (b[i] == NULL)
		return (0);

	for (; b[i] < strlen(*b) ; i++)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);

		output = output << 1;

		if (b[i] == '1')
			output = output | 1;
	}
	return (output);
}
