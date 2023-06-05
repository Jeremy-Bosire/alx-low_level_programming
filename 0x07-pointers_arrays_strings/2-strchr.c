#include "main.h"

/**
 * _strchr - locates a character in a string
 * Return: Pointer to the first occurence of the character c or NULL
 * @s: String variable
 * @c: Character variable
 */
char *_strchr(char *s, char c)
{
	int n;

	if (s == NULL)
	{
		return (NULL);
	}
	n = 0;
	while (s[n] != '\0')
	{
		if (s[n] == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
