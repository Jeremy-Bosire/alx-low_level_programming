#include "main.h"

/**
 * str_length - Finds the length of a string
 *
 * Return: Lenght of string
 * @str: String variable
 */
int str_length(char *str)
{
	int n;

	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}
