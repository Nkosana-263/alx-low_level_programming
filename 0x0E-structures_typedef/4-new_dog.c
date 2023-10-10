#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog, or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nameLen = 0;
	while (name[nameLen] != '\0')
		nameLen++;

	int ownerLen = 0;
	while (owner[ownerLen] != '\0')
		ownerLen++;

	dog_t *newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	newDog->name = malloc((nameLen + 1) * sizeof(char));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->owner = malloc((ownerLen + 1) * sizeof(char));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	int i;
	for (i = 0; i <= nameLen; i++)
		newDog->name[i] = name[i];

	for (i = 0; i <= ownerLen; i++)
		newDog->owner[i] = owner[i];

	newDog->age = age;

	return (newDog);
}
