/**
 * display abse 16 numbers in lowercase
 * 
 *return 0
 **/
int main(void)
{
	int var1;
	char var2;
	for (var1 = 0; var1 < 10; var1++)
		putchar((var1 % 10) + '0');
	for (var2 = 'a'; var2 <= 'f'; var2++)
		putchar(letter);
	putchar('\n');
	return (0);
}

