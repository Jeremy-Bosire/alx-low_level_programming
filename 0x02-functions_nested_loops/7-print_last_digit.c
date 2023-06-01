#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @x: Integer variable
 * Return: The last digit of a number
 */
int print_last_digit(int x)
{
	int n, p;

	if (!(x > -10 && x < 10))
	{
		n = x % 10;
		p = _putchar (n);
	}
	else if (x >= 0 && x < 10)
	{
		p = _putchar (x);
	}
	else
	{
		p = _putchar (-x);
	}
	return (p);
}
