#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 */
void jack_bauer(void)
{
	int i, j, m, n, p, q;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i > 9)
			{
				q = i / 10;
				p = i % 10;
				_putchar(q + '0');
				_putchar(p + '0');
			}
			else
			{
				_putchar(0 + '0');
				_putchar(i + '0');
			}
			_putchar(':');
			if (j > 9)
			{
				n = j / 10;
				m = j % 10;
				_putchar(n + '0');
				_putchar(m + '0');
			}
			else
			{
				_putchar(0 + '0');
				_putchar(j + '0');
			}
			_putchar('\n');
		}
	}
}
