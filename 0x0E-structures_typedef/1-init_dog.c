#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: struct dog pointer
 * @name: String variable
 * @age: Float variable
 * @owner: String variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
