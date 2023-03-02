#include "main.h"
#include <string.h>
/**
 * print_rev- print string in reverse
 *
 * @s: the string to be reversed
 */

void print_rev(char *s)
{

	int l = strlen(s), i;

	for (i = l; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}

