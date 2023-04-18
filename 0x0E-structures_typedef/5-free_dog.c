#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - func that frees dogs
 * @d: struct dog
 * return: no return statement
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
