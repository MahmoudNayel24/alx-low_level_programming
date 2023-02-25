#include "main.h"
/**
 * print_diagonal - print / number of times
 *
 * @n: number of times
 */

void print_diagonal(int n)
{

	int i = 0, j;

	if (n <= 0)
		_putchar('\n');
	while (i <= n)
	{


		_putchar('\\');
		_putchar('\n');

		for (j = 0; j < i; j++)
			_putchar(' ');
		i++;
	}

}
