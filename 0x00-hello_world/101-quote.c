#include <stdio.h>
/**
 * main - prints out the last part of a quote in the standard error
 *return: 1 if success
 */
int main(void)
{
char quote[]= "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

fprintf(stderr, "%s\n", quote);
return (1);
}
