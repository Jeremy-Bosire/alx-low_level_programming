#include "main.h"

/**
 * _islower - Checks for lowercase characters
 *
 * Return: Either 0 or 1 (Based on input)
 *
 * c - character value
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
