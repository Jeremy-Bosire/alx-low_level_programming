#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: An array of integers
 * @size: Size of the array
 * @cmp: Function pointer
 * Return: The index of an element or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, z;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	else if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		z = cmp(array[i]);
		if (z != 0)
		{
			return (i);
		}
	}
	return (-1);
}
