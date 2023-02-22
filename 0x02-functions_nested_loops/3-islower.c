#include "main.h"
#include <ctype.h>
/**
 * _islower - checks wether c is lowercase or not
 *
 * @c: the letter
 * extra decription
 * Return: value = 1 if lower case or 0 if not
 */

int _islower(int c)
{
	if (islower(c)) {
		return (1);
	} else {
		return (0);
	}

}
