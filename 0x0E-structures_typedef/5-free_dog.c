#include "dog.h"
/**
 * free_dog - creates a new dog
 * @d: pointer to struct
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		if (d->name != 0)
			free(d->name);
		if (d->owner != 0)
			free(d->owner);
		free(d);
	}
}
