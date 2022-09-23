#include "main.h"
/**
 * _strncpy - this function copies a string
 * @dest: string to copy to
 * @src: string to copy from
 * @n: bytes from src to use
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
