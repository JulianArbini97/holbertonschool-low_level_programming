#include "dog.h"

/**
 * free_dog - frees dog
 *
 * @d: structure
 */

void free_dog(dog_t *d)
{
if (d != 0)
{
free(d->name);
free(d->owner);
free(d);
}
}
