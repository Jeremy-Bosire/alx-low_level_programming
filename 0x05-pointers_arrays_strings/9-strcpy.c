#include "main.h"

/**
 * *_strcpy - Function that copies a string to another string
 * @dest: String variable
 * @src: String variable
 * Return: A string copied to the dest varible
 */
char *_strcpy(char *dest, char *src)
{
	int n, i;

	n = 0;
	while (src[n] != '\0')
	{
		n++;
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (*dest);
}
