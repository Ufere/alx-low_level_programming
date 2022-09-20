#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers
 * followed by a new line
 * Numbers are separated by a comma followed by a space
 * @a: array to be printed
 * @n: the number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < (n - 1))
		{
			printf("%d, ", a[i]);
			i++;
		}

		printf("%d\n", a[n - 1]);
	}

	else
		printf("\n");
}
