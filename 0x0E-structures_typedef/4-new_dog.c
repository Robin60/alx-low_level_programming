#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns string length
 * @str: the string
 * Return: the length
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * _strcpy - copies strings
 * @dest: the destination
 * @src: the source
 * Return: destination pointer
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}

/**
 * new_dog - creates new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	my_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	my_dog->name = _strcpy(my_dog->name, name);
	my_dog->age = age;
	my_dog->owner = _strcpy(my_dog->owner, owner);

	return (my_dog);
}
