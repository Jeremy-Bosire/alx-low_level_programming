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
		if (x <= -10)
		{
			p = -x;
			n = p % 10;
			_putchar (n + '0');
			return (n);
		}
		else
		{
			n = x % 10;
			_putchar (n + '0');
			return (n);
		}
	}
	else if (x >= 0 && x < 10)
	{
		_putchar (x + '0');
		return (x);
	}
	else
	{
		p = -x;
		_putchar (p + '0');
		return (p);
	}
}
