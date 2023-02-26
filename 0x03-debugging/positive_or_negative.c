#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - check wether the number is positive or negative
 * Return: value always = 0
 */
void positive_or_negative(int i)
{

	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i < 0)
		printf("%d is negative\n", i);
	else if (i > 0)
		printf("%d is positive\n", i);
	else
		printf("%d is zero\n", i);
}

