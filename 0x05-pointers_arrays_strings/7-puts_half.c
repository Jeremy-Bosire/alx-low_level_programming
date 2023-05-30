#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: String variable
 */
void puts_half(char *str)
{
	int length_of_the_string, i, n;

	length_of_the_string = 0;
	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}
	if (length_of_the_string % 2 != 0)
	{
		n = (length_of_the_string - 1) / 2;
	}
	else
	{
		n = length_of_the_string / 2;
	}
	i = n + 1;
	while (i <= length_of_the_string)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
