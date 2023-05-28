#include "main.h"
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i != '\0'; i++)
	{
		_putchar(str[i]);
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
	}
	return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
