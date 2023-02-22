#include "main.h"
/**
 * print_alphabet -  as said it prints alphabet from a to z.
 *
 * Description: kos om betty style documentation
 * Return : value always = 0
 *
 */


void print_alphabet(void)
{

	int i;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');

}
