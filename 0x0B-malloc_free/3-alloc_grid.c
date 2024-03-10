#include "main.h"



/**
* alloc_grid - program returns a pointer to a 2 dimensional array of integers.
*@width: width of array
*@height: height of array
*
* Return: a  pointer to the array
*/

int **alloc_grid(int width, int height)
{
	int **a;
	int m = 0, n;

	if (width == 0 || height == 0)
		return (NULL);
	a = (int **) malloc(sizeof(int *) * height);
	if (a != NULL)
	{
		for (; m < height; m++)
		{
			a[m] = (int *) malloc(sizeof(int) * width);
			if (a[m] != NULL)
			{
				for (n = 0; n < width; n++)
					a[m][n] = 0;
			}
			else
			{
				while (m >= 0)
				{
					free(a[m]);
					m--;
				}
				free(a);
				return (NULL);
			}
		}
		return (a);
	}
	else
	{
		return (NULL);
	}
}
