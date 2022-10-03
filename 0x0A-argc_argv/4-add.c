#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 * it prints the result, followed by a new line
 * If no number is passed to the program, it prints 0, followed by a new line
 * If one of the number contains symbols that are not digits,
 * print Error, followed by a new line, and return 1
 * @argc: arguement count
 * @argv: arguement array
 *
 * Return: 0 on success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int addition, i;

	addition = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				addition = addition + atoi(argv[i]);
			}
			i++;
		}
	printf("%d\n", addition);
	}

	return (0);
}
