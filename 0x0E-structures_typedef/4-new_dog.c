#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - a function that returns the length of a string.
 * @s: string of char
 * Return: 0 (String length)
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i = 0;

	while (*(src + length) != '\0')
	{
		length++;
	}
	for ( ; i < length ; i++)
	{
		dest[i] = src[i];
	}
	dest[length] = '\0';
	return (dest);
}

/**
 * new_dog - a function that creates a new dog.
 * @name: string to name of the new dog
 * @age: integer to the age of the new dog
 * @owner: string to the owner of the new dog
 * Return: a pointer to the new dog, NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
