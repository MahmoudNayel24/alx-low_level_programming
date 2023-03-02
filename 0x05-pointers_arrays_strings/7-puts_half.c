#include "main.h"
#include <string.h>

/**
 * puts_half - prints the last half of string
 *
 * @str: the string
 */

void puts_half(char *str)
{

	int len = strlen(str);
	int i, x;

	if (len % 2 != 0)
		x = (len - 1) / 2;
	else
		x = len / 2
	for (i = x; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
