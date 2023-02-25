#include "main.h"

/**
 * print_square - prints symbol in square shaped n times
 *
 * @size: n times
 */

void print_square(int size)
{

	int i, j;

	while (size > 0)
	{
		for(i=0 ; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
		size --;
	if (size < 1)
		_putchar('\n');

}

