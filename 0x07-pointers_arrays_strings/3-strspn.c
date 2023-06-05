#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Character pointer
 * @accept: Character pointer
 * Return: The number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, n, temp;

	n = 0;
	while (*accept != '\0')
	{
		accept++;
		n++;
	}
	x = n * sizeof(*accept);
	temp = sizeof(*s) + x;
	return (temp);
}
