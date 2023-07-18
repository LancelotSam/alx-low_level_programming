#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog-this is the main function
 *
 * It initializes struct dog
 * @d: the pointer to struct to be initialized
 * @name:pointer to its name to be initialized
 * @age: the pointer to the age of the dog to be initialized
 * @owner: the pointer to the owner of teh dog to be initialized
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)/*if memory has not been allocated*/
		d = malloc(sizeof(struct dog));
	/* iniialize the respective variables*/
	d->name = name;
	d->age = age;
	d->owner = owner;
}
