#include "main.h"

/**
 * _strchr - locates a character in a string
 * Return: Pointer to the first occurence of the character c or NULL
 * @s: String variable
 * @c: Character variable
 */
char *_strchr(char *s, char c)
{
	int i, j, n, temp;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	if (n == 0)
		return (NULL);
	while (s[i] != c)
	{
		i++;
		if (i >= n)
			return (NULL);
	}
	j = i;
	while (i < n)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j++;
	}
	return (s);
}
