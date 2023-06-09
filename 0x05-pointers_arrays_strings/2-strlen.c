#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 * Return: Length of the inputted string
 * @s: String variable
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}
