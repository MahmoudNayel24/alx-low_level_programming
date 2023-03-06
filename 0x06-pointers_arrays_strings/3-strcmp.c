#include "main.h"

/**
 * _strcmp - compares two stringes
 *
 * @s1: first string
 * @s2: second string
 * Return: 0 or 1 or -1
 */

int _strcmp(char *s1, char *s2)
{

	int c1 = 0, c2 = 0;

	while (s1[c1] != '\0')
		c1++;
	while (s2[c2] != '\0')
		c2++;
	if (c1 == c2)
		return (0);
	else if (c1 > c2)
		return (15);
	else
		return (-15);
}
