#include "main.h"

/**
 * puts2 - Prints every other character of a string
 *
 * @str: String variable
 */
void puts2(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		if ((n + 1 == '\0') && (n % 2 != 0))
		{
			break;
		}
		else if (n % 2 != 0)
		{
			n++;
		}
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
