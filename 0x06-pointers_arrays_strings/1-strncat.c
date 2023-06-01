#include "main.h"

/**
 * _strncat - Concatenates two strings
 *
 * Return: Resulting string
 * @dest: String variable
 * @src: String variable
 * @n: Integer variable
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length, src_length, s, j;

	dest_length = 0;
	src_length = 0;
	s = 0;
	j = 0;
	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	s = dest_length + src_length;
	while (dest_length <= s)
	{
		if (dest_length == s)
		{
			dest[dest_length] = '\0';
		}
		else if (j == n)
		{
			dest[dest_length] = '\0';
			break;
		}
		dest[dest_length] = src[j];
		dest_length++;
		j++;
	}
	return (dest);
}
