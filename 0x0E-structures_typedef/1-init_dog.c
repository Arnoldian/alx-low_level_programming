#include "dog.h"

/**
 * init_dog - funct initalizes var of type struct dog
 * @d: struct dog
 * @name: name of dog
 * @age: age ...
 * @owner: owner of dog
 * return: no return statement
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
