#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: An array of integers
 * @n: The number of elements to swap
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		int temp = a[i];

		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
