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
	while (n > 0)
	{
		j = i;

		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
		n--;

	}

}
