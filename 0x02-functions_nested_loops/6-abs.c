#include "main.h"

/**
 * _abs - This function computes the absolute value of an integer
 * @n: Defines the type of parameter of the function
 * Return: Value
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
