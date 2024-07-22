#include <stdlib.h>
#include "dog.h"
/**
 * int_dog - The function that initialize a variable type struct dog.
 * @d: A pointer to struct dog to  initialize.
 * @name: A name to initialize.
 * @age: An age to initialize.
 * @owner: The owner to  initialize.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
