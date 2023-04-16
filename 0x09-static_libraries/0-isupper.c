#include "main.h"

/**
 * _isupper - check if char is uppercase
 * @c: character to evaluate
 *
 * Return: 1 for upper case else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
