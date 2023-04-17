#include "dog.h"
#include "memory.h"
#include "stdlib.h"
#include "memory.h"

/**
 * new_dog - create new dog and return pointer to it
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 * Return: NULL if failer dot_t pointer if Success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	dog->name = malloc(strlen(name));
	dog->owner = malloc(strlen(owner));

	if (!(dog->name || dog->owner))
		return (NULL);

	dog->age = age;
	memcpy(dog->name, name, sizeof(name));
	memcpy(dog->owner, owner, sizeof(owner));

	return (dog);
}
