#include "dog.h"

/**
 * print_dog - Prits a struct dog
 * @d: pointer variable
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d == NULL)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %.6f\n", d->age);
	}
	if (d == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}

