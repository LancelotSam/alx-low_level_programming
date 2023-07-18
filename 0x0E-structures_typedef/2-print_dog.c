#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog-this is the main function
 *
 * It prints struct dog
 * @d: the struct to be printed
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name:%s\n Owner:%s\n age:%f\n", d->name, d->owner, d->age);
}
