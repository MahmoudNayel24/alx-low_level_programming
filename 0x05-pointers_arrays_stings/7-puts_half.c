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
	int i;

	for (i = len / 2; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
