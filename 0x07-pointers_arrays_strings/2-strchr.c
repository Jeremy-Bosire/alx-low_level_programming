#include "main.h"

/**
 * _strchr - locates a character in a string
 * Return: Pointer to the first occurence of the character c or NULL
 * @s: String variable
 * @c: Character variable
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
