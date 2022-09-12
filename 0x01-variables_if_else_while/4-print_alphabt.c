#include <stdio.h>
/**
 * display letters in lowercase except q and e
 *
 * return 0
 * */
int main(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
