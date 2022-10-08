#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - allocating memory using malloc.
 * @b: unsigned int
 *
 * Return: if falled return null, if success return 98.
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
		exit(98);
	return (i);
}
