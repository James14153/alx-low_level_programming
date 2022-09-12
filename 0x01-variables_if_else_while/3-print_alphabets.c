#include <stdio.h>
/**
 * display alphabet in lower case then upper case
 *
 * return 0.
 * */
{
	char alphabet
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			putchar(alphabet);
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		putchar('\n');
	return (0);
}
