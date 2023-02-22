#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet to the output 10x
 *
 * extra description for the function
 * Reutrn: value always = 0
 */
void print_alphabet_x10(void)
{
	int j=0 , i;

	while (j < 10)
	{
		for (i = a; i <= z; i++)
			_putchar(i);
		_putchar('\n');
		j++;
	}

}
