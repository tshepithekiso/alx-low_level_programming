#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - newest dog
 * @name: name of the dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: Nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *max_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		max_dog = malloc(sizeof(dog_t));

		if (max_dog == NULL)
			return (NULL);

		max_dog->name = malloc(sizeof(char) * name_l);

		if (max_dog->name == NULL)
		{
			free(max_dog);
			return (NULL);
		}

		max_dog->owner = malloc(sizeof(char) * own_l);

		if (max_dog->owner == NULL)

		{
			free(max_dog->name);
			free(max_dog);
			return (NULL);
		}

		max_dog->name = strcpy(max_dog->name, name);
		max_dog->owner = strcpy(max_dog->owner, owner);
		max_dog->age = age;
	}

	return (max_dog);
}
/**
 * _strlen - length of a string
 * @s: strings
 *
 * Return: Nothing
 */
int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - copy string
 * @dest: dest value
 * @src: src value
 *
 * Return: Nothing
 */
char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	dest[c++] = '\0';

	return (dest);
}
