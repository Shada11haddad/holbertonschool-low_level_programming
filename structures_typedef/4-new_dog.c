#include <stdlib.h>
#include "dog.h"

/**
 * dup_str - creates a copy of a string
 * @str: string to duplicate
 *
 * Return: pointer to the newly allocated copy, or NULL on failure
 */
static char *dup_str(char *str)
{
	char *copy;
	int len, i;

	if (!str)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	copy = malloc(len + 1);
	if (!copy)
		return (NULL);

	for (i = 0; i <= len; i++)
		copy[i] = str[i];

	return (copy);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy, *owner_copy;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	name_copy = dup_str(name);
	if (!name_copy && name)
	{
		free(d);
		return (NULL);
	}

	owner_copy = dup_str(owner);
	if (!owner_copy && owner)
	{
		free(name_copy);
		free(d);
		return (NULL);
	}

	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;

	return (d);
}
