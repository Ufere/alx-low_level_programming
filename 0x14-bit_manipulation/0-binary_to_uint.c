#include "main.h"
/**
* binary_to_uint - converts binary to unsigned integer
* @b: pointer to binary numbers
* Return: return the converted unsigned interger
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, i, temp;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		b++;
	}
	b--;
	num = 0;
	i = 0;
	while (*b != '\0')
	{
		temp = *b - '0';
		num = num + (temp << i);
		i++;
		b--;
	}
	return (num);
}
