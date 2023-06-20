#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: String variable
 * @age: Float variable
 * @owner: String variable
 * Return: Either NULL or pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
