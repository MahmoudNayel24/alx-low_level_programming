#include "main.h"
#include <string.h>

/**
 * *_strncat - concentates
 *
 * @dest: first arg
 * @src: 2nd arg
 * @n: n bytes
 * Return: char value
 */

char *_strncat(char *dest, char *src, int n)
{

	return (strncat(dest, src, n));
}
