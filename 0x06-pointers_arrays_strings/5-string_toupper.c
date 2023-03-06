#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * *string_toupper - lower to upper
 *
 * @str: the string
 * Return: char
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
