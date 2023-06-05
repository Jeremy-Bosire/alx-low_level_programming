#include "main.h"

/**
 * _memcpy - copies memory area
 * Return: Pointer to dest
 * @dest: String variable
 * @src: String variable
 * @n: Integer variable
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
