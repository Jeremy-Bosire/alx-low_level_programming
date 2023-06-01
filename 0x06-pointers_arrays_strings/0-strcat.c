#include "main.h"

/**
 * _strcat - Concatenates two strings
 *
 * Return: Resulting string
 * @dest: String variable
 * @src: String variable
 */
char *_strcat(char *dest, char *src)
{
	int j, m, n, s;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	n = 0;
	while (src[n] != '\0')
	{
		n++;
	}
	s = m + n;
	j = 0;
	while (m <= s)
	{
		if (m == s)
		{
			dest[m] = '\0';
			break;
		}
		dest[m] = src[j];
		m++;
		j++;
	}
	return (dest);
}
