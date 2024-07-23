#include <stdlib.h>
#include "dog.h"
/**
 * int_strlen - The function that returns the lenght of a string.
 * @s: A string to elevate.
 *
 * Return: The lenght of a string.
 */
int int_strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
 * *_strcpy - The funtion that copies the string pointed to by src.
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest.
 * @dest: A pointer to the buffer in which we copy the string.
 * @src: A string to be copied.
 *
 * Return: A pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
int len, i;
len = 0;
while (src[len] != '\0')
{
len++;
}
for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
/**
 * new_dog - The function that create a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog
 *
 * Return: A pointer to the new dog (Success), otherwise NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int len1, len2;
len1 = int_strlen(name);
len2 = int_strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (len1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (len2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}

