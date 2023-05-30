#include "main.h"

/**
 * _atoi - Function that converts a string to an integer
 * @s: String variable
 * Return: Either integer array or 0 depending on a condition
 */
int _atoi(char *s)
{
	int n, k, i, j;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	signed int z[n];

	for (k = 0; k < n; k++)
	{
		z[k] = s[k];
	}
	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j < n; j++)
		{
			if (s[j] == i)
			{
				return (z);
			}
			else
			{
				continue;
			}
		}
	}
	return (0);
}
