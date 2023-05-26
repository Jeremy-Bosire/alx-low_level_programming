#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a == '9')
		{
			putchar(a);
			break;
		}
		putchar(a);
		putchar(',');
		putchar('\0');
	}
	return (0);
}
