#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 * @array: An array of integers
 * @size: Integer variable
 * @action: Function pointer
 */
void array_iterator(int *array, int size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
