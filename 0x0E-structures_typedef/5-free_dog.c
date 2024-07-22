#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - The function that frees dogs.
 * @d: A struct to free a dog.
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
