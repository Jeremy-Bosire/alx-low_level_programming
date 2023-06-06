#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Character pointer
 * @accept: Character pointer
 * Return: The number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m, n, x, y;

	m = 0;
	n = 0;
	while (*accept != '\0')
	{
		accept++;
		m++;
	}
	x = sizeof(*accept);
	while (n <= m && *s != '\0')
	{
		s++;
		n++;
	}
	y = x * n;
	return (y);
}
