#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @x: Integer variable
 * Return: The last digit of a number
 */
int print_last_digit(int x)
{
	int n;

	if (!(x > -10 && x < 10))
	{
		n = x % 10;
		_putchar (n + '0');
		return (n);
	}
	else
	{
		_putchar (x + '0');
		return (x);
	}
}
