#include <stdio.h>
/**
 * main - prints fizz if number % 3 or buzz if % 5
 *
 * Return: always equal zero
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
			printf("FIZZ BUZZ%c", ' ');
		else if (x % 3 == 0)
			printf("FIZZ%c", ' ');
		else if (x % 5 == 0)
			printf("BUZZ%c", ' ');
		else
			printf("%d%c", x, ' ');
	}

	return (0);
}
