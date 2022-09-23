#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * this is done by replacing a letter with the 13th letter
 * after it in the alphabet
 *
 * @s: the string
 * Return: string
 */

char *rot13(char *s)
{
	int i, j;

	char s1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char s2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == s1[j])
			{
				s[i] = s2[j];
				break;
			}
		}
	}

	return (s);
}
