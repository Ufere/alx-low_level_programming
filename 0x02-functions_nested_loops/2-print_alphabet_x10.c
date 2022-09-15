#include "main.h"

/**
* print_alphabet_x10 - prints the alphabet in lowercase,
* followed by a new line.
* 10 times
* _putchar prints out the letters to stdout
*/
void print_alphabet_x10(void)
{
	char ch;

	int i = 0;

	while (i < 10)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}

	_putchar('\n');
	i++;
	}
}

