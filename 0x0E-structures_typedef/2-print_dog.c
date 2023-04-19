#include "dog.h"

/**
 * print_dog - prints struct dog
 * @d: dog identifier
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		d->name != NULL ? printf("Name: %s\n", d->name) : printf("(nil)\n");
		d->age > 0.0 ? printf("Age: %f\n", d->age) : printf("(nil)\n");
		d->owner != NULL ? printf("Owner: %s\n", d->owner) : printf("(nil)\n");
	}
	else
	{
		return;
	}
}
