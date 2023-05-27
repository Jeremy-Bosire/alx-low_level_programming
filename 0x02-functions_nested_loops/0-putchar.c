#define MAXSTRING 80
#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char function[] = "_putchar";

	for (int i = 0; i < MAXSTRING; i++)
	{
		_putchar(function[i]);
		if (function[i] == '\0')
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
