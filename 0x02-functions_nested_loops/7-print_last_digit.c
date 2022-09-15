#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @n: Value of the integer
* Return: prints the value of the integer
*/
int print_last_digit(int n)
{
	int ld = (n % 10);

	if (ld < 0)
		ld = -ld;
	_putchar(ld + '0');
	return (ld);
}
