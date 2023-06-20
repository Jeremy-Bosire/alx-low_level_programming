#include "dog.h"

/**
 * free_dog - Frees dogs
 * @d: Structure pointer
 */
void free_dog(dog_t *d)
{
	free(d);
	d = NULL;
}
