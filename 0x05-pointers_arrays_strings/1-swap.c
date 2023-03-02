#include <stdio.h>
#include "main.h"
/**
 * swap_int - swap the two argumets value together
 *
 * @a: first variable
 * @b: second variable
 */

void swap_int(int *a, int *b)
{
	int m = *a;

	*a = *b;

	*b = m;
}
