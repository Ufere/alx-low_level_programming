#include "main.h"

/**
 * puts_half - function that prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int i, n;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	n = i / 2;

	if (i % 2 == 1)
		n++;

	while (n < i)
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}
