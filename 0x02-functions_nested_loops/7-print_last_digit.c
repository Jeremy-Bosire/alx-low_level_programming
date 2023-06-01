#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @x: Integer variable
 * Return: The last digit of a number
 */
int print_last_digit(int x)
{
	int last;

	if (x < 0)
	{
		last = -x % 10;
	}
	else
	{
		last = x % 10;
	}
	_putchar (last + '0');
	return (last);
}
