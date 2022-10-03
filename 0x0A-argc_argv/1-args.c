#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * followed by a new line
 * the program itself is not counted as an arguement
 * @argc: arguement count
 * @argv: arguement array
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
