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
	char *p;

	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	m = 0;
	while (src[m] != '\0')
	{
		m++;
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
	p = &*dest;
	return (p);
}
