#include <stdio.h>

/**
 * main - Prints 1 to 100 followed by a newline
 * prints Fizz for multiples of 3 instead of the number
 * prints Buzz for multiples of 5
 * prints FizzBuzz for numbers which are multiples of both 3 and 5
 * each number or word is separated by a space
 * Return: always 0
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 3 == 0) && !(i % 5 == 0))
		{
			printf("Fizz");
		}

		else if ((i % 5 == 0) && !(i % 3 == 0))
		{
			printf("Buzz");
		}

		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}

		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			printf(" ");
		}

		i++;
	}

	printf("\n");

	return (0);

}
