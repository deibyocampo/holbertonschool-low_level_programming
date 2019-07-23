#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type.
 *
 * @d: pointer.
 * @name: name is dog.
 * @age: is dog type float.
 * @owner: name of owner of dog.
 *
 * Return: pointer the struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
