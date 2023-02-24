#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14 10x
 */

void more_numbers(void)
{

	int i = 0, j, n;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			n = j;
			if (n > 9)
			{
				_putchar(n / 10 + '0');
				n %= 10;
			}
				_putchar(n + '0');
		}
		_putchar('\n');
		i++;
	}
}
