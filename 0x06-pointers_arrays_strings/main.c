#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char *test = "My name is Jeremy Bosire";

	n = str_length(test);
	printf("The length of the test string is: %d", n);
	return (0);
}
