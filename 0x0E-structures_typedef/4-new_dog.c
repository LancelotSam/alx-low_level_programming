#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen-this is the main function
 *
 * Returns the length of a string
 * @s: the character to be printed as a length
 * Return: the integer length
 */
int _strlen(char *s)
{
	int length = 0;/*initialize*/

	while (s[length] != '\0')/* while nul byte unreached 0*/
	{
		length++;
	}
	return (length);
}

/**
 * *_strncpy- this is the main function
 *
 * it copies a string
 * @dest:String to be copied
 * @src:string to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src)
{
	int i = 0;
	int length = 0;

	while (src[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * *new_dog-this is the main function
 *
 * It creates a new dog
 * @name: name of the dog
 * @age:age of the dog
 * @owner:the owner of the dog
 * Return:pointer to the new dog, null if otherwise
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
		free(dog->name);
		return (NULL);
	}

	_strncpy(dog->name, name);
	_strncpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
