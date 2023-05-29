#include "main.h"

/**
 * print_rev - Prints a string, in reverse
 *
 * @s: String variable
 */
void print_rev(char *s)
{
	int i, n;

	n = _strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
