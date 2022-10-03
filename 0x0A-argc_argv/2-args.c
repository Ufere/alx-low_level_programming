#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * All arguments are printed, including the first one
 * print one argument per line, ending with a new line
 * @argc: arguement count
 * @argv: arguement array
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int index;

	index = 0;
	while (index < argc)
	{
		printf("%s\n", argv[index]);
		index++;
	}

	return (0);
}
