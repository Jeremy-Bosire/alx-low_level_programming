#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c == 'e')
		{
			continue;
		}
		if (c == 'q')
		{
			continue;
		}
		putchar(c);
		c++;
	}
	putchar('\n');
}
