#include "main.h"

/**
 * _strncpy - Copies a string
 *
 * Return: Resultant string after copying
 * @dest: String variable
 * @src: String variable
 * @n: Integer variable
 */
char *_strncpy(char *dest, char *src, int n)
{
	int src_length, i;

	src_length = 0;
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
