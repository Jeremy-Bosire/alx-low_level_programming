#ifndef dog_h
#define dog_h
#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - Contains the information bundle required for dogs
 * @name: First member
 * @age: Second member
 * @owner: Third member
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
