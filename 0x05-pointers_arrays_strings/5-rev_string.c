#include "main.h"
#include <string.h>

/**
  * rev_string - Reverses a string
  * @s: string to be reversed
  *
  */
void rev_string(char *s)
{
	int i, j = 0;
	char tmp;
	int l = strlen(s);

	for (i = 0, j = l - 1; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
