#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
/**
 * struct dog - Contains the information bundle required for dogs
 * @name: First member
 * @age: Second member
 * @owner: Third member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
