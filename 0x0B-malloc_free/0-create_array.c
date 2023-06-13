#include "main.h"

/**
 * create_array - Creates an array of chars
 * @size: Unsigned integer variable
 * @c: Character variable
 * Return: Pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
	{
		return (NULL);
	}
	str = (char *)malloc(size * sizeof(char));
	str[0] = c;
	return (str);
}
