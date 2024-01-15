#include "main.h"

/**
  * _isdigit - check if a character is a digit
  * @c: The number to be checked
  *
  * Return: 1 for a char = digit else 0
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
