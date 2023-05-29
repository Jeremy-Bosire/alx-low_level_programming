#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: First pointer
 * @b: Second pointer
 */
void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
	*a = b;
	*b = a;
}
