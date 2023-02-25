#include "main.h"
/**
 * print_diagonal - print / number of times
 *
 * @n: number of times
 */

void print_diagonal(int n)
{

	int i = 0, j;

	while (i <= n)
	{
		if (n <= 0)
			_putchar('\n');


		_putchar('\\');
		_putchar('\n');
		++i;
		j = 0;

		for (j = 0; j < i; j++)
			_putchar(' ');
		j += 1;
	}

}
