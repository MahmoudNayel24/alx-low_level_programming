#include "main.h"

/**
 * reverse_array -  reverse the content of an array of int
 *
 * @a: the array
 * @n: length of array
 */

void reverse_array(int *a, int n)
{

	int temp, i;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
