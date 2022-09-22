#include "main.h"

/**
 * reverse_array - a function that reverses the content of array of int
 * @a: content
 * @n: elements of content
 * Return: Always 0 (success)
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
