#include "main.h"

/**
 * print_rev - Prints a string, in reverse
 *
 * @s: String variable
 */
void print_rev(char *s)
{
	while (*s = '\0')
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
