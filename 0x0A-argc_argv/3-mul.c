#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * it prints the result of the multiplication, followed by a new line
 * it is assumed that only integers are inputed
 * If the program does not receive two arguments
 * the program prints Error, followed by a new line, and return 1
 * @argc: arguement count
 * @argv: arguement array
 *
 * Return: 0 on success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int mult;

		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
