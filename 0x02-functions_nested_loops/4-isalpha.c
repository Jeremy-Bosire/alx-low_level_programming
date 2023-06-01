#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters
 *
 * Return: Either 0 or 1 (Depends on the input)
 * @c: Integer variable
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
