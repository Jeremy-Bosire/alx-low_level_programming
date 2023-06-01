#include "main.h"

/**
 * _strcmp - Compares two strings
 *
 * Return: Difference integer
 * @s1: String variable
 * @s2: String variable
 */
int _strcmp(char *s1, char *s2)
{
	int s1_length, s2_length, dif, i, j, m, n;

	s1_length = 0;
	s2_length = 0;
	dif = 0;
	i = 0;
	j = 0;
	m = 0;
	n = 0;
	while (s1[s1_length] != '\0')
	{
		s1_length++;
	}
	while (s2[s2_length] != '\0')
	{
		s2_length++;
	}
	while (i < s1_length)
	{
		m = m + s1[i];
		i++;
	}
	while (j < s2_length)
	{
		n = n + s2[j];
		j++;
	}
	dif = m - n;
	return (dif);
}
