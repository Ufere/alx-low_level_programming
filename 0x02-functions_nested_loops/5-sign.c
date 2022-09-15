#include "main.h"

/**
 * print_sign - This function prints the sign of a number
 * @n: Holds character to be checked
 * Return: Value
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
