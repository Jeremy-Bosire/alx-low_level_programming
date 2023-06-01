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
	int i, j, m, n, s;

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
	i = m - 1;
	j = 0;
	while (i <= s)
	{
		if (i == s)
		{
			dest[i] = '\0';
			break;
		}
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
