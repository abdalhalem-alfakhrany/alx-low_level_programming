#include "dog.h"
#include "stdlib.h"


/**
 * _strlen - calculate string length
 * @str: pointer to string
 * Return: string length
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * _memcpy - copy content of source to destination
 * @dest: destination
 * @src: source
 * @size: size
 * Return: void
 */
void _memcpy(char *dest, char *src, int size)
{
	int i;

	for (i = 0; i < size; i++)
		dest[i] = src[i];
}

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

	if (dog == NULL)
		return (NULL);

	if (name == NULL || age == 0 || owner == NULL)
		return (NULL);

	dog->name = malloc(_strlen(name) + 1);

	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(_strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}

	dog->age = age;
	_memcpy(dog->name, name, _strlen(name));
	_memcpy(dog->owner, owner, _strlen(owner));

	return (dog);
}
