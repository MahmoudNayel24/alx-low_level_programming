#include "main.h"
#include <string.h>

/**
 * rev_string - reverse string
 *
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int l = strlen(s), i, j;
	char temp;

	for (i = 0, j = l - 1; i < j; i++, j--)
	{

		temp = s[i];

		s[i] = s[j];

		s[j] = temp;
	}
}
