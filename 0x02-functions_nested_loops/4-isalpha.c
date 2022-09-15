#include "main.h"

/**
* _isalpha - checks for alphabetic character, lowercase or uppercase
* @c: Variable
* Return: 1 if c is a letter, lowercase or uppercase or 0 if otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
