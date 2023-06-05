#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * Return: A pointer to the memory area
 * @s: Pointer
 * @b: Constant byte
 * @n: number of bytes to be filled with
 */
char *_memset(char *s, char b, unsigned int n)
{
	int m, i;

	m = 0;
	while (n != '\0')
	{
		n++;
	}
	for (i = 0; i < n && i < m; i++)
	{
		s[i] = b;
	}
	return (s);
}
