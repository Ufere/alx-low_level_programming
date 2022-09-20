/**
 * swap_int - function that swaps the values of two integers
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;

	*a = d;
	*b = c;
}
