#include "main.h"

/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: String pointer
 * @accept: String pointer
 * Return: Pointer to a matching character or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, m, k, j;

	i = 0;
	m = 0;
	k = 0;
	j = 0;
	while (accept[m] != '\0')
	{
		m++;
	}
	while (i <= m)
	{
		if (s[k] != accept[j])
		{
			if (accept[j + 1] == '\0')
			{
				j = 0;
				i = 0;
				k++;
			}
			else
			{
				j++;
			}
		}
		else
		{
			return (s + k);
		}
		i++;
	}
	return (NULL);
}
