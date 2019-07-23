#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * *new_dog - create the struct dog.
 *
 * @name: name is dog.
 * @age: type float age of dog.
 * @owner: name of owner.
 *
 * Return: pointer the new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int a;
	int b = 0, c = 0;
	dog_t *p;

	p = malloc(sizeof(dog_t));

	for (a = 0; name[a] != '\0'; a++)
		b++;

	p->name = malloc(sizeof(char) * b + 1);

	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}

	for (a = 0; a <= b; a++)
		p->name[a] = name[a];

	p->name[a] = '\0';

	p->age = age;

	for (b = 0; owner[b] != '\0'; b++)
		c++;

	p->owner = malloc(sizeof(char) * b + 1);

	if (p->owner == NULL)
	{
		free(p);
		return (NULL);
	}

	for (c = 0; c <= a; c++)
		p->name[c] = name[c];


	return (p);
}
