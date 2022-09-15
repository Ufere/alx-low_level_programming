#include "main.h"

/**
* print_alphabet - prints the alphabet in lowercase, followed by a new line.
* _putchar prints out the letters to stdout
*/
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
