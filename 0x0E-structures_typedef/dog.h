#ifndef dog_h
#define dog_h

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - new data type rep a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}

#endif /* dog_h */
