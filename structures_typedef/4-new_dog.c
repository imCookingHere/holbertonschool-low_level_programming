#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the newly allocated copy of the string, or NULL on failure.
 */
char *_strdup(char *str)
{
	char *copy;
	int i, len;

	if (str == NULL)
	return (NULL);

	for (len = 0; str[len]; len++)
	;

	copy = malloc((len + 1) * sizeof(char));
	if (copy == NULL)
	return (NULL);

	for (i = 0; i <= len; i++)
	copy[i] = str[i];

	return (copy);
}

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the new dog_t structure, or NULL if function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	return (NULL);

	d->name = _strdup(name);
	if (d->name == NULL)
	{
	free(d);
	return (NULL);
	}

	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
	free(d->name);
	free(d);
	return (NULL);
	}

	d->age = age;

	return (d);
}
