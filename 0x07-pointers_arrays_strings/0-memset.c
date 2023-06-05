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
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
