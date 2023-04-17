#include "dog.h"

/**
 * init_dog - initalize dog struct data
 * @d: pointer to dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 * Retrun: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
