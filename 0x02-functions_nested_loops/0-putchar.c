#include <stdio.h>
/**
 * main - a for loop to print the word putchar
 * Return : always zero
 */

int main(void){

	char word[] = "_putchar";
	int i;
	for ( i = 0; i < 8; i++){
		putchar(word[i]);
	}
	putchar('\n');
	return (0);

}
