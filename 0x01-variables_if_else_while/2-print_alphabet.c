#include <stdio.h>
/**
 * main-program run from here
 * 
 * return zero if no error and non-zero if error
 **/
char main(void)
{
	char alphabet;
	alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet <= 'z');
		alphabet++;
	}
	putchar("\n");
	return (0);
}
