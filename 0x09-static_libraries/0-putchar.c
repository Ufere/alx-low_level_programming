#include "main.h"

/**
 * main - Entry point.
 * Description: A program that prints \"_putchar\" followed by a new line.
 * Return: Always 0 (success.)
 */

int main(void)
{
	char ch[] = "_putchar";

	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
