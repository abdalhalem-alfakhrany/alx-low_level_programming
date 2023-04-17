#include "dog.h"
#include "stdio.h"

/**
 * print_dog - prints dog data
 * @d: pointer to dog struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;

	d->name = (d->name == NULL) ? "(nil)" : d->name;
	d->owner = (d->owner == NULL) ? "(nil)" : d->owner;
		
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
