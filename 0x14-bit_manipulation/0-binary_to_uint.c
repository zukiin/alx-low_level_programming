#include "main.h"

/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: pointer to character string (of 0s and 1s)
  * Return: converted num (on success), or 0 on NULL or b[i] !=0 || 1
  */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int output = 0;

	if (b == NULL)
		return (0);

	for (; b[i] != '\0' ; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		output = output << 1;

		if (b[i] == '1')
			output = output | 1;
	}
	return (output);
}
