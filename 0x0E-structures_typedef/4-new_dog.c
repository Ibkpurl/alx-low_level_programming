#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int a = 0, b = 0, c;
dog_t *dog;
while (name[a] != '\0')
a++;
while (owner[b] != '\0')
b++;
dog = malloc(sizeof(dog_t));
if (dog == NULL)
{
free(dog);
return (NULL);
}
dog->name = malloc(a *sizeof(dog->name));
if (dog->name == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
for (c = 0; c <= a; c++)
dog->name[c] = name[c];
dog->age = age;
dog->owner = malloc(b *sizeof(dog->owner));
if (dog->owner == NULL)
{
free(dog->owner);
free(dog->name);
free(dog);
return (NULL);
}
for (c = 0; c <= b; c++)
dog->owner[c] = owner[c];
return (dog);
}
