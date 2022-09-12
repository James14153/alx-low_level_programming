#include <stdio.h>
/**
 * main-program run from here
 * 
 * return zero if no error and non-zero if error
 **/
int main(void)
{
	char alphabet;
	alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
